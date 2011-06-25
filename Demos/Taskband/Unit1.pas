unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms,
  Dialogs, EasyListview, ExtCtrls, ImgList, StdCtrls,
  MPCommonObjects, MPCommonUtilities;

type
  TForm1 = class(TForm)
    EasyTaskBand1: TEasyTaskBand;
    Splitter1: TSplitter;
    Panel1: TPanel;
    ImageList1: TImageList;
    ImageList2: TImageList;
    Label1: TLabel;
    Label2: TLabel;
    CheckBoxSpecialGroup: TCheckBox;
    CheckBoxOneAtATime: TCheckBox;
    procedure EasyTaskBand1ItemHotTrack(Sender: TCustomEasyListview;
      Item: TEasyItem; State: TEasyHotTrackState; MousePos: TPoint);
    procedure EasyTaskBand1GroupHotTrack(Sender: TCustomEasyListview;
      Group: TEasyGroup; State: TEasyHotTrackState; MousePos: TPoint);
    procedure CheckBoxSpecialGroupClick(Sender: TObject);
    procedure EasyTaskBand1ItemFocusChanged(Sender: TCustomEasyListview;
      Item: TEasyItem);
    procedure EasyTaskBand1ItemClick(Sender: TCustomEasyListview;
      Item: TEasyItem; KeyStates: TCommonKeyStates;
      HitInfo: TEasyItemHitTestInfoSet);
    procedure EasyTaskBand1GroupExpand(Sender: TCustomEasyListview;
      Group: TEasyGroup);
    procedure EasyTaskBand1GroupCollapse(Sender: TCustomEasyListview;
      Group: TEasyGroup);
    procedure CheckBoxOneAtATimeClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.EasyTaskBand1ItemHotTrack(Sender: TCustomEasyListview;
  Item: TEasyItem; State: TEasyHotTrackState; MousePos: TPoint);
begin
  if State = ehsEnable then
    Label2.Caption := 'Item: ' + IntToStr(Item.Index) + '  HotTracking'
  else
    Label2.Caption := 'Item not HotTracking'   
end;

procedure TForm1.EasyTaskBand1GroupHotTrack(Sender: TCustomEasyListview;
  Group: TEasyGroup; State: TEasyHotTrackState; MousePos: TPoint);
begin
  if State = ehsEnable then
    Label1.Caption := 'Group: ' + IntToStr(Group.Index) + ' HotTracking'
  else
    Label1.Caption := 'Group not HotTracking'
end;

procedure TForm1.CheckBoxSpecialGroupClick(Sender: TObject);
begin
  if EasyTaskBand1.Groups.Count > 0 then
    EasyTaskBand1.Groups[0].Bold := CheckBoxSpecialGroup.Checked
end;

procedure TForm1.EasyTaskBand1ItemFocusChanged(Sender: TCustomEasyListview;
  Item: TEasyItem);
begin
  beep;
end;

procedure TForm1.EasyTaskBand1ItemClick(Sender: TCustomEasyListview;
  Item: TEasyItem; KeyStates: TCommonKeyStates;
  HitInfo: TEasyItemHitTestInfoSet);
begin
  ShowMessage('clicked');
end;

procedure TForm1.EasyTaskBand1GroupExpand(Sender: TCustomEasyListview;
  Group: TEasyGroup);
var
  I : Integer;
begin
 if CheckBoxOneAtATime.Checked then
  begin
  For I := 0 to EasyTaskBand1.Groups.Count - 1 do
    if EasyTaskBand1.Groups[I] <> Group then
      EasyTaskBand1.Groups[I].Expanded := False;
  Group.Bold := True;
  end;
  
  if Group.Items.Count > 0 then //<<<<< my code
  begin
    EasyTaskBand1.Selection.FocusedItem := Group.Items[0];
    EasyTaskBand1.Selection.FocusedItem.Bold := True;
  end

end;

procedure TForm1.EasyTaskBand1GroupCollapse(Sender: TCustomEasyListview;
  Group: TEasyGroup);
begin
  if CheckBoxOneAtATime.Checked then
    Group.Bold := False;
end;

procedure TForm1.CheckBoxOneAtATimeClick(Sender: TObject);
begin
  if CheckBoxOneAtATime.Checked then
    EasyTaskBand1.Groups.CollapseAll
end;

end.
