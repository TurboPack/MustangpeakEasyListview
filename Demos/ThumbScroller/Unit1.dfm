object Form1: TForm1
  Left = 193
  Top = 115
  Caption = 'Form1'
  ClientHeight = 442
  ClientWidth = 686
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Shell Dlg 2'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 89
    Top = 13
    Width = 597
    Height = 272
    Align = alClient
    Stretch = True
    ExplicitHeight = 267
  end
  object Label1: TLabel
    Left = 0
    Top = 0
    Width = 686
    Height = 13
    Align = alTop
    Caption = 
      'WARNING:  This Demo is not to show off my graphics (in)abilities' +
      '.  It is slow so don'#39't load too many images.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Shell Dlg 2'
    Font.Style = [fsBold]
    ParentFont = False
    ExplicitWidth = 598
  end
  object Panel1: TPanel
    Left = 0
    Top = 285
    Width = 686
    Height = 157
    Align = alBottom
    TabOrder = 0
    object EasyScrollButton2: TEasyScrollButton
      Left = 1
      Top = 1
      Width = 17
      Height = 155
      Align = alLeft
      AutoScroll = True
      OnClick = EasyScrollButton2Click
      TabOrder = 0
    end
    object EasyScrollButton3: TEasyScrollButton
      Left = 668
      Top = 1
      Width = 17
      Height = 155
      Align = alRight
      AutoScroll = True
      Direction = sbdRight
      OnClick = EasyScrollButton3Click
      TabOrder = 1
    end
    object EasyListview1: TEasyListview
      Left = 18
      Top = 1
      Width = 650
      Height = 155
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
      ParentFont = False
      Scrollbars.HorzEnabled = False
      Scrollbars.VertEnabled = False
      Selection.MouseButtonSelRect = [cmbLeft, cmbRight]
      TabOrder = 2
      View = elsFilmStrip
      OnItemFreeing = EasyListview1ItemFreeing
      OnItemSelectionChanged = EasyListview1ItemSelectionChanged
      OnItemThumbnailDraw = EasyListview1ItemThumbnailDraw
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 13
    Width = 89
    Height = 272
    Align = alLeft
    TabOrder = 1
    object Button1: TButton
      Left = 8
      Top = 8
      Width = 75
      Height = 25
      Caption = 'Browse...'
      TabOrder = 0
      OnClick = Button1Click
    end
  end
end
