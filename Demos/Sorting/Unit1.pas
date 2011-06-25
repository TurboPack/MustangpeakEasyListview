unit Unit1;

// Demo: simplest way to use EasyListview (very similar to TListview)

interface

{$I ..\..\Source\Compilers.inc}

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
  DatamoduleImagelists,
  ImgList, MPCommonObjects;

const
  DetailType1Array: array[0..6] of WideString = (
    'Detail 1 Type 1',
    'Detail 1 Type 2',
    'Detail 1 Type 3',
    'Detail 1 Type 4',
    'Detail 1 Type 5',
    'Detail 1 Type 6',
    'Detail 1 Type 7'
  );

  DetailType2Array: array[0..4] of WideString = (
    'Detail 2 Type 1',
    'Detail 2 Type 2',
    'Detail 2 Type 3',
    'Detail 2 Type 4',
    'Detail 2 Type 5'
  );


type
  TForm1 = class(TForm)
    LV: TEasyListview;
    Panel1: TPanel;
    cbViews: TComboBox;
    Label1: TLabel;
    cAutosort: TCheckBox;
    cAutoGroup: TCheckBox;
    cbSort: TComboBox;
    Label2: TLabel;
    ButtonRebuild: TButton;
    EditItems: TEdit;
    LabelItems: TLabel;
    procedure cAutosortClick(Sender: TObject);
    procedure cbViewsChange(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure cAutoGroupClick(Sender: TObject);
    procedure LVAutoSortGroupCreate(Sender: TCustomEasyListview;
      Item: TEasyItem; ColumnIndex: Integer; Groups: TEasyGroups;
      var Group: TEasyGroup; var DoDefaultAction: Boolean);
    procedure ButtonRebuildClick(Sender: TObject);
    procedure LVAutoGroupGetKey(Sender: TCustomEasyListview;
      Item: TEasyItem; ColumnIndex: Integer; Groups: TEasyGroups;
      var Key: Cardinal);

  private
    function RandomString: string;
    procedure AddItems(Count: Integer);
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.FormCreate(Sender: TObject);
begin
  FillStringsWithEasyListStyles(cbViews.Items);
  cbViews.ItemIndex := Ord(LV.View);
  FillStringsWithEasySortAlgorithms(cbSort.Items);
  cbSort.ItemIndex := Ord(LV.Sort.Algorithm);
  Imagelists.UseImagesForListview(LV);
  cAutosort.Checked := LV.Sort.AutoSort;
  cAutoGroup.Checked := LV.Sort.AutoRegroup;
  AddItems(StrToInt(EditItems.Text));
end;

procedure TForm1.cbViewsChange(Sender: TObject);
begin
  LV.View := TEasyListStyle(cbViews.ItemIndex);
end;

procedure TForm1.AddItems(Count: Integer);
var
  i, j, RandomIndex: Integer;
  Item: TEasyItem;
begin
  LV.BeginUpdate;
  try
    LV.Items.Clear;
    for i := 0 to Count - 1 do
    begin
      Item := LV.Items.Add;
      Item.ImageIndex := i mod LV.ImagesSmall.Count;
      Item.Details[0] := 0;
      Item.Details[1] := 1;
      for j := 0 to LV.Header.Columns.Count - 1 do
      begin
        LV.Header.Columns[j].AutoSpring := True;
        Item.Captions[0] := RandomString;
        // Let ELV sort the first column with the first letter of the Caption (default)
        // So don't do anything with Item.GroupKey[0]

        RandomIndex := Random(Length(DetailType1Array));
        Item.Captions[1] := DetailType1Array[RandomIndex];
        Item.GroupKey[1] := RandomIndex;

        RandomIndex := Random(Length(DetailType2Array));
        Item.Captions[2] := DetailType2Array[RandomIndex];
        Item.GroupKey[2] := RandomIndex;

        // Invents some keys for groups of Detail numbers
        RandomIndex := Random(100);
        Item.Captions[3] := IntToStr(RandomIndex)
      end
    end;
  finally
    LV.EndUpdate;
  end;
end;

function TForm1.RandomString: string;
begin
  Result := '';
  while (Length(Result) < 5) or (Random < 0.3) do
    if Random < 0.65 then
      Result := Result + 'aeoui'[1 + Trunc(Random * 5)]
    else
      Result := Result + 'bcdfghjklmnpqrstvwxyz'[1 + Trunc(Random * 21)];
end;

procedure TForm1.cAutosortClick(Sender: TObject);
begin
  LV.Sort.AutoSort := cAutoSort.Checked;
end;

procedure TForm1.cAutoGroupClick(Sender: TObject);
begin
  LV.Sort.AutoRegroup := cAutoGroup.Checked;
end;


procedure TForm1.LVAutoSortGroupCreate(Sender: TCustomEasyListview;
  Item: TEasyItem; ColumnIndex: Integer; Groups: TEasyGroups;
  var Group: TEasyGroup; var DoDefaultAction: Boolean);
begin
  // Here we customize the Group that is created for the AutoGrouping
  if ColumnIndex = 3 then
  begin
    // Create a custom specialied TEasyGroup if desired, here we create a
    // basic stored group.
   Group := Groups.Add;

   case Item.GroupKey[ColumnIndex] of
      0: Group.Caption := 'Size is between 0 and 10';
      1: Group.Caption := 'Size is between 11 and 20';
      2: Group.Caption := 'Size is between 21 and 30';
      3: Group.Caption := 'Size is between 31 and 40';
      4: Group.Caption := 'Size is between 41 and 50';
      5: Group.Caption := 'Size is between 51 and 60';
      6: Group.Caption := 'Size is between 61 and 70';
      7: Group.Caption := 'Size is between 71 and 80';
      8: Group.Caption := 'Size is between 81 and 90';
      9: Group.Caption := 'Size is between 91 and 100';
    end;
    DoDefaultAction := False;
  end
end;

procedure TForm1.ButtonRebuildClick(Sender: TObject);
begin
  AddItems(StrToInt(EditItems.Text));
end;

procedure TForm1.LVAutoGroupGetKey(Sender: TCustomEasyListview;
  Item: TEasyItem; ColumnIndex: Integer; Groups: TEasyGroups;
  var Key: Cardinal);
begin
  // Custom Grouping if third column is pressed
  if ColumnIndex = 3 then
  begin
    case StrToInt(Item.Captions[3]) of
      0..10: Key := 0;
      11..20: Key := 1;
      21..30: Key := 2;
      31..40: Key := 3;
      41..50: Key := 4;
      51..60: Key := 5;
      61..70: Key := 6;
      71..80: Key := 7;
      81..90: Key := 8;
      91..100: Key := 9;
    end;
  end
end;

end.

