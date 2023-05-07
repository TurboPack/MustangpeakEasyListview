unit Unit1;

// Demo: use EasyListview with virtual data
//
// In this mode the listview does not store item captions, imageindexes etc but
// asks for them on the fly when it needs them, using one of the data callback
// events:
//   OnColumnGetCaption
//   OnColumnGetDetail
//   OnColumnGet...
//   OnGroupGetCaption
//   OnGroupGetDetail
//   OnGroupGet...
//   OnItemGetCaption
//   OnItemGetTileDetail
//   OnItemGet...
//
// This allows you to store the data anywhere you want. You can even reuse your
// existing data structures and simply use the listview as view into your data.

interface

uses
  Windows,
  Messages,
  SysUtils,
  Variants,
  Classes,
  Graphics,
  Controls,
  Forms,
  Dialogs,
  EasyListview,
  StdCtrls,
  ExtCtrls, MPCommonObjects;

type
  TForm1 = class(TForm)
    LV: TEasyListview;
    Panel1: TPanel;
    cbViews: TComboBox;
    Label1: TLabel;
    procedure LVItemGetImageIndex(Sender: TCustomEasyListview;
      const Item: TEasyItem; Column: Integer; ImageKind: TEasyImageKind;
      var ImageIndex: TCommonImageIndexInteger);
    procedure LVItemGetCaption(Sender: TCustomEasyListview;
      const Item: TEasyItem; Column: Integer; var Caption: string);
    procedure cbViewsChange(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure LVItemGetTileDetailCount(Sender: TCustomEasyListview;
      const Item: TEasyItem; var Count: Integer);
    procedure LVItemGetTileDetail(Sender: TCustomEasyListview;
      const Item: TEasyItem; Line: Integer; var Detail: Integer);
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
  // Columns can also be virtual and query their caption (etc) on the fly. It
  // works in the same way as with items. Here, the columns are static for
  // simplicity.
  LV.Header.Columns.Clear;   //Clear the first column if it exists
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
begin
  // Add items to the listview. Actually the items are added to the first
  // group. This group is created automatically when the first item is added.
  LV.BeginUpdate;
  try
    for i := 0 to Count - 1 do
      LV.Items.AddVirtual;
  finally
    LV.EndUpdate;
  end;
end;

procedure TForm1.LVItemGetCaption(Sender: TCustomEasyListview;
  const Item: TEasyItem; Column: Integer; var Caption: string);
begin
  case Column of
    0: Caption := 'Item ' + IntToStr(Item.Index);
    1: Caption := 'Detail ' + IntToStr(Item.Index);
  end;
end;

procedure TForm1.LVItemGetImageIndex(Sender: TCustomEasyListview;
  const Item: TEasyItem; Column: Integer; ImageKind: TEasyImageKind;
  var ImageIndex: TCommonImageIndexInteger);
begin
  if ImageKind = eikNormal then // important, make sure you don't return normal images for states or overlays
    ImageIndex := Item.Index mod LV.ImagesSmall.Count;
end;

procedure TForm1.LVItemGetTileDetailCount(Sender: TCustomEasyListview;
  const Item: TEasyItem; var Count: Integer);
begin
  Count := 2
end;

procedure TForm1.LVItemGetTileDetail(Sender: TCustomEasyListview;
  const Item: TEasyItem; Line: Integer; var Detail: Integer);
begin
  // Map the Detail to a Header Column index
  Detail := Line;
  if Detail > LV.Header.Columns.Count - 1 then
    Detail := 0
end;

end.

