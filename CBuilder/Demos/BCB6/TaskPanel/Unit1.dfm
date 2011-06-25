object Form1: TForm1
  Left = 221
  Top = 205
  Width = 696
  Height = 480
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 281
    Top = 0
    Width = 3
    Height = 453
    Cursor = crHSplit
    ResizeStyle = rsUpdate
  end
  object EasyTaskPanelBand1: TEasyTaskPanelBand
    Left = 0
    Top = 0
    Width = 281
    Height = 453
    Align = alLeft
    OnGetTaskPanel = EasyTaskPanelBand1GetTaskPanel
    UseDockManager = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Shell Dlg 2'
    Font.Style = []
    GroupFont.Charset = DEFAULT_CHARSET
    GroupFont.Color = clWindowText
    GroupFont.Height = -11
    GroupFont.Name = 'MS Shell Dlg 2'
    GroupFont.Style = []
    Groups.Items = {
      0000000002000000800800000000000000000100000007000000500061006E00
      65006C0020003100000000000000000000000000C80000008008000000000000
      00000100000007000000500061006E0065006C00200032000000000000000000
      00000000C8000000}
    HotTrack.Enabled = True
    HotTrack.GroupTrack = [htgIcon, htgText, htgTopMargin]
    PaintInfoGroup.CaptionIndent = 9
    PaintInfoGroup.MarginBottom.Size = 11
    PaintInfoGroup.MarginBottom.Visible = True
    PaintInfoGroup.MarginBottom.CaptionIndent = 4
    PaintInfoGroup.MarginLeft.Size = 11
    PaintInfoGroup.MarginLeft.Visible = True
    PaintInfoGroup.MarginRight.Size = 11
    PaintInfoGroup.MarginRight.Visible = True
    PaintInfoGroup.MarginTop.Size = 26
    ParentFont = False
    Selection.Enabled = False
    TabOrder = 0
  end
end
