object Form1: TForm1
  Left = 197
  Top = 200
  Caption = 'Form1'
  ClientHeight = 430
  ClientWidth = 620
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
    Top = 57
    Width = 620
    Height = 373
    Align = alClient
    EditManager.Font.Charset = DEFAULT_CHARSET
    EditManager.Font.Color = clWindowText
    EditManager.Font.Height = -11
    EditManager.Font.Name = 'MS Shell Dlg 2'
    EditManager.Font.Style = []
    UseDockManager = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Shell Dlg 2'
    Font.Style = []
    GroupFont.Charset = DEFAULT_CHARSET
    GroupFont.Color = clWindowText
    GroupFont.Height = -13
    GroupFont.Name = 'MS Shell Dlg 2'
    GroupFont.Style = [fsBold]
    Header.Columns.Items = {
      0600000001000000110000005445617379436F6C756D6E53746F726564FFFECE
      0006000000800800000000000000000000000101000000FFFFFF1F0001000000
      0500000000000000000000000000000000000000000000000000000000000000
      00000000}
    Header.Font.Charset = DEFAULT_CHARSET
    Header.Font.Color = clWindowText
    Header.Font.Height = -11
    Header.Font.Name = 'MS Shell Dlg 2'
    Header.Font.Style = []
    Header.Visible = True
    PaintInfoGroup.CaptionIndent = 6
    PaintInfoGroup.MarginBottom.CaptionIndent = 4
    PaintInfoItem.TileDetailCount = 2
    ParentFont = False
    TabOrder = 0
    View = elsReport
    OnAutoGroupGetKey = LVAutoGroupGetKey
    OnAutoSortGroupCreate = LVAutoSortGroupCreate
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 620
    Height = 57
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
    object Label2: TLabel
      Left = 384
      Top = 12
      Width = 45
      Height = 13
      Caption = 'Algorithm'
    end
    object LabelItems: TLabel
      Left = 8
      Top = 32
      Width = 27
      Height = 13
      Caption = 'Items'
    end
    object cbViews: TComboBox
      Left = 40
      Top = 6
      Width = 161
      Height = 21
      Style = csDropDownList
      TabOrder = 0
      OnChange = cbViewsChange
    end
    object cAutosort: TCheckBox
      Left = 292
      Top = 24
      Width = 97
      Height = 17
      Caption = 'Autosort'
      TabOrder = 1
      OnClick = cAutosortClick
    end
    object cAutoGroup: TCheckBox
      Left = 292
      Top = 8
      Width = 73
      Height = 17
      Caption = 'AutoGroup'
      TabOrder = 2
      OnClick = cAutoGroupClick
    end
    object cbSort: TComboBox
      Left = 440
      Top = 8
      Width = 145
      Height = 21
      Style = csDropDownList
      TabOrder = 3
    end
    object ButtonRebuild: TButton
      Left = 208
      Top = 8
      Width = 75
      Height = 25
      Caption = 'Rebuild'
      TabOrder = 4
      OnClick = ButtonRebuildClick
    end
    object EditItems: TEdit
      Left = 40
      Top = 32
      Width = 121
      Height = 21
      TabOrder = 5
      Text = '100'
    end
  end
end
