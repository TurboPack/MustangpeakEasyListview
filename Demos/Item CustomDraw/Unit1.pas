unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, EasyListview, ImgList, StdCtrls, ExtCtrls,
  MPCommonObjects;

type
  TForm1 = class(TForm)
    EasyListview1: TEasyListview;
    ImageList1: TImageList;
    Panel1: TPanel;
    CheckBoxFullWidth: TCheckBox;
    procedure FormShow(Sender: TObject);
    procedure CheckBoxFullWidthClick(Sender: TObject);
    procedure EasyListview1ItemCustomView(Sender: TCustomEasyListview;
      Item: TEasyItem; ViewStyle: TEasyListStyle;
      var View: TEasyViewItemClass);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

  TCustomViewReportItem = class(TEasyViewReportItem)
  public
    procedure PaintBefore(Item: TEasyItem; Column: TEasyColumn; const Caption: string; ACanvas: TCanvas; RectArray: TEasyRectArrayObject; var Handled: Boolean); override;
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

{ TCustomViewReportItem }
procedure TCustomViewReportItem.PaintBefore(Item: TEasyItem; Column: TEasyColumn; const Caption: string; ACanvas: TCanvas; RectArray: TEasyRectArrayObject; var Handled: Boolean);
var
  R: TRect;
begin
  inherited PaintBefore(Item, Column, Caption, ACanvas, RectArray, Handled);
  if Item.Index mod 2 = 0 then
  begin
    ACanvas.Brush.Color := clMoneyGreen;
    if Form1.CheckBoxFullWidth.Checked then
    begin
      R := TEasyListview(Item.OwnerListview).Scrollbars.MapViewRectToWindowRect(RectArray.BoundsRect);
      R.Right := Form1.ClientWidth;
      R := TEasyListview(Item.OwnerListview).Scrollbars.MapWindowRectToViewRect(R);
      ACanvas.FillRect(R);
    end else
      ACanvas.FillRect(RectArray.BoundsRect)
  end
end;

procedure TForm1.FormShow(Sender: TObject);
var
  i: Integer;
  Item: TEasyItem;
begin
  for i := 0 to 999 do
  begin
    ITem := EasyListview1.Items.Add;
    Item.Caption := 'Item: ' + IntToStr(i);
    Item.Captions[1] := 'Column 2';
    Item.ImageIndex := Item.Index mod ImageList1.Count;
  end;
end;

procedure TForm1.CheckBoxFullWidthClick(Sender: TObject);
begin
  EasyListview1.Invalidate
end;

procedure TForm1.EasyListview1ItemCustomView(Sender: TCustomEasyListview;
  Item: TEasyItem; ViewStyle: TEasyListStyle;
  var View: TEasyViewItemClass);
begin
  if ViewStyle = elsReport then
    View := TCustomViewReportItem
end;

end.
 
