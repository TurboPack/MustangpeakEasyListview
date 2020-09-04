unit Unit1;

interface

//  DRAG UNSELECT MISSES SOME ITEMS AND DOES NOT UNSELECT THEM
//  DRAG/SELECTDRAG SCROLL DOES NOT ACCOUNT FOR HEADER

uses
  Windows,
  Messages,
  SysUtils,
  Classes,
  Graphics,
  Controls,
  Forms,
  Dialogs,
  StdCtrls,
  ComCtrls,
  ImgList,
  ExtCtrls,
  CheckLst,
  ActiveX,
  EasyListview,
  MPCommonUtilities,
  MPCommonObjects,
  Menus;

type
  TForm1 = class(TForm)
    StatusBar1: TStatusBar;
    Panel2: TPanel;
    EasyListview1: TEasyListview;
    StaticText1: TStaticText;
    PageControl1: TPageControl;
    TabSheet1: TTabSheet;
    TabSheet2: TTabSheet;
    TabSheet3: TTabSheet;
    CheckBoxSelMulti: TCheckBox;
    CheckBoxSelEnabled: TCheckBox;
    CheckBoxSelAlphaRect: TCheckBox;
    TrackBarSelBlendAlpha: TTrackBar;
    LabelSelBlendAlpha: TLabel;
    Label6: TLabel;
    Label7: TLabel;
    Label8: TLabel;
    LabelSelColor: TLabel;
    LabelSelInactiveColor: TLabel;
    LabelSelInactiveBorderColor: TLabel;
    LabelSelInactiveTextColor: TLabel;
    Label1SelTextColor: TLabel;
    PanelSelRectBlendColor: TPanel;
    PanelSelBorderColor: TPanel;
    PanelSelColor: TPanel;
    PanelSelTextColor: TPanel;
    PanelSelInactiveColor: TPanel;
    PanelSelInactiveBorderColor: TPanel;
    PanelSelInactiveTextColor: TPanel;
    CheckBoxSelFullRow: TCheckBox;
    CheckBoxSelRound: TCheckBox;
    Label9: TLabel;
    EditSelRoundRadius: TEdit;
    CheckBoxShowFocusRect: TCheckBox;
    CheckBoxSelDragRect: TCheckBox;
    Splitter1: TSplitter;
    CheckBoxSelAutoScroll: TCheckBox;
    EditSelScrollDelay: TEdit;
    Label10: TLabel;
    Label11: TLabel;
    EditSelScrollTime: TEdit;
    EditSelAccel: TEdit;
    Label12: TLabel;
    EditSelEdgeMargin: TEdit;
    Label13: TLabel;
    ColorDialog1: TColorDialog;
    PanelSelRectBorderColor: TPanel;
    Label15: TLabel;
    Bevel1: TBevel;
    Bevel2: TBevel;
    Label16: TLabel;
    CheckBoxSelAlphaBlend: TCheckBox;
    Label4: TLabel;
    EditGroupCount: TEdit;
    EditItemCount: TEdit;
    Label3: TLabel;
    Label5: TLabel;
    EditColumnCount: TEdit;
    Button2: TButton;
    Button3: TButton;
    TabSheet4: TTabSheet;
    CheckBoxShowHeader: TCheckBox;
    CheckBoxThemed: TCheckBox;
    TabSheet5: TTabSheet;
    ComboBoxItemItemCheckType: TComboBox;
    Label2: TLabel;
    Label17: TLabel;
    cbViews: TComboBox;
    Label18: TLabel;
    Panel3: TPanel;
    Panel4: TPanel;
    ButtonSelFirst: TButton;
    ButtonSelNext: TButton;
    ButtonSelFirstInGroup: TButton;
    ButtonSelNextInGroup: TButton;
    EditSelGroup: TEdit;
    Label19: TLabel;
    ButtonSelAll: TButton;
    ButtonSelClear: TButton;
    Label20: TLabel;
    ButtonSelInvert: TButton;
    CheckBoxVisHideItems: TCheckBox;
    CheckBoxVisHideGroups: TCheckBox;
    CheckBoxTrackSelections: TCheckBox;
    CheckBoxSelLinearSelect: TCheckBox;
    CheckBoxRandomizeItemCount: TCheckBox;
    TabSheet6: TTabSheet;
    Label21: TLabel;
    ComboBoxItemGroupCheckType: TComboBox;
    Label22: TLabel;
    ComboBoxItemColumnCheckType: TComboBox;
    EditMaxSizeWidth: TEdit;
    CheckBoxMaxSizeWidth: TCheckBox;
    CheckBoxGroupExpandable: TCheckBox;
    CheckBoxBlendedBand: TCheckBox;
    PanelBandStartColor: TPanel;
    PanelBandFadeColor: TPanel;
    Label1: TLabel;
    Label14: TLabel;
    Label23: TLabel;
    EditBandWidth: TEdit;
    Bevel3: TBevel;
    Label24: TLabel;
    CheckBoxMarginTop: TCheckBox;
    CheckBoxMarginLeft: TCheckBox;
    CheckBoxMarginRight: TCheckBox;
    CheckBoxMarginBottom: TCheckBox;
    Label25: TLabel;
    EditBandLength: TEdit;
    CheckBoxBandTracksWindow: TCheckBox;
    GroupBox2: TGroupBox;
    CheckBoxSelMouseButtonL: TCheckBox;
    CheckBoxSelMouseButtonR: TCheckBox;
    CheckBoxSelMouseButtonM: TCheckBox;
    GroupBox1: TGroupBox;
    CheckBoxSelRectMouseButtonL: TCheckBox;
    CheckBoxSelRectMouseButtonR: TCheckBox;
    CheckBoxSelRectMouseButtonM: TCheckBox;
    Bevel4: TBevel;
    CheckBoxFullItemSelect: TCheckBox;
    CheckBoxFullCellSelect: TCheckBox;
    CheckBoxGroupSelection: TCheckBox;
    Bevel5: TBevel;
    Label26: TLabel;
    Label27: TLabel;
    TrackBarSizeIconWidth: TTrackBar;
    TrackBarSizeIconHeight: TTrackBar;
    ButtonSizeReset: TButton;
    Label28: TLabel;
    Label29: TLabel;
    Label30: TLabel;
    Label31: TLabel;
    LabelIconSizeWidth: TLabel;
    LabelIconSizeHeight: TLabel;
    Label32: TLabel;
    Label33: TLabel;
    LabelSmallIconSizeWidth: TLabel;
    LabelSmallIconSizeHeight: TLabel;
    Label36: TLabel;
    Label37: TLabel;
    LabelListSizeWidth: TLabel;
    LabelListSizeHeight: TLabel;
    LabelThumbSizeWidth: TLabel;
    LabelThumbSizeHeight: TLabel;
    LabelTileSizeWidth: TLabel;
    LabelTileSizeHeight: TLabel;
    Label34: TLabel;
    LabelReportSizeWidth: TLabel;
    LabelReportSizeHeight: TLabel;
    TrackBarSizeReportHeight: TTrackBar;
    TrackBarSizeReportWidth: TTrackBar;
    TrackBarSizeIconSmallHeight: TTrackBar;
    TrackBarSizeIconSmallWidth: TTrackBar;
    TrackBarSizeThumbsHeight: TTrackBar;
    TrackBarSizeThumbsWidth: TTrackBar;
    TrackBarSizeTilesHeight: TTrackBar;
    TrackBarSizeTilesWidth: TTrackBar;
    TrackBarSizeListHeight: TTrackBar;
    TrackBarSizeListWidth: TTrackBar;
    TabSheet7: TTabSheet;
    Label35: TLabel;
    Label38: TLabel;
    Button1: TButton;
    Button4: TButton;
    OpenDialogStream: TOpenDialog;
    SaveDialogStream: TSaveDialog;
    ButtonExpandAll: TButton;
    ButtonCollapseAll: TButton;
    CheckBoxResizeGroup: TCheckBox;
    CheckBoxBlendIcon: TCheckBox;
    CheckBoxShowGroupMargins: TCheckBox;
    EditTileDetailCount: TEdit;
    Label39: TLabel;
    CheckBoxDragDrop: TCheckBox;
    TabSheet8: TTabSheet;
    CheckBoxRandomItemCaptionColor: TCheckBox;
    CheckBoxRandomGroupCaptionColor: TCheckBox;
    CheckBoxRandomHeaderCaptionColors: TCheckBox;
    TabSheet9: TTabSheet;
    CheckBoxIncrementalSearchEnable: TCheckBox;
    ComboBoxIncrementalSearchType: TComboBox;
    ComboBoxIncrementalSearchStartType: TComboBox;
    Label40: TLabel;
    Label41: TLabel;
    RadioGroupIncrementalSearchDir: TRadioGroup;
    EditIncrementalSearchResetTime: TEdit;
    Label42: TLabel;
    Label43: TLabel;
    LabelQuery: TLabel;
    Label45: TLabel;
    LabelItemIndex: TLabel;
    TabSheet10: TTabSheet;
    CheckBoxDragDropEnabled: TCheckBox;
    TrackBarSelTextBlendAlpha: TTrackBar;
    Label44: TLabel;
    LabelBlendAlphaTextRect: TLabel;
    TabSheet11: TTabSheet;
    Label46: TLabel;
    Label48: TLabel;
    Label50: TLabel;
    Label51: TLabel;
    Label47: TLabel;
    CheckBoxHotTrackEnable: TCheckBox;
    GroupBoxGroupHotTrack: TGroupBox;
    GroupBox4: TGroupBox;
    CheckBoxGroupHitIcon: TCheckBox;
    CheckBoxGroupHitText: TCheckBox;
    CheckBoxGroupHitTop: TCheckBox;
    CheckBoxGroupHitBottom: TCheckBox;
    CheckBoxGroupHitLeft: TCheckBox;
    CheckBoxGroupHitRight: TCheckBox;
    CheckBoxGroupHitAnywhere: TCheckBox;
    CheckBoxItemHitIcon: TCheckBox;
    CheckBoxItemHitText: TCheckBox;
    CheckBoxItemHitAnyWhere: TCheckBox;
    CheckBoxUnderLineText: TCheckBox;
    CheckBoxHotTrackFocusOnly: TCheckBox;
    CheckBoxRedDetails: TCheckBox;
    CheckBoxHilightColumn: TCheckBox;
    ButtonHilightColor: TButton;
    CheckBoxGridLines: TCheckBox;
    ButtonGridLineColor: TButton;
    CheckBoxSelectionGradient: TCheckBox;
    PanelGradientTop: TPanel;
    PanelGradientBottom: TPanel;
    CheckBoxSelectionBlurBkGnd: TCheckBox;
    TabSheet12: TTabSheet;
    EditBkGndCaption: TEdit;
    CheckBoxBkGndText: TCheckBox;
    CheckBoxBkGnd: TCheckBox;
    CheckBoxBkGndCaptionOnlyWhenEmpty: TCheckBox;
    RadioGroupBkGndCaptionAlignment: TRadioGroup;
    RadioGroupBkGndCaptionVAlignment: TRadioGroup;
    CheckBoxBkGndCaptionSingleLine: TCheckBox;
    Bevel6: TBevel;
    Label49: TLabel;
    Bevel7: TBevel;
    Label52: TLabel;
    CheckBoxBkGndTile: TCheckBox;
    CheckBoxBkGndTransparent: TCheckBox;
    TrackBarBkGndXOffset: TTrackBar;
    TrackBarBkGndYOffset: TTrackBar;
    Label53: TLabel;
    Label55: TLabel;
    CheckBoxTrackOffsets: TCheckBox;
    Label54: TLabel;
    EditBkGndImage: TEdit;
    ButtonBkGndLoadImage: TButton;
    Bevel8: TBevel;
    Label56: TLabel;
    CheckBoxBkGndCustomDraw: TCheckBox;
    CheckBoxCustomBkGndAlphaBlend: TCheckBox;
    TrackBarCustomDrawBkGnd: TTrackBar;
    Label57: TLabel;
    CheckBoxHideCaptions: TCheckBox;
    Button5: TButton;
    CheckBoxStateImages: TCheckBox;
    ImageListState: TImageList;
    CheckBoxHeaderAlwaysVisible: TCheckBox;
    CheckBoxSnapHorzScroll: TCheckBox;
    Label58: TLabel;
    EditHeight: TEdit;
    GroupBox3: TGroupBox;
    CheckBoxHeaderDropDownArrow: TCheckBox;
    CheckBoxDropDownArrowAlwaysShow: TCheckBox;
    CheckBoxDropDownButtonEnabled: TCheckBox;
    PopupMenuColumnDropDownButtonMenu: TPopupMenu;
    ColumnDropDownButtonMenuItem11: TMenuItem;
    ColumnDropDownButtonMenuItem21: TMenuItem;
    ColumnDropDownButtonMenuItem31: TMenuItem;
    CheckBoxDropDownButtonCustomAction: TCheckBox;
    GroupBox5: TGroupBox;
    CheckBoxHeaderHotTrack: TCheckBox;
    CheckBoxHeaderSizeable: TCheckBox;
    CheckBoxHeaderClickable: TCheckBox;
    CheckBoxHeaderDraggable: TCheckBox;
    CheckBoxAutoToggleSort: TCheckBox;
    Label59: TLabel;
    EditBandMargin: TEdit;
    RadioGroupGroupVAlign: TRadioGroup;
    RadioGroupGroupHAlign: TRadioGroup;
    Label60: TLabel;
    EditBandIndent: TEdit;
    EditGroupMarginTop: TEdit;
    EditGroupMarginBottom: TEdit;
    EditGroupMarginLeft: TEdit;
    EditGroupMarginRight: TEdit;
    Label61: TLabel;
    Label62: TLabel;
    Label63: TLabel;
    Label64: TLabel;
    Bevel9: TBevel;
    Bevel10: TBevel;
    Bevel11: TBevel;
    Label65: TLabel;
    EditGroupCaptionIndent: TEdit;
    Label67: TLabel;
    EditGroupImageIndent: TEdit;
    Label66: TLabel;
    EditGroupExpandImageIndent: TEdit;
    CheckBoxShowDropMark: TCheckBox;
    PanelDropMarkColor: TPanel;
    Label68: TLabel;
    Label69: TLabel;
    EditDropMarkSize: TEdit;
    Bevel12: TBevel;
    Label70: TLabel;
    CheckBoxDropMarkReSelect: TCheckBox;
    ListBoxColumnColors: TListBox;
    Label71: TLabel;
    PanelColumnColor: TPanel;
    ButtonColumnColors: TButton;
    CheckBoxColumnPaintFullWindow: TCheckBox;

    procedure Button2Click(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure CheckBoxThemedClick(Sender: TObject);
    procedure CheckBoxHideItemsClick(Sender: TObject);
    procedure EasyListview1ItemVisibilityChanged(
      Sender: TCustomEasyListview; Item: TEasyItem);
    procedure cbViewsChange(Sender: TObject);
    procedure Chnge(Sender: TObject);
    procedure CheckBoxShowHeaderClick(Sender: TObject);
    procedure TrackBarSelBlendAlphaChange(Sender: TObject);
    procedure CheckBoxSelEnabledClick(Sender: TObject);
    procedure CheckBoxShowFocusRectClick(Sender: TObject);
    procedure CheckBoxSelFullRowClick(Sender: TObject);
    procedure CheckBoxSelMultiClick(Sender: TObject);
    procedure CheckBoxSelAlphaRectClick(Sender: TObject);
    procedure CheckBoxSelRoundClick(Sender: TObject);
    procedure CheckBoxSelAutoScrollClick(Sender: TObject);
    procedure CheckBoxSelDragRectClick(Sender: TObject);
    procedure EditSelExit(Sender: TObject);
    procedure EditSelScrollDelayKeyPress(Sender: TObject; var Key: Char);
    procedure PanelSelBorderColorClick(Sender: TObject);
    procedure PanelSelInactiveColorClick(Sender: TObject);
    procedure PanelSelColorClick(Sender: TObject);
    procedure PanelSelInactiveBorderColorClick(Sender: TObject);
    procedure PanelSelTextColorClick(Sender: TObject);
    procedure PanelSelInactiveTextColorClick(Sender: TObject);
    procedure PanelSelRectBlendColorClick(Sender: TObject);
    procedure PanelSelRectBorderColorClick(Sender: TObject);
    procedure CheckBoxSelAlphaBlendClick(Sender: TObject);
    procedure ButtonSelFirstClick(Sender: TObject);
    procedure ButtonSelNextClick(Sender: TObject);
    procedure ButtonSelFirstInGoupClick(Sender: TObject);
    procedure ButtonSelNextInGroupClick(Sender: TObject);
    procedure EasyListview1ItemFreeing(Sender: TCustomEasyListview; Item: TEasyItem);
    procedure EasyListview1GroupFreeing(Sender: TCustomEasyListview; Group: TEasyGroup);
    procedure ButtonSelAllClick(Sender: TObject);
    procedure ButtonSelClearClick(Sender: TObject);
    procedure ButtonSelInvertClick(Sender: TObject);
    procedure CheckBoxVisHideItemsClick(Sender: TObject);
    procedure CheckBoxVisHideGroupsClick(Sender: TObject);
    procedure EasyListview1ItemSelectionChanged(
      Sender: TCustomEasyListview; Item: TEasyItem);
    procedure CheckBoxSelLinearSelectClick(Sender: TObject);
    procedure EasyListview1GroupInitialize(Sender: TCustomEasyListview;
      Group: TEasyGroup);
    procedure ComboBoxItemGroupCheckTypeChange(Sender: TObject);
    procedure ComboBoxItemColumnCheckTypeChange(Sender: TObject);
    procedure EasyListview1ColumnInitialize(Sender: TCustomEasyListview;
      Column: TEasyColumn);
    procedure EasyListview1ColumnSizeChanging(Sender: TCustomEasyListview;
      Column: TEasyColumn; Width, NewWidth: Integer;
      var Allow: Boolean);
    procedure CheckBoxMaxSizeWidthClick(Sender: TObject);
    procedure EasyListview1OLEDragStart(Sender: TCustomEasyListview;
      ADataObject: IDataObject; var AvailableEffects: TCommonDropEffects;
      var AllowDrag: Boolean);
    procedure CheckBoxGroupExpandableClick(Sender: TObject);
    procedure CheckBoxBlendedBandClick(Sender: TObject);
    procedure PanelBandStartColorClick(Sender: TObject);
    procedure PanelBandFadeColorClick(Sender: TObject);
    procedure EditBandWidthKeyPress(Sender: TObject; var Key: Char);
    procedure EditBandWidthExit(Sender: TObject);
    procedure EditBandLengthExit(Sender: TObject);
    procedure EditBandLengthKeyPress(Sender: TObject; var Key: Char);
    procedure CheckBoxBandTracksWindowClick(Sender: TObject);
    procedure CheckBoxMarginTopClick(Sender: TObject);
    procedure CheckBoxMarginBottomClick(Sender: TObject);
    procedure CheckBoxMarginLeftClick(Sender: TObject);
    procedure CheckBoxMarginRightClick(Sender: TObject);
    procedure CheckBoxSelMouseButtonLClick(Sender: TObject);
    procedure CheckBoxSelMouseButtonRClick(Sender: TObject);
    procedure CheckBoxSelMouseButtonMClick(Sender: TObject);
    procedure CheckBoxSelRectMouseButtonLClick(Sender: TObject);
    procedure CheckBoxSelRectMouseButtonRClick(Sender: TObject);
    procedure CheckBoxSelRectMouseButtonMClick(Sender: TObject);
    procedure CheckBoxHeaderHotTrackClick(Sender: TObject);
    procedure CheckBoxHeaderSizeableClick(Sender: TObject);
    procedure CheckBoxHeaderClickableClick(Sender: TObject);
    procedure CheckBoxFullItemSelectClick(Sender: TObject);
    procedure CheckBoxFullCellSelectClick(Sender: TObject);
    procedure CheckBoxGroupSelectionClick(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure EditSelRoundRadiusKeyPress(Sender: TObject; var Key: Char);
    procedure EditSelRoundRadiusExit(Sender: TObject);
    procedure ButtonSizeResetClick(Sender: TObject);
    procedure TrackBarSizeIconWidthChange(Sender: TObject);
    procedure TrackBarSizeIconHeightChange(Sender: TObject);
    procedure TrackBarSizeIconSmallWidthChange(Sender: TObject);
    procedure TrackBarSizeIconSmallHeightChange(Sender: TObject);
    procedure TrackBarSizeListWidthChange(Sender: TObject);
    procedure TrackBarSizeListHeightChange(Sender: TObject);
    procedure TrackBarSizeThumbsWidthChange(Sender: TObject);
    procedure TrackBarSizeTilesWidthChange(Sender: TObject);
    procedure TrackBarSizeThumbsHeightChange(Sender: TObject);
    procedure TrackBarSizeTilesHeightChange(Sender: TObject);
    procedure TrackBarSizeReportWidthChange(Sender: TObject);
    procedure TrackBarSizeReportHeightChange(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure Button4Click(Sender: TObject);
    procedure ButtonExpandAllClick(Sender: TObject);
    procedure ButtonCollapseAllClick(Sender: TObject);
    procedure EasyListview1ItemGetImageIndex(Sender: TCustomEasyListview;
      const Item: TEasyItem; Column: Integer;
      ImageKind: TEasyImageKind; var ImageIndex: TCommonImageIndexInteger);
    procedure EasyListview1GroupGetCaption(Sender: TCustomEasyListview;
      const Group: TEasyGroup; var Caption: string);
    procedure EasyListview1GroupGetImageIndex(Sender: TCustomEasyListview;
      const Group: TEasyGroup; ImageKind: TEasyImageKind;
      var ImageIndex: TCommonImageIndexInteger);
    procedure EasyListview1ColumnGetImageIndex(Sender: TCustomEasyListview;
      const Column: TEasyColumn; ImageKind: TEasyImageKind;
      var ImageIndex: TCommonImageIndexInteger);
    procedure CheckBoxResizeGroupClick(Sender: TObject);
    procedure CheckBoxBlendIconClick(Sender: TObject);
    procedure CheckBoxShowGroupMarginsClick(Sender: TObject);
    procedure EasyListview1ItemGetTileDetailCount(
      Sender: TCustomEasyListview; const Item: TEasyItem;
      var Count: Integer);
    procedure EasyListview1ItemGetTileDetail(Sender: TCustomEasyListview;
      const Item: TEasyItem; Line: Integer; var Detail: Integer);
    procedure EditTileDetailCountExit(Sender: TObject);
    procedure EditTileDetailCountKeyPress(Sender: TObject; var Key: Char);
    procedure CheckBoxHeaderDraggableClick(Sender: TObject);
    procedure CheckBoxDragDropClick(Sender: TObject);
    procedure EasyListview1OLEDragOver(Sender: TCustomEasyListview;
      KeyState: TCommonKeyStates; WindowPt: TPoint;
      AvailableEffects: TCommonDropEffects;
      var DesiredDropEffect: TCommonDropEffect);
    procedure CheckBoxAutoToggleSortClick(Sender: TObject);
    procedure EasyListview1ColumnPaintText(Sender: TCustomEasyListview;
      Column: TEasyColumn; ACanvas: TCanvas);
    procedure EasyListview1GroupPaintText(Sender: TCustomEasyListview;
      Group: TEasyGroup; ACanvas: TCanvas);
    procedure CheckBoxRandomItemCaptionColorClick(Sender: TObject);
    procedure CheckBoxRandomGroupCaptionColorClick(Sender: TObject);
    procedure CheckBoxRandomHeaderCaptionColorsClick(Sender: TObject);
    procedure RadioGroupIncrementalSearchDirClick(Sender: TObject);
    procedure ComboBoxIncrementalSearchTypeChange(Sender: TObject);
    procedure ComboBoxIncrementalSearchStartTypeChange(Sender: TObject);
    procedure EditIncrementalSearchResetTimeKeyPress(Sender: TObject;
      var Key: Char);
    procedure EditIncrementalSearchResetTimeExit(Sender: TObject);
    procedure CheckBoxIncrementalSearchEnableClick(Sender: TObject);
    procedure EasyListview1IncrementalSearch(Item: TEasyCollectionItem;
      const SearchBuffer: string; var Handled: Boolean; var CompareResult: Integer);
    procedure CheckBoxDragDropEnabledClick(Sender: TObject);
    procedure TrackBarSelTextBlendAlphaChange(Sender: TObject);
    procedure EasyListview1GroupHotTrack(Sender: TCustomEasyListview;
      Group: TEasyGroup; State: TEasyHotTrackState; MousePos: TPoint);
    procedure EasyListview1ItemHotTrack(Sender: TCustomEasyListview;
      Item: TEasyItem; State: TEasyHotTrackState; MousePos: TPoint);
    procedure CheckBoxHotTrackEnableClick(Sender: TObject);
    procedure CheckBoxGroupHitIconClick(Sender: TObject);
    procedure CheckBoxGroupHitTextClick(Sender: TObject);
    procedure CheckBoxGroupHitTopClick(Sender: TObject);
    procedure CheckBoxGroupHitBottomClick(Sender: TObject);
    procedure CheckBoxGroupHitLeftClick(Sender: TObject);
    procedure CheckBoxGroupHitRightClick(Sender: TObject);
    procedure CheckBoxGroupHitAnywhereClick(Sender: TObject);
    procedure CheckBoxItemHitIconClick(Sender: TObject);
    procedure CheckBoxItemHitTextClick(Sender: TObject);
    procedure CheckBoxItemHitAnyWhereClick(Sender: TObject);
    procedure CheckBoxUnderLineTextClick(Sender: TObject);
    procedure CheckBoxHotTrackFocusOnlyClick(Sender: TObject);
    procedure EasyListview1ItemPaintText(Sender: TCustomEasyListview;
      Item: TEasyItem; Position: Integer; ACanvas: TCanvas);
    procedure CheckBoxRedDetailsClick(Sender: TObject);
    procedure CheckBoxBkGndClick(Sender: TObject);
    procedure CheckBoxHilightColumnClick(Sender: TObject);
    procedure ButtonHilightColorClick(Sender: TObject);
    procedure CheckBoxGridLinesClick(Sender: TObject);
    procedure ButtonGridLineColorClick(Sender: TObject);
    procedure EasyListview1ItemGetCaption(Sender: TCustomEasyListview;
      Item: TEasyItem; Column: Integer; var Caption: string);
    procedure CheckBoxSelectionGradientClick(Sender: TObject);
    procedure PanelGradientTopClick(Sender: TObject);
    procedure PanelGradientBottomClick(Sender: TObject);
    procedure CheckBoxSelectionBlurBkGndClick(Sender: TObject);
    procedure CheckBoxBkGndTextClick(Sender: TObject);
    procedure EditBkGndCaptionChange(Sender: TObject);
    procedure RadioGroupBkGndCaptionAlignmentClick(Sender: TObject);
    procedure RadioGroupBkGndCaptionVAlignmentClick(Sender: TObject);
    procedure CheckBoxBkGndCaptionOnlyWhenEmptyClick(Sender: TObject);
    procedure CheckBoxBkGndCaptionSingleLineClick(Sender: TObject);
    procedure CheckBoxBkGndTileClick(Sender: TObject);
    procedure CheckBoxBkGndTransparentClick(Sender: TObject);
    procedure TrackBarBkGndXOffsetChange(Sender: TObject);
    procedure TrackBarBkGndYOffsetChange(Sender: TObject);
    procedure CheckBoxTrackOffsetsClick(Sender: TObject);
    procedure ButtonBkGndLoadImageClick(Sender: TObject);
    procedure EasyListview1PaintBkGnd(Sender: TCustomEasyListview;
      ACanvas: TCanvas; AWindowRect: TRect;
      AlphaBlender: TEasyAlphaBlender; var DoDefault: Boolean);
    procedure CheckBoxBkGndCustomDrawClick(Sender: TObject);
    procedure CheckBoxCustomDrawCirclesClick(Sender: TObject);
    procedure TrackBarCustomDrawBkGndChange(Sender: TObject);
    procedure CheckBoxCustomBkGndAlphaBlendClick(Sender: TObject);
    procedure CheckBoxHideCaptionsClick(Sender: TObject);
    procedure Button5Click(Sender: TObject);
    procedure CheckBoxStateImagesClick(Sender: TObject);
    procedure CheckBoxHeaderAlwaysVisibleClick(Sender: TObject);
    procedure CheckBoxSnapHorzScrollClick(Sender: TObject);
    procedure EditHeightExit(Sender: TObject);
    procedure EditHeightKeyPress(Sender: TObject; var Key: Char);
    procedure CheckBoxHeaderDropDownArrowClick(Sender: TObject);
    procedure EasyListview1ColumnGetCaption(Sender: TCustomEasyListview;
      Column: TEasyColumn; Line: Integer; var Caption: string);
    procedure CheckBoxDropDownArrowAlwaysShowClick(Sender: TObject);
    procedure CheckBoxDropDownButtonEnabledClick(Sender: TObject);
    procedure EasyListview1ColumnDropDownButtonClick(
      Sender: TCustomEasyListview; Column: TEasyColumn;
      Button: TCommonMouseButton; ShiftState: TShiftState;
      WindowPt: TPoint; var DoDefault: Boolean);
    procedure EditBandMarginExit(Sender: TObject);
    procedure EditBandMarginKeyPress(Sender: TObject; var Key: Char);
    procedure RadioGroupGroupHAlignClick(Sender: TObject);
    procedure RadioGroupGroupVAlignClick(Sender: TObject);
    procedure EditBandIndentExit(Sender: TObject);
    procedure EditBandIndentKeyPress(Sender: TObject; var Key: Char);
    procedure EditGroupMarginTopExit(Sender: TObject);
    procedure EditGroupMarginTopKeyPress(Sender: TObject; var Key: Char);
    procedure EditGroupCaptionIndentKeyPress(Sender: TObject;
      var Key: Char);
    procedure EditGroupCaptionIndentExit(Sender: TObject);
    procedure EditGroupImageIndentExit(Sender: TObject);
    procedure EditGroupImageIndentKeyPress(Sender: TObject; var Key: Char);
    procedure EditGroupExpandImageIndentExit(Sender: TObject);
    procedure EditGroupExpandImageIndentKeyPress(Sender: TObject;
      var Key: Char);
    procedure EditDropMarkSizeExit(Sender: TObject);
    procedure EditDropMarkSizeKeyDown(Sender: TObject; var Key: Word;
      Shift: TShiftState);
    procedure PanelDropMarkColorClick(Sender: TObject);
    procedure CheckBoxShowDropMarkClick(Sender: TObject);
    procedure CheckBoxDropMarkReSelectClick(Sender: TObject);
    procedure EasyListview1OLEDragEnter(Sender: TCustomEasyListview;
      DataObject: IDataObject; KeyState: TCommonKeyStates;
      WindowPt: TPoint; AvailableEffects: TCommonDropEffects;
      var DesiredDropEffect: TCommonDropEffect);
    procedure ListBoxColumnColorsClick(Sender: TObject);
    procedure ButtonColumnColorsClick(Sender: TObject);
    procedure CheckBoxColumnPaintFullWindowClick(Sender: TObject);
  private
    FSelectionItem: TEasyItem;
    FSelectionGroup: TEasyGroup;
    FRebuildOnce: Boolean;
    { Private declarations }
  public
    { Public declarations }
    procedure SyncForm;
    function ChangeColor(Panel: TPanel): TColor;
    procedure InvalidateLV;
    procedure SyncGroupsTab;

    property SelectionItem: TEasyItem read FSelectionItem write FSelectionItem;
    property SelectionGroup: TEasyGroup read FSelectionGroup write FSelectionGroup;
  end;

var
  Form1: TForm1;

implementation

uses DatamoduleImagelists;

{$R *.dfm}

procedure TForm1.SyncForm;
begin
  CheckBoxThemed.Checked := EasyListview1.Themed;
  CheckBoxSelLinearSelect.Checked := EasyListview1.Selection.RectSelect;
  CheckBoxSelDragRect.Checked := EasyListview1.Selection.EnableDragSelect;
  CheckBoxShowHeader.Checked := EasyListview1.Header.Visible;
  TrackBarSelBlendAlpha.Position := EasyListview1.Selection.BlendAlphaSelRect;
  LabelSelBlendAlpha.Caption := IntToStr(TrackBarSelBlendAlpha.Position);
  CheckBoxSelEnabled.Checked := EasyListview1.Selection.Enabled;
  CheckBoxShowFocusRect.Checked := EasyListview1.Selection.UseFocusRect;
  CheckBoxSelFullRow.Checked := EasyListview1.Selection.FullRowSelect;
  CheckBoxSelMulti.Checked := EasyListview1.Selection.MultiSelect;
  CheckBoxSelAlphaBlend.Checked := EasyListview1.Selection.AlphaBlend;
  CheckBoxSelAlphaRect.Checked := EasyListview1.Selection.AlphaBlendSelRect;
  CheckBoxSelRound.Checked := EasyListview1.Selection.RoundRect;
  CheckBoxSelAutoScroll.Checked := EasyListview1.Selection.AutoScroll;
  CheckBoxSelMouseButtonL.Checked := cmbLeft in EasyListview1.Selection.MouseButton;
  CheckBoxSelMouseButtonR.Checked := cmbRight in EasyListview1.Selection.MouseButton;
  CheckBoxSelRectMouseButtonM.Checked := cmbMiddle in EasyListview1.Selection.MouseButtonSelRect;
  CheckBoxSelRectMouseButtonL.Checked := cmbLeft in EasyListview1.Selection.MouseButtonSelRect;
  CheckBoxSelRectMouseButtonR.Checked := cmbRight in EasyListview1.Selection.MouseButtonSelRect;
  CheckBoxSelMouseButtonM.Checked := cmbMiddle in EasyListview1.Selection.MouseButton;
  EditSelAccel.Text := IntToStr( EasyListview1.Selection.AutoScrollAccelerator);
  EditSelScrollDelay.Text := IntToStr(EasyListview1.Selection.AutoScrollDelay);
  EditSelEdgeMargin.Text := IntToStr(EasyListview1.Selection.AutoScrollMargin);
  EditSelScrollTime.Text := IntToStr( EasyListview1.Selection.AutoScrollTime);
  PanelSelBorderColor.Color := EasyListview1.Selection.BorderColor;
  PanelSelInactiveColor.Color := EasyListview1.Selection.InactiveColor;
  PanelSelColor.Color := EasyListview1.Selection.Color;
  PanelSelInactiveBorderColor.Color := EasyListview1.Selection.InactiveBorderColor;
  PanelSelTextColor.Color := EasyListview1.Selection.TextColor;
  PanelSelInactiveTextColor.Color := EasyListview1.Selection.InactiveTextColor;
  PanelSelRectBlendColor.Color := EasyListview1.Selection.BlendColorSelRect;
  PanelSelRectBorderColor.Color := EasyListview1.Selection.BorderColorSelRect;
  CheckBoxHeaderHotTrack.Checked := EasyListview1.PaintInfoColumn.HotTrack;
  CheckBoxHeaderSizeable.Checked := EasyListview1.Header.Sizeable;
  TrackBarSizeIconWidth.Position := EasyListview1.CellSizes.Icon.Width;
  TrackBarSizeIconHeight.Position := EasyListview1.CellSizes.Icon.Height;
  TrackBarSizeIconSmallWidth.Position := EasyListview1.CellSizes.SmallIcon.Width;
  TrackBarSizeIconSmallHeight.Position := EasyListview1.CellSizes.SmallIcon.Height;
  TrackBarSizeListWidth.Position := EasyListview1.CellSizes.List.Width;
  TrackBarSizeListHeight.Position := EasyListview1.CellSizes.List.Height;
  TrackBarSizeThumbsWidth.Position := EasyListview1.CellSizes.Thumbnail.Width;
  TrackBarSizeThumbsHeight.Position := EasyListview1.CellSizes.Thumbnail.Height;
  TrackBarSizeTilesWidth.Position := EasyListview1.CellSizes.Tile.Width;
  TrackBarSizeTilesHeight.Position := EasyListview1.CellSizes.Tile.Height;
  TrackBarSizeReportWidth.Position := EasyListview1.CellSizes.Report.Width;
  TrackBarSizeReportHeight.Position := EasyListview1.CellSizes.Report.Height;
  EasyListview1.Selection.AutoScrollAccelerator := StrToInt(EditSelAccel.Text);
  EasyListview1.Selection.AutoScrollDelay := StrToInt(EditSelScrollDelay.Text);
  EasyListview1.Selection.AutoScrollMargin := StrToInt(EditSelEdgeMargin.Text);
  EasyListview1.Selection.AutoScrollTime := StrToInt(EditSelScrollTime.Text);
  CheckBoxResizeGroup.Checked := EasyListview1.Selection.ResizeGroupOnFocus;
  CheckBoxBlendIcon.Checked := EasyListview1.Selection.BlendIcon;
  CheckBoxShowGroupMargins.Checked := EasyListview1.ShowGroupMargins;
  CheckBoxHeaderDraggable.Checked := EasyListview1.Header.Draggable;
  CheckBoxDragDrop.Checked := EasyListview1.DragManager.Enabled;
  TrackBarSelTextBlendAlpha.Position := EasyListview1.Selection.BlendAlphaTextRect;
  CheckBoxSelectionBlurBkGnd.Checked := EasyListview1.Selection.BlurAlphaBkGnd;

  TrackBarSelTextBlendAlpha.Enabled := CheckBoxSelAlphaBlend.Checked;
  Label9.Enabled := CheckBoxSelAlphaBlend.Checked;
  Label44.Enabled := CheckBoxSelAlphaBlend.Checked;
  LabelBlendAlphaTextRect.Enabled := CheckBoxSelAlphaBlend.Checked;
  GroupBox1.Enabled := CheckBoxSelAlphaRect.Checked;
  Label6.Enabled := CheckBoxSelAlphaRect.Checked;
  TrackBarSelBlendAlpha.Enabled := CheckBoxSelAlphaRect.Checked;
  PanelSelRectBlendColor.Enabled := CheckBoxSelAlphaRect.Checked;
  Label7.Enabled := CheckBoxSelAlphaRect.Checked;
  PanelSelRectBorderColor.Enabled := CheckBoxSelAlphaRect.Checked;
  Label15.Enabled := CheckBoxSelAlphaRect.Checked;
  LabelSelBlendAlpha.Enabled := CheckBoxSelAlphaRect.Checked;
  CheckBoxSelRectMouseButtonL.Enabled := CheckBoxSelAlphaRect.Checked;
  CheckBoxSelRectMouseButtonM.Enabled := CheckBoxSelAlphaRect.Checked;
  CheckBoxSelRectMouseButtonR.Enabled := CheckBoxSelAlphaRect.Checked;

end;

procedure TForm1.InvalidateLV;
begin
  EasyListview1.Invalidate;
end;

procedure TForm1.Button2Click(Sender: TObject);
var
  Group: TEasyGroup;
  Column: TEasyColumn;
  i, j, ItemCount: Integer;
  A: Int64;
begin
  FRebuildOnce := True;
  A := GetTickCount;
  Screen.Cursor := crHourglass;
  // Setting ReIndex to False will increase the speed items are added to EasyListview
  // but renders the Index Property invalide until EndUpdate is called
  EasyListview1.BeginUpdate();
  EasyListview1.Groups.ReIndexDisable := True;
  try
    EasyListview1.Groups.Clear;
    EasyListview1.Header.Columns.Clear;
    ListBoxColumnColors.Clear;

    for i := 0 to StrToInt(EditColumnCount.Text) - 1 do
    begin
      Column := EasyListview1.Header.Columns.AddVirtual;
      Column.Width := 150;
      Column.DropDownButton.Visible := CheckBoxHeaderDropDownArrow.Checked;
      Column.DropDownButton.AlwaysShow := CheckBoxDropDownArrowAlwaysShow.Checked;
      Column.DropDownButton.Menu := PopupMenuColumnDropDownButtonMenu;
      ListBoxColumnColors.AddItem('Column: ' + IntToStr(i), nil);
    end;

    // Image and Text info filled in on demand in OnItemInitialize, OnGroupInitialze
    for j := 0 to StrToInt(EditGroupCount.Text) - 1 do
    begin
      Group := EasyListview1.Groups.AddVirtual;
      if CheckBoxRandomizeItemCount.Checked then
        ItemCount := Random(StrToInt(EditItemCount.Text) + 1)
      else
        ItemCount := StrToInt(EditItemCount.Text);
      for i := 0 to ItemCount - 1 do
        Group.Items.AddVirtual;
    end;
  finally
    EasyListview1.Groups.ReIndexDisable := False;
    EasyListview1.EndUpdate;
    StatusBar1.Panels[0].Text := 'Elapsed Time: ' + IntToStr(GetTickCount - A);
    Screen.Cursor := crDefault
  end
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  FillStringsWithEasyListStyles(cbViews.Items);
  cbViews.ItemIndex := Ord(EAsyListview1.View);
  Imagelists.UseImagesForListview(EasyListview1);
  SyncForm;
  SyncGroupsTab;
  cbViews.ItemIndex := 0;
  ComboBoxItemItemCheckType.ItemIndex := 0;
  ComboBoxItemGroupCheckType.ItemIndex := 0;
  ComboBoxItemColumnCheckType.ItemIndex := 0;
  EditIncrementalSearchResetTime.Text := IntToStr(EasyListview1.IncrementalSearch.ResetTime);
  ComboBoxIncrementalSearchStartType.ItemIndex := Integer(EasyListview1.IncrementalSearch.StartType);
  ComboBoxIncrementalSearchType.ItemIndex := Integer(EasyListview1.IncrementalSearch.ItemType);
  RadioGroupIncrementalSearchDir.ItemIndex := Integer(EasyListview1.IncrementalSearch.Direction);
  CheckBoxIncrementalSearchEnable.Checked := EasyListview1.IncrementalSearch.Enabled;
  LabelQuery.Caption := '';
  LabelItemIndex.Caption := '';
  CheckBoxDragDropEnabled.Checked := EasyListview1.DragManager.Enabled;
  CheckBoxHotTrackEnable.Checked := EasyListview1.HotTrack.Enabled;
  CheckBoxGroupHitIcon.Checked := htgIcon in EasyListview1.HotTrack.GroupTrack;
  CheckBoxGroupHitText.Checked := htgText in EasyListview1.HotTrack.GroupTrack;
  CheckBoxGroupHitTop.Checked := htgTopMargin in EasyListview1.HotTrack.GroupTrack;
  CheckBoxGroupHitBottom.Checked := htgBottomMargin in EasyListview1.HotTrack.GroupTrack;
  CheckBoxGroupHitLeft.Checked := htgLeftMargin in EasyListview1.HotTrack.GroupTrack;
  CheckBoxGroupHitRight.Checked := htgRightMargin in EasyListview1.HotTrack.GroupTrack;
  CheckBoxGroupHitAnyWhere.Checked := htgAnyWhere in EasyListview1.HotTrack.GroupTrack;
  CheckBoxItemHitIcon.Checked := htiIcon in EasyListview1.HotTrack.ItemTrack;
  CheckBoxItemHitText.Checked := htiText in EasyListview1.HotTrack.ItemTrack;
  CheckBoxItemHitAnyWhere.Checked := htiAnyWhere in EasyListview1.HotTrack.ItemTrack;
  CheckBoxUnderLineText.Checked := EasyListview1.HotTrack.Underline;
  CheckBoxHotTrackFocusOnly.Checked := EasyListview1.HotTrack.OnlyFocused;
  PanelGradientTop.Color := EasyListview1.Selection.GradientColorTop;
  PanelGradientBottom.Color := EasyListview1.Selection.GradientColorBottom;
  CheckBoxBkGndCaptionSingleLine.Checked := EasyListview1.BackGround.CaptionSingleLine;
  CheckBoxBkGndCaptionOnlyWhenEmpty.Checked := EasyListview1.BackGround.CaptionShowOnlyWhenEmpty;
  RadioGroupBkGndCaptionVAlignment.ItemIndex := Integer(EasyListview1.BackGround.CaptionVAlignment);
  RadioGroupBkGndCaptionAlignment.ItemIndex := Integer(EasyListview1.BackGround.CaptionAlignment);
  EasyListview1.BackGround.Caption := EditBkGndCaption.Text;   
  CheckBoxBkGndTile.Checked := EasyListview1.BackGround.Tile;
  CheckBoxBkGndTransparent.Checked := EasyListview1.BackGround.Transparent;
  TrackBarBkGndYOffset.Position := EasyListview1.BackGround.OffsetY;
  TrackBarBkGndXOffset.Position := EasyListview1.BackGround.OffsetX;
  TrackBarBkGndYOffset.Max := Screen.Height;
  TrackBarBkGndYOffset.Frequency := TrackBarBkGndYOffset.Max div 10;
  TrackBarBkGndXOffset.Max := Screen.Width;
  TrackBarBkGndXOffset.Frequency := TrackBarBkGndXOffset.Max div 10;
  CheckBoxTrackOffsets.Checked := EasyListview1.BackGround.OffsetTrack;
  TrackBarCustomDrawBkGnd.Position := 128;
  EditHeight.Text := IntToStr(EasyListview1.Header.Height);
  RadioGroupGroupHAlign.ItemIndex := Integer( EasyListview1.PaintInfoGroup.Alignment);
  RadioGroupGroupVAlign.ItemIndex := Integer( EasyListview1.PaintInfoGroup.VAlignment);
  EditBandIndent.Text := IntToStr(EasyListview1.PaintInfoGroup.BandIndent);
  EditGroupMarginTop.Text := IntToStr(EasyListview1.PaintInfoGroup.MarginTop.Size);
  EditGroupMarginBottom.Text := IntToStr(EasyListview1.PaintInfoGroup.MarginBottom.Size);
  EditGroupMarginRight.Text := IntToStr(EasyListview1.PaintInfoGroup.MarginRight.Size);
  EditGroupMarginLeft.Text := IntToStr(EasyListview1.PaintInfoGroup.MarginLeft.Size);
  EditGroupCaptionIndent.Text := IntToStr(EasyListview1.PaintInfoGroup.CaptionIndent);
  EditGroupImageIndent.Text := IntToStr(EasyListview1.PaintInfoGroup.ImageIndent);
  EditGroupExpandImageIndent.Text := IntToStr(EasyListview1.PaintInfoGroup.ExpandImageIndent);
  EditDropMarkSize.Text := IntToStr(EasyListview1.DragManager.InsertMark.Width);
  PanelDropMarkColor.Color := EasyListview1.DragManager.InsertMark.Color;
  CheckBoxDropMarkReSelect.Checked := EasyListview1.DragManager.InsertMark.ReSelectAfterMove;
end;

procedure TForm1.CheckBoxThemedClick(Sender: TObject);
begin
  EasyListview1.Themed := CheckBoxThemed.Checked
end;

procedure TForm1.CheckBoxHideItemsClick(Sender: TObject);
var
  i, j : Integer;
begin
  EasyListview1.Groups.BeginUpdate(False);
  try
    for i := 0 to EasyListview1.Groups.Count - 1 do
      for j := 0 to EasyListview1.Groups[i].Items.Count - 1 do
        EasyListview1.Groups[i].Items[j].Visible := not CheckBoxVisHideItems.Checked
  finally
    EasyListview1.Groups.EndUpdate
  end
end;

procedure TForm1.EasyListview1ItemVisibilityChanged(
  Sender: TCustomEasyListview; Item: TEasyItem);
begin Exit;
  if EasyListview1.Groups.Count > 0 then
    Statusbar1.Panels[1].Text := 'Visible Items in Group[0] = ' + IntToStr(EasyListview1.Groups[0].VisibleCount)
  else
    Statusbar1.Panels[1].Text := 'Visible Items in Group[0] = ';
end;

procedure TForm1.EasyListview1ItemSelectionChanged(
  Sender: TCustomEasyListview; Item: TEasyItem);
begin
  if CheckBoxTrackSelections.Checked then
    Statusbar1.Panels[2].Text := 'Checked Items = ' + IntToStr(EasyListview1.Selection.Count);
end;

procedure TForm1.cbViewsChange(Sender: TObject);
begin
 EasyListview1.View := TEasyListStyle(cbViews.ItemIndex);
end;

procedure TForm1.Chnge(Sender: TObject);
begin
  EasyListview1.Groups.BeginUpdate(False);
  try
    EasyListview1.PaintInfoItem.CheckType := TEasyCheckType(ComboBoxItemItemCheckType.ItemIndex);
  finally
    EasyListview1.Groups.EndUpdate
  end
end;

procedure TForm1.CheckBoxShowHeaderClick(Sender: TObject);
begin
  EasyListview1.Header.Visible := CheckBoxShowHeader.Checked;
  InvalidateLV
end;

procedure TForm1.TrackBarSelBlendAlphaChange(Sender: TObject);
begin
  LabelSelBlendAlpha.Caption := IntToStr(TrackBarSelBlendAlpha.Position);
  EasyListview1.Selection.BlendAlphaSelRect := TrackBarSelBlendAlpha.Position;
  InvalidateLV
end;

procedure TForm1.CheckBoxSelEnabledClick(Sender: TObject);
begin
  EasyListview1.Selection.Enabled := CheckBoxSelEnabled.Checked;
  InvalidateLV
end;

procedure TForm1.CheckBoxShowFocusRectClick(Sender: TObject);
begin
  EasyListview1.Selection.UseFocusRect := CheckBoxShowFocusRect.Checked;
  InvalidateLV
end;

procedure TForm1.CheckBoxSelFullRowClick(Sender: TObject);
begin
  EasyListview1.Selection.FullRowSelect := CheckBoxSelFullRow.Checked;
  InvalidateLV
end;

procedure TForm1.CheckBoxSelMultiClick(Sender: TObject);
begin
  EasyListview1.Selection.MultiSelect := CheckBoxSelMulti.Checked;
  SyncForm;
  InvalidateLV
end;

procedure TForm1.CheckBoxSelDragRectClick(Sender: TObject);
begin
  EasyListview1.Selection.EnableDragSelect := CheckBoxSelDragRect.Checked;
  InvalidateLV
end;

procedure TForm1.CheckBoxSelAlphaBlendClick(Sender: TObject);
begin
  EasyListview1.Selection.AlphaBlend := CheckBoxSelAlphaBlend.Checked;
  TrackBarSelTextBlendAlpha.Enabled := CheckBoxSelAlphaBlend.Checked;
  Label9.Enabled := CheckBoxSelAlphaBlend.Checked;
  Label44.Enabled := CheckBoxSelAlphaBlend.Checked;
  LabelBlendAlphaTextRect.Enabled := CheckBoxSelAlphaBlend.Checked;
  InvalidateLV
end;

procedure TForm1.CheckBoxSelAlphaRectClick(Sender: TObject);
begin
  EasyListview1.Selection.AlphaBlendSelRect := CheckBoxSelAlphaRect.Checked;
  GroupBox1.Enabled := CheckBoxSelAlphaRect.Checked;
  Label6.Enabled := CheckBoxSelAlphaRect.Checked;
  TrackBarSelBlendAlpha.Enabled := CheckBoxSelAlphaRect.Checked;
  PanelSelRectBlendColor.Enabled := CheckBoxSelAlphaRect.Checked;
  Label7.Enabled := CheckBoxSelAlphaRect.Checked;
  PanelSelRectBorderColor.Enabled := CheckBoxSelAlphaRect.Checked;
  Label15.Enabled := CheckBoxSelAlphaRect.Checked;
  LabelSelBlendAlpha.Enabled := CheckBoxSelAlphaRect.Checked;
  CheckBoxSelRectMouseButtonL.Enabled := CheckBoxSelAlphaRect.Checked;
  CheckBoxSelRectMouseButtonM.Enabled := CheckBoxSelAlphaRect.Checked;
  CheckBoxSelRectMouseButtonR.Enabled := CheckBoxSelAlphaRect.Checked;
  InvalidateLV
end;

procedure TForm1.CheckBoxSelRoundClick(Sender: TObject);
begin
  EasyListview1.Selection.RoundRect := CheckBoxSelRound.Checked;
  InvalidateLV
end;

procedure TForm1.CheckBoxSelAutoScrollClick(Sender: TObject);
begin
  EasyListview1.Selection.AutoScroll := CheckBoxSelAutoScroll.Checked
end;

procedure TForm1.EditSelExit(Sender: TObject);
begin
  SyncForm
end;

procedure TForm1.EditSelScrollDelayKeyPress(Sender: TObject;
  var Key: Char);
begin
  if Key = #13 then
  begin
    SyncForm;
    Key := #0
  end
end;

function TForm1.ChangeColor(Panel: TPanel): TColor;
begin
  Result := Panel.Color;
  ColorDialog1.Color := Panel.Color;
  if ColorDialog1.Execute then
  begin
    Panel.Color := ColorDialog1.Color;
    Result := ColorDialog1.Color;
    EasyListview1.Invalidate
  end
end;

procedure TForm1.PanelSelBorderColorClick(Sender: TObject);
begin
  EasyListview1.Selection.BorderColor := ChangeColor(PanelSelBorderColor)
end;

procedure TForm1.PanelSelInactiveColorClick(Sender: TObject);
begin
  EasyListview1.Selection.InactiveColor := ChangeColor(PanelSelInactiveColor)
end;

procedure TForm1.PanelSelColorClick(Sender: TObject);
begin
  EasyListview1.Selection.Color := ChangeColor(PanelSelColor)
end;

procedure TForm1.PanelSelInactiveBorderColorClick(Sender: TObject);
begin
  EasyListview1.Selection.InactiveBorderColor := ChangeColor(PanelSelInactiveBorderColor)
end;

procedure TForm1.PanelSelTextColorClick(Sender: TObject);
begin
  EasyListview1.Selection.TextColor := ChangeColor(PanelSelTextColor)
end;

procedure TForm1.PanelSelInactiveTextColorClick(Sender: TObject);
begin
  EasyListview1.Selection.InactiveTextColor := ChangeColor(PanelSelInactiveTextColor)
end;

procedure TForm1.PanelSelRectBlendColorClick(Sender: TObject);
begin
  EasyListview1.Selection.BlendColorSelRect := ChangeColor(PanelSelRectBlendColor)
end;

procedure TForm1.PanelSelRectBorderColorClick(Sender: TObject);
begin
  EasyListview1.Selection.BorderColorSelRect := ChangeColor(PanelSelRectBorderColor)
end;

procedure TForm1.ButtonSelFirstClick(Sender: TObject);
var
  s: string;
begin
  SelectionItem := EasyListview1.Selection.First;
  if Assigned(SelectionItem) then
  begin
    s := 'Item Found. Caption: ' + SelectionItem.Captions[0];
    MessageBox(Handle, PChar(s), 'Found Item', MB_OK);
  end else
    MessageBox(Handle, 'No Items found Selected', 'Notice', MB_OK);
end;

procedure TForm1.ButtonSelNextClick(Sender: TObject);
var
  s: string;
begin
  SelectionItem := EasyListview1.Selection.Next(SelectionItem);
  if Assigned(SelectionItem) then
  begin
    s := 'Item Found. Caption: ' + SelectionItem.Captions[0];
    MessageBox(Handle, PChar(s), 'Found Item', MB_OK);
  end else
    MessageBox(Handle, 'No Items found Selected', 'Notice', MB_OK);
end;

procedure TForm1.ButtonSelFirstInGoupClick(Sender: TObject);
var
  s: string;
  i: Integer;
begin
  i := StrToInt(EditSelGroup.Text);
  if i < EasyListview1.Groups.Count then
  begin
    SelectionGroup := EasyListview1.Groups[i];
    SelectionItem := EasyListview1.Selection.FirstInGroup(SelectionGroup);
    if Assigned(SelectionItem) then
    begin
      s := 'Item Found. Caption: ' + SelectionItem.Captions[0];
      MessageBox(Handle, PChar(s), 'Found Item', MB_OK);
    end else
      MessageBox(Handle, 'No Items found Selected', 'Notice', MB_OK);
  end else
    MessageBox(Handle, 'Group Index out of Range', 'Notice', MB_OK);
end;

procedure TForm1.ButtonSelNextInGroupClick(Sender: TObject);
var
  s: string;
begin
  if Assigned(SelectionGroup) then
  begin
    SelectionItem := EasyListview1.Selection.NextInGroup(SelectionGroup, SelectionItem);
    if Assigned(SelectionItem) then
    begin
      s := 'Item Found. Caption: ' + SelectionItem.Captions[0];
      MessageBox(Handle, PChar(s), 'Found Item', MB_OK);
    end else
      MessageBox(Handle, 'No Items found Selected', 'Notice', MB_OK);
  end else
    MessageBox(Handle, 'Group Index out of Range', 'Notice', MB_OK);   
end;

procedure TForm1.EasyListview1ItemFreeing(Sender: TCustomEasyListview;
  Item: TEasyItem);
begin
  if Item = SelectionItem then
    SelectionItem := nil;
end;

procedure TForm1.EasyListview1GroupFreeing(Sender: TCustomEasyListview;
  Group: TEasyGroup);
begin
  if Group = SelectionGroup then
    SelectionGroup := nil;
end;

procedure TForm1.ButtonSelAllClick(Sender: TObject);
begin
  EasyListview1.Selection.SelectAll;
end;

procedure TForm1.ButtonSelClearClick(Sender: TObject);
begin
  EasyListview1.Selection.ClearAll;
end;

procedure TForm1.ButtonSelInvertClick(Sender: TObject);
begin
  EasyListview1.Selection.Invert
end;

procedure TForm1.CheckBoxVisHideItemsClick(Sender: TObject);
var
  i, j: Integer;
begin
  EasyListview1.BeginUpdate;
  try
    if CheckBoxVisHideItems.Checked then
    begin
      for i := 0 to EasyListview1.Groups.Count - 1 do
      begin
        for j := 0 to EasyListview1.Groups[i].Items.Count - 1 do
        begin
          if j mod 2 = 0 then
            EasyListview1.Groups[i].Items[j].Visible := False
        end;
      end
    end else
    begin
      for i := 0 to EasyListview1.Groups.Count - 1 do
      begin
        for j := 0 to EasyListview1.Groups[i].Items.Count - 1 do
            EasyListview1.Groups[i].Items[j].Visible := True;
      end
    end
  finally
    EasyListview1.EndUpdate;
  end
end;

procedure TForm1.CheckBoxVisHideGroupsClick(Sender: TObject);
var
  i, j: Integer;
begin
  EasyListview1.BeginUpdate;
  try
    if CheckBoxVisHideGroups.Checked then
    begin
      for i := 0 to EasyListview1.Groups.Count - 1 do
      begin
        if i mod 2 = 0 then
           EasyListview1.Groups[i].Visible := False
      end;
    end else
    begin
      for i := 0 to EasyListview1.Groups.Count - 1 do
      begin
        EasyListview1.Groups[i].Visible := True;
        if CheckBoxVisHideItems.Checked then
        begin
          for j := 0 to EasyListview1.Groups[i].Items.Count - 1 do
            if j mod 2 = 0 then
             EasyListview1.Groups[i].Items[j].Visible := False
        end
      end
    end
  finally
    EasyListview1.EndUpdate;
  end
end;

procedure TForm1.CheckBoxSelLinearSelectClick(Sender: TObject);
begin
  EasyListview1.Selection.RectSelect := CheckBoxSelLinearSelect.Checked
end;

procedure TForm1.EasyListview1GroupInitialize(Sender: TCustomEasyListview;
  Group: TEasyGroup);
begin
  Group.Caption := 'Group ' + IntToStr(Group.Index);
  Group.ImageIndex := Random(Imagelists.ImageListGroups.Count);
end;

procedure TForm1.ComboBoxItemGroupCheckTypeChange(Sender: TObject);
begin
  EasyListview1.Groups.BeginUpdate(False);
  try
    EasyListview1.PaintInfoGroup.CheckType := TEasyCheckType(ComboBoxItemGroupCheckType.ItemIndex);
  finally
    EasyListview1.Groups.EndUpdate
  end
end;

procedure TForm1.ComboBoxItemColumnCheckTypeChange(Sender: TObject);
begin
  EasyListview1.Groups.BeginUpdate(False);
  try
    EasyListview1.PaintInfoColumn.CheckType := TEasyCheckType(ComboBoxItemColumnCheckType.ItemIndex);
  finally
    EasyListview1.Groups.EndUpdate
  end
end;

procedure TForm1.EasyListview1ColumnInitialize(Sender: TCustomEasyListview;
  Column: TEasyColumn);
begin
  Column.Caption := 'Caption: ' + IntToStr(Column.Index)
end;


procedure TForm1.EasyListview1ColumnSizeChanging(
  Sender: TCustomEasyListview; Column: TEasyColumn; Width,
  NewWidth: Integer; var Allow: Boolean);
begin
  if CheckBoxMaxSizeWidth.Checked then
    Allow := NewWidth < StrToInt(EditMaxSizeWidth.Text)
  else
    Allow := True
end;

procedure TForm1.CheckBoxMaxSizeWidthClick(Sender: TObject);
var
  i, MaxWidth: Integer;
begin
  EditMaxSizeWidth.Enabled := CheckBoxMaxSizeWidth.Checked;
  if CheckBoxMaxSizeWidth.Checked then
  begin
    MaxWidth := StrToInt(EditMaxSizeWidth.Text);
    for i := 0 to EasyListview1.Header.Columns.Count - 1 do
      if EasyListview1.Header.Columns[i].Width > MaxWidth - 1 then
         EasyListview1.Header.Columns[i].Width := MaxWidth - 1
  end
end;

procedure TForm1.EasyListview1OLEDragStart(Sender: TCustomEasyListview;
  ADataObject: IDataObject; var AvailableEffects: TCommonDropEffects;
  var AllowDrag: Boolean);
begin
  AllowDrag := True;
  AvailableEffects := [cdeCopy, cdeMove, cdeLink]
end;

procedure TForm1.SyncGroupsTab;
begin
  CheckBoxGroupExpandable.Checked := EasyListview1.PaintInfoGroup.Expandable;
  CheckBoxBlendedBand.Checked := EasyListview1.PaintInfoGroup.BandBlended;
  PanelBandStartColor.Color := EasyListview1.PaintInfoGroup.BandColor;
  PanelBandFadeColor.Color := EasyListview1.PaintInfoGroup.BandColorFade;
  EditBandWidth.Text := IntToStr(EasyListview1.PaintInfoGroup.BandThickness);
  EditBandLength.Text := IntToStr(EasyListview1.PaintInfoGroup.BandLength);
  EditBandMargin.Text := IntToStr(EasyListview1.PaintInfoGroup.BandMargin);
  CheckBoxBandTracksWindow.Checked := EasyListview1.PaintInfoGroup.BandFullWidth;
  CheckBoxMarginTop.Checked := EasyListview1.PaintInfoGroup.MarginTop.Visible;
  CheckBoxMarginBottom.Checked := EasyListview1.PaintInfoGroup.MarginBottom.Visible;
  CheckBoxMarginLeft.Checked := EasyListview1.PaintInfoGroup.MarginLeft.Visible;
  CheckBoxMarginRight.Checked := EasyListview1.PaintInfoGroup.MarginRight.Visible;
end;

procedure TForm1.CheckBoxGroupExpandableClick(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.Expandable := CheckBoxGroupExpandable.Checked
end;

procedure TForm1.CheckBoxBlendedBandClick(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.BandBlended := CheckBoxBlendedBand.Checked
end;

procedure TForm1.PanelBandStartColorClick(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.BandColor := ChangeColor(PanelBandStartColor)
end;

procedure TForm1.PanelBandFadeColorClick(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.BandColorFade := ChangeColor(PanelBandFadeColor)
end;

procedure TForm1.EditBandWidthKeyPress(Sender: TObject; var Key: Char);
begin
  if Key = #13 then
  begin
    Key := #0;
    EasyListview1.PaintInfoGroup.BandThickness := StrToInt(EditBandWidth.Text)
  end;
end;

procedure TForm1.EditBandWidthExit(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.BandThickness := StrToInt(EditBandWidth.Text)
end;

procedure TForm1.EditBandLengthExit(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.BandLength := StrToInt(EditBandLength.Text)
end;

procedure TForm1.EditBandLengthKeyPress(Sender: TObject; var Key: Char);
begin
  if Key = #13 then
  begin
    Key := #0;
    EasyListview1.PaintInfoGroup.BandLength := StrToInt(EditBandLength.Text)
  end;
end;

procedure TForm1.CheckBoxBandTracksWindowClick(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.BandFullWidth := CheckBoxBandTracksWindow.Checked
end;

procedure TForm1.CheckBoxMarginTopClick(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.MarginTop.Visible := CheckBoxMarginTop.Checked
end;

procedure TForm1.CheckBoxMarginBottomClick(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.MarginBottom.Visible := CheckBoxMarginBottom.Checked
end;

procedure TForm1.CheckBoxMarginLeftClick(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.MarginLeft.Visible := CheckBoxMarginLeft.Checked
end;

procedure TForm1.CheckBoxMarginRightClick(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.MarginRight.Visible := CheckBoxMarginRight.Checked
end;

procedure TForm1.CheckBoxSelMouseButtonLClick(Sender: TObject);
begin
  if CheckBoxSelMouseButtonL.Checked then
    EasyListview1.Selection.MouseButton := EasyListview1.Selection.MouseButton + [cmbLeft]
  else
    EasyListview1.Selection.MouseButton := EasyListview1.Selection.MouseButton - [cmbLeft]
end;

procedure TForm1.CheckBoxSelMouseButtonRClick(Sender: TObject);
begin
  if CheckBoxSelMouseButtonR.Checked then
    EasyListview1.Selection.MouseButton := EasyListview1.Selection.MouseButton + [cmbRight]
  else
    EasyListview1.Selection.MouseButton := EasyListview1.Selection.MouseButton - [cmbRight]
end;

procedure TForm1.CheckBoxSelMouseButtonMClick(Sender: TObject);
begin
  if CheckBoxSelMouseButtonM.Checked then
    EasyListview1.Selection.MouseButton := EasyListview1.Selection.MouseButton + [cmbMiddle]
  else
    EasyListview1.Selection.MouseButton := EasyListview1.Selection.MouseButton - [cmbMiddle]
end;

procedure TForm1.CheckBoxSelRectMouseButtonLClick(Sender: TObject);
begin
  if CheckBoxSelRectMouseButtonL.Checked then
    EasyListview1.Selection.MouseButtonSelRect := EasyListview1.Selection.MouseButtonSelRect + [cmbLeft]
  else
    EasyListview1.Selection.MouseButtonSelRect := EasyListview1.Selection.MouseButtonSelRect - [cmbLeft]
end;

procedure TForm1.CheckBoxSelRectMouseButtonRClick(Sender: TObject);
begin
  if CheckBoxSelRectMouseButtonR.Checked then
    EasyListview1.Selection.MouseButtonSelRect := EasyListview1.Selection.MouseButtonSelRect + [cmbRight]
  else
    EasyListview1.Selection.MouseButtonSelRect := EasyListview1.Selection.MouseButtonSelRect - [cmbRight]
end;

procedure TForm1.CheckBoxSelRectMouseButtonMClick(Sender: TObject);
begin
  if CheckBoxSelRectMouseButtonM.Checked then
    EasyListview1.Selection.MouseButtonSelRect := EasyListview1.Selection.MouseButtonSelRect + [cmbMiddle]
  else
    EasyListview1.Selection.MouseButtonSelRect := EasyListview1.Selection.MouseButtonSelRect - [cmbMiddle]
end;

procedure TForm1.CheckBoxHeaderHotTrackClick(Sender: TObject);
begin
  EasyListview1.PaintInfoColumn.HotTrack := CheckBoxHeaderHotTrack.Checked
end;

procedure TForm1.CheckBoxHeaderSizeableClick(Sender: TObject);
begin
  EasyListview1.Header.Sizeable := CheckBoxHeaderSizeable.Checked
end;

procedure TForm1.CheckBoxHeaderClickableClick(Sender: TObject);
var
  i: Integer;
begin
  for i := 0 to EasyListview1.Header.Columns.Count - 1 do
     EasyListview1.Header.Columns[i].Clickable := CheckBoxHeaderClickable.Checked;
end;

procedure TForm1.CheckBoxFullItemSelectClick(Sender: TObject);
begin
  EasyListview1.Selection.FullItemPaint := CheckBoxFullItemSelect.Checked
end;

procedure TForm1.CheckBoxFullCellSelectClick(Sender: TObject);
begin
  EasyListview1.Selection.FullCellPaint := CheckBoxFullCellSelect.Checked
end;

procedure TForm1.CheckBoxGroupSelectionClick(Sender: TObject);
begin
  EasyListview1.Selection.GroupSelections := CheckBoxGroupSelection.Checked
end;

procedure TForm1.Button3Click(Sender: TObject);
begin
  EasyListview1.Groups.ReIndexDisable := True;
  EasyListview1.Groups.Clear;
  EasyListview1.Groups.ReIndexDisable := False;
  EasyListview1.Header.Columns.Clear;
end;

procedure TForm1.EditSelRoundRadiusKeyPress(Sender: TObject;
  var Key: Char);
begin
  if Key = #13 then
  begin
    EasyListview1.Selection.RoundRectRadius := StrToInt(EditSelRoundRadius.Text);
    InvalidateLV;
    Key := #0
  end
end;

procedure TForm1.EditSelRoundRadiusExit(Sender: TObject);
begin
  EasyListview1.Selection.RoundRectRadius := StrToInt(EditSelRoundRadius.Text);
  InvalidateLV
end;

procedure TForm1.ButtonSizeResetClick(Sender: TObject);
begin
  TrackBarSizeIconWidth.Position := 75;
  TrackBarSizeIconHeight.Position := 75;
  TrackBarSizeIconSmallWidth.Position := 200;
  TrackBarSizeIconSmallHeight.Position := 17;
  TrackBarSizeListHeight.Position := 17;
  TrackBarSizeListWidth.Position := 200;
  TrackBarSizeThumbsWidth.Position := 125;
  TrackBarSizethumbsHeight.Position := 143;
  TrackBarSizeTilesWidth.Position := 218;
  TrackBarSizeTilesHeight.Position := 58;
  TrackBarSizeReportWidth.Position := 75;
  TrackBarSizeReportHeight.Position := 17;
end;

procedure TForm1.TrackBarSizeIconWidthChange(Sender: TObject);
begin
  LabelIconSizeWidth.Caption := IntToStr(TrackBarSizeIconWidth.Position);
  EasyListview1.CellSizes.Icon.Width := TrackBarSizeIconWidth.Position
end;

procedure TForm1.TrackBarSizeIconHeightChange(Sender: TObject);
begin
  LabelIconSizeHeight.Caption := IntToStr(TrackBarSizeIconHeight.Position);
  EasyListview1.CellSizes.Icon.Height := TrackBarSizeIconHeight.Position
end;

procedure TForm1.TrackBarSizeIconSmallWidthChange(Sender: TObject);
begin
  LabelSmallIconSizeWidth.Caption := IntToStr(TrackBarSizeIconSmallWidth.Position);
  EasyListview1.CellSizes.SmallIcon.Width := TrackBarSizeIconSmallWidth.Position
end;

procedure TForm1.TrackBarSizeIconSmallHeightChange(Sender: TObject);
begin
  LabelSmallIconSizeHeight.Caption := IntToStr(TrackBarSizeIconSmallHeight.Position);
  EasyListview1.CellSizes.SmallIcon.Height := TrackBarSizeIconSmallHeight.Position
end;

procedure TForm1.TrackBarSizeListWidthChange(Sender: TObject);
begin
  LabelListSizeWidth.Caption := IntToStr(TrackBarSizeListWidth.Position);
  EasyListview1.CellSizes.List.Width := TrackBarSizeListWidth.Position
end;

procedure TForm1.TrackBarSizeListHeightChange(Sender: TObject);
begin
  LabelListSizeHeight.Caption := IntToStr(TrackBarSizeListHeight.Position);
  EasyListview1.CellSizes.List.Height := TrackBarSizeListHeight.Position
end;

procedure TForm1.TrackBarSizeThumbsWidthChange(Sender: TObject);
begin
  LabelThumbSizeWidth.Caption := IntToStr(TrackBarSizeThumbsWidth.Position);
  EasyListview1.CellSizes.Thumbnail.Width := TrackBarSizeThumbsWidth.Position
end;

procedure TForm1.TrackBarSizeThumbsHeightChange(Sender: TObject);
begin
  LabelThumbSizeHeight.Caption := IntToStr(TrackBarSizeThumbsHeight.Position);
  EasyListview1.CellSizes.Thumbnail.Height := TrackBarSizeThumbsHeight.Position
end;

procedure TForm1.TrackBarSizeTilesWidthChange(Sender: TObject);
begin
  LabelTileSizeWidth.Caption := IntToStr(TrackBarSizeTilesWidth.Position);
  EasyListview1.CellSizes.Tile.Width := TrackBarSizeTilesWidth.Position
end;

procedure TForm1.TrackBarSizeTilesHeightChange(Sender: TObject);
begin
  LabelTileSizeHeight.Caption := IntToStr(TrackBarSizeTilesHeight.Position);
  EasyListview1.CellSizes.Tile.Height := TrackBarSizeTilesHeight.Position
end;

procedure TForm1.TrackBarSizeReportWidthChange(Sender: TObject);
begin
  LabelReportSizeWidth.Caption := IntToStr(TrackBarSizeReportWidth.Position);
  EasyListview1.CellSizes.Report.Width := TrackBarSizeReportWidth.Position
end;

procedure TForm1.TrackBarSizeReportHeightChange(Sender: TObject);
begin
  LabelReportSizeHeight.Caption := IntToStr(TrackBarSizeReportHeight.Position);
  EasyListview1.CellSizes.Report.Height := TrackBarSizeReportHeight.Position
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
  SaveDialogStream.Filter := 'Stream Data Files (*.dat)|*.DAT';
  SaveDialogStream.DefaultExt := '.dat';
  if SaveDialogStream.Execute then
    EasyListview1.SaveToFile(SaveDialogStream.FileName, fmCreate or fmShareExclusive);
end;

procedure TForm1.Button4Click(Sender: TObject);
begin
  OpenDialogStream.Filter := 'Stream Data Files (*.dat)|*.DAT';
  OpenDialogStream.DefaultExt := '.dat';
  if OpenDialogStream.Execute then
  begin
    EasyListview1.LoadFromFile(OpenDialogStream.FileName, fmOpenRead or fmShareExclusive);
    SyncForm
  end
end;

procedure TForm1.ButtonExpandAllClick(Sender: TObject);
begin
  EasyListview1.Groups.ExpandAll
end;

procedure TForm1.ButtonCollapseAllClick(Sender: TObject);
begin
  EasyListview1.Groups.CollapseAll
end;

procedure TForm1.EasyListview1ItemGetImageIndex(
  Sender: TCustomEasyListview; const Item: TEasyItem; Column: Integer;
  ImageKind: TEasyImageKind; var ImageIndex: TCommonImageIndexInteger);
begin
  if (ImageKind = eikNormal) and (Column < 1) then
    ImageIndex := Item.Index mod ImageLists.ImageListSmall.Count
  else
  if (ImageKind = eikState) and CheckBoxStateImages.Checked and (Column < 1) then
    ImageIndex := Item.Index mod ImageListState.Count
end;

procedure TForm1.EasyListview1GroupGetCaption(Sender: TCustomEasyListview;
  const Group: TEasyGroup; var Caption: string);
begin
  Caption := 'Group: ' + IntToStr(Group.Index)
end;

procedure TForm1.EasyListview1GroupGetImageIndex(
  Sender: TCustomEasyListview; const Group: TEasyGroup;
  ImageKind: TEasyImageKind; var ImageIndex: TCommonImageIndexInteger);
begin
  if ImageKind = eikNormal then
    ImageIndex := Group.Index mod ImageLists.ImageListGroups.Count
end;

procedure TForm1.EasyListview1ColumnGetImageIndex(
  Sender: TCustomEasyListview; const Column: TEasyColumn;
  ImageKind: TEasyImageKind; var ImageIndex: TCommonImageIndexInteger);
begin
  if ImageKind = eikNormal then
    ImageIndex := Column.Index mod ImageLists.ImageListSmall.Count
end;

procedure TForm1.CheckBoxResizeGroupClick(Sender: TObject);
begin
  EasyListview1.Selection.ResizeGroupOnFocus := CheckBoxResizeGroup.Checked
end;

procedure TForm1.CheckBoxBlendIconClick(Sender: TObject);
begin
  EasyListview1.Selection.BlendIcon := CheckBoxBlendIcon.Checked
end;

procedure TForm1.CheckBoxShowGroupMarginsClick(Sender: TObject);
begin
  EasyListview1.ShowGroupMargins := CheckBoxShowGroupMargins.Checked
end;

procedure TForm1.EasyListview1ItemGetTileDetailCount(
  Sender: TCustomEasyListview; const Item: TEasyItem; var Count: Integer);
begin
  Count := StrToInt(EditTileDetailCount.Text);
end;

procedure TForm1.EasyListview1ItemGetTileDetail(
  Sender: TCustomEasyListview; const Item: TEasyItem; Line: Integer;
  var Detail: Integer);
begin
  // Return the column to take the detail from
  Detail := Line;
  if Detail > EasyListview1.Header.Columns.Count - 1 then
    Detail := 0; 
end;

procedure TForm1.EditTileDetailCountExit(Sender: TObject);
begin
  EasyListview1.Invalidate;
end;

procedure TForm1.EditTileDetailCountKeyPress(Sender: TObject;
  var Key: Char);
begin
  if Key = #13 then
  begin
    EasyListview1.Invalidate;
    Key := #0
  end
end;

procedure TForm1.CheckBoxHeaderDraggableClick(Sender: TObject);
begin
  EasyListview1.Header.Draggable := CheckBoxHeaderDraggable.Checked
end;

procedure TForm1.CheckBoxDragDropClick(Sender: TObject);
begin
  EasyListview1.DragManager.Enabled := CheckBoxDragDrop.Checked
end;

procedure TForm1.EasyListview1OLEDragOver(Sender: TCustomEasyListview;
  KeyState: TCommonKeyStates; WindowPt: TPoint;
  AvailableEffects: TCommonDropEffects;
  var DesiredDropEffect: TCommonDropEffect);
begin
  DesiredDropEffect := cdeMove
end;

procedure TForm1.CheckBoxAutoToggleSortClick(Sender: TObject);
var
  i: Integer;
begin
  for i := 0 to EasyListview1.Header.Columns.Count - 1 do
  begin
     if not CheckBoxAutoToggleSort.Checked then
       EasyListview1.Header.Columns[i].SortDirection := esdNone;
     EasyListview1.Header.Columns[i].AutoToggleSortGlyph := CheckBoxAutoToggleSort.Checked;
  end
end;

procedure TForm1.EasyListview1ColumnPaintText(Sender: TCustomEasyListview;
  Column: TEasyColumn; ACanvas: TCanvas);
begin
  if CheckBoxRandomHeaderCaptionColors.Checked then
    ACanvas.Font.Color := Random(clWhite);
end;

procedure TForm1.EasyListview1GroupPaintText(Sender: TCustomEasyListview;
  Group: TEasyGroup; ACanvas: TCanvas);
begin
  if CheckBoxRandomGroupCaptionColor.Checked then
    ACanvas.Font.Color := Random(clWhite);
end;

procedure TForm1.CheckBoxRandomItemCaptionColorClick(Sender: TObject);
begin
  EasyListview1.Invalidate
end;

procedure TForm1.CheckBoxRandomGroupCaptionColorClick(Sender: TObject);
begin
  EasyListview1.Invalidate
end;

procedure TForm1.CheckBoxRandomHeaderCaptionColorsClick(Sender: TObject);
begin
  EasyListview1.Invalidate
end;

procedure TForm1.RadioGroupIncrementalSearchDirClick(Sender: TObject);
begin
  EasyListview1.IncrementalSearch.Direction := TEasyIncrementalSearchDir(RadioGroupIncrementalSearchDir.ItemIndex)
end;

procedure TForm1.ComboBoxIncrementalSearchTypeChange(Sender: TObject);
begin
  EasyListview1.IncrementalSearch.ItemType := TEasyIncrementalSearchItemType(ComboBoxIncrementalSearchType.ItemIndex)
end;

procedure TForm1.ComboBoxIncrementalSearchStartTypeChange(Sender: TObject);
begin
  EasyListview1.IncrementalSearch.StartType := TCoolIncrementalSearchStart(ComboBoxIncrementalSearchStartType.ItemIndex)
end;

procedure TForm1.EditIncrementalSearchResetTimeKeyPress(Sender: TObject;
  var Key: Char);
begin
  if Key = #13 then
  begin
    EasyListview1.IncrementalSearch.ResetTime := StrToInt(EditIncrementalSearchResetTime.Text);
    Key := #0
  end
end;

procedure TForm1.EditIncrementalSearchResetTimeExit(Sender: TObject);
begin
  EasyListview1.IncrementalSearch.ResetTime := StrToInt(EditIncrementalSearchResetTime.Text)
end;

procedure TForm1.CheckBoxIncrementalSearchEnableClick(Sender: TObject);
begin
  EasyListview1.IncrementalSearch.Enabled := CheckBoxIncrementalSearchEnable.Checked
end;

procedure TForm1.EasyListview1IncrementalSearch(Item: TEasyCollectionItem;
  const SearchBuffer: string; var Handled: Boolean; var CompareResult: Integer);
begin
  LabelQuery.Caption := SearchBuffer;
  // Will automatically handle the search if we leave Handled to False
end;

procedure TForm1.CheckBoxDragDropEnabledClick(Sender: TObject);
begin
  EasyListview1.DragManager.Enabled := CheckBoxDragDropEnabled.Checked
end;

procedure TForm1.TrackBarSelTextBlendAlphaChange(Sender: TObject);
begin
  EasyListview1.Selection.BlendAlphaTextRect := TrackBarSelTextBlendAlpha.Position;
  LabelBlendAlphaTextRect.Caption := IntToStr(TrackBarSelTextBlendAlpha.Position);
  EasyListview1.Invalidate;
end;

procedure TForm1.EasyListview1GroupHotTrack(Sender: TCustomEasyListview;
  Group: TEasyGroup; State: TEasyHotTrackState; MousePos: TPoint);
begin
  if State = ehsEnable then
    Label46.Caption := 'Group: ' + IntToStr(Group.Index) + ' Hot Tracking'
  else
    Label46.Caption := 'Group not Hot Tracking'
end;

procedure TForm1.EasyListview1ItemHotTrack(Sender: TCustomEasyListview;
  Item: TEasyItem; State: TEasyHotTrackState; MousePos: TPoint);
begin
  if State = ehsEnable then
    Label48.Caption := 'Item: ' + IntToStr(Item.Index) + ' Hot Tracking'
  else
    Label48.Caption := 'Item not Hot Tracking'
end;

procedure TForm1.CheckBoxHotTrackEnableClick(Sender: TObject);
begin
  EasyListview1.HotTrack.Enabled := CheckBoxHotTrackEnable.Checked
end;

procedure TForm1.CheckBoxGroupHitIconClick(Sender: TObject);
begin
  if CheckBoxGroupHitIcon.Checked then
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack + [htgIcon]
  else
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack - [htgIcon]
end;

procedure TForm1.CheckBoxGroupHitTextClick(Sender: TObject);
begin
  if CheckBoxGroupHitText.Checked then
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack + [htgText]
  else
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack - [htgText]
end;

procedure TForm1.CheckBoxGroupHitTopClick(Sender: TObject);
begin
  if CheckBoxGroupHitTop.Checked then
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack + [htgTopMargin]
  else
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack - [htgTopMargin]
end;

procedure TForm1.CheckBoxGroupHitBottomClick(Sender: TObject);
begin
  if CheckBoxGroupHitBottom.Checked then
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack + [htgBottomMargin]
  else
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack - [htgBottomMargin]
end;

procedure TForm1.CheckBoxGroupHitLeftClick(Sender: TObject);
begin
  if CheckBoxGroupHitLeft.Checked then
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack + [htgLeftMargin]
  else
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack - [htgLeftMargin]
end;

procedure TForm1.CheckBoxGroupHitRightClick(Sender: TObject);
begin
  if CheckBoxGroupHitRight.Checked then
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack + [htgRightMargin]
  else
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack - [htgRightMargin]
end;

procedure TForm1.CheckBoxGroupHitAnywhereClick(Sender: TObject);
begin
  if CheckBoxGroupHitAnywhere.Checked then
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack + [htgAnyWhere]
  else
    EasyListview1.HotTrack.GroupTrack := EasyListview1.HotTrack.GroupTrack - [htgAnyWhere]
end;

procedure TForm1.CheckBoxItemHitIconClick(Sender: TObject);
begin
  if CheckBoxItemHitIcon.Checked then
    EasyListview1.HotTrack.ItemTrack := EasyListview1.HotTrack.ItemTrack + [htiIcon]
  else
    EasyListview1.HotTrack.ItemTrack := EasyListview1.HotTrack.ItemTrack - [htiIcon]
end;

procedure TForm1.CheckBoxItemHitTextClick(Sender: TObject);
begin
  if CheckBoxItemHitText.Checked then
    EasyListview1.HotTrack.ItemTrack := EasyListview1.HotTrack.ItemTrack + [htiText]
  else
    EasyListview1.HotTrack.ItemTrack := EasyListview1.HotTrack.ItemTrack - [htiText]
end;

procedure TForm1.CheckBoxItemHitAnyWhereClick(Sender: TObject);
begin
  if CheckBoxItemHitAnyWhere.Checked then
    EasyListview1.HotTrack.ItemTrack := EasyListview1.HotTrack.ItemTrack + [htiAnyWhere]
  else
    EasyListview1.HotTrack.ItemTrack := EasyListview1.HotTrack.ItemTrack - [htiAnyWhere]
end;

procedure TForm1.CheckBoxUnderLineTextClick(Sender: TObject);
begin
  EasyListview1.HotTrack.Underline := CheckBoxUnderLineText.Checked
end;

procedure TForm1.CheckBoxHotTrackFocusOnlyClick(Sender: TObject);
begin
  EasyListview1.HotTrack.OnlyFocused := CheckBoxHotTrackFocusOnly.Checked
end;

procedure TForm1.EasyListview1ItemPaintText(Sender: TCustomEasyListview;
  Item: TEasyItem; Position: Integer; ACanvas: TCanvas);
begin
  if CheckBoxRandomItemCaptionColor.Checked and not Item.Selected then
  begin
    case Item.ImageIndex of
      0: ACanvas.Font.Color := (clGreen);
      1: ACanvas.Font.Color := (clRed);
      2: ACanvas.Font.Color := (clBlue);
    end
  end;
  if (CheckBoxRedDetails.Checked) and (Position > 0) then
    ACanvas.Font.Color := clRed;
end;

procedure TForm1.CheckBoxRedDetailsClick(Sender: TObject);
begin
  EasyListview1.Invalidate;
end;

procedure TForm1.CheckBoxBkGndClick(Sender: TObject);
begin
  EasyListview1.BackGround.Enabled := CheckBoxBkGnd.Checked
end;

procedure TForm1.CheckBoxHilightColumnClick(Sender: TObject);
begin
  EasyListview1.PaintInfoColumn.HilightFocused := CheckBoxHilightColumn.Checked
end;

procedure TForm1.ButtonHilightColorClick(Sender: TObject);
begin
  ColorDialog1.Color := EasyListview1.PaintInfoColumn.HilightFocusedColor;
  if ColorDialog1.Execute then
    EasyListview1.PaintInfoColumn.HilightFocusedColor := ColorDialog1.Color
end;

procedure TForm1.CheckBoxGridLinesClick(Sender: TObject);
begin
  EasyListview1.PaintInfoItem.GridLines := CheckBoxGridLines.Checked
end;

procedure TForm1.ButtonGridLineColorClick(Sender: TObject);
begin
  ColorDialog1.Color := EasyListview1.PaintInfoItem.GridLineColor;
  if ColorDialog1.Execute then
    EasyListview1.PaintInfoItem.GridLineColor := ColorDialog1.Color
end;

procedure TForm1.EasyListview1ItemGetCaption(Sender: TCustomEasyListview;
  Item: TEasyItem; Column: Integer; var Caption: string);
begin
 // Caption := 'Item';  Exit;
  case Column of
    0: Caption := 'Group: ' + IntToStr(Item.OwnerGroup.Index) +
             ' Item: ' + IntToStr(Item.Index) +
             ' Column: ' + IntToStr(Column) +
             ' Visible Index: ' + IntToStr(Item.VisibleIndex);
  else
    Caption := ' Column: ' + IntToStr(Column);
  end;
end;

procedure TForm1.CheckBoxSelectionGradientClick(Sender: TObject);
begin
  EasyListview1.Selection.Gradient := CheckBoxSelectionGradient.Checked
end;

procedure TForm1.PanelGradientTopClick(Sender: TObject);
begin
  ColorDialog1.Color := EasyListview1.Selection.GradientColorTop;
  if ColorDialog1.Execute then
  begin
    EasyListview1.Selection.GradientColorTop := ColorDialog1.Color;
    PanelGradientTop.Color := ColorDialog1.Color;
  end
end;

procedure TForm1.PanelGradientBottomClick(Sender: TObject);
begin
  ColorDialog1.Color := EasyListview1.Selection.GradientColorBottom;
  if ColorDialog1.Execute then
  begin
    EasyListview1.Selection.GradientColorBottom := ColorDialog1.Color;
    PanelGradientBottom.Color := ColorDialog1.Color;
  end
end;

procedure TForm1.CheckBoxSelectionBlurBkGndClick(Sender: TObject);
begin
  EasyListview1.Selection.BlurAlphaBkGnd := CheckBoxSelectionBlurBkGnd.Checked
end;

procedure TForm1.CheckBoxBkGndTextClick(Sender: TObject);
begin
  EasyListview1.BackGround.CaptionShow := CheckBoxBkGndText.Checked
end;

procedure TForm1.EditBkGndCaptionChange(Sender: TObject);
begin
  EasyListview1.BackGround.Caption := EditBkGndCaption.Text
end;

procedure TForm1.RadioGroupBkGndCaptionAlignmentClick(Sender: TObject);
begin
  EasyListview1.BackGround.CaptionAlignment := TAlignment(RadioGroupBkGndCaptionAlignment.ItemIndex)
end;

procedure TForm1.RadioGroupBkGndCaptionVAlignmentClick(Sender: TObject);
begin
  EasyListview1.BackGround.CaptionVAlignment := TCommonVAlignment(RadioGroupBkGndCaptionVAlignment.ItemIndex)
end;

procedure TForm1.CheckBoxBkGndCaptionOnlyWhenEmptyClick(Sender: TObject);
begin
  EasyListview1.BackGround.CaptionShowOnlyWhenEmpty := CheckBoxBkGndCaptionOnlyWhenEmpty.Checked
end;

procedure TForm1.CheckBoxBkGndCaptionSingleLineClick(Sender: TObject);
begin
  EasyListview1.BackGround.CaptionSingleLine := CheckBoxBkGndCaptionSingleLine.Checked
end;

procedure TForm1.CheckBoxBkGndTileClick(Sender: TObject);
begin
  EasyListview1.BackGround.Tile := CheckBoxBkGndTile.Checked
end;

procedure TForm1.CheckBoxBkGndTransparentClick(Sender: TObject);
begin
  EasyListview1.BackGround.Transparent := CheckBoxBkGndTransparent.Checked
end;

procedure TForm1.TrackBarBkGndXOffsetChange(Sender: TObject);
begin
  EasyListview1.BackGround.OffsetX := TrackBarBkGndXOffset.Position
end;

procedure TForm1.TrackBarBkGndYOffsetChange(Sender: TObject);
begin
  EasyListview1.BackGround.OffsetY := TrackBarBkGndYOffset.Position
end;

procedure TForm1.CheckBoxTrackOffsetsClick(Sender: TObject);
begin
  EasyListview1.BackGround.OffsetTrack := CheckBoxTrackOffsets.Checked
end;

procedure TForm1.ButtonBkGndLoadImageClick(Sender: TObject);
begin
  OpenDialogStream.Filter := 'Bitmap Files (*.bmp)|*.BMP';
  if OpenDialogStream.Execute then
  begin
    EasyListview1.BackGround.Image.LoadFromFile(OpenDialogStream.FileName);
    EditBkGndImage.Text := OpenDialogStream.FileName;
  end
end;

procedure TForm1.EasyListview1PaintBkGnd(Sender: TCustomEasyListview;
  ACanvas: TCanvas; AWindowRect: TRect; AlphaBlender: TEasyAlphaBlender;
  var DoDefault: Boolean);
var
  R: TRect;
begin
  if CheckBoxBkGndCustomDraw.Checked then
  begin
    DoDefault := False;
    R := Rect(0, 0, 90, 90);
    OffsetRect(R, Sender.ClientWidth - 100, Sender.Height - 100);
    // Draw some rectangles in the corner
    ACanvas.Brush.Color := clGreen;
    ACanvas.Rectangle(R);
    OffsetRect(R, -10, -10);
    ACanvas.Brush.Color := clBlue;
    ACanvas.Rectangle(R);
    OffsetRect(R, -10, -10);
    ACanvas.Brush.Color := clGreen;
    ACanvas.Rectangle(R);
    OffsetRect(R, -10, -10);
    ACanvas.Brush.Color := clRed;
    ACanvas.Rectangle(R);
    OffsetRect(R, -10, -10);
    ACanvas.Brush.Color := clYellow;
    ACanvas.Rectangle(R);

    if CheckBoxCustomBkGndAlphaBlend.Checked then
    begin
      R := Rect(0, 0, 130, 130);
      OffsetRect(R, Sender.ClientWidth - 140, Sender.Height - 140);
      AlphaBlender.BasicBlend(EasyListview1, ACanvas, R, EasyListview1.Color, TrackBarCustomDrawBkGnd.Position, False);
    end
  end
end;

procedure TForm1.CheckBoxBkGndCustomDrawClick(Sender: TObject);
begin
  EasyListview1.SafeInvalidateRect(nil, False);
end;

procedure TForm1.CheckBoxCustomDrawCirclesClick(Sender: TObject);
begin
  EasyListview1.SafeInvalidateRect(nil, False);
end;

procedure TForm1.TrackBarCustomDrawBkGndChange(Sender: TObject);
begin
  EasyListview1.SafeInvalidateRect(nil, False);
end;

procedure TForm1.CheckBoxCustomBkGndAlphaBlendClick(Sender: TObject);
begin
  EasyListview1.SafeInvalidateRect(nil, False);
end;

procedure TForm1.CheckBoxHideCaptionsClick(Sender: TObject);
begin
  EasyListview1.PaintInfoItem.HideCaption := CheckBoxHideCaptions.Checked
end;

procedure TForm1.Button5Click(Sender: TObject);
begin
  EasyListview1.Selection.DeleteSelected(True);
end;

procedure TForm1.CheckBoxStateImagesClick(Sender: TObject);
begin
  // Since we are using VirtualItems all we have to do is repaint the control
  if CheckBoxStateImages.Checked then
    EasyListview1.ImagesState := ImageListState
  else
    EasyListview1.ImagesState := nil;
  EasyListview1.Invalidate;
end;

procedure TForm1.CheckBoxHeaderAlwaysVisibleClick(Sender: TObject);
begin
  EasyListview1.Header.ShowInAllViews := CheckBoxHeaderAlwaysVisible.Checked;
  InvalidateLV
end;

procedure TForm1.CheckBoxSnapHorzScrollClick(Sender: TObject);
begin
  EasyListview1.Scrollbars.SnapHorzView := CheckBoxSnapHorzScroll.Checked
end;

procedure TForm1.EditHeightExit(Sender: TObject);
begin
  EasyListview1.Header.Height := StrToInt(EditHeight.Text)
end;

procedure TForm1.EditHeightKeyPress(Sender: TObject; var Key: Char);
begin
  if Key = #13 then
  begin
    Key := #0;
    EasyListview1.Header.Height := StrToInt(EditHeight.Text)
  end
end;

procedure TForm1.CheckBoxHeaderDropDownArrowClick(Sender: TObject);
var
  i: Integer;
begin
  for i := 0 to EasyListview1.Header.Columns.Count - 1 do
    EasyListview1.Header.Columns[i].DropDownButton.Visible := CheckBoxHeaderDropDownArrow.Checked
end;

procedure TForm1.EasyListview1ColumnGetCaption(Sender: TCustomEasyListview;
  Column: TEasyColumn; Line: Integer; var Caption: string);
begin
  Caption := 'Column: ' + IntToStr(Column.Index)
end;

procedure TForm1.CheckBoxDropDownArrowAlwaysShowClick(Sender: TObject);
var
  i: Integer;
begin
  for i := 0 to EasyListview1.Header.Columns.Count - 1 do
    EasyListview1.Header.Columns[i].DropDownButton.AlwaysShow := CheckBoxDropDownArrowAlwaysShow.Checked
end;

procedure TForm1.CheckBoxDropDownButtonEnabledClick(Sender: TObject);
var
  i: Integer;
begin
  for i := 0 to EasyListview1.Header.Columns.Count - 1 do
    EasyListview1.Header.Columns[i].DropDownButton.Enabled := CheckBoxDropDownButtonEnabled.Checked
end;

procedure TForm1.EasyListview1ColumnDropDownButtonClick(
  Sender: TCustomEasyListview; Column: TEasyColumn;
  Button: TCommonMouseButton; ShiftState: TShiftState; WindowPt: TPoint; var DoDefault: Boolean);
begin
  if CheckBoxDropDownButtonCustomAction.Checked then
  begin
    DoDefault := False;
    MessageBox(Handle, PChar('Pressed DropDownButton on Column: ' + IntToStr(Column.Index)), 'Custom Action OnColumnDropDownButtonClick', MB_OK);
  end
end;

procedure TForm1.EditBandMarginExit(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.BandMargin := StrToInt(EditBandMargin.Text)
end;

procedure TForm1.EditBandMarginKeyPress(Sender: TObject; var Key: Char);
begin
  if Key = #13 then
  begin
    Key := #0;
    EasyListview1.PaintInfoGroup.BandMargin := StrToInt(EditBandMargin.Text)
  end;
end;

procedure TForm1.RadioGroupGroupHAlignClick(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.Alignment := TAlignment( RadioGroupGroupHAlign.ItemIndex)
end;

procedure TForm1.RadioGroupGroupVAlignClick(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.VAlignment := TCommonVAlignment( RadioGroupGroupVAlign.ItemIndex)
end;

procedure TForm1.EditBandIndentExit(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.BandIndent := StrToInt(EditBandIndent.Text)
end;

procedure TForm1.EditBandIndentKeyPress(Sender: TObject; var Key: Char);
begin
  if Key = #13 then
  begin
    Key := #0;
    EasyListview1.PaintInfoGroup.BandIndent := StrToInt(EditBandIndent.Text)
  end;
end;

procedure TForm1.EditGroupMarginTopExit(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.MarginTop.Size := StrToInt(EditGroupMarginTop.Text);
  EasyListview1.PaintInfoGroup.MarginBottom.Size := StrToInt(EditGroupMarginBottom.Text);
  EasyListview1.PaintInfoGroup.MarginRight.Size := StrToInt(EditGroupMarginRight.Text);
  EasyListview1.PaintInfoGroup.MarginLeft.Size := StrToInt(EditGroupMarginLeft.Text);
end;

procedure TForm1.EditGroupMarginTopKeyPress(Sender: TObject;
  var Key: Char);
begin
  if Key = #13 then
  begin
    Key := #0;
    EasyListview1.PaintInfoGroup.MarginTop.Size := StrToInt(EditGroupMarginTop.Text);
    EasyListview1.PaintInfoGroup.MarginBottom.Size := StrToInt(EditGroupMarginBottom.Text);
    EasyListview1.PaintInfoGroup.MarginRight.Size := StrToInt(EditGroupMarginRight.Text);
    EasyListview1.PaintInfoGroup.MarginLeft.Size := StrToInt(EditGroupMarginLeft.Text);
  end;
end;

procedure TForm1.EditGroupCaptionIndentKeyPress(Sender: TObject;
  var Key: Char);
begin
  if Key = #13 then
  begin
    Key := #0;
    EasyListview1.PaintInfoGroup.CaptionIndent := StrToInt(EditGroupCaptionIndent.Text)
  end;
end;

procedure TForm1.EditGroupCaptionIndentExit(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.CaptionIndent := StrToInt(EditGroupCaptionIndent.Text)
end;

procedure TForm1.EditGroupImageIndentExit(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.ImageIndent := StrToInt(EditGroupImageIndent.Text)
end;

procedure TForm1.EditGroupImageIndentKeyPress(Sender: TObject;
  var Key: Char);
begin
  if Key = #13 then
  begin
    Key := #0;
    EasyListview1.PaintInfoGroup.ImageIndent := StrToInt(EditGroupImageIndent.Text)
  end;
end;

procedure TForm1.EditGroupExpandImageIndentExit(Sender: TObject);
begin
  EasyListview1.PaintInfoGroup.ExpandImageIndent := StrToInt(EditGroupExpandImageIndent.Text)
end;

procedure TForm1.EditGroupExpandImageIndentKeyPress(Sender: TObject;
  var Key: Char);
begin
  if Key = #13 then
  begin
    Key := #0;
    EasyListview1.PaintInfoGroup.ExpandImageIndent := StrToInt(EditGroupExpandImageIndent.Text)
  end;
end;

procedure TForm1.EditDropMarkSizeExit(Sender: TObject);
begin
  EasyListview1.DragManager.InsertMark.Width := StrToInt(EditDropMarkSize.Text);
end;

procedure TForm1.EditDropMarkSizeKeyDown(Sender: TObject; var Key: Word;
  Shift: TShiftState);
begin
  if Key = VK_RETURN then
  begin
    EasyListview1.DragManager.InsertMark.Width := StrToInt(EditDropMarkSize.Text);
    Key := 0
  end
end;

procedure TForm1.PanelDropMarkColorClick(Sender: TObject);
begin
  ColorDialog1.Color := EasyListview1.DragManager.InsertMark.Color;
  if ColorDialog1.Execute then
  begin
    EasyListview1.DragManager.InsertMark.Color := ColorDialog1.Color;
    PanelDropMarkColor.Color := ColorDialog1.Color;
  end
end;

procedure TForm1.CheckBoxShowDropMarkClick(Sender: TObject);
begin
  EasyListview1.DragManager.InsertMark.Enabled := CheckBoxShowDropMark.Checked
end;

procedure TForm1.CheckBoxDropMarkReSelectClick(Sender: TObject);
begin
  EasyListview1.DragManager.InsertMark.ReSelectAfterMove := CheckBoxDropMarkReSelect.Checked
end;

procedure TForm1.EasyListview1OLEDragEnter(Sender: TCustomEasyListview;
  DataObject: IDataObject; KeyState: TCommonKeyStates; WindowPt: TPoint;
  AvailableEffects: TCommonDropEffects;
  var DesiredDropEffect: TCommonDropEffect);
begin
  DesiredDropEffect := cdeMove;
end;

procedure TForm1.ListBoxColumnColorsClick(Sender: TObject);
begin
  ButtonColumnColors.Enabled := ListBoxColumnColors.ItemIndex > -1;
  if ListBoxColumnColors.ItemIndex < EasyListview1.Header.Columns.Count then
  begin
    PanelColumnColor.Color := EasyListview1.Header.Columns[ListBoxColumnColors.ItemIndex].BkGndColor;
    if PanelColumnColor.Color = clNone then
    begin
      PanelColumnColor.Color := clBtnFace;
      PanelColumnColor.Caption := 'None'
    end else
      PanelColumnColor.Caption := ''
  end else
  begin
    PanelColumnColor.Color := clBtnFace;
    PanelColumnColor.Caption := 'None'
  end
end;

procedure TForm1.ButtonColumnColorsClick(Sender: TObject);
begin
  if ListBoxColumnColors.ItemIndex < EasyListview1.Header.Columns.Count then
  begin
    ColorDialog1.Color := EasyListview1.Header.Columns[ListBoxColumnColors.ItemIndex].BkGndColor;
    if ColorDialog1.Execute then
    begin
      EasyListview1.Header.Columns[ListBoxColumnColors.ItemIndex].BkGndColor := ColorDialog1.Color;
      PanelColumnColor.Color := ColorDialog1.Color
    end
  end
end;

procedure TForm1.CheckBoxColumnPaintFullWindowClick(Sender: TObject);
begin
EasyListview1.PaintInfoColumn.BkGndColorFillsWindow := CheckBoxColumnPaintFullWindow.Checked
end;

end.

