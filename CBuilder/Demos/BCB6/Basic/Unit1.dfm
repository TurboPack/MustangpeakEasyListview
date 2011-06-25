object Form1: TForm1
  Left = 296
  Top = 718
  Width = 193
  Height = 163
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
  object EasyListview1: TEasyListview
    Left = 8
    Top = 8
    Width = 169
    Height = 113
    UseDockManager = False
    Selection.MouseButtonSelRect = [embLeft, embRight]
    TabOrder = 0
    View = elsIcon
    OnItemGetCaption = EasyListview1ItemGetCaption
  end
end
