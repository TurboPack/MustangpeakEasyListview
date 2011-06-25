object EasyTaskPanelForm3: TEasyTaskPanelForm3
  Left = 0
  Top = 0
  Width = 223
  Height = 240
  Caption = 'EasyTaskPanelForm3'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object RadioButton1: TRadioButton
    Left = 8
    Top = 8
    Width = 113
    Height = 17
    Caption = 'RadioButton1'
    TabOrder = 0
  end
  object RadioButton2: TRadioButton
    Left = 8
    Top = 31
    Width = 113
    Height = 17
    Caption = 'RadioButton2'
    TabOrder = 1
  end
  object ComboBox1: TComboBox
    Left = 8
    Top = 54
    Width = 145
    Height = 21
    Style = csDropDownList
    ItemHeight = 13
    ItemIndex = 0
    TabOrder = 2
    Text = 'Item 1'
    Items.Strings = (
      'Item 1'
      'Item 2'
      'Item 3')
  end
end
