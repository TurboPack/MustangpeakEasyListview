unit Unit1;

interface

{$I ..\..\..\Source\Compilers.inc}

uses
  Windows,
  Messages,
  SysUtils,
  Classes,
  Graphics,
  Controls,
  Forms,
  Dialogs,
  StdCtrls,
  ImgList,
  ExtCtrls,
  ActiveX,
  ComCtrls,
  {$IFDEF COMPILER_6_UP}
  Variants,
  DateUtils,
  {$ENDIF COMPILER_6_UP}
  {$IFDEF COMPILER_7_UP}
  XPMan,
  {$ENDIF COMPILER_7_UP}
  EasyListview,
  MPCommonUtilities,
  MPCommonObjects;

const
  COLUMNSTRINGS: array[0..4] of WideString = (
    'Name',
    'Address',
    'Phone',
    'Contact',
    'ID'
  );
  COLUMNWIDTHS: array[0..4] of Integer = (
    120,
    180,
    90,
    90,
    40
  );

type
  //
  // First some data object is defined for the task
  //
  TBusinessType = (
    btIndividual,
    btCompany
  );

  // We are going to use reference counting for our objects by using
  // TEasyInterfacedPersistent as the ancestor. This class also implements
  // IEasyExtractObj which allows us to extract the TObject out of the interface
  // I know it is very un-COM like but most don't like to create a new interface
  // to do it right
  TBusinessObject = class(TEasyInterfacedPersistent)
  private
    FBusinessType: TBusinessType;
  public
    property BusinessType: TBusinessType read FBusinessType write FBusinessType;
  end;

  TCustomer = class(TBusinessObject)
  private
    FName: WideString;
    FAddress: WideString;
    FLastContact: TDateTime;
    FPhone: WideString;
    FRecordID: Integer;
  public
    constructor Create;
    destructor Destroy; override;

    property Address: WideString read FAddress write FAddress;
    property Name: WideString read FName write FName;
    property Phone: WideString read FPhone write FPhone;
    property LastContact: TDateTime read FLastContact write FLastContact;
    property RecordID: Integer read FRecordID write FRecordID;
  end;

  //
  // Now we "teach" it to interact with our EasyListview through interfaces
  // Currently the following interfaces are defined
  // IEasyCaptions
  // IEasyCaptionsEditable
  // IEasyImages
  // IEasyImagesEditable
  // IEasyChecks
  // IEasyCompareData
  // IEasyNotifier
  // IEasyExtractObj
  //

  // Our customer Data will need Editable captions but the Images are
  // hard coded and known by the class so we don't need to implement
  // IEasyImageEditable
  //
  // A little gotcha here.  We must also put IEasyCaptions which is
  // IEasyCaptionsEditable's ancestor.  If you don't a QueryInterface to
  // IEasyCaptions fails and ELV can't query for the Caption.
  TCustomerData = class(TCustomer, IEasyCaptions, IEasyCaptionsEditable, IEasyImages,
    IEasyNotifier, IEasyCompare, IEasyDetails, IEasyChecks)
  private
    FNotifier: IEasyNotificationSink;
    FChecked: Boolean;
    function GetDetail(Line: Integer): Integer;
    function GetDetailCount: Integer;
  public
    destructor Destroy; override;

    // IEasyNotifier
    procedure OnRegisterNotify(const ANotifier: IEasyNotificationSink);
    procedure OnUnRegisterNotify(const ANotifier: IEasyNotificationSink);
    // IEasyCaptions, IEasyCaptionsEditable
    function GetCaption(Column: Integer): Variant;
    function SetCaption(Column: Integer; const Value: Variant): Boolean;
    // IEasyImages
    function GetImageIndex(Column: Integer; ImageKind: TEasyImageKind): Integer;
    // IEasyCompareData
    function Compare(const Data: IUnknown; Column: TEasyColumn): Integer;
    // IEasyCaptions, IEasyCaptionsEditable
    function GetChecked(Column: Integer): Boolean;
    procedure SetChecked(Column: Integer; const Value: Boolean);

    property Captions[Column: Integer]: Variant read GetCaption;
    property Checked[Column: Integer]: Boolean read GetChecked write SetChecked;
    property Images[Column: Integer; ImageKind: TEasyImageKind]: Integer read GetImageIndex;
    property Detail[Line: Integer]: Integer read GetDetail;
    property DetailCount: Integer read GetDetailCount;

    property Notifier: IEasyNotificationSink read FNotifier write FNotifier;
  end;

type
  TForm1 = class(TForm)
    ImageListSmall: TImageList;
    Splitter1: TSplitter;
    Panel1: TPanel;
    Memo1: TMemo;
    ComboBox1: TComboBox;
    Button1: TButton;
    ImageListLarge: TImageList;
    ImageListExLarge: TImageList;
    ButtonAddCustomers: TButton;
    EditCustomerAddCount: TEdit;
    StatusBar1: TStatusBar;
    Button2: TButton;
    ButtonChangeCaption: TButton;
    ButtonLoadData: TButton;
    ELV: TEasyListview;
    CheckBoxAutoSort: TCheckBox;
    procedure ComboBox1Change(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure ButtonAddCustomersClick(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure ButtonChangeCaptionClick(Sender: TObject);
    procedure ButtonLoadDataClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure CheckBoxAutoSortClick(Sender: TObject);
  private
    { Private declarations }
    procedure AddCustomers(Count: Integer);
  public
    { Public declarations }
    RecordID: Integer;
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

{ TCustomer }

constructor TCustomer.Create;
begin
  LastContact := Now
end;

destructor TCustomer.Destroy;
begin
  inherited;
end;

{ TCustomerData }

function TCustomerData.Compare(const Data: IUnknown; Column: TEasyColumn): Integer;
var
  Customer: TCustomerData;
begin
  // Pull our object out of the interface
  Customer := TCustomerData( (Data as ICommonExtractObj).Obj);
  case Column.Index of
    0:   Result := WideStrIComp(PWideChar(Customer.Name), PWideChar( Name));
    1:   Result := WideStrIComp(PWideChar(Customer.Address), PWideChar( Address));
    2:   Result := WideStrIComp(PWideChar(Customer.Phone), PWideChar( Phone));
    3:   Result := CompareTime(Customer.LastContact, LastContact);
    4:   Result := Customer.RecordID - RecordID
  else
    Result := 0
  end;

  if Column.SortDirection = esdDescending then
    Result := -Result
end;

destructor TCustomerData.Destroy;
begin
  // Unhook from the EasyObject
  if Assigned(FNotifier) then
    Notifier.UnRegister;
  inherited;
end;

function TCustomerData.GetCaption(Column: Integer): Variant;
begin
  case Column of
    0:
      begin
        // Flag it if it is checked
        if FChecked then
          Result := Name + '**'
        else
          Result := Name
      end;
    1: Result := Address;
    2: Result := Phone;
    3: Result := LastContact;
    4: Result := RecordID;
  else
    // Empty the Variant
    Result := ''
  end;
end;

function TCustomerData.GetChecked(Column: Integer): Boolean;
begin
  if Column = 0 then
    Result := FChecked
  else
    Result := False
end;

function TCustomerData.GetDetail(Line: Integer): Integer;
begin
  Result := 0;
  case Line of
    0: Result := 0;  /// Main Column caption
    1: Result := 3;  /// Column 3 caption
    2: Result := 2;  /// Column 2 caption
  end
end;

function TCustomerData.GetDetailCount: Integer;
begin
  Result := 3
end;

function TCustomerData.GetImageIndex(Column: Integer; ImageKind: TEasyImageKind): Integer;
begin
  Result := -1;

  case ImageKind of
    eikNormal:
      begin
        if Column < 1 then
        begin
          case BusinessType of
            btIndividual: Result := 0;
            btCompany: Result := 1;
          end;
        end
      end;
    eikOverlay:
      begin
      end;
    eikState:
      begin
      end
  end
end;

procedure TCustomerData.OnRegisterNotify(const ANotifier: IEasyNotificationSink);
begin
  Notifier := ANotifier
end;

procedure TCustomerData.OnUnRegisterNotify(const ANotifier: IEasyNotificationSink);
begin
  Notifier := nil
end;

function TCustomerData.SetCaption(Column: Integer; const Value: Variant): Boolean;
begin
  Result := True;
  case Column of
    0: Name := Value;
    1: Address := Value;
    2: Phone := Value;
    3: LastContact := Value;
    4: RecordID := Value
  end
end;


procedure TCustomerData.SetChecked(Column: Integer; const Value: Boolean);
begin
  if Column = 0 then
  begin
    FChecked := Value;
    Notifier.InvalidateItem(True);
  end;
end;

{ TForm1 }

procedure TForm1.ComboBox1Change(Sender: TObject);
begin
  ELV.View := TEasyListStyle(ComboBox1.ItemIndex)
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
  AddCustomers(1);
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  ComboBox1.ItemIndex:= 0;
end;

procedure TForm1.ButtonAddCustomersClick(Sender: TObject);
begin
  AddCustomers(StrToInt(EditCustomerAddCount.Text));
end;

procedure TForm1.AddCustomers(Count: Integer);
var
  CustomerData: TCustomerData;
  Group: TEasyGroup;
  i: Integer;
  TickCount: Cardinal;
begin
  TickCount := GetTickCount;
  ELV.BeginUpdate;
  try
    if ELV.Groups.Count = 0 then
    begin
      Group := ELV.Groups.Add;
      Group.Caption := 'Group 1';
    end else
      Group := ELV.Groups[0];

    for i := 0 to Count -1 do
    begin
      CustomerData := TCustomerData.Create;
      CustomerData.BusinessType := TBusinessType( Random(2));
      CustomerData.Name := 'New Customer ' + IntToStr(RecordID);
      CustomerData.Address := '123 Elm St. Anytown USA, 99999';
      CustomerData.Phone := '102-555-7890';
      CustomerData.LastContact := Now;
      CustomerData.RecordID := RecordID;
      // Our Data object will freed automatically when the Item is freed
      // because it is decended from TInterfacedObject
      Group.Items.AddInterfaced(CustomerData);
      Inc(RecordID)
    end
  finally
    ELV.Sort.SortAll;
    ELV.EndUpdate;
    Statusbar1.Panels[0].Text := 'Elapsed Time: ' + IntToStr(GetTickCount - TickCount)
  end
end;

procedure TForm1.Button2Click(Sender: TObject);
var
  TickCount: Cardinal;
begin
  TickCount := GetTickCount;
  if ELV.Groups.Count > 0 then
    ELV.Groups.Clear;
  Statusbar1.Panels[0].Text := 'Elapsed Time: ' + IntToStr(GetTickCount - TickCount);
  RecordID := 0;
end;

procedure TForm1.ButtonChangeCaptionClick(Sender: TObject);
begin
{  if Assigned(LocalData) then
  begin
    LocalData.SetCaption(0, 'John Smith');
    LocalData.SetCaption(1, '4523 WayEasy Way, Coolssville USA, 45687');
    LocalData.SetCaption(2, '406-555-6913');
    LocalData.Notifier.InvalidateItem(True);
  end   }
end;

procedure TForm1.ButtonLoadDataClick(Sender: TObject);
var
  CustomerData: TCustomerData;
  Group: TEasyGroup;
  i: Integer;
  TickCount: Cardinal;
  S: TStringList;
begin
  S := TStringList.Create;
  S.LoadFromFile('Data.txt');
  TickCount := GetTickCount;
  ELV.BeginUpdate;
  try
    ELV.Groups.Clear;
    Group := ELV.Groups.Add;
    for i := 0 to (S.Count div 3) - 1 do
    begin
      CustomerData := TCustomerData.Create;
      CustomerData.BusinessType := TBusinessType( Random(2));
      CustomerData.Name := S[i*3];
      CustomerData.Address := S[i*3+1];
      CustomerData.Phone := S[i*3+2];
      CustomerData.LastContact := Now;
      CustomerData.RecordID := RecordID;
      // Our Data object will freed automatically when the Item is freed
      // because it is decended from TInterfacedObject
      Group.Items.AddInterfaced(CustomerData);
      Inc(RecordID)
    end
  finally
    ELV.EndUpdate;
    Statusbar1.Panels[0].Text := 'Elapsed Time: ' + IntToStr(GetTickCount - TickCount)
  end;
  S.Free
end;

procedure TForm1.FormShow(Sender: TObject);
var
  i: Integer;
  Column: TEasyColumn;
begin
  ComboBox1.ItemIndex := Integer(ELV.View);
  CheckBoxAutoSort.Checked := ELV.Sort.AutoSort;
  ELV.Header.Columns.Clear;
  for i := 0 to High(COLUMNSTRINGS) do
  begin
    Column := ELV.Header.Columns.Add;
    Column.Caption := COLUMNSTRINGS[i];
    Column.Width := COLUMNWIDTHS[i];
    Column.AutoToggleSortGlyph := True;
  end;
end;

procedure TForm1.CheckBoxAutoSortClick(Sender: TObject);
begin
  ELV.Sort.AutoSort := CheckBoxAutoSort.Checked
end;

end.
