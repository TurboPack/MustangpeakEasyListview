object Form1: TForm1
  Left = 192
  Top = 114
  Width = 696
  Height = 480
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Shell Dlg 2'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object SG: TEasyListview
    Left = 209
    Top = 0
    Width = 479
    Height = 446
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
    Selection.EnableDragSelect = True
    Selection.MouseButtonSelRect = [cmbLeft, cmbRight]
    Selection.MultiSelect = True
    TabOrder = 0
    View = elsGrid
    OnItemEditBegin = SGItemEditBegin
    OnItemImageDraw = SGItemImageDraw
    OnItemImageGetSize = SGItemImageGetSize
    OnItemImageDrawIsCustom = SGItemImageDrawIsCustom
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 209
    Height = 446
    Align = alLeft
    TabOrder = 1
    object Label1: TLabel
      Left = 16
      Top = 88
      Width = 40
      Height = 13
      Caption = 'Columns'
      FocusControl = EditRows
    end
    object Label2: TLabel
      Left = 16
      Top = 40
      Width = 26
      Height = 13
      Caption = 'Rows'
    end
    object EditRows: TEdit
      Left = 24
      Top = 56
      Width = 121
      Height = 21
      TabOrder = 0
      Text = '100'
    end
    object EditColumns: TEdit
      Left = 24
      Top = 104
      Width = 121
      Height = 21
      TabOrder = 1
      Text = '10'
    end
    object Button1: TButton
      Left = 16
      Top = 8
      Width = 75
      Height = 25
      Caption = 'Clear'
      TabOrder = 2
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 104
      Top = 8
      Width = 75
      Height = 25
      Caption = 'Load'
      TabOrder = 3
      OnClick = Button2Click
    end
    object CheckboxAllowOddEdits: TCheckBox
      Left = 24
      Top = 240
      Width = 177
      Height = 17
      Caption = 'Allow edit every other cell only'
      TabOrder = 4
    end
    object CheckBoxEnableEdit: TCheckBox
      Left = 8
      Top = 224
      Width = 97
      Height = 17
      Caption = 'Editable'
      TabOrder = 5
      OnClick = CheckBoxEnableEditClick
    end
    object CheckBoxTabMoveFocus: TCheckBox
      Left = 24
      Top = 256
      Width = 145
      Height = 17
      Caption = 'Tab move edit focus'
      TabOrder = 6
      OnClick = CheckBoxTabMoveFocusClick
    end
    object CheckBoxCustomDraw: TCheckBox
      Left = 8
      Top = 288
      Width = 97
      Height = 17
      Caption = 'Custom Draw'
      TabOrder = 7
      OnClick = CheckBoxCustomDrawClick
    end
    object CheckBoxShowHeader: TCheckBox
      Left = 8
      Top = 192
      Width = 97
      Height = 17
      Caption = 'Show Header'
      TabOrder = 8
      OnClick = CheckBoxShowHeaderClick
    end
    object CheckBoxShowFocusRect: TCheckBox
      Left = 8
      Top = 136
      Width = 129
      Height = 17
      Caption = 'Show Focus Rect'
      Checked = True
      State = cbChecked
      TabOrder = 9
      OnClick = CheckBoxShowFocusRectClick
    end
    object CheckBoxFullCellSelect: TCheckBox
      Left = 8
      Top = 152
      Width = 97
      Height = 17
      Caption = 'Full Cell Select'
      TabOrder = 10
      OnClick = CheckBoxFullCellSelectClick
    end
  end
end
