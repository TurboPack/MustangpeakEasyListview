unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, MPCommonObjects, EasyListview, ImgList, MPThreadManager, MPCommonUtilities,
  ComCtrls, StdCtrls, ExtCtrls;

const
  ID_THUMBS = 1;

type
  TForm1 = class(TForm)
    EasyListview1: TEasyListview;
    ImageList1: TImageList;
    Panel1: TPanel;
    Button1: TButton;
    TrackBar1: TTrackBar;
    procedure FormShow(Sender: TObject);
    procedure EasyListview1ItemThumbnailDraw(Sender: TCustomEasyListview;
      Item: TEasyItem; ACanvas: TCanvas; ARect: TRect;
      AlphaBlender: TEasyAlphaBlender; var DoDefault: Boolean);
    procedure EasyListview1ItemInitialize(Sender: TCustomEasyListview;
      Item: TEasyItem);
    procedure EasyListview1ThreadCallBack(Sender: TCustomEasyListview;
      Msg: TWMThreadRequest);
    procedure TrackBar1Change(Sender: TObject);
    procedure Button1Click(Sender: TObject);
  private
    FLockoutRebuild: Boolean;
    { Private declarations }
  protected
    procedure AddItemThumbExtraction(Item: TEasyItem);
  public
    { Public declarations }
    procedure RebuildThumbs;
    property LockoutRebuild: Boolean read FLockoutRebuild write FLockoutRebuild;
  end;

  // Using built in Stored properites such as Caption and Image index
  // for the items so derive from TEasyItemStored, if using Virtual or
  // Interface derive from TEasyItemVirtual or TEasyItemInterfaced
  TMyItem = class(TEasyItemStored)
  private
    FExtracted: Boolean;
    FThumb: TBitmap;
  protected
    property Extracted: Boolean read FExtracted write FExtracted;
    property Thumb: TBitmap read FThumb write FThumb;
  public
    constructor Create(ACollection: TEasyCollection); override;
    destructor Destroy; override;
  end;

  TMyThreadRequest = class(TCommonThreadRequest)
  private
    FBkGndColor: TColor;
    FHeight: Integer;
    FImage: TBitmap;
    FWidth: Integer;
  public
    constructor Create; override;
    destructor Destroy; override;
    function HandleRequest: Boolean; override;
    procedure Assign(Source: TPersistent); override;
  
    property BkGndColor: TColor read FBkGndColor write FBkGndColor;
    property Height: Integer read FHeight write FHeight;
    property Image: TBitmap read FImage write FImage;
    property Width: Integer read FWidth write FWidth;
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

{ TMyThreadRequest }

constructor TMyThreadRequest.Create;
begin
  inherited Create;
  Image := TBitmap.Create;
end;

destructor TMyThreadRequest.Destroy;
begin
  FreeAndNil(FImage);
  inherited Destroy;
end;

function TMyThreadRequest.HandleRequest: Boolean;
var
  DC: HDC;
  R: TRect;
begin
  // Do the extraction here.... NOTICE this IS in the context of the thread so
  // think thread safety. If you have to access the form you will get into trouble.
  // Pass all the information you need here in the ThreadRequest object and you will
  // stay out of trouble

  // Make it slow to see the results better
  Sleep(200);

  DC := GetDC(0);
  if DC <> 0 then
  begin
    // VERY IMPORTANT to lock the canvas when used in a Thread!
    Image.Canvas.Lock;
    Image.Width := Width;
    Image.Height := Height;
    SystemParametersInfo(SPI_GETWORKAREA, 0, @R, 0);
    Image.Canvas.Brush.Color := BkGndColor;
    Image.Canvas.FillRect(Rect(0, 0, Width, Height));
    StretchBlt(Image.Canvas.Handle, 2, 2, Width - 4, Height - 4, DC, 0, 0, RectWidth(R), RectHeight(R), SRCCOPY);
    ReleaseDC(0, DC);
    Image.Canvas.UnLock;
    Result := True;
  end else
    Result := False; // Failed, try it again.
end;

procedure TMyThreadRequest.Assign(Source: TPersistent);
begin
  inherited;
  // YOU MUST IMPLEMENT THIS METHOD IF YOU ADD NEW PROPERITIES TO A REQUEST OR
  // IT WON'T WORK
  // Also this is called in the context of the thread so BE THREAD CAREFUL
  if Source is TMyThreadRequest then
  begin
    BkGndColor := TMyThreadRequest(Source).BkGndColor;
    Image.Assign( TMyThreadRequest(Source).Image);
    Width := TMyThreadRequest(Source).Width;
    Height := TMyThreadRequest(Source).Height;
  end
end;

{ TMyItem }

constructor TMyItem.Create(ACollection: TEasyCollection);
begin
  inherited Create(ACollection);
  Thumb := TBitmap.Create;
end;

destructor TMyItem.Destroy;
begin
  Thumb.Free;
  inherited Destroy;
end;

{ TForm1 }
procedure TForm1.AddItemThumbExtraction(Item: TEasyItem);
var
  Request: TMyThreadRequest;
begin
  Request := TMyThreadRequest.Create;
  Request.Item := Item;    // Save what Item this request is for
  Request.ID := ID_THUMBS; // Allows us to distinguish between user defined requests, here we call Thumbnails ID_THUMBS
  Request.Window := EasyListview1; // This MUST be set to the Listview as this is used to direct the messages back to the correct window
  Request.Width := RectWidth(Item.View.ItemRect(Item, nil, ertIcon)) - (2 * Item.Border);
  Request.Height := RectHeight(Item.View.ItemRect(Item, nil, ertIcon)) - (2 * Item.Border);
  Request.BkGndColor := clBlue;
  GlobalThreadManager.AddRequest(Request, True);
end;


procedure TForm1.FormShow(Sender: TObject);
var
  i: Integer;
  Item: TEasyItem;
begin
  for i := 0 to 9 do
  begin
    // Create my Custom Items
    Item := EasyListview1.Items.AddCustom(TMyItem, nil);
    Item.Caption := 'Item: ' + IntToStr(i);
    Item.ImageIndex := 0;
    if i = 0 then
    begin
      LockoutRebuild := True;
      if i = 0 then
        Trackbar1.Position := RectWidth( Item.View.ItemRect(Item, nil, ertIcon));
      LockoutRebuild := False;
    end
  end;

end;

procedure TForm1.EasyListview1ItemThumbnailDraw(
  Sender: TCustomEasyListview; Item: TEasyItem; ACanvas: TCanvas;
  ARect: TRect; AlphaBlender: TEasyAlphaBlender; var DoDefault: Boolean);
begin
  // If we have the thumbnail show it else let EasyListview draw the default
  if TMyItem( Item).Extracted then
  begin
    ACanvas.Draw(ARect.Left, ARect.Top, TMyItem( Item).Thumb);
    DoDefault := False
  end
end;

procedure TForm1.EasyListview1ItemInitialize(Sender: TCustomEasyListview; Item: TEasyItem);
begin
  AddItemThumbExtraction(Item);
end;

procedure TForm1.EasyListview1ThreadCallBack(Sender: TCustomEasyListview;
  Msg: TWMThreadRequest);
var
  Request: TMyThreadRequest;
  Item: TMyItem;
begin
  // Unpack the Request from the Structure
  Request := TMyThreadRequest(Msg.Request);
  Item := TMyItem( Request.Item);
  // Is it a Thumbnail Request?
  if Request.ID = ID_THUMBS then
  begin
    Item.Extracted := True;
    Item.Thumb.Assign(Request.Image);
    // Redraw it
    Item.Invalidate(True)
  end;
  Request.Release
end;

procedure TForm1.TrackBar1Change(Sender: TObject);
var
  Scale: Double;
begin
  Scale := EasyListview1.Groups[0].Grid.CellSize.Width/EasyListview1.Groups[0].Grid.CellSize.Height;
  EasyListview1.Groups[0].Grid.CellSize.Width := TrackBar1.Position;
  EasyListview1.Groups[0].Grid.CellSize.Height := Round(EasyListview1.Groups[0].Grid.CellSize.Width / Scale);
  RebuildThumbs
end;

procedure TForm1.RebuildThumbs;
var
  Item: TMyItem;
begin
  if not LockoutRebuild then
  begin
    // Remove any pending requests before reloading them
    GlobalThreadManager.FlushMessageCache(EasyListview1, ID_THUMBS);
    Item := TMyItem( EasyListview1.Groups.FirstItem);
    while Assigned(Item) do
    begin
      Item.Extracted := False;
      // Cause the Initialized event to be called again when the control needs the info
      Item.Initialized := False;
      Item := TMyItem( EasyListview1.Groups.NextItem(Item));
    end;
    EasyListview1.Invalidate;
  end
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
  RebuildThumbs
end;

end.
