unit Unit1;

// Demo: simplest way to use EasyListview (very similar to TListview)

interface

{$I ..\..\..\Source\Compilers.inc}

uses
  Windows,
  Messages,
  SysUtils,
  {$IFDEF COMPILER_6_UP}
  Variants,
  {$ENDIF COMPILER_6_UP}
  Classes,
  Graphics,
  Controls,
  Forms,
  Dialogs,
  EasyListview,
  StdCtrls,
  ExtCtrls,
  MPCommonObjects;

type
  TForm1 = class(TForm)
    LV: TEasyListview;
    Panel1: TPanel;
    cbViews: TComboBox;
    Label1: TLabel;
    procedure cbViewsChange(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    procedure AddColumns(Count: Integer);
    procedure AddItems(Count: Integer);
  end;

var
  Form1: TForm1;

implementation

uses DatamoduleImagelists, ImgList;

{$R *.dfm}

procedure TForm1.FormCreate(Sender: TObject);
begin
  FillStringsWithEasyListStyles(cbViews.Items);
  cbViews.ItemIndex := Ord(LV.View);

  // Set up listview. This can be done at design time in the object inspector.
  // It is done here so that you can see which properties are changed.
  Imagelists.UseImagesForListview(LV);
  LV.Header.Visible := True;
  AddColumns(2);

  // Add a few items to play with.
  AddItems(5000);
end;

procedure TForm1.cbViewsChange(Sender: TObject);
begin
  // Synchronize list style combobox with listview list style.
  LV.View := TEasyListStyle(cbViews.ItemIndex);
end;

procedure TForm1.AddColumns(Count: Integer);
var
  Column: TEasyColumn;
  i: Integer;
begin
  for i := 0 to Count - 1 do
  begin
    Column := LV.Header.Columns.Add;
    Column.Caption := 'Column ' + IntToStr(i);
    Column.ImageIndex := i;
    Column.Width := 150;
  end;
end;

procedure TForm1.AddItems(Count: Integer);
var
  i: Integer;
  Item: TEasyItem;
begin
  // Add items to the listview. Actually the items are added to the first
  // group. This group is created automatically when the first item is added.
  LV.BeginUpdate;
  try
    for i := 0 to Count - 1 do
    begin
      Item := LV.Items.Add;
      Item.Caption := 'Item ' + IntToStr(i); // this is the same as Item.Captions[0]
      Item.Captions[1] := 'Detail ' + IntToStr(i);
      Item.ImageIndex := i mod LV.ImagesSmall.Count;
      Item.Details[0] := 0; // Use Report Column 0 for the first Tile View Detail
      Item.Details[1] := 1; // Use Report Column 1 for the second Tile View Detail
    end;
  finally
    LV.EndUpdate;
  end;
end;

end.

