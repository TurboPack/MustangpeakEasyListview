unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ExtCtrls, EasyListview,
  ActiveX, ShlObj, MPCommonUtilities, MPDataObject, ImgList,
  MPCommonObjects;

type
  TForm1 = class(TForm)
    EasyListview1: TEasyListview;
    Panel1: TPanel;
    Label1: TLabel;
    Label2: TLabel;
    cbViews: TComboBox;
    ImageListSmall: TImageList;
    ImageListLarge: TImageList;
    ImageListExLarge: TImageList;
    procedure EasyListview1OLEDragEnter(Sender: TCustomEasyListview;
      DataObject: IDataObject; KeyState: TCommonKeyStates; WindowPt: TPoint;
      AvailableEffects: TCommonDropEffects;
      var DesiredDropEffect: TCommonDropEffect);
    procedure EasyListview1OLEDragOver(Sender: TCustomEasyListview;
      KeyState: TCommonKeyStates; WindowPt: TPoint;
      AvailableEffects: TCommonDropEffects;
      var DesiredDropEffect: TCommonDropEffect);
    procedure EasyListview1OLEDragLeave(Sender: TCustomEasyListview);
    procedure cbViewsChange(Sender: TObject);
    procedure EasyListview1OLEDragStart(Sender: TCustomEasyListview;
      ADataObject: IDataObject; var AvailableEffects: TCommonDropEffects;
      var AllowDrag: Boolean);
    procedure EasyListview1OLEGetData(Sender: TCustomEasyListview;
      const FormatEtcIn: tagFORMATETC; var Medium: tagSTGMEDIUM;
      var Handled: Boolean);
    procedure EasyListview1OLEQueryData(Sender: TCustomEasyListview;
      const FormatEtcIn: tagFORMATETC; var FormatAvailable,
      Handled: Boolean);
    procedure FormShow(Sender: TObject);
    procedure EasyListview1OLEDragEnd(Sender: TCustomEasyListview;
      ADataObject: IDataObject; DragResult: TCommonOLEDragResult;
      ResultEffect: TCommonDropEffects; KeyStates: TCommonKeyStates);
    procedure EasyListview1OLEGetCustomFormats(Sender: TCustomEasyListview;
      dwDirection: Integer; var Formats: TFormatEtcArray);
    procedure EasyListview1OLEDragDrop(Sender: TCustomEasyListview;
      DataObject: IDataObject; KeyState: TCommonKeyStates;
      WindowPt: TPoint; AvailableEffects: TCommonDropEffects;
      var DesiredDropEffect: TCommonDropEffect; var Handled: Boolean);
  private
    { Private declarations }
  public
    { Public declarations }
    DataObj: IDataObject;

    function GetHDropFormat: TFormatEtc;
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

function TForm1.GetHDropFormat: TFormatEtc;
begin
Result.cfFormat := CF_HDROP; // This guy is always registered for all applications
  Result.ptd := nil;
  Result.dwAspect := DVASPECT_CONTENT;
  Result.lindex := -1;
  Result.tymed := TYMED_HGLOBAL
end;

//  **********************************************
//  Events to make the EasyListview a Drag TARGET
//  **********************************************

procedure TForm1.EasyListview1OLEDragEnter(Sender: TCustomEasyListview;
  DataObject: IDataObject; KeyState: TCommonKeyStates; WindowPt: TPoint;
  AvailableEffects: TCommonDropEffects;
  var DesiredDropEffect: TCommonDropEffect);
begin
  DataObj := DataObject;
  // See if the DataObject contains something we can deal with
  if Succeeded(DataObj.QueryGetData(GetHDropFormat)) then
    DesiredDropEffect := cdeCopy
  else
    DesiredDropEffect := cdeNone
end;

procedure TForm1.EasyListview1OLEDragOver(Sender: TCustomEasyListview;
  KeyState: TCommonKeyStates; WindowPt: TPoint;
  AvailableEffects: TCommonDropEffects;
  var DesiredDropEffect: TCommonDropEffect);
begin
  // See if the DataObject contains something we can deal with
  if Succeeded(DataObj.QueryGetData(GetHDropFormat)) then
    DesiredDropEffect := cdeCopy
  else
    DesiredDropEffect := cdeNone
end;

procedure TForm1.EasyListview1OLEDragLeave(Sender: TCustomEasyListview);
begin
  DataObj := nil;
end;

procedure TForm1.cbViewsChange(Sender: TObject);
begin
  EAsyListview1.View := TEasyListStyle(cbViews.ItemIndex)
end;

procedure TForm1.EasyListview1OLEGetData(Sender: TCustomEasyListview;
  const FormatEtcIn: tagFORMATETC; var Medium: tagSTGMEDIUM;
  var Handled: Boolean);
var
  HDrop: TCommonHDrop;
  i: Integer;
  List: TSTringList;
begin
  if FormatEtcIn.cfFormat = CF_HDROP then
  begin
    HDrop := TCommonHDrop.Create;
    List := TStringList.Create;
    try
      for i := 0 to EasyListview1.Items.Count - 1 do
        List.Add(EasyListview1.Items[i].Caption);
      HDrop.AssignFilesA(List);
      Medium.tymed := TYMED_HGLOBAL;
      Medium.stm := nil;
      Medium.stg := nil;
      Medium.hGlobal := HDrop.HDropStruct;
      Handled := True;
    finally
      List.Free;
      HDrop.Free
    end
  end
end;

//  **********************************************
//  Events to make the EasyListview a Drag SOURCE
//  **********************************************

procedure TForm1.EasyListview1OLEQueryData(Sender: TCustomEasyListview;
  const FormatEtcIn: tagFORMATETC; var FormatAvailable, Handled: Boolean);
begin
  if FormatEtcIn.cfFormat = CF_HDROP then
  begin
    FormatAvailable := True;
    Handled := True;
  end
end;

procedure TForm1.EasyListview1OLEDragStart(Sender: TCustomEasyListview;
  ADataObject: IDataObject; var AvailableEffects: TCommonDropEffects;
  var AllowDrag: Boolean);
begin
  AllowDrag := True;
  AvailableEffects := [cdeCopy, cdeMove, cdeLink]
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  FillStringsWithEasyListStyles(cbViews.Items);
  cbViews.ItemIndex := Ord(EasyListview1.View);
end;

procedure TForm1.EasyListview1OLEDragEnd(Sender: TCustomEasyListview;
  ADataObject: IDataObject; DragResult: TCommonOLEDragResult;
  ResultEffect: TCommonDropEffects; KeyStates: TCommonKeyStates);
begin
  DataObj := nil;
end;

procedure TForm1.EasyListview1OLEGetCustomFormats(
  Sender: TCustomEasyListview; dwDirection: Integer;
  var Formats: TFormatEtcArray);
begin
  SetLength(Formats, Length(Formats) + 1);
  Formats[Length(Formats)-1] := GetHDropFormat;
end;

procedure TForm1.EasyListview1OLEDragDrop(Sender: TCustomEasyListview;
  DataObject: IDataObject; KeyState: TCommonKeyStates; WindowPt: TPoint;
  AvailableEffects: TCommonDropEffects;
  var DesiredDropEffect: TCommonDropEffect; var Handled: Boolean);
var
  HDrop: TCommonHDrop;
  Item: TEasyItem;
  Column: TEasyColumn;
  i: Integer;
begin
  DesiredDropEffect := cdeNone;
  // See if the DataObject contains something we can deal with
  if Succeeded(DataObj.QueryGetData(GetHDropFormat)) then
  begin
    HDrop := TCommonHDrop.Create;
    try
      if HDrop.LoadFromDataObject(DataObject) then
      begin
        EasyListview1.Items.Clear;
        Column := EasyListview1.Header.Columns.Add;
        Column.Width := 300;
        Column.Caption := 'Filename';
        for i := 0 to HDrop.FileCount - 1 do
        begin
          Item := EasyListview1.Items.Add;
          Item.Caption := HDrop.FileName(i);
          if DirectoryExists(Item.Caption) then
            Item.ImageIndex := 0
          else
            Item.ImageIndex := 1     
        end;
        DesiredDropEffect := cdeCopy;
      end
    finally
      HDrop.Free
    end
  end
end;

end.
