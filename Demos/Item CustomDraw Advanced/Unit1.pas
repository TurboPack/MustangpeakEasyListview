unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, EasyListview, ImgList, StdCtrls, ExtCtrls, MPCommonUtilities,
  MPCommonObjects, uxTheme;

type
  TUserData = record
    FirstName,
    LastName,
    Email,
    Street,
    City,
    Country: WideString;
  end;

const
  COLUMNNAMES: array[0..4] of WideString = (
    'First Name',
    'Last Name',
    'Email',
    'Address',
    'Avator'
  );

  USERDATA: array[0..2] of TUserData = (
   (FirstName: 'Steve';
    LastName: 'Jeremy';
    Email: 'jeremy@bergsoft.net';
    Street: 'Long Street 33';
    City: 'Great City';
    Country: 'Far Far Away'),
   (FirstName: 'Julia';
    LastName: 'Miranda';
    Email: 'julia@bergsoft.net';
    Street: 'Long Street 33';
    City: 'Great City';
    Country: 'Far Far Away'),
    (FirstName: 'Bill';
    LastName: 'Jeremy';
    Email: 'jeremy@bergsoft.net';
    Street: 'Long Street 33';
    City: 'Great City';
    Country: 'Far Far Away')
  );

type
  TTestData = class
  private
    FAvatar: TBitmap;
    FCity: WideString;
    FCountry: WideString;
    FEMail: WideString;
    FFirstName: WideString;
    FLastName: WideString;
    FMailBoxSize: Integer;
    FStreet: WideString;
  public
    constructor Create;
    destructor Destroy; override;
    property Avatar: TBitmap read FAvatar write FAvatar;
    property City: WideString read FCity write FCity;
    property Country: WideString read FCountry write FCountry;
    property EMail: WideString read FEMail write FEMail;
    property FirstName: WideString read FFirstName write FFirstName;
    property LastName: WideString read FLastName write FLastName;
    property MailBoxSize: Integer read FMailBoxSize write FMailBoxSize;
    property Street: WideString read FStreet write FStreet;
  end;

type
  TForm1 = class(TForm)
    ELV: TEasyListview;  
    procedure FormShow(Sender: TObject);
    procedure ELVItemFreeing(Sender: TCustomEasyListview; Item: TEasyItem);
    procedure ELVPaintHeaderBkGnd(Sender: TCustomEasyListview;
      ACanvas: TCanvas; ARect: TRect; var Handled: Boolean);
    procedure ELVItemCustomView(Sender: TCustomEasyListview;
      Item: TEasyItem; ViewStyle: TEasyListStyle;
      var View: TEasyViewItemClass);
    procedure ELVColumnCustomView(Sender: TCustomEasyListview;
      Column: TEasyColumn; var View: TEasyViewColumnClass);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

  // There are lots of helpful methods in the descendents of TEasyViewReportItem for default drawing
  TCustomViewReportItem = class(TEasyViewReportItem)
  public
    function CalculateDisplayRect(Item: TEasyItem; Column: TEasyColumn): TRect; override;
    function ExpandTextR(Item: TEasyItem; RectArray: TEasyRectArrayObject; SelectType: TEasySelectHitType): TRect; override;
    function SelectionHit(Item: TEasyItem; SelectViewportRect: TRect; SelectType: TEasySelectHitType): Boolean; override;
    function SelectionHitPt(Item: TEasyItem; ViewportPoint: TPoint; SelectType: TEasySelectHitType): Boolean; override;
    procedure ItemRectArray(Item: TEasyItem; Column: TEasyColumn; ACanvas: TCanvas; const Caption: WideString; var RectArray: TEasyRectArrayObject); override;
    procedure PaintBefore(Item: TEasyItem; Column: TEasyColumn; const Caption: WideString; ACanvas: TCanvas; RectArray: TEasyRectArrayObject; var Handled: Boolean); override;
    procedure PaintText(Item: TEasyItem; Column: TEasyColumn; const Caption: WideString; RectArray: TEasyRectArrayObject; ACanvas: TCanvas; LinesToDraw: Integer); override;
  end;

  TCustomViewColumn = class(TEasyViewColumn)
  public
    procedure Paint(Column: TEasyColumn; ACanvas: TCanvas; HeaderType: TEasyHeaderType); override;
  end;

type
  TEasyHeaderHack = class(TEasyHeader);
  TEasyColumnHack = class(TEasyColumn); 

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.FormShow(Sender: TObject);
var
  i: Integer;
  Item: TEasyItem;
  TestData: TTestData;
begin
  ELV.BeginUpdate;
  try
    ELV.CellSizes.Report.Height := 100;
    ELV.Header.Columns.Clear;
    ELV.Header.Sizeable := False;
    ELV.Header.Draggable := False;
    for i := 0 to 2 do
    begin
      Item := ELV.Items.Add;
      TestData := TTestData.Create;
      TestData.FirstName := USERDATA[i].FirstName;
      TestData.LastName := USERDATA[i].LastName;
      TestData.Street := USERDATA[i].Street;
      TestData.City := USERDATA[i].City;
      TestData.Country := USERDATA[i].Country;
      TestData.Email := USERDATA[i].Email;
      TestData.MailBoxSize := 10 + Random(30) + Random(10);
      // Remeber to free this in the ItemFreeing event
      Item.Data := TestData;
    end;
    ELV.Header.FixedSingleColumn := True;
  finally
    ELV.EndUpdate();
  end
end;

procedure TForm1.ELVItemFreeing(Sender: TCustomEasyListview;
  Item: TEasyItem);
begin
  Item.Data.Free
end;

procedure TForm1.ELVPaintHeaderBkGnd(Sender: TCustomEasyListview;
  ACanvas: TCanvas; ARect: TRect; var Handled: Boolean);
begin
  Handled := True;
end;


{ TCustomViewColumn }
procedure TCustomViewColumn.Paint(Column: TEasyColumn; ACanvas: TCanvas; HeaderType: TEasyHeaderType);
var
  R: TRect;
  RectArray: TEasyRectArrayObject;
  Width, i: Integer;
  DrawTextFlags: TCommonDrawTextWFlags;
begin
  ItemRectArray(Column, RectArray);
  Width := RectWidth(RectArray.BoundsRect) div (High(COLUMNNAMES) + 1);
  R := RectArray.BoundsRect;
  R.Right := R.Left + Width;
  for i := 0 to High(COLUMNNAMES) do
  begin
    ACanvas.Brush.Color := clLtGray;
    ACanvas.FrameRect(R);
    LoadTextFont(Column, ACanvas);
    ACanvas.Brush.Color := clWhite;
    DrawTextFlags := [dtEndEllipsis, dtCenter, dtVCenter];
    DrawTextWEx(ACanvas.Handle, COLUMNNAMES[i], R, DrawTextFlags, 1);
    R.Left := R.Right - 1;
    R.Right := R.Right + Width;
  end
end;

{ TTestData }
constructor TTestData.Create;
begin
  Avatar := TBitmap.Create;
  Avatar.LoadFromFile('Donkey.bmp');
end;

destructor TTestData.Destroy;
begin
  Avatar.Free;
  inherited Destroy;
end;

{ TCustomViewReportItem }
function TCustomViewReportItem.CalculateDisplayRect(Item: TEasyItem; Column: TEasyColumn): TRect;
begin
  Result:= inherited CalculateDisplayRect(Item, Column);
end;

function TCustomViewReportItem.ExpandTextR(Item: TEasyItem; RectArray: TEasyRectArrayObject; SelectType: TEasySelectHitType): TRect;
begin
  // Anywhere in the Label Rect is a valid "Text" area
  Result := RectArray.LabelRect;
end;

function TCustomViewReportItem.SelectionHit(Item: TEasyItem; SelectViewportRect: TRect; SelectType: TEasySelectHitType): Boolean;
begin
  Result:= inherited SelectionHit(Item, SelectViewportRect, SelectType);
end;

function TCustomViewReportItem.SelectionHitPt(Item: TEasyItem; ViewportPoint: TPoint; SelectType: TEasySelectHitType): Boolean;
begin
  // Anywhere is a valid hit point
  Result:= True;
end;

procedure TCustomViewReportItem.ItemRectArray(Item: TEasyItem; Column: TEasyColumn; ACanvas: TCanvas; const Caption: WideString; var RectArray: TEasyRectArrayObject);
begin
  inherited ItemRectArray(Item, Column, ACanvas, Caption, RectArray);
  // The Text is the same as the Label
  RectArray.TextRect := RectArray.BoundsRect;
  RectArray.TextRect.Right := Item.OwnerListview.ClientWidth;
  InflateRect(RectArray.TextRect, -4, -4);
  InflateRect(RectArray.FullFocusSelRect, 2, 2);
  RectArray.FullFocusSelRect := RectArray.TextRect;
  RectArray.SelectionRect := RectArray.FullFocusSelRect;
  RectArray.FocusChangeInvalidRect := RectArray.FullFocusSelRect;

end;


procedure TCustomViewReportItem.PaintBefore(Item: TEasyItem; Column: TEasyColumn; const Caption: WideString; ACanvas: TCanvas; RectArray: TEasyRectArrayObject; var Handled: Boolean);
var
  R: TRect;
begin
  if Column.Index = 0 then
  begin
    R := RectArray.BoundsRect;
    R.Right := R.Left + TEasyListview( Item.OwnerListview).ClientWidth;
    R.Left := 0;
    if Item.Index mod 2 <> 0 then
    begin
      ACanvas.Brush.Color := RGB(191, 239, 254);
      ACanvas.FillRect(R);
    end;
  end
end;

procedure TCustomViewReportItem.PaintText(Item: TEasyItem; Column: TEasyColumn; const Caption: WideString; RectArray: TEasyRectArrayObject; ACanvas: TCanvas; LinesToDraw: Integer);
var
  R: TRect;
  DrawTextFlags: TCommonDrawTextWFlags;
  Hilight: Boolean;
  Size: TSize;
  MyData: TTestData;
  Header: TEasyHeaderHack;
  HeaderRight: Integer;
  Part, uState: DWORD;
begin
  if Column.Index = 0 then
  begin
    Header := TEasyHeaderHack( TEasyListview( Item.OwnerListview).Header);
    HeaderRight := TEasyColumnHack( Header.LastColumn).DisplayRect.Right;

    // This was set in the ItemRectArray override
    R := RectArray.TextRect;
    R.Right := HeaderRight;
    R.Left := R.Left + 4;
    Hilight := (Item.Selected or Item.Hilighted);
    MyData := TTestData( Item.Data);
    // Load the object inspector default font in a disabled mode
    LoadTextFont(Item, 0, ACanvas, Hilight);
    ACanvas.Font.Color := clGray;
    DrawTextFlags := [dtEndEllipsis, dtLeft, dtVCenter];
    Size := TextExtentW('User Name:', ACanvas);
    R.Bottom := R.Top + Size.cy;
    DrawTextWEx(ACanvas.Handle, 'User Name:', R, DrawTextFlags, 1);
    LoadTextFont(Item, 0, ACanvas, Hilight);
    Size := TextExtentW(MyData.LastName, ACanvas);
    R.Top := R.Bottom + 1;
    R.Bottom := R.Top + Size.cy;
    DrawTextWEx(ACanvas.Handle, MyData.LastName, R, DrawTextFlags, 1);
    Size := TextExtentW(MyData.FirstName, ACanvas);
    R.Top := R.Bottom + 1;
    R.Bottom := R.Top + Size.cy;
    DrawTextWEx(ACanvas.Handle, MyData.FirstName, R, DrawTextFlags, 1);
    R.Top := R.Bottom + 30;
    R.Bottom := R.Top + 10;
    R.Right := R.Left + 60;
    ACanvas.Brush.Color := clGray;
    ACanvas.FrameRect(R);
    InflateRect(R, -2, -2);
    R.Right := R.Left + MyData.MailBoxSize;
    if Item.Index mod 2 <> 0 then
      ACanvas.Brush.Color := clGreen
    else
      ACanvas.Brush.Color := RGB(191, 239, 254);
    ACanvas.Rectangle(R);

    R := RectArray.TextRect;
    R.Right := HeaderRight;
    R.Left := 150;
    // Load the object inspector default font in a disabled mode
    LoadTextFont(Item, 0, ACanvas, Hilight);
    if Item.Index mod 2 = 0 then
      ACanvas.Font.Color := RGB(202, 242, 255)
    else
      ACanvas.Font.Color := RGB(0, 143, 191);
    DrawTextFlags := [dtEndEllipsis, dtLeft, dtVCenter];
    Size := TextExtentW(MyData.EMail, ACanvas);
    R.Bottom := R.Top + Size.cy + 20;
    DrawTextWEx(ACanvas.Handle, MyData.EMail, R, DrawTextFlags, 1);

    if Item.Index mod 2 = 0 then
      LoadTextFont(Item, 0, ACanvas, Hilight);
    Size := TextExtentW(MyData.Street, ACanvas);
    R.Top := R.Bottom + 1;
    R.Bottom := R.Top + Size.cy;
    DrawTextWEx(ACanvas.Handle, MyData.Street, R, DrawTextFlags, 1);
    Size := TextExtentW(MyData.City, ACanvas);
    R.Top := R.Bottom + 1;
    R.Bottom := R.Top + Size.cy;
    DrawTextWEx(ACanvas.Handle, MyData.City, R, DrawTextFlags, 1);
    Size := TextExtentW(MyData.Country, ACanvas);
    R.Top := R.Bottom + 1;
    R.Bottom := R.Top + Size.cy;
    DrawTextWEx(ACanvas.Handle, MyData.Country, R, DrawTextFlags, 1);

    R := RectArray.TextRect;
    R.Right := HeaderRight;
    R.Left := 300;
    // Load the object inspector default font in a disabled mode
    LoadTextFont(Item, 0, ACanvas, Hilight);
    ACanvas.Font.Color := clGray;
    DrawTextFlags := [dtEndEllipsis, dtLeft, dtVCenter];
    Size := TextExtentW('Avatar:', ACanvas);
    R.Bottom := R.Top + Size.cy;
    DrawTextWEx(ACanvas.Handle, 'Avatar:', R, DrawTextFlags, 1);
    Size := TextExtentW('Avatar:', ACanvas);
    R.Top := R.Bottom + 1;
    R.Bottom := R.Top + Size.cy;
    ACanvas.Brush.Color := RGB(0, 143, 191);
    ACanvas.FrameRect(Rect(R.Left - 1, R.Top - 1, MyData.Avatar.Width + R.Left + 1, MyData.Avatar.Height + R.Top + 1));
  //  ACanvas.Draw(R.Left, R.Top, MyData.Avatar);

    R := Rect(R.Left, R.Top, R.Left + MyData.Avatar.Width, R.Top + MyData.Avatar.Height);
    InflateRect(R, -2, -2);
    if Item.OwnerListview.DrawWithThemes then
    begin
      if Item.State * [esosHotTracking] <> [] then
        uState := PBS_HOT
      else
      if Item.State * [esosClicking] <> [] then
        uState := PBS_PRESSED
      else
        uState := PBS_NORMAL;

      Part := BP_PUSHBUTTON;
      DrawThemeBackground(Item.OwnerListview.Themes.ButtonTheme, ACanvas.Handle,
        Part, uState, R, nil);
      GetThemeBackgroundContentRect(Item.OwnerListview.Themes.ButtonTheme, ACanvas.Handle, Part, uState, R, @R);
      DrawThemeText(Item.OwnerListview.Themes.ButtonTheme, ACanvas.Handle, Part, uState,
        'Push Me', Length('Push Me'), DT_CENTER or DT_SINGLELINE or DT_VCENTER, 0, R);
      Exit;
    end else
    begin
      ACanvas.Font.Color := clBlack;
      ACanvas.Brush.Color := clBtnFace;
      DrawFrameControl(ACanvas.Handle, R, DFC_BUTTON, DFCS_BUTTONPUSH	or DFCS_ADJUSTRECT);
      ACanvas.TextRect(R,
                       R.Left + ((R.Right-R.Left) - ACanvas.TextWidth('Push Me')) div 2,
                       R.Top + ((R.Bottom-R.Top) - ACanvas.TextHeight('Push Me')) div 2,
                       'Push Me');
    end;
 end
end;

procedure TForm1.ELVItemCustomView(Sender: TCustomEasyListview;
  Item: TEasyItem; ViewStyle: TEasyListStyle;
  var View: TEasyViewItemClass);
begin
  if ViewStyle = elsReport then
    View := TCustomViewReportItem
end;

procedure TForm1.ELVColumnCustomView(Sender: TCustomEasyListview;
  Column: TEasyColumn; var View: TEasyViewColumnClass);
begin
  View := TCustomViewColumn;
end;

end.

