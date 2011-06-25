unit Unit1;

// Demo: connect your your existing data classes to list items and keep the
// data handling code in one place: in your data class.
//
// This is part 1 of the interface demo which shows the basic usage.
//
// If you have a non-trivial application you probably also have some data
// classes, business objects, etc. How can you display aspects of this data
// without spreading data access code all over your different forms units?
//
// Let the data talk about itself and the associated list item will listen.
// Implement one or more of the following interfaces in your class:
//   IEasyCaptions          // Returns Captions for the control
//   IEasyCaptionsEditable  // Sets Captions in the data from the Control
//   IEasyImages            // Returns Images for the control
//   IEasyImagesEditable    // Sets Images in the data from the Control
//   IEasyThumbnail         // Returns Thumbnail for the control
//   IEasyThumbnailEditable // Sets Thumbnail in the data from the Control
//   IEasyChecks            // Sets/Unsets the Checkbox State for the control
//   IEasyNotifier          // Returns an Inteterface to allow data to notify Control of changes in the data
//   IEasyCompareData       // Allows sorting of the data set
//
// They are all optional but usually you will want to implement at least
// IEasyCaptions (otherwise you won't have text on your listitems).
// Don't worry, the interfaces are all light weight, with only one or two
// methods.
// (We could have put all these methods into a single interface - but then
// you would have to implement 10 methods everytime. Even if you don't
// have thumbnails or don't need checkboxes...)
//
// Note the IEasyXXXEditable interfaces. If your data is readonly from the
// listview, in other words the user should not be able to edit captions etc,
// you don't need these. Otherwise, implement IEasyCaptionsEditable and your
// data class will be notified once the user has edited a listitem's caption
// and it may store the new caption in any way it wants to.
// Of course even if you don't want to have the data editable it can still
// change and the change can be reflected in the listitem.
//
// Editing and other things are demonstrated in the second part of this demo
// in the "Interfaced Part 2" demo folder.

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
  Unit2,
  MPCommonObjects;

type
  TForm1 = class(TForm)
    LV: TEasyListview;
    Panel1: TPanel;
    cbViews: TComboBox;
    Label1: TLabel;
    procedure FormDestroy(Sender: TObject);
    procedure cbViewsChange(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    FEmployees: TEmployees;
    procedure AddColumns(Count: Integer);
    procedure AddEmployees;
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
  FEmployees := TEmployees.Create;
  FEmployees.Load;
  AddEmployees;
end;

procedure TForm1.FormDestroy(Sender: TObject);
begin
  // This is very important to do before freeing the employees
  LV.Groups.Clear;
  FEmployees.Free;
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

procedure TForm1.AddEmployees;
var
  i: Integer;
begin
  // Add items to the listview. Actually the items are added to the first
  // group. This group is created automatically when the first item is added.
  LV.BeginUpdate;
  try
    for i := 0 to FEmployees.Count - 1 do
      LV.Items.AddInterfaced(FEmployees[i]);
  finally
    LV.EndUpdate;
  end;
end;

end.

