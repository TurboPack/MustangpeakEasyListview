program VirtualProject;

uses
  Forms,
  Unit1 in 'Unit1.pas' {Form1},
  DatamoduleImagelists in '..\..\Shared Demo Data\DatamoduleImagelists.pas' {Imagelists: TDataModule};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TImagelists, Imagelists);
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.

