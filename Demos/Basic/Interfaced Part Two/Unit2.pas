unit Unit2;

interface

uses
  SysUtils,
  Classes,
  Contnrs,
  Variants,
  StrUtils,
  EasyListview;

type
  TEmployee = class(TObject, // you could use any base class here
                    IInterface, // the list item can only be associated with an IInterface
                    IEasyCaptions, // implement only those interfaces you want to return data for
                    IEasyImages,
                    IEasyDetails,
                    IEasyNotifier,
                    IEasyCaptionsEditable,
                    IEasyCompare)
  private
    FFirstname: string;
    FImageIndex: Integer;
    FLastname: string;
    FNotifier: IEasyNotificationSink;
  protected
    // IUnknown: in this case we don't use reference counting (although we could)
    function _AddRef: Integer; stdcall;
    function _Release: Integer; stdcall;
    function QueryInterface(const IID: TGUID; out Obj): HResult; stdcall;
    // IEasyCaptions: provide captions for all columns and details for the tiled view
    function GetCaption(Column: Integer): Variant;
    // IEasyImages: provide imagelist indexes for normal, state and overlay images
    function GetImageIndex(Column: Integer; ImageKind: TEasyImageKind): Integer;
    // IEasyDetails: provide a few captions (columns) for the tiled view
    function GetDetail(Line: Integer): Integer;
    function GetDetailCount: Integer;
    // IEasyNotifier: report data changes back to the listitem
    procedure OnRegisterNotify(const ANotifier: IEasyNotificationSink);
    procedure OnUnRegisterNotify(const ANotifier: IEasyNotificationSink);
    // IEasyCaptionsEditable: accept edits from the listitem
    function SetCaption(Column: Integer; const Value: Variant): Boolean;
    // IEasyCompareData: compare data to allow listitem sorting
    function Compare(const Data: IUnknown; Column: TEasyColumn): Integer;
  public
    constructor Create(Lastname, Firstname: string; ImageIndex: Integer);
    destructor Destroy; override;
    procedure ToggleFunnyName;
    property Firstname: string read FFirstname;
    property Lastname: string read FLastname;
  end;

  TEmployees = class
  private
    FList: TObjectList;
    function GetCount: Integer;
    function GetEmployee(Index: Integer): TEmployee;
  public
    constructor Create;
    destructor Destroy; override;
    procedure BeSilly;
    procedure Load;
    property Count: Integer read GetCount;
    property Employees[Index: Integer]: TEmployee read GetEmployee; default;
  end;

implementation

{ TEmployee }

function TEmployee.Compare(const Data: IUnknown; Column: TEasyColumn): Integer;
begin
  Result := 0; // TODO
end;

constructor TEmployee.Create(Lastname, Firstname: string;
  ImageIndex: Integer);
begin
  inherited Create;
  FFirstname := Firstname;
  FLastname := Lastname;
  FImageIndex := ImageIndex;
end;

destructor TEmployee.Destroy;
begin
  inherited;
end;

function TEmployee.GetCaption(Column: Integer): Variant;
begin
  case Column of
    0: Result := Lastname;
    1: Result := Firstname;
  else
    Result := Null;
  end;
end;

function TEmployee.GetDetail(Line: Integer): Integer;
begin
  Result := Line;
end;

function TEmployee.GetDetailCount: Integer;
begin
  Result := 2;
end;

function TEmployee.GetImageIndex(Column: Integer;
  ImageKind: TEasyImageKind): Integer;
begin
  if (Column = 0) and (ImageKind = eikNormal) then
    Result := FImageIndex
  else
    Result := -1;
end;

procedure TEmployee.OnRegisterNotify(const ANotifier: IEasyNotificationSink);
begin
  // Remember this notifier because we will use it later to talk back to the
  // list item.
  FNotifier := ANotifier;
end;

procedure TEmployee.OnUnRegisterNotify(const ANotifier: IEasyNotificationSink);
begin
  // The list item will not be available anymore and we must forget its
  // then useless notifier.
  FNotifier := nil;
end;

function TEmployee.QueryInterface(const IID: TGUID; out Obj): HResult;
begin
  if GetInterface(IID, Obj) then
    Result := 0
  else
    Result := E_NOINTERFACE;
end;

function TEmployee.SetCaption(Column: Integer; const Value: Variant): Boolean;
var
  NewName: string;
begin
  // The caption of the given column has been edited. For this demo we
  // allow editing column 0 only.
  // You may check the input and reject it, e.g. if it does not have a suitable
  // format. Let's require a minimum length of 3 characters.
  NewName := Value;
  Result := (Column = 0) and (Length(NewName) >= 3);
  if Result then
    FLastname := NewName // will be invalidated automatically via IEasyCaptions
//  else
//    raise Exception.Create('name must have at least 3 characters');
end;

procedure TEmployee.ToggleFunnyName;
begin
  FLastname := ReverseString(FLastname);
  if FNotifier <> nil then
    FNotifier.InvalidateItem(True);
end;

function TEmployee._AddRef: Integer;
begin
  Result := -1;
end;

function TEmployee._Release: Integer;
begin
  Result := -1;
end;

{ TEmployees }

procedure TEmployees.BeSilly;
begin
  if Count > 0 then
    Employees[Random(Count)].ToggleFunnyName;
end;

constructor TEmployees.Create;
begin
  inherited Create;
  FList := TObjectList.Create;
end;

destructor TEmployees.Destroy;
begin
  FList.Free;
  inherited;
end;

function TEmployees.GetCount: Integer;
begin
  Result := FList.Count;
end;

function TEmployees.GetEmployee(Index: Integer): TEmployee;
begin
  Result := TEmployee(FList[Index]);
end;

procedure TEmployees.Load;
begin
  // We could load data from disk but for this demo it may suffice to have
  // some static data.
  FList.Clear;
  FList.Add(TEmployee.Create('Aniston', 'Jennifer', 0));
  FList.Add(TEmployee.Create('Carrey', 'Jim', 1));
  FList.Add(TEmployee.Create('Knightley', 'Keira', 2));
  FList.Add(TEmployee.Create('Lester', 'Adrian', 3));
  FList.Add(TEmployee.Create('Marceau', 'Sophie', 4));
  FList.Add(TEmployee.Create('Reno', 'Jean', 5));
end;

end.

