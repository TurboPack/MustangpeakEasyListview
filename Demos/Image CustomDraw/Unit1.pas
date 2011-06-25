unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, EasyListview, StdCtrls, ExtCtrls, ImgList,
  MPCommonUtilities, ActiveX, MPCommonObjects;

type
  TForm1 = class(TForm)
    EasyListview1: TEasyListview;
    Panel1: TPanel;
    cbViews: TComboBox;
    ImageListSmall: TImageList;
    ImageListLarge: TImageList;
    ImageListExLarge: TImageList;
    Checkbox1: TCheckBox;
    ImageListGroups: TImageList;
    ImageListHeader: TImageList;
    procedure FormShow(Sender: TObject);
    procedure cbViewsChange(Sender: TObject);
    procedure CheckBox1Click(Sender: TObject);
    procedure EasyListview1ItemImageDrawIsCustom(
      Sender: TCustomEasyListview; Item: TEasyItem; Column: TEasyColumn;
      var IsCustom: Boolean);
    procedure EasyListview1ItemImageGetSize(Sender: TCustomEasyListview;
      Item: TEasyItem; Column: TEasyColumn; var ImageWidth,
      ImageHeight: Integer);
    procedure EasyListview1ColumnImageDrawIsCustom(
      Sender: TCustomEasyListview; Column: TEasyColumn;
      var IsCustom: Boolean);
    procedure EasyListview1ColumnImageGetSize(Sender: TCustomEasyListview;
      Column: TEasyColumn; var ImageWidth, ImageHeight: Integer); 
    procedure EasyListview1GroupImageDrawIsCustom(
      Sender: TCustomEasyListview; Group: TEasyGroup;
      var IsCustom: Boolean);
    procedure EasyListview1GroupImageGetSize(Sender: TCustomEasyListview;
      Group: TEasyGroup; var ImageWidth, ImageHeight: Integer);
    procedure EasyListview1OLEDragStart(Sender: TCustomEasyListview;
      ADataObject: IDataObject; var AvailableEffects: TCommonDropEffects;
      var AllowDrag: Boolean);
    procedure EasyListview1ColumnImageDraw(Sender: TCustomEasyListview;
      Column: TEasyColumn; ACanvas: TCanvas;
      const RectArray: TEasyRectArrayObject; AlphaBlender: TEasyAlphaBlender);
    procedure EasyListview1GroupImageDraw(Sender: TCustomEasyListview; Group: TEasyGroup; ACanvas: TCanvas; const RectArray: TEasyRectArrayObject; AlphaBlender: TEasyAlphaBlender);
    procedure EasyListview1ItemImageDraw(Sender: TCustomEasyListview; Item: TEasyItem; Column: TEasyColumn; ACanvas: TCanvas; const RectArray: TEasyRectArrayObject; AlphaBlender: TEasyAlphaBlender);
    procedure FormDestroy(Sender: TObject);
    procedure CheckBoxUseBitmapClick(Sender: TObject);
  private
    { Private declarations }
    FLargeCustomImage: TBitmap;
    FSmallCustomImage: TBitmap;
  public
    { Public declarations }
    procedure MapImageCustomImageSize(var ImageHeight, ImageWidth: Integer);
    property LargeCustomImage: TBitmap read FLargeCustomImage write FLargeCustomImage;
    property SmallCustomImage: TBitmap read FSmallCustomImage write FSmallCustomImage;
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.MapImageCustomImageSize(var ImageHeight,
  ImageWidth: Integer);
begin
  case EasyListview1.View of
    elsIcon:
      begin
        ImageWidth := 32;
        ImageHeight := 32;
      end;
    elsSmallIcon,
    elsList,
    elsReport,
    elsGrid:
      begin
        ImageWidth := 16;
        ImageHeight := 16;
      end;
    elsThumbnail,
    elsFilmStrip,
    elsTile:
      begin
        ImageWidth := 48;
        ImageHeight := 48;
      end;
  end;
end;

procedure TForm1.FormShow(Sender: TObject);
var
  i, j: Integer;
  Group: TEasyGroup;
  Item: TEasyItem;
  Column: TEasyColumn;
begin
  LargeCustomImage := TBitmap.Create;
  LargeCustomImage.LoadFromFile('XPSearch.bmp');
  SmallCustomImage := TBitmap.Create;
  SmallCustomImage.LoadFromFile('XPSearch_Small.bmp');
  FillStringsWithEasyListStyles(cbViews.Items);
  cbViews.ItemIndex := Ord(EasyListview1.View);
  for i := 0 to 10 do
  begin
    Group := EasyListview1.Groups.Add;
    Group.Caption := 'Group: ' + IntToStr(i);
    Group.ImageIndex := Random(ImageListGroups.Count);
    Group.Tag := Integer(Random(clWhite));
    for j := 0 to 10 do
    begin
      Item := Group.Items.Add;
      if j mod 3 = 0 then
        Item.Enabled := False;
      Item.Caption := 'Group: ' + IntToStr(i) + ' - Item: ' + IntToStr(j);
      Item.Captions[1] := 'Group: ' + IntToStr(i) + ' - Item: ' + IntToStr(j);
      Item.ImageIndex := Random(ImageListSmall.Count);
      Item.ImageIndexes[1] := Random(ImageListSmall.Count);
      Item.Tag := Integer(Random(clWhite));
    end
  end;
  for i := 0 to 1 do
  begin
    Column := EasyListview1.Header.Columns.Add;
    Column.Width := 150;
    Column.Caption := 'Column: ' + IntToStr(i);
    Column.ImageIndex := Random(ImageListHeader.Count);
    Column.Tag := Integer(Random(clWhite));
    Column.AutoToggleSortGlyph := True;
  end;
end;

procedure TForm1.cbViewsChange(Sender: TObject);
begin
  EasyListview1.View := TEasyListStyle(cbViews.ItemIndex)
end;

procedure TForm1.CheckBox1Click(Sender: TObject);
begin
  if not Checkbox1.Checked then
  begin
    EasyListview1.ImagesSmall := ImageListSmall;
    EasyListview1.ImagesLarge := ImageListLarge;
    EasyListview1.ImagesExLarge := ImageListExLarge;
    EasyListview1.ImagesGroup := ImageListGroups;
    EasyListview1.Header.Images := ImageListHeader;
  end else
  begin
    EasyListview1.ImagesSmall := nil;
    EasyListview1.ImagesLarge := nil;
    EasyListview1.ImagesExLarge := nil;
    EasyListview1.ImagesGroup := nil;
    EasyListview1.Header.Images := nil
  end
end;

procedure TForm1.EasyListview1ItemImageDrawIsCustom(
  Sender: TCustomEasyListview; Item: TEasyItem; Column: TEasyColumn;
  var IsCustom: Boolean);
begin
  IsCustom := Checkbox1.Checked
end;

procedure TForm1.EasyListview1ItemImageGetSize(Sender: TCustomEasyListview;
  Item: TEasyItem; Column: TEasyColumn; var ImageWidth,
  ImageHeight: Integer);
begin
  MapImageCustomImageSize(ImageWidth, ImageHeight)
end;

procedure TForm1.EasyListview1ColumnImageDrawIsCustom(
  Sender: TCustomEasyListview; Column: TEasyColumn; var IsCustom: Boolean);
begin
  IsCustom := Checkbox1.Checked
end;

procedure TForm1.EasyListview1ColumnImageGetSize(
  Sender: TCustomEasyListview; Column: TEasyColumn; var ImageWidth,
  ImageHeight: Integer);
begin
  ImageWidth := 16;
  ImageHeight := 16
end;

procedure TForm1.EasyListview1GroupImageDrawIsCustom(
  Sender: TCustomEasyListview; Group: TEasyGroup; var IsCustom: Boolean);
begin
  IsCustom := Checkbox1.Checked
end;

procedure TForm1.EasyListview1GroupImageGetSize(
  Sender: TCustomEasyListview; Group: TEasyGroup; var ImageWidth,
  ImageHeight: Integer);
begin
  ImageWidth := 16;
  ImageHeight := 16
end;

procedure TForm1.EasyListview1OLEDragStart(Sender: TCustomEasyListview;
  ADataObject: IDataObject; var AvailableEffects: TCommonDropEffects;
  var AllowDrag: Boolean);
begin
  AllowDrag := True;
end;


procedure TForm1.EasyListview1ColumnImageDraw(Sender: TCustomEasyListview;
  Column: TEasyColumn; ACanvas: TCanvas; const RectArray: TEasyRectArrayObject;
  AlphaBlender: TEasyAlphaBlender);
begin
  ACanvas.Brush.Color := TColor(Column.Tag);
  ACanvas.FillRect(RectArray.IconRect);
end;

procedure TForm1.EasyListview1GroupImageDraw(Sender: TCustomEasyListview; Group: TEasyGroup; ACanvas: TCanvas; const RectArray: TEasyRectArrayObject; AlphaBlender: TEasyAlphaBlender);
var
  H: Integer;
  R: TRect;
begin
  R := RectArray.IconRect;
  ACanvas.Brush.Color := TColor(Group.Tag);
  H := R.Bottom - R.Top;
  Inc(R.Top, (H - 16) div 2);
  Dec(R.Bottom, (H - 16) div 2);
  ACanvas.FillRect(R);
end;

procedure TForm1.EasyListview1ItemImageDraw(Sender: TCustomEasyListview; Item: TEasyItem; Column: TEasyColumn; ACanvas: TCanvas; const RectArray: TEasyRectArrayObject; AlphaBlender: TEasyAlphaBlender);
var
  Image: TBitmap;
begin
  if EasyListview1.View in [elsIcon, elsThumbnail, elsFilmStrip, elsTile] then
    Image := LargeCustomImage
  else begin
    Image := SmallCustomImage;
    Image.TransparentColor := clFuchsia;
    Image.TransparentMode := tmFixed;
  end;

  Image.Transparent := True;
  AlphaBlender.Blend(EasyListview1, Item, ACanvas, RectArray.IconRect, Image)
end;

procedure TForm1.FormDestroy(Sender: TObject);
begin
  SmallCustomImage.Free;
  LargeCustomImage.Free;
end;

procedure TForm1.CheckBoxUseBitmapClick(Sender: TObject);
begin
  EasyListview1.Invalidate;
end;

end.
