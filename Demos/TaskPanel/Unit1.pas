unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms,
  Dialogs, MPCommonObjects, EasyListview, EasyTaskPanelForm,
  SearchPanel, ReplacePanel, StdCtrls, ImgList, ExtCtrls, XPMan;

type
  TForm1 = class(TForm)
    ImageList1: TImageList;
    EasyTaskPanelBand1: TEasyTaskPanelBand;
    Splitter1: TSplitter;
    Panel1: TPanel;
    XPManifest1: TXPManifest;
    procedure Button1Click(Sender: TObject);
    procedure EasyTaskPanelBand1TEasyGroupsTaskPanelTEasyGroupTaskPanelGetTaskPanel(
      Sender: TCustomEasyListview; Group: TEasyGroup;
      var TaskPanel: TEasyTaskPanelFormClass);
    procedure EasyTaskPanelBand1GetTaskPanel(Sender: TCustomEasyListview;
      Group: TEasyGroup; var TaskPanel: TEasyTaskPanelFormClass);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.Button1Click(Sender: TObject);
begin

//  EasyTaskPanelBand1.Groups[0].Panel := EasyTaskPanelFormSearch
end;

procedure TForm1.EasyTaskPanelBand1TEasyGroupsTaskPanelTEasyGroupTaskPanelGetTaskPanel(
  Sender: TCustomEasyListview; Group: TEasyGroup;
  var TaskPanel: TEasyTaskPanelFormClass);
begin
  TaskPanel := TEasyTaskPanelFormSearch
end;

procedure TForm1.EasyTaskPanelBand1GetTaskPanel(
  Sender: TCustomEasyListview; Group: TEasyGroup;
  var TaskPanel: TEasyTaskPanelFormClass);
begin
  case Group.Index of
    0: TaskPanel := TEasyTaskPanelFormSearch;
    1: TaskPanel := TEasyTaskPanelFormReplace;
  end
end;

end.
