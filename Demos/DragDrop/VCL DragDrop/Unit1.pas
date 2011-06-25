unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  ExtCtrls, StdCtrls, ActiveX, ImgList, MPCommonObjects, EasyListview;

type
  TForm1 = class(TForm)
    Panel1: TPanel;
    Label1: TLabel;
    Label2: TLabel;
    LabelDragItem: TLabel;
    LabelDraggingOverItem: TLabel;
    LabelDragDropItem: TLabel;
    LabelDragDroppedItem: TLabel;
    Splitter1: TSplitter;
    ImageList1: TImageList;
    Label3: TLabel;
    LabelTargetCC: TLabel;
    Label4: TLabel;
    LabelMousePosX: TLabel;
    LabelMousePosY: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    ELV1: TEasyListview;
    ELV2: TEasyListview;
    Splitter2: TSplitter;
    cbViews: TComboBox;
    CheckBoxMultiSelect: TCheckBox;
    CheckBoxHeader: TCheckBox;
    CheckBoxEnable: TCheckBox;
    procedure FormCreate(Sender: TObject);
    procedure ELV1DragDrop(Sender, Source: TObject; X, Y: Integer);
    procedure ELV1DragOver(Sender, Source: TObject; X, Y: Integer;
      State: TDragState; var Accept: Boolean);
    procedure ELV2DragOver(Sender, Source: TObject; X, Y: Integer;
      State: TDragState; var Accept: Boolean);
    procedure ELV2StartDrag(Sender: TObject; var DragObject: TDragObject);
    procedure ELV1StartDrag(Sender: TObject; var DragObject: TDragObject);
    procedure ELV2DragDrop(Sender, Source: TObject; X, Y: Integer);
    procedure cbViewsChange(Sender: TObject);
    procedure CheckBoxMultiSelectClick(Sender: TObject);
    procedure CheckBoxHeaderClick(Sender: TObject);
    procedure CheckBoxEnableClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.FormCreate(Sender: TObject);
var
  i: Integer;
  Item: TEasyCollectionItem;
  Group: TEasyCollectionItem;
begin
  cbViews.ItemIndex := 0;
  ELV1.BeginUpdate();
  ELV2.BeginUpdate();
  Group := ELV1.Groups.Add;
  Group.Caption := 'Group 1';
  for i := 0 to 99 do
  begin
    Item := ELV1.Groups[0].Items.Add;
    Item.Caption := 'Item: ' + IntToStr(Item.Index);
    Item.ImageIndex := 0;
  end;
  Group := ELV2.Groups.Add;
  Group.Caption := 'Group 2';
  for i := 0 to 99 do
  begin
    Item := ELV2.Groups[0].Items.Add;;
    Item.Caption := 'Item: ' + IntToStr(Item.Index);
    Item.ImageIndex := 1;
  end;
  ELV1.EndUpdate();
  ELV2.EndUpdate();
  Mouse.DragImmediate := False;
end;

procedure TForm1.ELV1DragDrop(Sender, Source: TObject; X, Y: Integer);
begin
  // Update the UI
  if Assigned(ELV1.DragManager.DropTarget) then
    LabelDragDroppedItem.Caption := IntToStr(ELV1.DragManager.DropTarget.Index)
  else
    LabelDragDroppedItem.Caption := '[Background]';
  LabelTargetCC.Caption := '[None]';
end;

procedure TForm1.ELV1DragOver(Sender, Source: TObject; X, Y: Integer;
  State: TDragState; var Accept: Boolean);
begin
  case State of
    dsDragMove:
      begin
         // Update the UI
         if Assigned(ELV1.DragManager.DropTarget) then
           LabelDraggingOverItem.Caption := IntToStr(ELV1.DragManager.DropTarget.Index)
         else
           LabelDraggingOverItem.Caption := '-1';
         LabelDragDroppedItem.Caption := '-1';
         LabelTargetCC.Caption := '1';
         LabelMousePosX.Caption := IntToStr(X);
         LabelMousePosY.Caption := IntToStr(Y);
         LabelDraggingOverItem.Update;
      end;
    dsDragLeave:
      begin
        LabelTargetCC.Caption := '[None]';
        LabelMousePosX.Caption := '-1';
        LabelMousePosY.Caption := '-1';
      end;
    dsDragEnter:
      begin
      end
    end;
end;

procedure TForm1.ELV2DragOver(Sender, Source: TObject; X, Y: Integer;
  State: TDragState; var Accept: Boolean);
begin
  case State of
    dsDragMove:
      begin
         // Update the UI
         if Assigned(ELV2.DragManager.DropTarget) then
           LabelDraggingOverItem.Caption := IntToStr(ELV2.DragManager.DropTarget.Index)
         else
           LabelDraggingOverItem.Caption := '-1';
         LabelDragDroppedItem.Caption := '-1';
         LabelTargetCC.Caption := '2';
         LabelMousePosX.Caption := IntToStr(X);
         LabelMousePosY.Caption := IntToStr(Y);
         LabelDraggingOverItem.Update;
      end;
    dsDragLeave:
      begin
        LabelTargetCC.Caption := '[None]';
        LabelMousePosX.Caption := '-1';
        LabelMousePosY.Caption := '-1';
      end;
    dsDragEnter:
      begin
      end
    end;
end;

procedure TForm1.ELV2StartDrag(Sender: TObject;
  var DragObject: TDragObject);
begin
  // Update the UI
  if Assigned(ELV2.DragManager.DragItem) then
    LabelDragItem.Caption := IntToStr(ELV2.DragManager.DragItem.Index)
  else
    LabelDraggingOverItem.Caption := '-1';
  LabelDragDroppedItem.Caption := IntToStr(-1);
  LabelDragItem.Update;
  LabelDragDroppedItem.Update;
end;

procedure TForm1.ELV1StartDrag(Sender: TObject;
  var DragObject: TDragObject);
begin
  // Update the UI
  if Assigned(ELV1.DragManager.DragItem) then
    LabelDragItem.Caption := IntToStr(ELV1.DragManager.DragItem.Index)
  else
    LabelDraggingOverItem.Caption := '-1';
  LabelDragDroppedItem.Caption := IntToStr(-1);
  LabelDragItem.Update;
  LabelDragDroppedItem.Update;
end;

procedure TForm1.ELV2DragDrop(Sender, Source: TObject; X, Y: Integer);
begin
  // Update the UI
  if Assigned(ELV2.DragManager.DropTarget) then
    LabelDragDroppedItem.Caption := IntToStr(ELV2.DragManager.DropTarget.Index)
  else
    LabelDragDroppedItem.Caption := '[Background]';

  LabelTargetCC.Caption := '[None]';
end;

procedure TForm1.cbViewsChange(Sender: TObject);
begin
  ELV1.View := TEasyListStyle(cbViews.ItemIndex);
  ELV2.View := TEasyListStyle(cbViews.ItemIndex);
end;

procedure TForm1.CheckBoxMultiSelectClick(Sender: TObject);
begin
  ELV1.Selection.MultiSelect := CheckBoxMultiSelect.Checked;
  ELV1.Selection.EnableDragSelect := CheckBoxMultiSelect.Checked;
  ELV2.Selection.MultiSelect := CheckBoxMultiSelect.Checked;
  ELV2.Selection.EnableDragSelect := CheckBoxMultiSelect.Checked;
end;

procedure TForm1.CheckBoxHeaderClick(Sender: TObject);
begin
  ELV1.Header.Visible := CheckBoxHeader.Checked;
  ELV2.Header.Visible := CheckBoxHeader.Checked;
end;

procedure TForm1.CheckBoxEnableClick(Sender: TObject);
begin
  ELV1.DragManager.Enabled := CheckBoxEnable.Checked;
  ELV2.DragManager.Enabled := CheckBoxEnable.Checked
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  FillStringsWithEasyListStyles(cbViews.Items);
  cbViews.ItemIndex := Ord(ELV1.View);
end;

end.
