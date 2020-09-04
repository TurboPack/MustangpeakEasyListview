unit Unit2;

interface

uses
  SysUtils,
  Classes,
  Contnrs,
  Variants,
  EasyListview;

type
  TEmployee = class(TObject, // you could use any base class here
                    IInterface, // the list item can only be associated with an IInterface
                    IEasyCaptions, // implement only those interfaces you want to return data for
                    IEasyImages,
                    IEasyDetails)
  private
    FFirstname: string;
    FLastname: string;
    FImageIndex: Integer;
    // IUnknown: in this case we don't use reference counting (although we could)
    function _AddRef: Integer; stdcall;
    function _Release: Integer; stdcall;
    function QueryInterface(const IID: TGUID; out Obj): HResult; stdcall;
  protected
    function GetCaption(Column: Integer): Variant; // IEasyCaptions
    function GetImageIndex(Column: Integer; ImageKind: TEasyImageKind): Integer; // IEasyImages
    function GetDetail(Line: Integer): Integer; // IEasyDetails (for the tile view)
    function GetDetailCount: Integer; // IEasyDetails (for the tile view)
  public
    constructor Create(Firstname, Lastname: string; ImageIndex: Integer);
    destructor Destroy; override;
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
    procedure Load;
    property Count: Integer read GetCount;
    property Employees[Index: Integer]: TEmployee read GetEmployee; default;
  end;

implementation

{ TEmployee }

constructor TEmployee.Create(Firstname, Lastname: string;
  ImageIndex: Integer);
begin
  inherited Create;
  FFirstname := Firstname;
  FLastname := Lastname;
  FImageIndex := ImageIndex;
end;

destructor TEmployee.Destroy;
begin
  inherited Destroy;
end;

function TEmployee.GetCaption(Column: Integer): Variant;
begin
  case Column of
    0: Result := Firstname;
    1: Result := Lastname;
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

function TEmployee.QueryInterface(const IID: TGUID; out Obj): HResult;
begin
  if GetInterface(IID, Obj) then
    Result := 0
  else
    Result := E_NOINTERFACE;
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

