object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 445
  ClientWidth = 536
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 225
    Top = 0
    Height = 445
    ExplicitLeft = 184
    ExplicitTop = 208
    ExplicitHeight = 100
  end
  object EasyTaskPanelBand1: TEasyTaskPanelBand
    Left = 0
    Top = 0
    Width = 225
    Height = 445
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
    HotTrack.Enabled = True
    HotTrack.GroupTrack = [htgIcon, htgText, htgTopMargin]
    PaintInfoGroup.CaptionIndent = 9
    PaintInfoGroup.MarginBottom.Size = 3
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
