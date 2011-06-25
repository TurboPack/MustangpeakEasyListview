object Form1: TForm1
  Left = 291
  Top = 151
  Width = 408
  Height = 328
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Shell Dlg 2'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object EasyScrollButton2: TEasyScrollButton
    Left = 72
    Top = 96
    Width = 17
    Height = 113
    OnClick = EasyScrollButton2Click
    TabOrder = 0
  end
  object EasyScrollButton3: TEasyScrollButton
    Left = 200
    Top = 96
    Width = 17
    Height = 113
    Direction = sbdRight
    OnClick = EasyScrollButton2Click
    TabOrder = 1
  end
  object EasyScrollButton1: TEasyScrollButton
    Left = 88
    Top = 80
    Width = 113
    Height = 17
    Direction = sbdUp
    OnClick = EasyScrollButton2Click
    TabOrder = 2
  end
  object EasyScrollButton4: TEasyScrollButton
    Left = 88
    Top = 208
    Width = 113
    Height = 17
    Direction = sbdDown
    OnClick = EasyScrollButton2Click
    TabOrder = 3
  end
  object CheckBoxThemed: TCheckBox
    Left = 248
    Top = 88
    Width = 97
    Height = 17
    Caption = 'Themed'
    Checked = True
    State = cbChecked
    TabOrder = 4
    OnClick = CheckBoxThemedClick
  end
  object CheckBoxFlat: TCheckBox
    Left = 248
    Top = 112
    Width = 97
    Height = 17
    Caption = 'Flat'
    TabOrder = 5
    OnClick = CheckBoxFlatClick
  end
  object CheckBoxAutoScroll: TCheckBox
    Left = 248
    Top = 136
    Width = 97
    Height = 17
    Caption = 'AutoScroll'
    TabOrder = 6
    OnClick = CheckBoxAutoScrollClick
  end
  object CheckBoxEnabled: TCheckBox
    Left = 248
    Top = 160
    Width = 97
    Height = 17
    Caption = 'Enabled'
    Checked = True
    State = cbChecked
    TabOrder = 7
    OnClick = CheckBoxEnabledClick
  end
end
