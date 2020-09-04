unit Unit1;

interface

{$WARN UNIT_PLATFORM OFF}

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms,
  Dialogs, EasyListview, ImgList, ExtCtrls,
  EasyScrollFrame, StdCtrls, FileCtrl, MPCommonUtilities, Jpeg,
  MPCommonObjects;

type
  TForm1 = class(TForm)
    Panel1: TPanel;
    EasyScrollButton2: TEasyScrollButton;
    EasyScrollButton3: TEasyScrollButton;
    EasyListview1: TEasyListview;
    Image1: TImage;
    Panel2: TPanel;
    Button1: TButton;
    Label1: TLabel;
    procedure EasyListview1ItemThumbnailDraw(Sender: TCustomEasyListview;
      Item: TEasyItem; ACanvas: TCanvas; ARect: TRect;
      AlphaBlender: TEasyAlphaBlender; var DoDefault: Boolean);
    procedure EasyScrollButton3Click(Sender: TObject);
    procedure EasyScrollButton2Click(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure EasyListview1ItemFreeing(Sender: TCustomEasyListview;
      Item: TEasyItem);
    procedure EasyListview1ItemSelectionChanged(
      Sender: TCustomEasyListview; Item: TEasyItem);
  private
    { Private declarations }
  public
    { Public declarations }
    Dir: String;
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

function IsImageFile(Filename: string): Boolean;
var
  Ext: string;
begin
  Ext := SysUtils.AnsiLowerCase(ExtractFileExt(Filename));
  Result := (Ext = '.jpg') or (Ext = '.jpeg') or (Ext = '.jif') or
    (Ext = '.bmp') or (Ext = '.wmf') or (Ext = '.emf') or (Ext = '.ico');
end;

procedure TForm1.EasyListview1ItemThumbnailDraw(
  Sender: TCustomEasyListview; Item: TEasyItem; ACanvas: TCanvas;
  ARect: TRect; AlphaBlender: TEasyAlphaBlender; var DoDefault: Boolean);
var
  Picture: TPicture;
  Bitmap: TBitmap;
  Stream: TMemoryStream;
begin
  Bitmap := TBitmap.Create;
  try
    // If the item doesn't have a thumbnail bitmap create one from the file
    if (Item.Tag = 0) and FileExists(Item.Captions[1]) then
    begin
      Stream := TMemoryStream.Create;
      Picture := TPicture.Create;
      try
        try
          Picture.LoadFromFile(Item.Captions[1]);
          Bitmap.Width := RectWidth(ARect);
          Bitmap.Height := RectHeight(ARect);
          Bitmap.Canvas.StretchDraw(Rect(0, 0, Bitmap.Width, Bitmap.Height), Picture.Graphic);
          Bitmap.SaveToStream(Stream);
          Item.Tag := Integer(Stream);
          Stream := nil;
        except
        end
      finally
        Stream.Free;
        Picture.Free;
      end
    end;

    // Paint the thumbnail
    if Item.Tag <> 0 then
    begin
      Stream := TMemoryStream(Item.Tag);
      Stream.Position := 0;
      Bitmap.LoadFromStream(Stream);
      ACanvas.Draw(ARect.Left, ARect.Top, Bitmap);
    end
  finally
    Bitmap.Free;
  end;
end;

procedure TForm1.EasyScrollButton3Click(Sender: TObject);
begin
  EasyListview1.Scrollbars.OffsetX := EasyListview1.Scrollbars.OffsetX + EasyListview1.CellSizes.Thumbnail.Width;
end;

procedure TForm1.EasyScrollButton2Click(Sender: TObject);
begin
  EasyListview1.Scrollbars.OffsetX := EasyListview1.Scrollbars.OffsetX - EasyListview1.CellSizes.Thumbnail.Width;
end;

procedure TForm1.Button1Click(Sender: TObject);

   procedure Add(Data: TWin32FindData);
   var
     Item: TEasyItem;
   begin
     if IsImageFile(Data.cFileName) then
     begin
       Item := EasyListview1.Items.Add();
       Item.Caption := ExtractFileName(Data.cFileName);
       Item.Captions[1] := Dir + '\' + Data.cFileName;
     end;
   end;

var
  FindData: TWin32FindData;
  FindHandle: THandle;
begin
  if SelectDirectory('Browse for Picture Folder', '', Dir) then
  begin
    EasyListview1.BeginUpdate;
    try
      EasyListview1.Items.Clear;
      FindHandle := FindFirstFile(PChar(Dir + '\*.*'), FindData);
      if FindHandle <> INVALID_HANDLE_VALUE then
      begin
        Add(FindData);
        while FindNextFile(FindHandle, FindData) do
          Add(FindData);
        Windows.FindClose(FindHandle);
      end
    finally
      EasyListview1.EndUpdate();
    end
  end
end;

procedure TForm1.EasyListview1ItemFreeing(Sender: TCustomEasyListview;
  Item: TEasyItem);
begin
  if Item.Tag <> 0 then
    TObject(Item.Tag).Free;
end;

procedure TForm1.EasyListview1ItemSelectionChanged(
  Sender: TCustomEasyListview; Item: TEasyItem);
begin
  if FileExists(Item.Captions[1]) then
    Image1.Picture.LoadFromFile(Item.Captions[1])
end;

end.
