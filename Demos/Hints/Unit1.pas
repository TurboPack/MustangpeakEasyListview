unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ExtCtrls, ImgList,
  EasyListview, MPCommonUtilities, MPCommonObjects;

type
  TForm1 = class(TForm)
    Panel1: TPanel;
    ImageList1: TImageList;
    ImageList2: TImageList;
    Splitter1: TSplitter;
    RadioGroupHintType: TRadioGroup;
    CheckBoxAllowOnItemsOnly: TCheckBox;
    cbViews: TComboBox;
    CheckBoxCustomizeText: TCheckBox;
    Label1: TLabel;
    VCLv: TEasyListview;
    EditPauseDelayTime: TEdit;
    Label2: TLabel;
    Label3: TLabel;
    CheckBoxHeader: TCheckBox;
    procedure FormCreate(Sender: TObject);
    procedure InvalidateCLVClick(Sender: TObject);
    procedure RadioGroupHintTypeClick(Sender: TObject);
    procedure cbViewsChange(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure CheckBoxCustomizeTextClick(Sender: TObject);
    procedure VCLvHintPauseTime(Sender: TCustomEasyListview;
      HintWindowShown: Boolean; var PauseDelay: Integer);
    procedure CheckBoxHeaderClick(Sender: TObject);
    procedure VCLvHintCustomDraw(Sender: TCustomEasyListview;
      const TargetObj: TEasyCollectionItem; const Info: TEasyHintInfo);
    procedure VCLvHintCustomInfo(Sender: TCustomEasyListview;
      const TargetObj: TEasyCollectionItem; Info: TEasyHintInfo);
    procedure VCLvHintPopup(Sender: TCustomEasyListview;
      TargetObj: TEasyCollectionItem; HintType: TEasyHintType;
      MousePos: TPoint; var Text: string; var HideTimeout,
      ReShowTimeout: Integer; var Allow: Boolean);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.InvalidateCLVClick(Sender: TObject);
begin
  VCLv.Invalidate;
end;

procedure TForm1.FormCreate(Sender: TObject);
var
  i, j, k: Integer;
  Item: TEasyCollectionItem;
  Column: TEasyCollectionItem;
  Group: TEasyCollectionItem;
begin
  VCLv.BeginUpdate;
  try
    for i := 0 to 9 do
    begin
      Column := VCLv.Header.Columns.Add;
      Column.Caption := 'Column: ' + IntToStr(i);
      Column.ImageIndex := Random(ImageList1.Count);
      TEasyColumnStored( Column).Width := 120;
    end;

    for i := 0 to 9 do
    begin
      Group := VCLv.Groups.Add;
      if i mod 2 = 0 then
        Group.Caption := 'Group: ' + IntToStr(i)
      else
        Group.Caption := 'Group: ' + IntToStr(i) + ' has an very long caption that just goes on forever';
      Group.ImageIndex := Random(ImageList1.Count);
      for j := 0 to 19 do
      begin
        Item := TEasyGroupStored(Group).Items.Add;
        if j mod 2 = 0 then
          Item.Caption := 'Item: ' + IntToStr(j)
        else
          Item.Caption := 'Item: ' + IntToStr(j) + ' has an very long caption that just goes on forever';
        Item.ImageIndex := Random(ImageList1.Count);
        // Fill in the Item Details
        for k := 1 to 9 do
          Item.Captions[k] := 'Item: ' + IntToStr(j) + ' Column: ' + IntToStr(k);
      end
    end;
  finally
    VCLv.EndUpdate();
  end
end;


procedure TForm1.RadioGroupHintTypeClick(Sender: TObject);
begin
  VCLv.HintType := TEasyHintType( RadioGroupHintType.ItemIndex);
  CheckBoxCustomizeText.Enabled := RadioGroupHintType.ItemIndex = 0;
  CheckBoxAllowOnItemsOnly.Enabled := CheckBoxCustomizeText.Checked;
  VCLv.Invalidate
end;

procedure TForm1.cbViewsChange(Sender: TObject);
begin
  VCLv.View := TEasyListStyle( cbViews.ItemIndex)
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  FillStringsWithEasyListStyles(cbViews.Items);
  cbViews.ItemIndex := Ord(VCLv.View);
end;

procedure TForm1.CheckBoxCustomizeTextClick(Sender: TObject);
begin
  CheckBoxAllowOnItemsOnly.Enabled := CheckBoxCustomizeText.Checked;
end; 

procedure TForm1.VCLvHintPauseTime(Sender: TCustomEasyListview;
  HintWindowShown: Boolean; var PauseDelay: Integer);
begin
  // If the Hint Window is already shown then wait a bit between showing
  // it again as the mouse is moved around the control
  // This is the same property that can be globally set in
  // Application.HintShortPause
  // But here it can be set dynamically.
  // Unfortunately the VCL does not allow us to know what the old hint
  // control was nor the new one.  It also does not allow us to see the
  // cursor postion.
  if HintWindowShown then
    PauseDelay := StrToInt(EditPauseDelayTime.Text)
end;

procedure TForm1.CheckBoxHeaderClick(Sender: TObject);
begin
  VCLv.Header.Visible := CheckBoxHeader.Checked
end;

procedure TForm1.VCLvHintCustomDraw(Sender: TCustomEasyListview;
  const TargetObj: TEasyCollectionItem; const Info: TEasyHintInfo);
var
  R: TRect;
begin
  if TargetObj is TEasyItem then
  begin
    R := Info.Bounds;
    Imagelist2.DrawingStyle := dsTransparent;
    ImageList2.Draw(Info.Canvas, 2, (RectHeight(R) - 32) div 2,
      TEasyItem( TargetObj).ImageIndex mod ImageList2.Count);
    R.Left := R.Left + 36;
    DrawTextWEx(Info.Canvas.Handle, Info.Text, R, [dtSingleLine, dtLeft, dtVCenter], 1);
  end
end;

procedure TForm1.VCLvHintCustomInfo(Sender: TCustomEasyListview;
  const TargetObj: TEasyCollectionItem; Info: TEasyHintInfo);
var
  R: TRect;
begin
  if Info.HintType = ehtCustomDraw then
  begin
    Info.Text := 'Custom Draw HintText for Item: ' + IntToStr(TargetObj.Index);
    R := Rect(0, 0, Screen.Width, Screen.Height);
    DrawTextWEx(Info.Canvas.Handle, Info.Text, R, [dtSingleLine, dtCalcRect, dtCalcRectAdjR], -1);
    OffsetRect(R, -R.Left, -R.Top);
    R.Right := R.Right + 32 + 4 + 4;
    if R.Bottom < 32 + 2 then
      R.Bottom := 32 + 2;
    Info.Bounds := R;
  end
end;

procedure TForm1.VCLvHintPopup(Sender: TCustomEasyListview;
  TargetObj: TEasyCollectionItem; HintType: TEasyHintType;
  MousePos: TPoint; var Text: string; var HideTimeout,
  ReShowTimeout: Integer; var Allow: Boolean);
var
  ItemInfo: TEasyItemHitTestInfoSet;
  GroupInfo: TEasyGroupHitTestInfoSet;
  ViewPt: TPoint;
begin
  ViewPt := VCLv.Scrollbars.MapWindowToView(MousePos);

  if HintType = ehtCustomDraw then
  begin
    Allow := TargetObj is TEasyItem;
  end else
  if HintType = ehtText then
  begin
    Allow := (TargetObj is TEasyItem) or (TargetObj is TEasyGroup);
    if Allow then
    begin
      if TargetObj is TEasyItem then
      begin
       TEasyItem( TargetObj).HitTestAt(ViewPt, ItemInfo);
       if CheckBoxCustomizeText.Checked then
       begin
         Text := 'Hovering over' + #13+ #10 + 'Item #' + IntToStr(TargetObj.Index);
         if ehtOnIcon in ItemInfo then
           Text := Text + #13+ #10 + 'OnIcon';
         if ehtOnClickSelectBounds in ItemInfo then
           Text := Text + #13+ #10 + 'OnClickSelectBound';
         if ehtOnDragSelectBounds in ItemInfo then
           Text := Text + #13+ #10 + 'OnDragSelectBound';
         if ehtOnText in ItemInfo then
           Text := Text + #13+ #10 + 'OnTextRect';
         if ehtOnEdit in ItemInfo then
           Text := Text + #13+ #10 + 'OnEditRect';
         if ehtOnCheck in ItemInfo then
           Text := Text + #13+ #10 + 'OnCheckRect';
       end else
         Allow := ItemInfo <> []
      end else
      if TargetObj is TEasyGroup then
      begin
       TEasyGroup(TargetObj).HitTestAt(ViewPt, GroupInfo);
       if CheckBoxCustomizeText.Checked then
       begin
         Text := 'Hovering over' + #13+ #10 + 'Group #' + IntToStr(TargetObj.Index);
         if egtOnBand in GroupInfo then
           Text := Text + #13+ #10 + 'OnBand';
         if egtOnExpandButton in GroupInfo then
           Text := Text + #13+ #10 + 'OnExpandButton';
         if egtOnIcon in GroupInfo then
           Text := Text + #13+ #10 + 'OnIcon';
         if egtOnLabel in GroupInfo then
           Text := Text + #13+ #10 + 'OnOnLabel';
         if egtOnText in GroupInfo then
           Text := Text + #13+ #10 + 'OnOnText';
         if egtOnHeader in GroupInfo then
           Text := Text + #13+ #10 + 'OnHeader';
         if egtOnFooter in GroupInfo then
           Text := Text + #13+ #10 + 'OnFooter';
         if egtOnLeftMargin in GroupInfo then
           Text := Text + #13+ #10 + 'OnLeftMargin';
         if egtOnRightMargin in GroupInfo then
           Text := Text + #13+ #10 + 'OnRightMargin';
       end else
         Allow := GroupInfo <> []
      end
    end
  end else
  if HintType = ehtToolTip then
  begin
  end;

  // Only allow hints over Items if checked
  if CheckBoxAllowOnItemsOnly.Checked then
    Allow := TargetObj is TEasyItem
end;

end.
