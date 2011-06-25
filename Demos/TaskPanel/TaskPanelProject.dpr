program TaskPanelProject;

uses
  Forms,
  Unit1 in 'Unit1.pas' {Form1},
  SearchPanel in 'SearchPanel.pas' {EasyTaskPanelFormSearch: TEasyTaskPanelForm},
  ReplacePanel in 'ReplacePanel.pas' {EasyTaskPanelFormReplace: TEasyTaskPanelForm};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
