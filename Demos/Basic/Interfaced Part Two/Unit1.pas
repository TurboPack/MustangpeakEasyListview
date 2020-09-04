unit Unit1;

// Demo: connect your your existing data classes to list items and keep the
// data handling code in one place: in your data class.
//
// Interfaced Demo Part 2:
//
// This demo extends part 1 and shows some of the more "involved" features.
// If you did not look at part 1 already you should probably do that now
// to get a feeling for this way of connecting data and listview.
//
// In this demo:
//
// 1. How can the listview know when data changes, although the data does not
//    know the listview and vice versa?
//
// This is were IEasyNotifier comes into play. If your class is implementing
// this interface (two methods) the listitem will register itself with your
// data by providing an IEasyNotificationSink. This sink can be used to talk
// back to the listitem to have it repaint itself. Instead of long winded
// explanations, just start the demo and click on the "Be Silly" button which
// will trigger the data to change. Then see how IEasyNotifier and FNotifier
// is used in TEmployee in Unit2.
// Notice that Unit2 does not have any GUI accessing code, it is fully
// separated from its display (similar to the model-view-controller design
// pattern).
//
// 2. How can users edit captions and have the data changed?
//
// Enable editing in the listview's EditManager. In your data class implement
// IEasyCaptionsEditable which has only a SetCaption method. In this method
// verify that the input is ok and store it in your data fields. If the input
// is not ok, simply return false from this method and the listview will
// silently revert to the previous caption.
//
// 3. Sorting
//
// not implemented in ELV

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
  ExtCtrls,
  Unit2,
  MPCommonUtilities, MPCommonObjects;

type
  TForm1 = class(TForm)
    LV: TEasyListview;
    Panel1: TPanel;
    cbViews: TComboBox;
    Label1: TLabel;
    bBeSilly: TButton;
    procedure bBeSillyClick(Sender: TObject);
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
  LV.EditManager.Enabled := True; // allow editing
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

procedure TForm1.bBeSillyClick(Sender: TObject);
begin
  // This changes the name of a random employee. The listitem will be updated
  // automatically. Notice that this call could be anywhere in the application,
  // it does not need to be aware of the listview.
  FEmployees.BeSilly;
end;

end.

