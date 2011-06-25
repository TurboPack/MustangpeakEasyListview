unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, EasyListview, ImgList, ExtCtrls,
  EasyScrollFrame, StdCtrls, MPCommonObjects;

type
  TForm1 = class(TForm)
    EasyScrollButton2: TEasyScrollButton;
    EasyScrollButton3: TEasyScrollButton;
    EasyScrollButton1: TEasyScrollButton;
    EasyScrollButton4: TEasyScrollButton;
    CheckBoxThemed: TCheckBox;
    CheckBoxFlat: TCheckBox;
    CheckBoxAutoScroll: TCheckBox;
    CheckBoxEnabled: TCheckBox;
    procedure EasyScrollButton2Click(Sender: TObject);
    procedure CheckBoxThemedClick(Sender: TObject);
    procedure CheckBoxFlatClick(Sender: TObject);
    procedure CheckBoxAutoScrollClick(Sender: TObject);
    procedure CheckBoxEnabledClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.EasyScrollButton2Click(Sender: TObject); 
begin
  beep;
end;

procedure TForm1.CheckBoxThemedClick(Sender: TObject);
begin
  EasyScrollButton1.Themed := CheckBoxThemed.Checked;
  EasyScrollButton2.Themed := CheckBoxThemed.Checked;
  EasyScrollButton3.Themed := CheckBoxThemed.Checked;
  EasyScrollButton4.Themed := CheckBoxThemed.Checked;
end;

procedure TForm1.CheckBoxFlatClick(Sender: TObject);
begin
  EasyScrollButton1.Flat := CheckBoxFlat.Checked;
  EasyScrollButton2.Flat := CheckBoxFlat.Checked;
  EasyScrollButton3.Flat := CheckBoxFlat.Checked;
  EasyScrollButton4.Flat := CheckBoxFlat.Checked;
end;

procedure TForm1.CheckBoxAutoScrollClick(Sender: TObject);
begin
  EasyScrollButton1.AutoScroll := CheckBoxAutoScroll.Checked;
  EasyScrollButton2.AutoScroll := CheckBoxAutoScroll.Checked;
  EasyScrollButton3.AutoScroll := CheckBoxAutoScroll.Checked;
  EasyScrollButton4.AutoScroll := CheckBoxAutoScroll.Checked;
end;

procedure TForm1.CheckBoxEnabledClick(Sender: TObject);
begin
  EasyScrollButton1.Enabled := CheckBoxEnabled.Checked;
  EasyScrollButton2.Enabled := CheckBoxEnabled.Checked;
  EasyScrollButton3.Enabled := CheckBoxEnabled.Checked;
  EasyScrollButton4.Enabled := CheckBoxEnabled.Checked;
end;

end.
