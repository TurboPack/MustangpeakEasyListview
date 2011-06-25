object EasyTaskPanelFormSearch: TEasyTaskPanelFormSearch
  Left = 192
  Top = 114
  Width = 255
  Height = 273
  HorzScrollBar.Tracking = True
  VertScrollBar.Tracking = True
  Color = clWindow
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = True
  OnShow = EasyTaskPanelFormShow
  DesignSize = (
    247
    239)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 88
    Width = 128
    Height = 13
    Caption = 'A word or phrase in the file:'
  end
  object Label2: TLabel
    Left = 8
    Top = 16
    Width = 235
    Height = 13
    Caption = 'Search by any or all of the criteria below.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    WordWrap = True
  end
  object Label3: TLabel
    Left = 8
    Top = 40
    Width = 122
    Height = 13
    Caption = 'All or part of the file name:'
  end
  object Label4: TLabel
    Left = 8
    Top = 136
    Width = 38
    Height = 13
    Caption = 'Look in:'
  end
  object Edit1: TEdit
    Left = 8
    Top = 56
    Width = 225
    Height = 21
    Anchors = [akLeft, akTop, akRight]
    TabOrder = 0
  end
  object TEdit
    Left = 8
    Top = 104
    Width = 225
    Height = 21
    Anchors = [akLeft, akTop, akRight]
    TabOrder = 1
  end
  object ComboBox1: TComboBox
    Left = 8
    Top = 152
    Width = 225
    Height = 21
    Anchors = [akLeft, akTop, akRight]
    ItemHeight = 13
    TabOrder = 2
    Items.Strings = (
      'Local Disk (C:)'
      'Local Disk (D:)'
      'Network'
      'Some other place...')
  end
  object Button1: TButton
    Left = 72
    Top = 200
    Width = 75
    Height = 25
    Anchors = [akTop, akRight]
    Caption = 'Back'
    TabOrder = 3
  end
  object Button2: TButton
    Left = 160
    Top = 200
    Width = 75
    Height = 25
    Anchors = [akTop, akRight]
    Caption = 'Search'
    TabOrder = 4
  end
end
