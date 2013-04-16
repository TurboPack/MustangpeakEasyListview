unit EasyListviewAccessible;

// Version 2.1.0
//
// The contents of this file are subject to the Mozilla Public License
// Version 1.1 (the "License"); you maynot use this file except in compliance
// with the License. You may obtain a copy of the License at http://www.mozilla.org/MPL/
//
// Alternatively, you may redistribute this library, use and/or modify it under the terms of the
// GNU Lesser General Public License as published by the Free Software Foundation;
// either version 2.1 of the License, or (at your option) any later version.
// You may obtain a copy of the LGPL at http://www.gnu.org/copyleft/.
//
// Software distributed under the License is distributed on an "AS IS" basis,
// WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License for the
// specific language governing rights and limitations under the License.
//
// The initial developer of this code is Jim Kueneman <jimdk@mindspring.com>
//
// Special thanks to the following in no particular order for their help/support/code
//    Danijel Malik, Robert Lee, Werner Lehmann, Alexey Torgashin, Milan Vandrovec,
//    Stanly Xu
//
//  NOTES:
//   1)  If new properties are added to the TCollectionItems and published they
// need to be manually written/read from the stream.  The items are not automatically
// saved to the DFM file.  This was because mimicing TCollectionItem was not
// practical do to the way the VCL was designed.
//----------------------------------------------------------------------------


{$I Compilers.inc}
{$I ..\Include\Debug.inc}
{$I Options.inc}
{$I ..\Include\Addins.inc}

{.$DEFINE DISABLE_ACCESSIBILITY}

{$ifdef COMPILER_12_UP}
  {$WARN IMPLICIT_STRING_CAST       OFF}
 {$WARN IMPLICIT_STRING_CAST_LOSS  OFF}
{$endif COMPILER_12_UP}

 {$B-}

interface

{.$DEFINE LOADGXUNIT}

{$ifndef DISABLE_ACCESSIBILITY}

uses
  {$IFDEF COMPILER_9_UP}
  Types,    // This MUST come before Windows
  {$ENDIF}
  {$IFDEF COMPILER_6_UP}
  Variants,
  {$ENDIF}
  Windows,
  Messages,
  SysUtils,
  Graphics,
  Controls,
  {$IFDEF LOADGXUNIT}
  DbugIntf,
  {$ENDIF LOADGXUNIT}

  {$ifdef COMPILER_10_UP}
  oleacc, // MSAA support in Delphi 2006 or higher
  {$ELSE}
  EasyMSAAIntf, // MSAA support for Delphi up to 2005
  {$ENDIF}
  Classes,
  ActiveX,
  EasyListview;


type
  TEasyListviewHack = class(TCustomEasyListview);
  TEasyGroupsHack = class(TEasyGroups);
  TEasyItemsHack = class(TEasyItems);
  TEasyColumnsHack = class(TEasyColumns);
  TEasyGroupHack = class(TEasyGroup);
  TEasyItemHack = class(TEasyItem);
  TEasyColumnHack = class(TEasyColumn);
  TEasyHeaderHack = class(TEasyHeader);

  IEasyAccessible = interface(IUnknown)
  ['{D1F3F352-A96E-47F6-A731-AF688A6B74BE}']
     procedure DisconnectFromObject; stdcall;
  end;

  {$IFNDEF COMPILER_5_UP}
  {$EXTERNALSYM IEnumVariant}
  IEnumVariant = interface(IUnknown)
    ['{00020404-0000-0000-C000-000000000046}']
    function Next(celt: LongWord; var rgvar : OleVariant;
      out pceltFetched: LongWord): HResult; stdcall;
    function Skip(celt: LongWord): HResult; stdcall;
    function Reset: HResult; stdcall;
    function Clone(out Enum: IEnumVariant): HResult; stdcall;
  end;
  {$ENDIF COMPILER_5_UP}  


type
  TIntegerArray = array of Integer;
  
  TEasyAccessibleManager = class(TInterfacedObject, IDispatch, IAccessible, IEasyAccessible, IEnumVARIANT)
  private
    FEasyObject: TObject; // Either an TCustomEasyListview, TEasyGroup, TEasyItem, or TEasyColumn
    FEnumIndex: Integer;
    function GetEasyListview: TEasyListviewHack;
  protected
    function FillHeaderState(var pvarState: OleVariant; Header: TEasyHeader): HRESULT;
    function FillItemState(out pvarState: OleVariant; Item: TEasyItem): HRESULT;
    function FillGroupState(out pvarState: OleVariant; Group: TEasyGroup): HRESULT;
    function GetFocusedItem(TargetListview: TCustomEasyListview; out pvarChild: OleVariant): HRESULT;
    function GetObjName(Obj: TEasyCollectionItem; out pszName: WideString): HRESULT;
    function GroupFromIndex(varChild: OleVariant): TEasyGroup;
    function CreateSelectionInterface(TargetListview: TCustomEasyListview; out pvarChildren: OleVariant): HRESULT;
    procedure ValidateParameter; virtual;
    property EasyObject: TObject read FEasyObject write FEasyObject;
    property EnumIndex: Integer read FEnumIndex write FEnumIndex;
  public
    constructor Create(AnEasyObject: TObject); virtual;
    destructor Destroy; override;

    // IDispatch
    function GetTypeInfoCount(out Count: Integer): HResult; stdcall;
    function GetTypeInfo(Index, LocaleID: Integer; out TypeInfo): HResult; stdcall;
    function GetIDsOfNames(const IID: TGUID; Names: Pointer;
      NameCount, LocaleID: Integer; DispIDs: Pointer): HResult; stdcall;
    function Invoke(DispID: Integer; const IID: TGUID; LocaleID: Integer;
      Flags: Word; var Params; VarResult, ExcepInfo, ArgErr: Pointer): HResult; stdcall;
    // IAccessible
    function Get_accParent(out ppdispParent: IDispatch): HResult; virtual; stdcall;
    function Get_accChildCount(out pcountChildren: Integer): HResult; virtual; stdcall;
    function Get_accChild(varChild: OleVariant; out ppdispChild: IDispatch): HResult; virtual; stdcall;
    function Get_accName(varChild: OleVariant; out pszName: WideString): HResult; virtual; stdcall;
    function Get_accValue(varChild: OleVariant; out pszValue: WideString): HResult; virtual; stdcall;
    function Get_accDescription(varChild: OleVariant; out pszDescription: WideString): HResult; virtual; stdcall;
    function Get_accRole(varChild: OleVariant; out pvarRole: OleVariant): HResult; virtual; stdcall;
    function Get_accState(varChild: OleVariant; out pvarState: OleVariant): HResult; virtual; stdcall;
    function Get_accHelp(varChild: OleVariant; out pszHelp: WideString): HResult; virtual; stdcall;
    function Get_accHelpTopic(out pszHelpFile: WideString; varChild: OleVariant;
                              out pidTopic: Integer): HResult; virtual; stdcall;
    function Get_accKeyboardShortcut(varChild: OleVariant; out pszKeyboardShortcut: WideString): HResult; stdcall;
    function Get_accFocus(out pvarChild: OleVariant): HResult; virtual; stdcall;
    function Get_accSelection(out pvarChildren: OleVariant): HResult; virtual; stdcall;
    function Get_accDefaultAction(varChild: OleVariant; out pszDefaultAction: WideString): HResult; virtual; stdcall;
    function accSelect(flagsSelect: Integer; varChild: OleVariant): HResult; virtual; stdcall;
    function accLocation(out pxLeft: Integer; out pyTop: Integer; out pcxWidth: Integer;
                         out pcyHeight: Integer; varChild: OleVariant): HResult; virtual; stdcall;
    function accNavigate(navDir: Integer; varStart: OleVariant; out pvarEndUpAt: OleVariant): HResult; virtual; stdcall;
    function accHitTest(xLeft: Integer; yTop: Integer; out pvarChild: OleVariant): HResult; virtual; stdcall;
    function accDoDefaultAction(varChild: OleVariant): HResult; virtual; stdcall;
    function Set_accName(varChild: OleVariant; const pszName: WideString): HResult; virtual; stdcall;
    function Set_accValue(varChild: OleVariant; const pszValue: WideString): HResult; virtual; stdcall;

    // IEasyAccessible
    procedure DisconnectFromObject; virtual; stdcall;

    // IEnumVARIANT
    function Next(celt: LongWord; var rgvar : OleVariant; out pceltFetched: LongWord): HResult; virtual; stdcall;
    function Skip(celt: LongWord): HResult; virtual; stdcall;
    function Reset: HResult; virtual; stdcall;
    function Clone(out Enum: IEnumVariant): HResult; virtual; stdcall;

    property EasyListview: TEasyListviewHack read GetEasyListview;
  end;

  TEasyGroupAccessibleManager = class(TEasyAccessibleManager, IDispatch, IAccessible)
  private
    function GetEasyGroup: TEasyGroup;
  protected
    function ItemFromIndex(Group: TEasyGroup; varChild: OleVariant): TEasyItem;
    procedure ValidateParameter; override;
  public
    function Get_accChild(varChild: OleVariant; out ppdispChild: IDispatch): HResult; override; stdcall;
    function Get_accFocus(out pvarChild: OleVariant): HResult; override; stdcall;
    function Get_accName(varChild: OleVariant; out pszName: WideString): HResult; override; stdcall;
    function Get_accParent(out ppdispParent: IDispatch): HResult; override; stdcall;
    function Get_accChildCount(out pcountChildren: Integer): HResult; override; stdcall;
    function Get_accRole(varChild: OleVariant; out pvarRole: OleVariant): HResult; override; stdcall;
    function Get_accSelection(out pvarChildren: OleVariant): HResult; override; stdcall;
    function Get_accState(varChild: OleVariant; out pvarState: OleVariant): HResult; override; stdcall;
    function accLocation(out pxLeft: Integer; out pyTop: Integer; out pcxWidth: Integer;
                         out pcyHeight: Integer; varChild: OleVariant): HResult; override; stdcall;
    function accHitTest(xLeft: Integer; yTop: Integer; out pvarChild: OleVariant): HResult; override; stdcall;

    function Next(celt: LongWord; var rgvar: OleVariant; out pceltFetched: LongWord): HResult; override;
    property EasyGroup: TEasyGroup read GetEasyGroup;
  end;

  TEasyItemAccessibleManager = class(TEasyAccessibleManager, IDispatch, IAccessible)
  private
    function GetEasyItem: TEasyItem;
  protected
    procedure ValidateParameter; override;
  public
    function Get_accChild(varChild: OleVariant; out ppdispChild: IDispatch): HResult; override; stdcall;
    function accDoDefaultAction(varChild: OleVariant): HResult; override; stdcall;
    function Get_accFocus(out pvarChild: OleVariant): HResult; override; stdcall;
    function Get_accName(varChild: OleVariant; out pszName: WideString): HResult; override; stdcall;
    function Get_accParent(out ppdispParent: IDispatch): HResult; override; stdcall;
    function Get_accChildCount(out pcountChildren: Integer): HResult; override; stdcall;
    function Get_accRole(varChild: OleVariant; out pvarRole: OleVariant): HResult; override; stdcall;
    function Get_accSelection(out pvarChildren: OleVariant): HResult; override; stdcall;
    function Get_accState(varChild: OleVariant; out pvarState: OleVariant): HResult; override; stdcall;
    function accLocation(out pxLeft: Integer; out pyTop: Integer; out pcxWidth: Integer;
                         out pcyHeight: Integer; varChild: OleVariant): HResult; override; stdcall;
    function accHitTest(xLeft: Integer; yTop: Integer; out pvarChild: OleVariant): HResult; override; stdcall;
    function Set_accName(varChild: OleVariant; const pszName: WideString): HResult; override; stdcall;

    function Clone(out Enum: IEnumVariant): HResult; override;
    function Next(celt: LongWord; var rgvar: OleVariant; out pceltFetched: LongWord): HResult; override;
    function Reset: HResult; override;
    function Skip(celt: LongWord): HResult; override;

    property EasyItem: TEasyItem read GetEasyItem;
  end;

  TEasyHeaderAccessibleManager = class(TEasyAccessibleManager, IDispatch, IAccessible)
  private
    function GetEasyHeader: TEasyHeader;
  protected
    function ColumnFromIndex(varChild: OleVariant): TEasyColumn;
    function FillColumnState(out pvarState: OleVariant; Column: TEasyColumn): HRESULT;
    procedure ValidateParameter; override;
  public
    function Get_accFocus(out pvarChild: OleVariant): HResult; override; stdcall;
    function Get_accName(varChild: OleVariant; out pszName: WideString): HResult; override; stdcall;
    function Get_accParent(out ppdispParent: IDispatch): HResult; override; stdcall;
    function Get_accChildCount(out pcountChildren: Integer): HResult; override; stdcall;
    function Get_accRole(varChild: OleVariant; out pvarRole: OleVariant): HResult; override; stdcall;
    function Get_accState(varChild: OleVariant; out pvarState: OleVariant): HResult; override; stdcall;
    function accLocation(out pxLeft: Integer; out pyTop: Integer; out pcxWidth: Integer;
                         out pcyHeight: Integer; varChild: OleVariant): HResult; override; stdcall;
    function accHitTest(xLeft: Integer; yTop: Integer; out pvarChild: OleVariant): HResult; override; stdcall;
    function Get_accSelection(out pvarChildren: OleVariant): HResult; override; stdcall;

    function Next(celt: LongWord; var rgvar: OleVariant; out pceltFetched: LongWord): HResult; override;
    property EasyHeader: TEasyHeader read GetEasyHeader;
  end;

  TEasyColumnAccessibleManager = class(TEasyHeaderAccessibleManager, IDispatch, IAccessible)
  private
    function GetEasyColumn: TEasyColumn;
  protected
    procedure ValidateParameter; override;
  public
    function Get_accFocus(out pvarChild: OleVariant): HResult; override; stdcall;
    function Get_accChild(varChild: OleVariant; out ppdispChild: IDispatch): HResult; override; stdcall;
    function Get_accChildCount(out pcountChildren: Integer): HResult; override;
    function Get_accName(varChild: OleVariant; out pszName: WideString): HResult; override; stdcall;
    function Get_accParent(out ppdispParent: IDispatch): HResult; override; stdcall;
    function Get_accRole(varChild: OleVariant; out pvarRole: OleVariant): HResult; override; stdcall;
    function Get_accState(varChild: OleVariant; out pvarState: OleVariant): HResult; override; stdcall;
    function accLocation(out pxLeft: Integer; out pyTop: Integer; out pcxWidth: Integer;
                         out pcyHeight: Integer; varChild: OleVariant): HResult; override; stdcall;
    function accHitTest(xLeft: Integer; yTop: Integer; out pvarChild: OleVariant): HResult; override; stdcall;
    function Get_accSelection(out pvarChildren: OleVariant): HResult; override; stdcall;

    function Clone(out Enum: IEnumVariant): HResult; override;
    function Next(celt: LongWord; var rgvar: OleVariant; out pceltFetched: LongWord): HResult; override;
    function Reset: HResult; override;
    function Skip(celt: LongWord): HResult; override;

    property EasyColumn: TEasyColumn read GetEasyColumn;
  end;


  TEasyAccessibleEnumVariantArray = class(TInterfacedObject, IEnumVARIANT)
  private
    FEnumCount: LongWord;
    FSelection: TEasyItemArray;
  public
    function Next(celt: LongWord; var rgvar : OleVariant; out pceltFetched: LongWord): HResult; stdcall;
    function Skip(celt: LongWord): HResult; stdcall;
    function Reset: HResult; stdcall;
    function Clone(out Enum: IEnumVariant): HResult; stdcall;

    property EnumCount: LongWord read FEnumCount write FEnumCount;
    property Selection: TEasyItemArray read FSelection write FSelection;
  end;

{$endif}

implementation

{$ifndef DISABLE_ACCESSIBILITY}

type
  TOleVarArray = array[0..0] of OleVariant;

{ TEasyAccessibleManager}

constructor TEasyAccessibleManager.Create(AnEasyObject: TObject);
begin
  inherited Create;
  EasyObject := AnEasyObject;
  ValidateParameter;
end;

destructor TEasyAccessibleManager.Destroy;
begin
  DisconnectFromObject;
  inherited Destroy;
end;

function TEasyAccessibleManager.accDoDefaultAction(varChild: OleVariant): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.accDoDefaultAction');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyAccessibleManager.accHitTest(xLeft: Integer; yTop: Integer; out pvarChild: OleVariant): HResult;
var
  Pt, HeaderPt: TPoint;
  Item: TEasyItem;
  Group: TEasyGroup;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.accHitTest');
  {$ENDIF LOADGXUNIT}

  Result := S_OK;
  if Assigned(EasyObject) then
  begin
    Pt := Point(xLeft, yTop);
    Pt := EasyListview.ScreenToClient(Pt);
    HeaderPt := EasyListview.Scrollbars.MapWindowToView(Pt, False);
    if TEasyListviewHack( EasyListview).IsHeaderMouseMsg(PointToSmallPoint(Pt), True) and Assigned(TEasyListviewHack( EasyListview).Header) then
      pvarChild := TEasyListviewHack( EasyListview).Header.Accessible
    else begin
      Pt := EasyListview.Scrollbars.MapWindowToView(Pt, True);
      Item := EasyListview.Groups.ItemByPoint(Pt);
      if Assigned(Item) and Item.View.SelectionHitPt(Item, Pt, eshtClickSelect) then
        pvarChild := Item.Accessible as IDispatch
      else begin
        Group := EasyListview.Groups.GroupByPoint(Pt);
        if Assigned(Group) then
          pvarChild := Group.Accessible as IDispatch
        end
      end
  end;
  if VarIsEmpty(pvarChild) then
    pvarChild := CHILDID_SELF
end;

function TEasyAccessibleManager.accLocation(out pxLeft: Integer; out pyTop: Integer; out pcxWidth: Integer; out pcyHeight: Integer; varChild: OleVariant): HResult;
var
  R: TRect;
  Group: TEasyGroup;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.accLocation');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND;
  if Assigned(EasyObject) then
  begin
    R := Rect(0, 0, 0, 0);
    if varChild = CHILDID_SELF then
    begin
      R := EasyListview.ClientRect;
      R.BottomRight := EasyListview.ClientToScreen(R.BottomRight);
      R.TopLeft := EasyListview.ClientToScreen(R.TopLeft);
    end else
    begin
       Group := GroupFromIndex(varChild);
       if Assigned(Group) then
       begin
         R := TEasyGroupHack( Group).DisplayRect;
         R.BottomRight := Group.OwnerListview.ClientToScreen(R.BottomRight);
         R.TopLeft := Group.OwnerListview.ClientToScreen(R.TopLeft);
       end else
       if Assigned(TEasyListviewHack( EasyListview).Header) then
       begin
         R := TEasyListviewHack( EasyListview).Header.DisplayRect;
         R.BottomRight := Group.OwnerListview.ClientToScreen(R.BottomRight);
         R.TopLeft := Group.OwnerListview.ClientToScreen(R.TopLeft);
       end
    end;

    if not IsRectEmpty(R) then
    begin
      pxLeft := R.Left;
      pyTop := R.Top;
      pcxWidth := R.Right - R.Left;
      pcyHeight := R.Bottom - R.Top;
      Result := S_OK
    end
  end
end;

function TEasyAccessibleManager.accNavigate(navDir: Integer; varStart: OleVariant; out pvarEndUpAt: OleVariant): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.accNavigate');
  {$ENDIF LOADGXUNIT}

  Result := E_NOTIMPL
end;

function TEasyAccessibleManager.accSelect(flagsSelect: Integer; varChild: OleVariant): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.accSelect');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyAccessibleManager.FillHeaderState(var pvarState: OleVariant; Header: TEasyHeader): HRESULT;
begin
  Result := S_OK;
  pvarState := STATE_SYSTEM_NORMAL;
  if Assigned(Header) then
  begin
    if not Header.Visible or (Header.DisplayRect.Bottom - Header.DisplayRect.Top = 0) then
      pvarState := pvarState or STATE_SYSTEM_INVISIBLE
  end
end;

function TEasyAccessibleManager.GetEasyListview: TEasyListviewHack;
var
  s: string;
begin
  s := EasyObject.ClassName;
  Result := nil;
  if Assigned(EasyObject) then
    Result := TEasyListviewHack( EasyObject);
end;

function TEasyAccessibleManager.GetFocusedItem(TargetListview: TCustomEasyListview; out pvarChild: OleVariant): HRESULT;
begin
  if Assigned(TargetListview) then
  begin
    Result := S_OK;
    if TEasyListview( TargetListview).Selection.FocusedItem <> nil then
      pvarChild := TEasyListview( TargetListview).Selection.FocusedItem.Accessible
    else
      pvarChild := CHILDID_SELF
  end else
    Result := DISP_E_MEMBERNOTFOUND;
end;

function TEasyAccessibleManager.GetObjName(Obj: TEasyCollectionItem; out pszName: WideString): HRESULT;
begin
  Result := S_OK;
  pszName := '';
  if Assigned(Obj) then
    pszName := Obj.Caption
  else
    Result := S_FALSE
end;

function TEasyAccessibleManager.GetIDsOfNames(const IID: TGUID; Names: Pointer; NameCount, LocaleID: Integer; DispIDs: Pointer): HResult;
begin
  Result := E_NOTIMPL  // IDispatch
end;

function TEasyAccessibleManager.GetTypeInfo(Index, LocaleID: Integer; out TypeInfo): HResult;
begin
  Result := E_NOTIMPL  // IDispatch
end;

function TEasyAccessibleManager.GetTypeInfoCount(out Count: Integer): HResult;
begin
  Result := E_NOTIMPL  // IDispatch
end;

function TEasyAccessibleManager.Get_accChild(varChild: OleVariant; out ppdispChild: IDispatch): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accChild');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND;
end;

function TEasyAccessibleManager.Get_accChildCount(out pcountChildren: Integer): HResult;
begin
  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accChildCount');
  {$ENDIF LOADGXUNIT}

  Result := S_OK;
  pcountChildren := 0;
  if Assigned(EasyObject) then
    pcountChildren := EasyListview.Groups.Count + 1 // Add in the Header
end;

function TEasyAccessibleManager.Get_accDefaultAction(varChild: OleVariant; out pszDefaultAction: WideString): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accDefaultAction');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyAccessibleManager.Get_accDescription(varChild: OleVariant; out pszDescription: WideString): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accDescription');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyAccessibleManager.Get_accFocus(out pvarChild: OleVariant): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accFocus');
  {$ENDIF LOADGXUNIT}

  Result := GetFocusedItem(EasyListview, pvarChild);
end;

function TEasyAccessibleManager.Get_accHelp(varChild: OleVariant; out pszHelp: WideString): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accHelp');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyAccessibleManager.Get_accHelpTopic(out pszHelpFile: WideString; varChild: OleVariant; out pidTopic: Integer): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accHelpTopic');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyAccessibleManager.Get_accKeyboardShortcut(varChild: OleVariant; out pszKeyboardShortcut: WideString): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accKeyboardShortcut');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyAccessibleManager.Get_accName(varChild: OleVariant; out pszName: WideString): HResult;
var
  Group: TEasyGroup;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accName');
  {$ENDIF LOADGXUNIT}

  Result := S_OK;
  if varChild = CHILDID_SELF then
    pszName := ''
  else begin
    Group := GroupFromIndex(varChild);
    if Assigned(Group) then
      Result := GetObjName(Group, pszName)
    else
      pszName := 'EasyHeader'
  end
end;

function TEasyAccessibleManager.Get_accParent(out ppdispParent: IDispatch): HResult;
var
  ELV: TEasyListviewHack;
begin
  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accParent');
  {$ENDIF LOADGXUNIT}

  ppdispParent := nil;
  Result := S_FALSE;
  ELV := TEasyListviewHack( EasyObject);
  if Assigned(ELV) then
    if ELV.HandleAllocated then
      Result := AccessibleObjectFromWindow(ELV.Handle, OBJID_WINDOW, IDispatch, ppdispParent)
end;

function TEasyAccessibleManager.Get_accRole(varChild: OleVariant; out pvarRole: OleVariant): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accRole');
  {$ENDIF LOADGXUNIT}
  
  Result := S_OK;
  if varChild = CHILDID_SELF then
    pvarRole := ROLE_SYSTEM_LIST
  else begin
    if Assigned( GroupFromIndex(varChild)) then
      pvarRole := ROLE_SYSTEM_GROUPING
    else
      pvarRole := ROLE_SYSTEM_ROWHEADER
  end
end;

function TEasyAccessibleManager.Get_accSelection(out pvarChildren: OleVariant): HResult;
begin
  Result := CreateSelectionInterface(TEasyListview( EasyObject), pvarChildren);
end;

function TEasyAccessibleManager.Get_accState(varChild: OleVariant; out pvarState: OleVariant): HResult;
var
  Group: TEasyGroup;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accState');
  {$ENDIF LOADGXUNIT}

  if Assigned(EasyObject) then
  begin
    Result := S_OK;
    if varChild = CHILDID_SELF then
      pvarState := STATE_SYSTEM_NORMAL
    else begin
      Group := GroupFromIndex(varChild);
      if Assigned(Group) then
        Result := FillGroupState(pvarState, Group)
      else
        Result := FillHeaderState(pvarState, TEasyListviewHack( EasyListview).Header)
    end
  end else
     Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyAccessibleManager.Get_accValue(varChild: OleVariant; out pszValue: WideString): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Get_accValue');
  {$ENDIF LOADGXUNIT}

   Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyAccessibleManager.GroupFromIndex(varChild: OleVariant): TEasyGroup;
var
  Index: Cardinal;
  List: TList;
begin
  Result := nil;
  if Assigned(EasyObject) then
  begin
    Index := varChild;
    List := TEasyGroupsHack( EasyListview.Groups).List;
    if List.Count < varChild then
      Result := TEasyGroup( List[ Index - 1]);
  end
end;

function TEasyAccessibleManager.Invoke(DispID: Integer; const IID: TGUID; LocaleID: Integer; Flags: Word; var Params; VarResult, ExcepInfo, ArgErr: Pointer): HResult;
begin
  Result := E_NOTIMPL  // IDispatch
end;

function TEasyAccessibleManager.Set_accName(varChild: OleVariant; const pszName: WideString): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Set_accName');
  {$ENDIF LOADGXUNIT}

  Result := E_NOTIMPL
end;

function TEasyAccessibleManager.Set_accValue(varChild: OleVariant; const pszValue: WideString): HResult;
begin
  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyAccessibleManager.Set_accValue');
  {$ENDIF LOADGXUNIT}

  Result := E_NOTIMPL
end;

function TEasyAccessibleManager.CreateSelectionInterface(TargetListview: TCustomEasyListview; out pvarChildren: OleVariant): HRESULT;
var
  Enum: TEasyAccessibleEnumVariantArray;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug('TEasyAccessibleManager.Get_accSelection');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND;
  if Assigned(TargetListview) then
  begin
    Result := S_OK;
    if TEasyListview( TargetListview).Selection.Count = 0 then
      Result := VT_EMPTY
    else begin
      Enum := TEasyAccessibleEnumVariantArray.Create;
      pvarChildren := Enum as IEnumVARIANT; // Set a reference count quickly
      Enum.Selection := TEasyListview( TargetListview).Selection.SelectedToArray;
    end
  end;
end;

procedure TEasyAccessibleManager.DisconnectFromObject;
begin
  EasyObject := nil;
end;

function TEasyAccessibleManager.FillItemState(out pvarState: OleVariant; Item: TEasyItem): HRESULT;
begin
  Result := S_OK;
  if Assigned(Item) then
  begin
    pvarState := STATE_SYSTEM_MULTISELECTABLE or STATE_SYSTEM_SELECTABLE;
    if Item.Selected then
      pvarState := pvarState or STATE_SYSTEM_SELECTED;
    if Item.Focused then
      pvarState := pvarState or STATE_SYSTEM_FOCUSED;
    if not Item.Visible or not Item.OwnerGroup.Expanded then
      pvarState := pvarState or STATE_SYSTEM_INVISIBLE;
    if Item = TEasyListviewHack( Item.OwnerListview).DragManager.DragItem then
      pvarState := pvarState or STATE_SYSTEM_HOTTRACKED;
  end else
    Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyAccessibleManager.FillGroupState(out pvarState: OleVariant; Group: TEasyGroup): HRESULT;
begin
  Result := S_OK;
  if Assigned(Group) then
  begin
    pvarState := STATE_SYSTEM_NORMAL; //STATE_SYSTEM_READONLY;
    if Group.Expanded then
      pvarState := pvarState or STATE_SYSTEM_EXPANDED
    else
      pvarState := pvarState or STATE_SYSTEM_COLLAPSED;
    if not Group.Visible then
      pvarState := pvarState or STATE_SYSTEM_INVISIBLE;
  end else
    Result := DISP_E_MEMBERNOTFOUND
end;

procedure TEasyAccessibleManager.ValidateParameter;
begin
  Assert(FEasyObject is TCustomEasyListview, 'TEasyAccessibleManager.Create not a TCustomEasyListview type');
end;

function TEasyAccessibleManager.Clone(out Enum: IEnumVariant): HResult;
begin
  Result := E_NOTIMPL
end;

function TEasyAccessibleManager.Next(celt: LongWord; var rgvar: OleVariant;
  out pceltFetched: LongWord): HResult;
var
  i: LongWord;
begin
  Result := S_FALSE;
  VariantInit(rgvar);
  pceltFetched := 0;
  if Assigned(EasyObject) then
  begin
    i := 0;
    if (celt > 0) and (EnumIndex < EasyListview.Groups.Count) then  // Add the Header
    begin
      while (i < LongWord( EasyListview.Groups.Count)) and (i < celt) do
      begin
        TOleVarArray( rgvar)[i] := EasyListview.Groups[FEnumIndex].Accessible;
        Inc(FEnumIndex);
        Inc(i)
      end;
      pceltFetched := i;
      Result := S_OK
    end;

    if i < celt then
    begin
      if EnumIndex = EasyListview.Groups.Count then
      begin
        TOleVarArray( rgvar)[i] := EasyListview.Header.Accessible;
        pceltFetched := pceltFetched + 1;
        Inc(FEnumIndex);
     //   Inc(i);
        Result := S_OK
      end
    end
  end
end;

function TEasyAccessibleManager.Reset: HResult;
begin
  EnumIndex := 0;
  Result := S_OK
end;

function TEasyAccessibleManager.Skip(celt: LongWord): HResult;
begin
  if Assigned(EasyObject) then
  begin
    Inc(FEnumIndex, celt);
    if EnumIndex > EasyListview.Groups.ItemCount then
      EnumIndex := EasyListview.Groups.ItemCount;         // Add the Header
    Result := S_OK;
  end else
    Result := S_FALSE
end;

function TEasyGroupAccessibleManager.accHitTest(xLeft: Integer; yTop: Integer; out pvarChild: OleVariant): HResult;
begin
  // Testing is done at Listview level, if gets here then test is done
  if Assigned(EasyObject) then
  begin
    pvarChild := CHILDID_SELF;
    Result := S_OK;
  end else
     Result := DISP_E_MEMBERNOTFOUND
end;


function TEasyGroupAccessibleManager.accLocation(out pxLeft, pyTop,
  pcxWidth, pcyHeight: Integer; varChild: OleVariant): HResult;
var
  R: TRect;
  Group: TEasyGroup;
  Item: TEasyItem;
begin
  if Assigned(EasyObject) then
  begin
    Result := S_OK;
    R := Rect(0, 0, 0, 0);
    if varChild = CHILDID_SELF then
    begin
      Group := TEasyGroup( EasyObject);
      R := TEasyGroupHack( Group).DisplayRect;
      R.BottomRight := Group.OwnerListview.ClientToScreen(R.BottomRight);
      R.TopLeft := Group.OwnerListview.ClientToScreen(R.TopLeft);
    end else
    begin
      Item := ItemFromIndex( TEasyGroup( EasyObject), varChild);
      if Assigned(Item) then
      begin
        R := TEasyItemHack( Item).DisplayRect;
        R.BottomRight := Item.OwnerListview.ClientToScreen(R.BottomRight);
        R.TopLeft := Item.OwnerListview.ClientToScreen(R.TopLeft);
      end
    end;

    if not IsRectEmpty(R) then
    begin
      pxLeft := R.Left;
      pyTop := R.Top;
      pcxWidth := R.Right - R.Left;
      pcyHeight := R.Bottom - R.Top;
      Result := S_OK
    end
  end else
     Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyGroupAccessibleManager.GetEasyGroup: TEasyGroup;
begin
  Result := nil;
  if Assigned(EasyObject) then
    Result := TEasyGroup( EasyObject);
end;

function TEasyGroupAccessibleManager.Get_accChildCount(
  out pcountChildren: Integer): HResult;
begin
 Result := S_OK;
 pcountChildren := 0;
 if Assigned(EasyObject) then
   pcountChildren := EasyGroup.ItemCount
end;

function TEasyGroupAccessibleManager.Get_accFocus(out pvarChild: OleVariant): HResult;
begin
  Result := VT_EMPTY;
  if Assigned(EasyObject) then
    Result := GetFocusedItem(EasyGroup.OwnerListview, pvarChild);
end;

function TEasyGroupAccessibleManager.Get_accName(varChild: OleVariant; out pszName: WideString): HResult;
begin
  if Assigned(EasyObject) then
  begin
    Result := S_OK;
    if varChild = CHILDID_SELF then
      GetObjName( TEasyGroup( EasyObject), pszName)
    else
      Result := GetObjName(ItemFromIndex( TEasyGroup(EasyObject), varChild), pszName);
  end else
     Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyGroupAccessibleManager.Get_accParent(out ppdispParent: IDispatch): HResult;
begin
  if Assigned(EasyObject) then
  begin
    Result := S_OK;
    ppdispParent := TEasyListviewHack( EasyGroup.OwnerListview).Accessible;
  end else
    Result := DISP_E_MEMBERNOTFOUND
end;


function TEasyGroupAccessibleManager.Get_accRole(varChild: OleVariant; out pvarRole: OleVariant): HResult;
begin
  Result := S_OK;
  if varChild = CHILDID_SELF then
    pvarRole := ROLE_SYSTEM_GROUPING
  else
    pvarRole := ROLE_SYSTEM_LISTITEM
end;

function TEasyGroupAccessibleManager.Get_accSelection(out pvarChildren: OleVariant): HResult;
begin
  Result := VT_EMPTY;
  if Assigned(EasyObject) then
    Result := CreateSelectionInterface(EasyGroup.OwnerListview, pvarChildren);
end;

function TEasyGroupAccessibleManager.Get_accState(varChild: OleVariant; out pvarState: OleVariant): HResult;
var
  Index: Integer;
begin
  if Assigned(EasyObject) then
  begin
    if varChild = CHILDID_SELF then
      Result := FillGroupState(pvarState, TEasyGroup( EasyObject))
    else begin
      Index := varChild;
      Result := FillItemState(pvarState, ItemFromIndex(TEasyGroup( EasyObject), Index));
    end
  end else
     Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyGroupAccessibleManager.ItemFromIndex(Group: TEasyGroup; varChild: OleVariant): TEasyItem;
var
  List: TList;
  Index: Cardinal;
begin
  if Assigned(Group) then
  begin
    List := TEasyGroupsHack( Group.OwnerGroups).List;
    Index := varChild;
    Result := TEasyItem( List[Index - 1])
  end else
    Result := nil
end;

function TEasyGroupAccessibleManager.Next(celt: LongWord; var rgvar: OleVariant; out pceltFetched: LongWord): HResult;
var
  i: Integer;
begin
  Result := S_FALSE;
  VariantInit(rgvar);
  pceltFetched := 0;
  if Assigned(EasyObject) then
  begin
    if (celt > 0) and (EnumIndex < EasyGroup.ItemCount) then
    begin
      for i := 0 to celt - 1 do
      begin
        TOleVarArray( rgvar)[i] := EasyGroup.Items[EnumIndex].Accessible;
        Inc(FEnumIndex);
      end;
      pceltFetched := celt;
      Result := S_OK
    end
  end
end;

procedure TEasyGroupAccessibleManager.ValidateParameter;
begin
  Assert(FEasyObject is TEasyGroup, 'TEasyGroupAccessibleManager.Create not a TEasyGroup type');
end;

function TEasyGroupAccessibleManager.Get_accChild(varChild: OleVariant;
  out ppdispChild: IDispatch): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyGroupAccessibleManager.Get_accChild');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND;
  ppdispChild := nil
end;

{ TEasyItemAccessibleManager}
function TEasyItemAccessibleManager.accDoDefaultAction(varChild: OleVariant): HResult;
begin
  Result := inherited accDoDefaultAction(varChild);
end;

function TEasyItemAccessibleManager.accHitTest(xLeft: Integer; yTop: Integer; out pvarChild: OleVariant): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyItemAccessibleManager.accHitTest');
  {$ENDIF LOADGXUNIT}

  if Assigned(EasyObject) then
  begin
    // Testing is done at Listview level, if gets here then test is done
    pvarChild := CHILDID_SELF;
    Result := S_OK;
  end else
     Result := DISP_E_MEMBERNOTFOUND
end;


function TEasyItemAccessibleManager.accLocation(out pxLeft, pyTop,
  pcxWidth, pcyHeight: Integer; varChild: OleVariant): HResult;
var
  R: TRect;
  Item: TEasyItem;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyItemAccessibleManager.accLocation');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND;

  if Assigned(EasyObject) then
  begin
    R := Rect(0, 0, 0, 0);
    if varChild = CHILDID_SELF then
    begin
      if Assigned(EasyObject) then
      begin
        Item := TEasyItem( EasyObject);
        R := TEasyItemHack( Item).DisplayRect;
        R.BottomRight := Item.OwnerListview.ClientToScreen(R.BottomRight);
        R.TopLeft := Item.OwnerListview.ClientToScreen(R.TopLeft);
      end
    end;

    if not IsRectEmpty(R) then
    begin
      pxLeft := R.Left;
      pyTop := R.Top;
      pcxWidth := R.Right - R.Left;
      pcyHeight := R.Bottom - R.Top;
      Result := S_OK
    end
  end
end;

function TEasyItemAccessibleManager.Clone(out Enum: IEnumVariant): HResult;
begin
  Result:= S_FALSE
end;

function TEasyItemAccessibleManager.GetEasyItem: TEasyItem;
begin
  Result := nil;
  if Assigned(EasyObject) then
    Result := TEasyItem( EasyObject);
end;

function TEasyItemAccessibleManager.Get_accChild(varChild: OleVariant;
  out ppdispChild: IDispatch): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyItemAccessibleManager.Get_accChild');
  {$ENDIF LOADGXUNIT}

  ppdispChild := nil;
  Result := DISP_E_MEMBERNOTFOUND;
end;

function TEasyItemAccessibleManager.Get_accChildCount(out pcountChildren: Integer): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyItemAccessibleManager.Get_accChildCount');
  {$ENDIF LOADGXUNIT}

  pcountChildren := 0;
  Result := S_OK
end;

function TEasyItemAccessibleManager.Get_accFocus(out pvarChild: OleVariant): HResult;
begin
  Result := VT_EMPTY;
  if Assigned(EasyObject) then
    Result := GetFocusedItem(EasyItem.OwnerListview, pvarChild);
end;

function TEasyItemAccessibleManager.Get_accName(varChild: OleVariant; out pszName: WideString): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyItemAccessibleManager.Get_accName');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND;
  if Assigned(EasyObject) then
  begin
    Result := S_OK;
    if varChild = CHILDID_SELF then
      GetObjName( TEasyItem( EasyObject), pszName)
  end
end;

function TEasyItemAccessibleManager.Get_accParent(out ppdispParent: IDispatch): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyItemAccessibleManager.Get_accParent');
  {$ENDIF LOADGXUNIT}

  if Assigned(EasyObject) then
  begin
    Result := S_OK;
    ppdispParent := EasyItem.OwnerGroup.Accessible;
  end else
    Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyItemAccessibleManager.Get_accRole(varChild: OleVariant; out pvarRole: OleVariant): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyItemAccessibleManager.Get_accRole');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND;
  if Assigned(EasyObject) then
  begin
    Result := S_OK;
    if varChild = CHILDID_SELF then
      pvarRole := ROLE_SYSTEM_LISTITEM
  end
end;

function TEasyItemAccessibleManager.Get_accSelection(out pvarChildren: OleVariant): HResult;
begin
  Result := VT_EMPTY;
  if Assigned(EasyObject) then
    Result := CreateSelectionInterface(EasyItem.OwnerListview, pvarChildren);
end;

function TEasyItemAccessibleManager.Get_accState(varChild: OleVariant; out pvarState: OleVariant): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyItemAccessibleManager.Get_accState');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND;
  if Assigned(EasyObject) then
  begin
    if varChild = CHILDID_SELF then
      Result := FillItemState(pvarState, TEasyItem( EasyObject))
  end
end;

function TEasyItemAccessibleManager.Next(celt: LongWord; var rgvar: OleVariant; out pceltFetched: LongWord): HResult;
begin
  Result:= S_FALSE
end;

function TEasyItemAccessibleManager.Reset: HResult;
begin
  Result:= S_FALSE
end;

function TEasyItemAccessibleManager.Set_accName(varChild: OleVariant;
  const pszName: WideString): HResult;
begin
  if Assigned(EasyObject) then
  begin
    Result := S_FALSE;
    if varChild = CHILDID_SELF then
      if Assigned(EasyObject) then
        if TEasyListviewHack( EasyItem.OwnerListview).EditManager.Enabled then
        begin
          TEasyItemHack( EasyItem).Caption := pszName;
          Result := S_OK
        end
  end else
     Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyItemAccessibleManager.Skip(celt: LongWord): HResult;
begin
  Result:= S_FALSE
end;

procedure TEasyItemAccessibleManager.ValidateParameter;
begin
  Assert(FEasyObject is TEasyItem, 'TEasyItemAccessibleManager.Create not a TEasyItem type');
end;

{ TEasyColumnAccessibleManager }
function TEasyColumnAccessibleManager.accHitTest(xLeft, yTop: Integer;
  out pvarChild: OleVariant): HResult;
begin
  Result := S_FALSE;
  // Testing is done at Header level, if gets here then test is done
  if Assigned(EasyObject) then
  begin
    if EasyColumn.OwnerHeader.Visible then
    begin
      pvarChild := CHILDID_SELF;
      Result := S_OK;
    end
  end
end;

function TEasyColumnAccessibleManager.accLocation(out pxLeft: Integer; out pyTop: Integer; out pcxWidth: Integer; out pcyHeight: Integer; varChild: OleVariant): HResult;
var
  R: TRect;
  Column: TEasyColumn;
begin
  Result := DISP_E_MEMBERNOTFOUND;
  
  if Assigned(EasyObject) then
  begin
    R := Rect(0, 0, 0, 0);
    if varChild = CHILDID_SELF then
    begin
      Column := TEasyColumn( EasyObject);
      R := TEasyColumnHack( Column).DisplayRect;
      if (Column.OwnerHeader.DisplayRect.Bottom - Column.OwnerHeader.DisplayRect.Top) = 0 then
        R.Bottom := R.Top;
      R.BottomRight := Column.OwnerListview.ClientToScreen(R.BottomRight);
      R.TopLeft := Column.OwnerListview.ClientToScreen(R.TopLeft);
      pxLeft := R.Left;
      pyTop := R.Top;
      pcxWidth := R.Right - R.Left;
      pcyHeight := R.Bottom - R.Top;
      Result := S_OK
    end;
  end
end;

function TEasyColumnAccessibleManager.Clone(out Enum: IEnumVariant): HResult;
begin
  Result := S_FALSE
end;

function TEasyColumnAccessibleManager.GetEasyColumn: TEasyColumn;
begin
  If Assigned(EasyObject) then
    Result := TEasyColumn( EasyObject)
  else
    Result := nil
end;

function TEasyColumnAccessibleManager.Get_accChild(varChild: OleVariant;
  out ppdispChild: IDispatch): HResult;
begin
  ppdispChild := nil;
  Result := DISP_E_MEMBERNOTFOUND;
end;

function TEasyColumnAccessibleManager.Get_accChildCount(out pcountChildren: Integer): HResult;
begin
  Result := S_OK;
  pcountChildren := 0
end;

function TEasyColumnAccessibleManager.Get_accFocus(out pvarChild: OleVariant): HResult;
begin
  pvarChild := NULL;
  Result := DISP_E_MEMBERNOTFOUND;
end;

function TEasyColumnAccessibleManager.Get_accName(varChild: OleVariant;
  out pszName: WideString): HResult;
begin
  if Assigned(EasyObject) then
  begin
    Result := S_OK;
    if varChild = CHILDID_SELF then
      GetObjName( TEasyColumn( EasyObject), pszName)
    else
      Result := DISP_E_MEMBERNOTFOUND
  end else
     Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyColumnAccessibleManager.Get_accParent(out ppdispParent: IDispatch): HResult;
begin
  if Assigned(EasyObject) then
  begin
    Result := S_OK;
    ppdispParent := EasyColumn.OwnerHeader.Accessible;
  end else
    Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyColumnAccessibleManager.Get_accRole(varChild: OleVariant; out pvarRole: OleVariant): HResult;
begin
  Result := DISP_E_MEMBERNOTFOUND;
  if Assigned(EasyObject) then
  begin
    Result := S_OK;
    if varChild = CHILDID_SELF then
      pvarRole := ROLE_SYSTEM_COLUMN
  end
end;

function TEasyColumnAccessibleManager.Get_accSelection(out pvarChildren: OleVariant): HResult;
begin
  pvarChildren := NULL;
  Result := DISP_E_MEMBERNOTFOUND;
end;

function TEasyColumnAccessibleManager.Get_accState(varChild: OleVariant; out pvarState: OleVariant): HResult;
begin

  {$IFDEF LOADGXUNIT}
  SendDebug( 'TEasyColumnAccessibleManager.Get_accState');
  {$ENDIF LOADGXUNIT}

  Result := DISP_E_MEMBERNOTFOUND;
  if Assigned(EasyObject) then
    if varChild = CHILDID_SELF then
      Result := FillColumnState(pvarState, TEasyColumn( EasyObject))
end;

function TEasyColumnAccessibleManager.Next(celt: LongWord; var rgvar: OleVariant; out pceltFetched: LongWord): HResult;
begin
  Result := S_FALSE
end;

function TEasyColumnAccessibleManager.Reset: HResult;
begin
  Result := S_FALSE
end;

function TEasyColumnAccessibleManager.Skip(celt: LongWord): HResult;
begin
  Result := S_FALSE
end;

procedure TEasyColumnAccessibleManager.ValidateParameter;
begin
  Assert(FEasyObject is TEasyColumn, 'TEasyColumnAccessibleManager.Create not a TEasyColumn type');
end;

{ TEasyHeaderAccessibleManager }

function TEasyHeaderAccessibleManager.accHitTest(xLeft, yTop: Integer;
  out pvarChild: OleVariant): HResult;
var
  Column: TEasyColumn;
  Pt: TPoint;
begin
  Result := S_FALSE;
  pvarChild := NULL;
  if Assigned(EasyObject) then
  begin
    pvarChild := CHILDID_SELF;
    Result := S_OK;
    if EasyHeader.Visible then
    begin
      Pt := Point(xLeft, yTop);
      Pt := TEasyListviewHack( EasyHeader.OwnerListview).ScreenToClient(Pt);
      Pt := TEasyListviewHack( EasyHeader.OwnerListview).Scrollbars.MapWindowToView(Pt, False);
      Column := EasyHeader.Columns.ColumnByPoint(Pt);
      if Assigned(Column) and PtInRect(TEasyColumnHack( Column).DisplayRect, Pt) then
        pvarChild := Column.Accessible as IDispatch;
    end
  end
end;

function TEasyHeaderAccessibleManager.accLocation(out pxLeft, pyTop,
  pcxWidth, pcyHeight: Integer; varChild: OleVariant): HResult;
var
  R: TRect;
begin
  Result := DISP_E_MEMBERNOTFOUND;

  if Assigned(EAsyObject) then
  begin
    R := Rect(0, 0, 0, 0);
    if varChild = CHILDID_SELF then
    begin
      R := EasyHeader.DisplayRect;
      R.BottomRight := EasyHeader.OwnerListview.ClientToScreen(R.BottomRight);
      R.TopLeft := EasyHeader.OwnerListview.ClientToScreen(R.TopLeft);
      pxLeft := R.Left;
      pyTop := R.Top;
      pcxWidth := R.Right - R.Left;
      pcyHeight := R.Bottom - R.Top;
      Result := S_OK
    end
  end;
end;

function TEasyHeaderAccessibleManager.ColumnFromIndex(
  varChild: OleVariant): TEasyColumn;
var
  List: TList;
  Index: Cardinal;
begin
  if Assigned(EasyObject) then
  begin
    List := TEasyColumnsHack( TEasyHeader(EasyObject).Columns).List;
    Index := varChild;
    Result := TEasyColumn( List[Index - 1])
  end else
    Result := nil
end;

function TEasyHeaderAccessibleManager.FillColumnState(out pvarState: OleVariant; Column: TEasyColumn): HRESULT;
begin
  Result := S_OK;
  if Assigned(Column) then
  begin
    pvarState := STATE_SYSTEM_READONLY; //STATE_SYSTEM_READONLY;
    if Column.Clicking then
      pvarState := pvarState or STATE_SYSTEM_PRESSED;
    if not Column.Visible then
      pvarState := pvarState or STATE_SYSTEM_INVISIBLE;
  end else
    Result := DISP_E_MEMBERNOTFOUND;
end;

function TEasyHeaderAccessibleManager.GetEasyHeader: TEasyHeader;
begin
  if Assigned(EasyObject) then
    Result := TEasyHeader( EasyObject)
  else
    Result := nil
end;

function TEasyHeaderAccessibleManager.Get_accChildCount(out pcountChildren: Integer): HResult;
begin
  if Assigned(EasyObject) then
    pcountChildren := EasyHeader.Columns.Count
  else
    pcountChildren := 0;

  Result := S_OK
end;

function TEasyHeaderAccessibleManager.Get_accFocus(out pvarChild: OleVariant): HResult;
begin
  pvarChild := NULL;
  Result := DISP_E_MEMBERNOTFOUND;
end;

function TEasyHeaderAccessibleManager.Get_accName(varChild: OleVariant; out pszName: WideString): HResult;
begin
  if Assigned(EAsyObject) then
  begin
    Result := S_OK;
    if varChild = CHILDID_SELF then
      pszName := 'EasyHeader'
    else
      Result := GetObjName(ColumnFromIndex(varChild), pszName);
  end else
     Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyHeaderAccessibleManager.Get_accParent(out ppdispParent: IDispatch): HResult;
begin
  Result := S_OK;
  if Assigned(EasyObject) then
    ppdispParent := TEasyListviewHack( EasyHeader.OwnerListview).Accessible as IDispatch
  else
    Result := S_FALSE
end;

function TEasyHeaderAccessibleManager.Get_accRole(varChild: OleVariant; out pvarRole: OleVariant): HResult;
begin
  if Assigned(EasyObject) then
  begin
    Result := S_OK;
    if varChild = CHILDID_SELF then
      pvarRole := ROLE_SYSTEM_ROWHEADER
    else
      pvarRole := ROLE_SYSTEM_COLUMN
  end else
     Result := DISP_E_MEMBERNOTFOUND
end;

function TEasyHeaderAccessibleManager.Get_accSelection(out pvarChildren: OleVariant): HResult;
begin
  pvarChildren := NULL;
  Result := DISP_E_MEMBERNOTFOUND;
end;

function TEasyHeaderAccessibleManager.Get_accState(varChild: OleVariant; out pvarState: OleVariant): HResult;
begin
  Result := DISP_E_MEMBERNOTFOUND;
  if Assigned(EasyObject) then
  begin
    if varChild = CHILDID_SELF then
      Result := FillHeaderState(pvarState, EasyHeader)
    else
      Result := FillColumnState(pvarState, ColumnFromIndex(varChild))
  end
end;

function TEasyHeaderAccessibleManager.Next(celt: LongWord; var rgvar: OleVariant; out pceltFetched: LongWord): HResult;
var
  i: Integer;
begin
  Result := S_FALSE;
  if Assigned(EasyObject) then
  begin
    VariantInit(rgvar);
    pceltFetched := 0;
    if Assigned(EasyObject) then
    begin
      if (celt > 0) and (EnumIndex < EasyHeader.Columns.Count) then
      begin
        for i := 0 to celt - 1 do
        begin
          TOleVarArray( rgvar)[i] := EasyHeader.Columns[EnumIndex].Accessible;
          Inc(FEnumIndex);
        end;
        pceltFetched := celt;
        Result := S_OK
      end
    end
  end
end;

procedure TEasyHeaderAccessibleManager.ValidateParameter;
begin
  Assert(FEasyObject is TEasyHeader, 'TEasyHeaderAccessibleManager.Create not a TEasyHeader type');
end;

{ TEasyAccessibleEnumVariantArray }
function TEasyAccessibleEnumVariantArray.Clone(out Enum: IEnumVariant): HResult;
var
  E: TEasyAccessibleEnumVariantArray;
begin
  Result := E_OUTOFMEMORY;
  E := TEasyAccessibleEnumVariantArray.Create;
  if Assigned(E) then
  begin
    Enum := E;
    E.Selection := Selection;
    Result := S_OK
  end
end;

function TEasyAccessibleEnumVariantArray.Next(celt: LongWord; var rgvar: OleVariant; out pceltFetched: LongWord): HResult;
var
  i: LongWord;
begin
  Result := S_FALSE;
  pceltFetched := 0;
  i := 0;
  if celt > 0 then
  begin
    rgvar := VarArrayCreate([0, celt - 1], varVariant);
    while (i < celt) and (EnumCount < LongWord( Length(Selection))) do
    begin
      TOleVarArray( rgvar)[i] := Selection[EnumCount].Accessible;
      Inc(pceltFetched);
      Inc(i);
      Inc(FEnumCount)
    end
  end
end;

function TEasyAccessibleEnumVariantArray.Reset: HResult;
begin
  EnumCount := 0;
  Result := S_OK
end;

function TEasyAccessibleEnumVariantArray.Skip(celt: LongWord): HResult;
begin
  Inc(FEnumCount, celt);
  Result := S_OK
end;

{$endif}

end.
