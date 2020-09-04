unit Unit1;

interface

uses
  Windows,
  Messages,
  SysUtils,
  Variants,
  Classes,
  Graphics,
  Controls,
  Forms,
  Dialogs,
  ImgList,
  EasyListview,
  StdCtrls,
  ExtCtrls,
  Menus, MPCommonObjects;

type
  TForm1 = class(TForm)
    ELV: TEasyListview;
    ImageListSmall: TImageList;
    ImageListLarge: TImageList;
    ImageListGroup: TImageList;
    Panel1: TPanel;
    cbViews: TComboBox;
    PopupMenuItem: TPopupMenu;
    PopupMenuGroup: TPopupMenu;
    PopupMenuColumn: TPopupMenu;
    ItemSelectetd1: TMenuItem;
    GroupSelected1: TMenuItem;
    ColumnSelected1: TMenuItem;
    PopupMenuGeneric: TPopupMenu;
    GenericPopup1: TMenuItem;
    CheckBoxSpecialItem: TCheckBox;
    CheckBoxSpecialGroup: TCheckBox;
    CheckBoxSpecialColumn: TCheckBox;
    PopupMenuHeaderBackground: TPopupMenu;
    HeaderBackgroundMenu1: TMenuItem;
    PopupMenuHeader: TPopupMenu;
    DefaultHeaderMenu1: TMenuItem;
    procedure FormShow(Sender: TObject);
    procedure cbViewsChange(Sender: TObject);
    procedure ELVColumnContextMenu(Sender: TCustomEasyListview;
      HitInfo: TEasyHitInfoColumn; WindowPoint: TPoint;
      var Menu: TPopupMenu);
    procedure ELVGroupContextMenu(Sender: TCustomEasyListview;
      HitInfo: TEasyHitInfoGroup; WindowPoint: TPoint;
      var Menu: TPopupMenu; var Handled: Boolean);
    procedure ELVItemContextMenu(Sender: TCustomEasyListview;
      HitInfo: TEasyHitInfoItem; WindowPoint: TPoint; var Menu: TPopupMenu;
      var Handled: Boolean);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.FormShow(Sender: TObject);
var
  i, j: Integer;
  Group: TEasyGroup;
  Column: TEasyColumn;
  Item: TEasyItem;
begin
  FillStringsWithEasyListStyles(cbViews.Items);
  cbViews.ItemIndex := Ord(ELV.View);

  ELV.BeginUpdate();
  try
    for i := 0 to 2 do
    begin
      Column := ELV.Header.Columns.Add();
      Column.Caption := 'Column: ' + IntToStr(i);
      Column.Width := 100;
    end;

    ELV.PaintInfoItem.TileDetailCount := 3;
    for i := 0 to 9 do
    begin
      Group := ELV.Groups.Add();
      Group.Caption := 'Group: ' + IntToStr(i);
      Group.ImageIndex := i mod ImageListGroup.Count;
      for j := 0 to Random(10) + 10 do
      begin
        Item := Group.Items.Add();
        Item.Caption := 'Item: ' + IntToStr(j);
        Item.ImageIndex := j mod ImageListSmall.Count;
        Item.Captions[1] := 'Detail 1';
        Item.Captions[2] := 'Detail 2';
        // Select which Column will supply the Detail in Tile view
        Item.Details[1] := 1;
        Item.Details[2] := 2;
      end
    end;
  finally
    ELV.ShowGroupMargins := True;
    ELV.EndUpdate();
  end
end;

procedure TForm1.cbViewsChange(Sender: TObject);
begin
  ELV.View := TEasyListStyle( cbViews.ItemIndex);
end;

procedure TForm1.ELVColumnContextMenu(Sender: TCustomEasyListview;
  HitInfo: TEasyHitInfoColumn; WindowPoint: TPoint; var Menu: TPopupMenu);
begin
  if CheckBoxSpecialColumn.Checked then
  begin
    if Assigned(HitInfo.Column) then
      Menu := PopupMenuColumn
    else
      Menu := PopupMenuHeaderBackground
  end
end;

procedure TForm1.ELVGroupContextMenu(Sender: TCustomEasyListview;
  HitInfo: TEasyHitInfoGroup; WindowPoint: TPoint; var Menu: TPopupMenu;
  var Handled: Boolean);
begin
  if CheckBoxSpecialGroup.Checked and (HitInfo.HitInfo <> []) then
    Menu := PopupMenuGroup
end;

procedure TForm1.ELVItemContextMenu(Sender: TCustomEasyListview;
  HitInfo: TEasyHitInfoItem; WindowPoint: TPoint; var Menu: TPopupMenu;
  var Handled: Boolean);
begin
  // Only show the Item menu if it is on the Icon or the Text
  if CheckBoxSpecialItem.Checked and (HitInfo.HitInfo * [ehtOnIcon, ehtOnText] <> []) then
    Menu := PopupMenuItem
end;

end.


