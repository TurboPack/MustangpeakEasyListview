unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ExtCtrls, EasyListview, Grids,
  MPCommonObjects;

type
  TForm1 = class(TForm)
    SG: TEasyListview;
    Panel1: TPanel;
    EditRows: TEdit;
    Label1: TLabel;
    EditColumns: TEdit;
    Label2: TLabel;
    Button1: TButton;
    Button2: TButton;
    CheckboxAllowOddEdits: TCheckBox;
    CheckBoxEnableEdit: TCheckBox;
    CheckBoxTabMoveFocus: TCheckBox;
    CheckBoxCustomDraw: TCheckBox;
    CheckBoxShowHeader: TCheckBox;
    CheckBoxShowFocusRect: TCheckBox;
    CheckBoxFullCellSelect: TCheckBox;
    procedure FormShow(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure SGItemImageDrawIsCustom(Sender: TCustomEasyListview;
      Item: TEasyItem; Column: TEasyColumn; var IsCustom: Boolean);
    procedure SGItemImageGetSize(Sender: TCustomEasyListview;
      Item: TEasyItem; Column: TEasyColumn; var ImageWidth,
      ImageHeight: Integer);
    procedure SGItemImageDraw(Sender: TCustomEasyListview; Item: TEasyItem;
      Column: TEasyColumn; ACanvas: TCanvas;
      const RectArray: TEasyRectArrayObject; AlphaBlender: TEasyAlphaBlender);
    procedure SGItemEditBegin(Sender: TCustomEasyListview; Item: TEasyItem;
      var Column: Integer; var Allow: Boolean);
    procedure CheckBoxEnableEditClick(Sender: TObject);
    procedure CheckBoxTabMoveFocusClick(Sender: TObject);
    procedure CheckBoxCustomDrawClick(Sender: TObject);
    procedure CheckBoxShowHeaderClick(Sender: TObject);
    procedure CheckBoxShowFocusRectClick(Sender: TObject);
    procedure CheckBoxFullCellSelectClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
    procedure LoadGrid;
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.LoadGrid;
var
  Item: TEasyItem;
  Column: TEasyColumn;
  i, ItemCount: Integer;
begin
  //
  // for better performance use VirtualItem by calling
  // Item := SG.Items.AddVirtual
  // then use the OnItemGetCaption event to return the caption on demand.
  //

  SG.BeginUpdate();
  SG.Header.Columns.Clear();
  SG.Items.Clear;
  try
    for i := 0 to StrToInt(EditColumns.Text) - 1 do
    begin
      Column := SG.Header.Columns.Add();
      Column.Width := 120;
      Column.Caption := 'Column: ' + IntToStr(i);
    end;
    ItemCount := StrToInt(EditColumns.Text) * StrToInt(EditRows.Text);
    for i := 0 to ItemCount - 1 do
    begin
      Item := SG.Items.Add();
      Item.Caption := 'Column: ' + IntToStr(i mod SG.Header.Columns.Count) + ' Row: ' + IntToStr(i div SG.Header.Columns.Count);
    end
  finally
    SG.EndUpdate();
  end
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  LoadGrid
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
  SG.Items.Clear;
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
  LoadGrid;
end;

procedure TForm1.SGItemImageDrawIsCustom(Sender: TCustomEasyListview;
  Item: TEasyItem; Column: TEasyColumn; var IsCustom: Boolean);
begin
  IsCustom := CheckBoxCustomDraw.Checked;
end;

procedure TForm1.SGItemImageGetSize(Sender: TCustomEasyListview;
  Item: TEasyItem; Column: TEasyColumn; var ImageWidth,
  ImageHeight: Integer);
begin
  ImageWidth := 1;
  ImageHeight := 1;

end;

procedure TForm1.SGItemImageDraw(Sender: TCustomEasyListview;
  Item: TEasyItem; Column: TEasyColumn; ACanvas: TCanvas;
  const RectArray: TEasyRectArrayObject; AlphaBlender: TEasyAlphaBlender);
var
  R: TRect;
begin
  if Item.Selected and Item.OwnerListview.Focused then
    ACanvas.Brush.Color := clHighLight
  else
    ACanvas.Brush.Color := clBtnFace;
  R := RectArray.BoundsRect;
  ACanvas.FillRect(RectArray.BoundsRect);
  DrawEdge(ACanvas.Handle, R, EDGE_RAISED, BF_RECT);

  ACanvas.Brush.Color := clBtnFace;
  ACanvas.FillRect(RectArray.BoundsRect);
  if Item.Selected then
    DrawEdge(ACanvas.Handle, R, EDGE_SUNKEN, BF_RECT)
  else
    DrawEdge(ACanvas.Handle, R, EDGE_RAISED, BF_RECT);
end;

procedure TForm1.SGItemEditBegin(Sender: TCustomEasyListview;
  Item: TEasyItem; var Column: Integer; var Allow: Boolean);
begin
  if CheckboxAllowOddEdits.Checked then
    Allow := Item.Index mod 2 = 0;
end;

procedure TForm1.CheckBoxEnableEditClick(Sender: TObject);
begin
  SG.EditManager.Enabled := CheckBoxEnableEdit.Checked;
end;

procedure TForm1.CheckBoxTabMoveFocusClick(Sender: TObject);
begin
  SG.EditManager.TabMoveFocus := CheckBoxTabMoveFocus.Checked;
end;

procedure TForm1.CheckBoxCustomDrawClick(Sender: TObject);
begin
  if CheckBoxCustomDraw.Checked then
    SG.Selection.TextColor := clBlack
  else
    SG.Selection.TextColor := clHighlight;
  SG.Invalidate
end;

procedure TForm1.CheckBoxShowHeaderClick(Sender: TObject);
begin
  SG.Header.Visible := CheckBoxShowHeader.Checked
end;

procedure TForm1.CheckBoxShowFocusRectClick(Sender: TObject);
begin
  SG.Selection.UseFocusRect := CheckBoxShowFocusRect.Checked
end;

procedure TForm1.CheckBoxFullCellSelectClick(Sender: TObject);
begin
  SG.Selection.FullCellPaint := CheckBoxFullCellSelect.Checked
end;

end.
