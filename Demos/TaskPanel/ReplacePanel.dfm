object EasyTaskPanelFormReplace: TEasyTaskPanelFormReplace
  Left = 135
  Top = 227
  Width = 213
  Height = 234
  Caption = 'EasyTaskPanelFormReplace'
  Color = clWindow
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    205
    200)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 186
    Height = 13
    Caption = 'Replace some object or another.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 16
    Top = 32
    Width = 115
    Height = 13
    Caption = 'Enter the search criteria:'
  end
  object Button1: TButton
    Left = 120
    Top = 168
    Width = 75
    Height = 25
    Caption = 'Run Search'
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 16
    Top = 48
    Width = 177
    Height = 21
    Anchors = [akLeft, akTop, akRight]
    TabOrder = 1
    Text = 'Edit1'
  end
  object RadioGroup1: TRadioGroup
    Left = 16
    Top = 80
    Width = 177
    Height = 81
    Anchors = [akLeft, akTop, akRight]
    Caption = 'Options'
    Columns = 2
    Items.Strings = (
      'Option1 '
      'Option2'
      'Option3 '
      'Option4 '
      'Option5 '
      'Option6')
    TabOrder = 2
  end
end
