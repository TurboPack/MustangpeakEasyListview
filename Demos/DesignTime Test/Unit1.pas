unit Unit1;

interface

uses
  Windows,
  Messages,
  SysUtils,
  Classes,
  Graphics,
  Controls,
  Forms,
  Dialogs,
  MPCommonObjects,
  MPCommonUtilities,
  EasyListview,
  ImgList,
  StdCtrls,
  ExtCtrls,
  ActiveX;

type
  TForm1 = class(TForm)
    LV: TEasyListview;
    ImageListItemsSmall: TImageList;
    ImageListItemsLarge: TImageList;
    ImageListItemsExLarge: TImageList;
    ImageListGroups: TImageList;
    Panel1: TPanel;
    ComboBox1: TComboBox;
    ImageListColumns: TImageList;
    CheckBox1: TCheckBox;
    Button1: TButton;
    EasyListview1: TEasyListview;
    Button2: TButton;
    CheckBox2: TCheckBox;
    procedure ComboBox1Change(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure CheckBox1Click(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure CheckBox2Click(Sender: TObject);
    procedure LVOLEDragOver(Sender: TCustomEasyListview;
      KeyState: TCommonKeyStates; WindowPt: TPoint;
      AvailableEffects: TCommonDropEffects;
      var DesiredDropEffect: TCommonDropEffect);
    procedure LVOLEDragStart(Sender: TCustomEasyListview;
      ADataObject: IDataObject; var AvailableEffects: TCommonDropEffects;
      var AllowDrag: Boolean);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.ComboBox1Change(Sender: TObject);
begin
  LV.View := TEasyListStyle(ComboBox1.ItemIndex)
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  ComboBox1.ItemIndex := 0;
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  ComboBox1.ItemIndex := Integer(LV.View);
end;

procedure TForm1.CheckBox1Click(Sender: TObject);
begin
  LV.Selection.AlphaBlendSelRect := CheckBox1.Checked
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
  LV.Header.Columns[0].Position := 1;
end;

procedure TForm1.Button2Click(Sender: TObject);
var
  i: Integer;
begin
  for i := 0 to LV.Header.Columns.Count - 1 do
  begin
    if Integer(LV.Header.Columns[i].SortDirection) = 2 then
      LV.Header.Columns[i].SortDirection := esdNone
    else
      LV.Header.Columns[i].SortDirection := TEasySortDirection( Integer(LV.Header.Columns[i].SortDirection) + 1);
  end
end;

procedure TForm1.CheckBox2Click(Sender: TObject);
var
  i: Integer;
begin
  for i := 0 to LV.Header.Columns.Count - 1 do
    LV.Header.Columns[i].AutoToggleSortGlyph := CheckBox2.Checked
end;

procedure TForm1.LVOLEDragOver(Sender: TCustomEasyListview;
  KeyState: TCommonKeyStates; WindowPt: TPoint;
  AvailableEffects: TCommonDropEffects;
  var DesiredDropEffect: TCommonDropEffect);
begin
  DesiredDropEffect := cdeMove;
end;

procedure TForm1.LVOLEDragStart(Sender: TCustomEasyListview;
  ADataObject: IDataObject; var AvailableEffects: TCommonDropEffects;
  var AllowDrag: Boolean);
begin
  AllowDrag := True;
 AvailableEffects := [cdeMove]
end;

end.
