unit Unit2;

interface

uses
  SysUtils, EasyListview, DatamoduleImagelists, MPCommonObjects;

type
  // Example custom item class. Derive from any of the item classes,
  // TEasyItemStored, TEasyItemVirtual or TEasyItemInterfaced and override
  // methods as needed. You can add any properties and fields to the item
  // class.
  // You may also derive from TEasyItem but then you will have to override
  // a lot more abstract methods.
  TMyEasyItem = class(TEasyItemVirtual)
  protected
    function GetCaptions(Column: Integer): WideString; override;
    function GetDetailCount: Integer; override;
    function GetDetails(Line: Integer): Integer; override;
    function GetImageIndexes(Column: Integer): TCommonImageIndexInteger; override;
  end;

implementation

{ TMyEasyItem }

function TMyEasyItem.GetCaptions(Column: Integer): WideString;
begin
  if Column = 0 then
    Result := 'Item ' + IntToStr(Index)
  else
    Result := 'Detail ' + IntToStr(Index);
end;

function TMyEasyItem.GetDetailCount: Integer;
begin
  Result := 2;
end;

function TMyEasyItem.GetDetails(Line: Integer): Integer;
begin
  Result := Line;
end;

function TMyEasyItem.GetImageIndexes(Column: Integer): TCommonImageIndexInteger;
begin
  if Column = 0 then
    Result := Index mod Imagelists.ImageListSmall.Count
  else
    Result := -1;
end;

end.

