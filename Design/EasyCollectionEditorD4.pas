unit EasyCollectionEditorD4;

// Version 2.0.0
//
// The contents of this file are subject to the Mozilla Public License
// Version 1.1 (the "License"); you may not use this file except in compliance
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
// Special thanks to the following in no particular order for their help/support/code
//    Danijel Malik, Robert Lee, Werner Lehmann, Alexey Torgashin, Milan Vandrovec
//
//----------------------------------------------------------------------------

interface

{$I Compilers.inc}

uses
  Windows,
  Messages,
  SysUtils,
  Classes,
  Controls,
  Graphics,
  {$IFDEF COMPILER_6_UP}
  DesignIntf,
  DesignEditors,
  DesignWindows,
  TreeIntf,
  VCLEditors,
  {$ELSE}
  DsgnIntf,
  DsgnWnds,
  {$ENDIF}
  {$IFDEF COMPILER_5}
  ParentageSupport, // Sprig support in DsnIDE5.dpk  What about D4?
  {$ENDIF}
  TypInfo,
  Forms,
  Dialogs,
  StdCtrls,
  ComCtrls,
  EasyListview,
  ExtCtrls,
  CommCtrl,
  ImgList,
  ToolWin,
  ActnList, Menus;

type
  TFormEasyCollectionEditor = class(TDesignWindow)
    ListView1: TListView;
    ToolBar1: TToolBar;
    ToolButton1: TToolButton;
    ToolButton2: TToolButton;
    ToolButton3: TToolButton;
    ToolButton4: TToolButton;
    ImageList1: TImageList;
    ToolButton5: TToolButton;
    ActionList1: TActionList;
    ActionNewItem: TAction;
    ActionDeleteItem: TAction;
    ActionUpItem: TAction;
    ActionDownItem: TAction;
    ToolButton6: TToolButton;
    PopupMenu1: TPopupMenu;
    Add1: TMenuItem;
    Delete1: TMenuItem;
    MoveUp1: TMenuItem;
    MoveDown1: TMenuItem;
    N1: TMenuItem;
    StatusBar1: TStatusBar;
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure ActionNewItemExecute(Sender: TObject);
    procedure ActionDeleteItemExecute(Sender: TObject);
    procedure ActionUpItemExecute(Sender: TObject);
    procedure ActionDownItemExecute(Sender: TObject);
    procedure ListView1Resize(Sender: TObject);
    procedure ListView1Change(Sender: TObject; Item: TListItem; Change: TItemChange);
    procedure ListView1KeyDown(Sender: TObject; var Key: Word;
      Shift: TShiftState);
    procedure ListView1KeyPress(Sender: TObject; var Key: Char);
  private
    { Private declarations }
    FCollection: TEasyCollection;
    FListview: TCustomEasyListview;
    FRebuilding: Boolean;
  protected
    procedure DoShow; override;
    procedure Rebuild;
    procedure Refresh;
    procedure HandleDelete;
    {$IFNDEF COMPILER_6_UP}
    function UniqueName(Component: TComponent): string; override;
    {$ENDIF}
  public
    { Public declarations }
    {$IFDEF COMPILER_6_UP}
    procedure DesignerClosed(const Designer: IDesigner; AGoingDormant: Boolean); override;
    procedure ItemDeleted(const ADesigner: IDesigner; Item: TPersistent); override;
    procedure ItemsModified(const Designer: IDesigner); override;
    {$ENDIF}

    {$IFNDEF COMPILER_6_UP}
    procedure ComponentDeleted(Component: IPersistent); override;
    procedure FormClosed(AForm: TCustomForm); override;
    procedure FormModified; override;
    {$ENDIF}

    property Collection: TEasyCollection read FCollection write FCollection;
    property Listview: TCustomEasyListview read FListview write FListview;
    property Rebuilding: Boolean read FRebuilding write FRebuilding;
  end;

  PFormRegRec = ^TFormRegRec;
  TFormRegRec = record
    Form: TForm;
    Collection: TEasyCollection;
    Listview: TCustomEasyListview;
  end;

  TEditorList = class
  private
    FFormList: TThreadList;
  protected
    property FormList: TThreadList read FFormList write FFormList;
  public
    constructor Create;
    destructor Destroy; override;
    function CollectionRegistered(Collection: TEasyCollection; var Form: TForm): Boolean;
    procedure ListviewDestroying(Listview: TCustomEasyListview; DestroyAll: Boolean = False);
    procedure RegisterEditor(Form: TForm; Collection: TEasyCollection; Listview: TCustomEasyListview);
    procedure UnRegister(Form: TForm; Collection: TEasyCollection);
  end;


  TEasyCollectionEditor = class(TPropertyEditor)
  public
    procedure Edit; override;
    function GetAttributes: TPropertyAttributes; override;
    function GetValue: string; override;
  end;

procedure ShowEasyCollectionEditor(ADesigner: {$IFDEF COMPILER_6_UP}IDesigner{$ELSE}IFormDesigner{$ENDIF}; ACollection: TEasyCollection);

var
  EditorList: TEditorList;

implementation

type
  TEasyCollectionItemHack = class(TEasyCollectionItem);

{$R *.dfm}
{$IFDEF COMPILER_4}

function GetObjectProp(Instance: TObject; PropInfo: PPropInfo): TObject;
begin
  Result := TObject(GetOrdProp(Instance, PropInfo));
end;

{$ENDIF}

{$IFDEF COMPILER_6_UP}
// To make the transition between D5's IPersistent and D6 and D7's TPersistent
function ExtractPersistent(Inst: TPersistent): TPersistent;
begin
  Result := Inst;
end;
{$ENDIF COMPILER_6_UP}

procedure ShowEasyCollectionEditor(ADesigner: {$IFDEF COMPILER_6_UP}IDesigner{$ELSE}IFormDesigner{$ENDIF}; ACollection: TEasyCollection);
var
  F: TForm;
  Selections: IDesignerSelections;
begin
  {$IFDEF COMPILER_6_UP}
  Selections := TDesignerSelections.Create;
  {$ELSE}
  Selections := CreateSelectionList;
  {$ENDIF COMPILER_6_UP}

  ADesigner.GetSelections(Selections);
  if Selections.Count = 1 then
  begin
    if (ExtractPersistent( Selections[0]) is TCustomEasyListview) or
      (ExtractPersistent( Selections[0]) is TEasyGroup) then
    begin
      if not EditorList.CollectionRegistered(ACollection, F) then
      begin
        F := TFormEasyCollectionEditor.Create(Application);
        TFormEasyCollectionEditor(F).Collection := ACollection;
        TFormEasyCollectionEditor(F).Designer := ADesigner;
        if (ExtractPersistent( Selections[0]) is TCustomEasyListview) then
        begin
          TFormEasyCollectionEditor(F).Listview := TCustomEasyListview( Selections[0]);
          EditorList.RegisterEditor(F, ACollection, TCustomEasyListview( Selections[0]))
        end else
        begin
          TFormEasyCollectionEditor(F).Listview := (TEasyGroup( Selections[0])).OwnerListview;
          EditorList.RegisterEditor(F, ACollection, (TEasyGroup( Selections[0])).OwnerListview);
        end;
        F.Show
      end else
      begin
        F.Show;
        SetForegroundWindow(F.Handle);
      end
    end
  end
end;

{ TEditorList }

constructor TEditorList.Create;
begin
  FormList := TThreadList.Create;
end;

destructor TEditorList.Destroy;
begin
  FormList.Free;
  inherited Destroy;
end;

function TEditorList.CollectionRegistered(Collection: TEasyCollection;
  var Form: TForm): Boolean;
var
  List: TList;
  i: Integer;
  RegRec: PFormRegRec;
begin
  Result := False;
  Form := nil;
  List := FormList.LockList;
  try
    i := 0;
    while (i < List.Count) and not Result do
    begin
      RegRec := PFormRegRec(List[i]);
      if RegRec.Collection = Collection then
      begin
        Form := RegRec.Form;
        Result := True;
      end;
      Inc(i)
    end
  finally
    FormList.UnLockList;
  end
end;

procedure TEditorList.ListviewDestroying(Listview: TCustomEasyListview; DestroyAll: Boolean = False);
var
  List: TList;
  i: Integer;
  RegRec: PFormRegRec;
begin
  List := FormList.LockList;
  try
    i := List.Count - 1;
    while (i > -1) do
    begin
      RegRec := PFormRegRec(List[i]);
      if (RegRec.Listview = Listview) or DestroyAll then
      begin
        RegRec.Form.Hide;
        RegRec.Form.Release;
        Dispose( PFormRegRec(List[i]));
        List.Delete(i)
      end;
      Dec(i)
    end
  finally
    FormList.UnLockList;
  end
end;


procedure TEditorList.RegisterEditor(Form: TForm; Collection: TEasyCollection;
  Listview: TCustomEasyListview);
var
  List: TList;
  RegRec: PFormRegRec;
begin
  List := FormList.LockList;
  try
    New(RegRec);
    RegRec.Form := Form;
    RegRec.Collection := Collection;
    RegRec.Listview := Listview;
    List.Add(RegRec);
  finally
    FormList.UnLockList;
  end
end;

procedure TEditorList.UnRegister(Form: TForm; Collection: TEasyCollection);
var
  List: TList;
  i: Integer;
  RegRec: PFormRegRec;
begin
  List := FormList.LockList;
  try
    i := List.Count - 1;
    while (i > -1) do
    begin
      RegRec := PFormRegRec(List[i]);
      if (RegRec.Form = Form) and (RegRec.Collection = Collection) then
      begin
        Dispose( PFormRegRec(List[i]));
        List.Delete(i)
      end;
      Dec(i)
    end
  finally
    FormList.UnLockList;
  end
end;

{ TEasyCollectionEditor }

function TEasyCollectionEditor.GetAttributes: TPropertyAttributes;
begin
  Result := [paDialog, paReadOnly{$IFDEF COMPILER_6_UP}, paVCL{$ENDIF COMPILER_6_UP}];
end;

function TEasyCollectionEditor.GetValue: string;
begin
  Result := 'TEasyCollection'
end;

procedure TEasyCollectionEditor.Edit;
begin
  // WL, 2006/01/22: extracted code to separate method to be able to show
  // the editor on listview doubleclick.
  ShowEasyCollectionEditor(
    Designer,
    TEasyCollection(GetObjectProp(GetComponent(0), GetPropInfo)));
end;

procedure TFormEasyCollectionEditor.FormClose(Sender: TObject;
  var Action: TCloseAction);
begin
  {$IFDEF COMPILER_5_UP}
  Designer.ClearSelection;
  {$ENDIF}
  EditorList.UnRegister(Self, Collection);
  Action := caFree
end;

{$IFNDEF COMPILER_6_UP}

procedure TFormEasyCollectionEditor.ComponentDeleted(Component: IPersistent);
begin
  inherited;
  if ExtractPersistent(Component) = Listview  then
    EditorList.ListviewDestroying(Listview);
end;

function TFormEasyCollectionEditor.UniqueName(Component: TComponent): string;
begin
  Result := Designer.UniqueName(Component.ClassName);
end;

procedure TFormEasyCollectionEditor.FormClosed(AForm: TCustomForm);
begin
  inherited;
  // D4 and D5 have bug in this somehow so destroy all the editor when any form
  // is closed.
  if Designer = Self.Designer then
    EditorList.ListviewDestroying(Listview, True);
end;

procedure TFormEasyCollectionEditor.FormModified;
begin
  Refresh;
end;

{$ENDIF}

{$IFDEF COMPILER_6_UP}

procedure TFormEasyCollectionEditor.DesignerClosed(const Designer: IDesigner;
  AGoingDormant: Boolean);
begin
  inherited;
  if Designer = Self.Designer then
    EditorList.ListviewDestroying(Listview);
end;

procedure TFormEasyCollectionEditor.ItemDeleted(const ADesigner: IDesigner;
  Item: TPersistent);
begin
  inherited;
  if Item = Listview  then
    EditorList.ListviewDestroying(Listview);
end;

procedure TFormEasyCollectionEditor.ItemsModified(const Designer: IDesigner);
begin
  Refresh;
end;

{$ENDIF}

procedure TFormEasyCollectionEditor.ActionNewItemExecute(Sender: TObject);
begin
  Collection.BeginUpdate(False);
  try
    Collection.Add
  finally
    Collection.EndUpdate(False);
    Rebuild;
    InvalidateRect(Collection.OwnerListview.Handle, nil, True);
  end
end;

procedure TFormEasyCollectionEditor.ActionDeleteItemExecute(
  Sender: TObject);
var
  i: Integer;
  SelIndex: Integer;
begin
  // We are deleting items that are selected in the Designer, clear this.
  Designer.SetSelections(nil);
  
  SelIndex := -1;
  Collection.BeginUpdate(True);
  try
    if Assigned(Listview1.Selected) then
      SelIndex := Listview1.Selected.Index;

    i := Listview1.Items.Count - 1;
    while i > -1 do
    begin
      if Listview1.Items[i].Selected then
        Collection.Delete(i);
      Dec(i)
    end
  finally
    Collection.EndUpdate(False);
    Rebuild;
    if (SelIndex > -1) and (Listview1.Items.Count > 0)  then
    begin
      if SelIndex < Listview1.Items.Count then
        Listview1.Items[SelIndex].Selected := True
      else
        Listview1.Items[Listview1.Items.Count - 1].Selected := True
    end;
  end
end;

procedure TFormEasyCollectionEditor.ActionUpItemExecute(Sender: TObject);
var
  SelIndex: Integer;
begin
  if Listview1.SelCount = 1 then
  begin
    SelIndex := Listview1.Selected.Index;
    if SelIndex > 0 then
    begin
      Collection.Exchange(SelIndex, SelIndex - 1);
      Rebuild;
      Dec(SelIndex);
      Listview1.Items[SelIndex].Selected := True;
    end
  end
end;

procedure TFormEasyCollectionEditor.ActionDownItemExecute(Sender: TObject);
var
  SelIndex: Integer;
begin
  if Listview1.SelCount = 1 then
  begin
    if Listview1.Selected.Index < Listview1.Items.Count - 1 then
    begin
      SelIndex := Listview1.Selected.Index;
      Collection.Exchange(SelIndex, SelIndex + 1);
      Rebuild;
      Inc(SelIndex);
      Listview1.Items[SelIndex].Selected := True;
    end
  end
end;

procedure TFormEasyCollectionEditor.Rebuild;
var
  i: Integer;
  Item: TListItem;
begin
  Rebuilding := True;
  Listview1.Items.BeginUpdate;
  try
    Listview1.Items.Clear;
    for i := 0 to Collection.Count - 1 do
    begin
      Item := Listview1.Items.Add;
      Item.Caption := TEasyCollectionItemHack(Collection.Items[i]).GetDisplayName;
    end
  finally
    Listview1.Items.EndUpdate;
    Rebuilding := False;
  end;
end;

procedure TFormEasyCollectionEditor.ListView1Resize(Sender: TObject);
begin
  Listview1.Columns[0].Width := Listview1.ClientWidth - 2
end;

procedure TFormEasyCollectionEditor.ListView1Change(Sender: TObject;
  Item: TListItem; Change: TItemChange);
var
  Selections: IDesignerSelections;
  i: Integer;
begin
  if not(csDestroying in ComponentState) then
  begin
    Statusbar1.Panels[0].Text := 'Selected: ' + IntToStr(Listview1.SelCount);
    if (Change = ctState) and not Rebuilding then
    begin
      if Listview1.SelCount = 0 then
        Designer.SelectComponent(Collection)
      else
      if Listview1.SelCount = 1 then
        Designer.SelectComponent(Collection.Items[Listview1.Selected.Index])
      else begin
        {$IFDEF COMPILER_6_UP}
        Selections := TDesignerSelections.Create;
        {$ELSE}
        Selections := CreateSelectionList;
        {$ENDIF COMPILER_6_UP}

        for i := 0 to Listview1.Items.Count - 1 do
        begin

          if Listview1.Items[i].Selected then
          begin
            {$IFDEF COMPILER_6_UP}
              Selections.Add( Collection.Items[i])
            {$ELSE}
              Selections.Add( MakeIPersistent(Collection.Items[i]))
            {$ENDIF COMPILER_6_UP}
          end
        end;
        Designer.SetSelections(Selections);
      end
    end;
    ActionDeleteItem.Enabled := Listview1.SelCount > 0;
    ActionUpItem.Enabled := Listview1.SelCount > 0;
    ActionDownItem.Enabled := Listview1.SelCount > 0;
  end
end;

procedure TFormEasyCollectionEditor.DoShow;
begin
  inherited;
  Rebuild;
end;

procedure TFormEasyCollectionEditor.ListView1KeyDown(Sender: TObject;
  var Key: Word; Shift: TShiftState);
begin
  if Key = VK_DELETE then
    ActionDeleteItemExecute(Self)
end;

procedure TFormEasyCollectionEditor.HandleDelete;
begin

end;

procedure TFormEasyCollectionEditor.ListView1KeyPress(Sender: TObject;
  var Key: Char);
begin
  {$IFDEF COMPILER_6_UP}
  Designer.ModalEdit(Key, Self);
  {$ENDIF}
end;

procedure TFormEasyCollectionEditor.Refresh;
var
  i: Integer;
begin
  if Collection.Count = Listview1.Items.Count then
  begin
    Rebuilding := True;
    Listview1.Items.BeginUpdate;
    try
      for i := 0 to Collection.Count - 1 do
      begin
        Listview1.Items[i].Caption := TEasyCollectionItemHack(Collection.Items[i]).GetDisplayName;
      end
    finally
      Listview1.Items.EndUpdate;
      Rebuilding := False;
    end;
  end else
    Rebuild;
  InvalidateRect(Collection.OwnerListview.Handle, nil, True);
end;

initialization
  EditorList := TEditorList.Create;

finalization
  EditorList.Free;

end.

 
