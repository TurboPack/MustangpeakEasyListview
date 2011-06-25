object Form1: TForm1
  Left = 135
  Top = 189
  Width = 593
  Height = 467
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Shell Dlg 2'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object LV: TEasyListview
    Left = 0
    Top = 33
    Width = 585
    Height = 400
    Align = alClient
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
    Header.Font.Charset = DEFAULT_CHARSET
    Header.Font.Color = clWindowText
    Header.Font.Height = -11
    Header.Font.Name = 'MS Shell Dlg 2'
    Header.Font.Style = []
    PaintInfoGroup.MarginBottom.CaptionIndent = 4
    PaintInfoItem.TileDetailCount = 2
    ParentFont = False
    Selection.MouseButtonSelRect = [cmbLeft, cmbRight]
    TabOrder = 0
    View = elsIcon
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 585
    Height = 33
    Align = alTop
    BevelOuter = bvNone
    TabOrder = 1
    object Label1: TLabel
      Left = 8
      Top = 8
      Width = 22
      Height = 13
      Caption = 'View'
    end
    object cbViews: TComboBox
      Left = 36
      Top = 6
      Width = 165
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 0
      OnChange = cbViewsChange
    end
  end
end
