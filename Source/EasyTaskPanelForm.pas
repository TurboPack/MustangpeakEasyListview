unit EasyTaskPanelForm;

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
//    Danijel Malik, Robert Lee, Werner Lehmann, Alexey Torgashin, Milan Vandrovec
//
//  NOTES:
//   1)  If new properties are added to the TCollectionItems and published they
// need to be manually written/read from the stream.  The items are not automatically
// saved to the DFM file.  This was because mimicing TCollectionItem was not
// practical do to the way the VCL was designed.
//----------------------------------------------------------------------------

interface

uses
  Windows,
  Messages,
  SysUtils,
  Variants,
  Themes,
  UxTheme,
  {$IFDEF SpTBX}
  SpTBXSkins,
  {$ENDIF SpTBX}
  Classes,
  Graphics,
  Controls,
  Forms,
  Dialogs,
  MPCommonObjects;

type
  TEasyTaskPanelForm = class(TCustomForm)
  private
    FThemed: Boolean;
    FThemes: TCommonThemeManager;
    function GetThemed: Boolean;
    procedure SetThemed(const Value: Boolean);
  protected
    procedure CreateParams(var Params: TCreateParams); override;
    procedure CreateWnd; override;
    procedure DestroyWnd; override;
    procedure DoShow; override;
    procedure InvalidateChildren(ARoot: TWinControl);
    procedure Loaded; override;
    procedure WMDestroy(var Msg: TMessage); message WM_DESTROY;
    procedure WMEraseBkgnd(var Msg: TWMEraseBkgnd); message WM_ERASEBKGND;
    procedure WMHScroll(var Msg: TWMHScroll); message WM_HSCROLL;
    procedure WMPaint(var Msg: TWMPaint); message WM_PAINT;
    procedure WMThemeChanged(var Message: TMessage); message WM_THEMECHANGED;
    procedure WMVScroll(var Msg: TWMVScroll); message WM_VSCROLL;
    property Themes: TCommonThemeManager read FThemes write FThemes;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
  published
    property ActiveControl;
    property Anchors;
    property AutoSize;
    property BorderWidth;
    property Caption stored True;
    property Color;
    property Constraints;
    property Font;
    property Height stored True;
    property HorzScrollBar;
    property KeyPreview;
{$IF COMPILERVERSION <= 34}property OldCreateOrder;{$IFEND}
    property PixelsPerInch;
    property PopupMenu;
    property PrintScale;
    property Scaled;
    property ShowHint;
    property Themed: Boolean read GetThemed write SetThemed default True;
    property VertScrollBar;
    property Width stored True;

    property OnActivate;
    property OnClick;
    property OnClose;
    property OnCloseQuery;
   {$IFDEF COMPILER_5_UP}property OnContextPopup;{$ENDIF}
    property OnCreate;
    property OnDblClick;
    property OnDestroy;
    property OnDeactivate;
    property OnDragDrop;
    property OnDragOver;
    property OnGetSiteInfo;
    property OnHide;
    property OnHelp;
    property OnKeyDown;
    property OnKeyPress;
    property OnKeyUp;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
    property OnMouseWheel;
    property OnMouseWheelDown;
    property OnMouseWheelUp;
    property OnPaint;
    property OnResize;
    property OnShortCut;
    property OnShow;
  end;
  TEasyTaskPanelFormClass = class of TEasyTaskPanelForm;

implementation

{ TEasyTaskPanelForm }
constructor TEasyTaskPanelForm.Create(AOwner: TComponent);
begin
  Themes := TCommonThemeManager.Create(Self);
  inherited Create(AOwner);
  FThemed := True;
  DoubleBuffered := True;
end;

destructor TEasyTaskPanelForm.Destroy;
begin
  FreeAndNil(FThemes);
  inherited Destroy;
end;

function TEasyTaskPanelForm.GetThemed: Boolean;
begin
  Result := False;
  if not (csLoading in ComponentState) then
    Result := FThemed and UseThemes;
end;

procedure TEasyTaskPanelForm.CreateParams(var Params: TCreateParams);
begin
  inherited CreateParams(Params);
  if not (csDesigning in ComponentState) then
    Params.Style := Params.Style or WS_CHILD;
end;

procedure TEasyTaskPanelForm.CreateWnd;
begin
  inherited CreateWnd;
  Themes.ThemesLoad;
end;

procedure TEasyTaskPanelForm.DestroyWnd;
begin
  inherited DestroyWnd;
end;

procedure TEasyTaskPanelForm.DoShow;
begin
  inherited DoShow;
  // Keep from Flickering on startup
  Width := 0;
  Height := 0;
end;

procedure TEasyTaskPanelForm.InvalidateChildren(ARoot: TWinControl);
var
  i: Integer;
begin
  InvalidateRect(ARoot.Handle, nil, False);
  for i := 0 to ARoot.ControlCount - 1 do
  begin
    if ARoot.Controls[i] is TWinControl then
    begin
      InvalidateChildren(TWinControl( ARoot.Controls[i]));
      InvalidateRect(TWinControl( ARoot.Controls[i]).Handle, nil, False)
    end
  end;
end;

procedure TEasyTaskPanelForm.Loaded;
begin
  inherited Loaded;
  if not (csDesigning in ComponentState) then
    BorderStyle := bsNone;
end;

procedure TEasyTaskPanelForm.SetThemed(const Value: Boolean);
begin
  if FThemed <> Value then
  begin
    FThemed := Value;
    Themes.ThemesLoad;
    if HandleAllocated then
    begin
      // This is the only way I could get the window to redraw the NonClient areas
      // RedrawWindow did not work either.
      Visible := not Visible;
      Visible := not Visible;
      InvalidateRect(Handle, nil, True);
    end;
  end
end;

procedure TEasyTaskPanelForm.WMDestroy(var Msg: TMessage);
begin
  inherited;
   if Assigned(Themes) then
     Themes.ThemesFree;
end;

procedure TEasyTaskPanelForm.WMEraseBkgnd(var Msg: TWMEraseBkgnd);

  procedure DrawNonThemed(Canvas: TControlCanvas);
  begin
    Canvas.Brush.Color := Color;
    Canvas.FillRect(ClientRect);
  end;

var
  DC: TControlCanvas;
  PartID, StateID: LongWord;
begin
  DC := TControlCanvas.Create;
  try
    DC.Handle := Msg.DC;
    DC.Control := Self;
    {$IFDEF SpTBX}
    if CurrentSkin.SkinName <> 'Default' then
    begin
      CurrentSkin.PaintBackground(DC, ClientRect, skncWindow{skncPanel}, sknsNormal, True, True, false, [akLeft, akTop, akRight, akBottom]);
    end else
    {$ENDIF SpTBX}
    if Themed and not (csDesigning in ComponentState) then
    begin
      PartID := EBP_NORMALGROUPBACKGROUND;
      StateID := 0;
      DrawThemeBackground(Themes.ExplorerBarTheme, DC.Handle, PartID, StateID, ClientRect, nil);
    end
    else
      DrawNonThemed(DC);
    Exit;
  finally
    DC.Handle := 0;
    DC.Free;
  end;
  Msg.Result := 1;
end;

procedure TEasyTaskPanelForm.WMHScroll(var Msg: TWMHScroll);
begin
  inherited;
  InvalidateChildren(Self);
end;

procedure TEasyTaskPanelForm.WMPaint(var Msg: TWMPaint);
begin
  inherited;
end;

procedure TEasyTaskPanelForm.WMThemeChanged(var Message: TMessage);
begin
  inherited;
  Themes.ThemesFree;
  Themes.ThemesLoad;
end;

procedure TEasyTaskPanelForm.WMVScroll(var Msg: TWMVScroll);
begin
  inherited;
  InvalidateChildren(Self)
end;

end.

