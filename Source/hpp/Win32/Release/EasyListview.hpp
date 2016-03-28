// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EasyListview.pas' rev: 31.00 (Windows)

#ifndef EasylistviewHPP
#define EasylistviewHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Themes.hpp>
#include <Winapi.UxTheme.hpp>
#include <Winapi.oleacc.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ImgList.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Winapi.ActiveX.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.RTLConsts.hpp>
#include <EasyLVResources.hpp>
#include <MPCommonUtilities.hpp>
#include <MPShellTypes.hpp>
#include <MPDataObject.hpp>
#include <MPCommonObjects.hpp>
#include <MPThreadManager.hpp>
#include <EasyTaskPanelForm.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------
namespace Easylistview {
class DELPHICLASS TEasyItem;
class DELPHICLASS TEasyGroup;
class DELPHICLASS TEasyColumn;
struct TGroupSortInfoRec;
__interface IEasyNotificationSink;
}

namespace Easylistview
{
//-- forward type declarations -----------------------------------------------
struct TEasyFontScale;
struct TEasyHitInfoColumn;
struct TEasyHitInfoGroup;
struct TEasyHitInfoItem;
struct TEasyRectArrayObject;
__interface IEasyCaptions;
typedef System::DelphiInterface<IEasyCaptions> _di_IEasyCaptions;
__interface IEasyCaptionsEditable;
typedef System::DelphiInterface<IEasyCaptionsEditable> _di_IEasyCaptionsEditable;
__interface IEasyImageList;
typedef System::DelphiInterface<IEasyImageList> _di_IEasyImageList;
__interface IEasyStateImageList;
typedef System::DelphiInterface<IEasyStateImageList> _di_IEasyStateImageList;
__interface IEasyImages;
typedef System::DelphiInterface<IEasyImages> _di_IEasyImages;
__interface IEasyImagesEditable;
typedef System::DelphiInterface<IEasyImagesEditable> _di_IEasyImagesEditable;
__interface IEasyThumbnail;
typedef System::DelphiInterface<IEasyThumbnail> _di_IEasyThumbnail;
__interface IEasyCustomImage;
typedef System::DelphiInterface<IEasyCustomImage> _di_IEasyCustomImage;
__interface IEasyDetails;
typedef System::DelphiInterface<IEasyDetails> _di_IEasyDetails;
__interface IEasyDetailsEditable;
typedef System::DelphiInterface<IEasyDetailsEditable> _di_IEasyDetailsEditable;
__interface IEasyChecks;
typedef System::DelphiInterface<IEasyChecks> _di_IEasyChecks;
__interface IEasyGroupKey;
typedef System::DelphiInterface<IEasyGroupKey> _di_IEasyGroupKey;
__interface IEasyGroupKeyEditable;
typedef System::DelphiInterface<IEasyGroupKeyEditable> _di_IEasyGroupKeyEditable;
__interface IEasyNotificationSink;
typedef System::DelphiInterface<IEasyNotificationSink> _di_IEasyNotificationSink;
__interface IEasyNotifier;
typedef System::DelphiInterface<IEasyNotifier> _di_IEasyNotifier;
__interface IEasyCompare;
typedef System::DelphiInterface<IEasyCompare> _di_IEasyCompare;
__interface IEasyCellEditor;
typedef System::DelphiInterface<IEasyCellEditor> _di_IEasyCellEditor;
class DELPHICLASS TEasyMemo;
class DELPHICLASS TEasyEdit;
class DELPHICLASS TEasyInterfacedPersistent;
class DELPHICLASS TEasyOwnedInterfacedPersistent;
class DELPHICLASS TEasyPersistent;
class DELPHICLASS TEasyOwnedPersistent;
class DELPHICLASS TEasyCanvasStore;
class DELPHICLASS TEasyOwnedPersistentView;
class DELPHICLASS TEasyAlphaBlender;
class DELPHICLASS TEasyOwnedPersistentGroupItem;
class DELPHICLASS TEasySelectionGroupList;
class DELPHICLASS TEasyMargin;
class DELPHICLASS TEasyHeaderMargin;
class DELPHICLASS TCustomEasyFooterMargin;
class DELPHICLASS TEasyFooterMargin;
class DELPHICLASS TEasyPaintInfoBasic;
class DELPHICLASS TEasyPaintInfoBaseItem;
class DELPHICLASS TEasyPaintInfoItem;
class DELPHICLASS TEasyPaintInfoTaskBandItem;
class DELPHICLASS TEasyPaintInfoBaseColumn;
class DELPHICLASS TCustomEasyPaintInfoBaseColumn;
class DELPHICLASS TEasyPaintInfoColumn;
class DELPHICLASS TEasyPaintInfoTaskBandColumn;
class DELPHICLASS TEasyPaintInfoBaseGroup;
class DELPHICLASS TEasyPaintInfoGroup;
class DELPHICLASS TEasyPaintInfoTaskbandGroup;
class DELPHICLASS TEasyDynamicDataHelper;
class DELPHICLASS TEasyItemDynamicDataHelper;
class DELPHICLASS TEasyCollectionItem;
class DELPHICLASS TEasyItem;
class DELPHICLASS TEasyItemInterfaced;
class DELPHICLASS TEasyItemVirtual;
class DELPHICLASS TEasyItemStored;
class DELPHICLASS TEasyCollection;
class DELPHICLASS TEasyViewItem;
class DELPHICLASS TEasyViewIconItem;
class DELPHICLASS TEasyViewSmallIconItem;
class DELPHICLASS TEasyViewListItem;
class DELPHICLASS TEasyViewReportItem;
class DELPHICLASS TEasyViewReportThumbItem;
class DELPHICLASS TEasyViewGridItem;
class DELPHICLASS TEasyViewThumbnailItem;
class DELPHICLASS TEasyViewTileItem;
class DELPHICLASS TEasyViewFilmStripItem;
class DELPHICLASS TEasyViewTaskBandItem;
class DELPHICLASS TEasyItems;
class DELPHICLASS TEasyGlobalItems;
class DELPHICLASS TEasyGlobalImageManager;
class DELPHICLASS TEasyGridGroup;
class DELPHICLASS TEasyGridIconGroup;
class DELPHICLASS TEasyGridSmallIconGroup;
class DELPHICLASS TEasyGridListGroup;
class DELPHICLASS TEasyGridReportGroup;
class DELPHICLASS TEasyGridReportThumbGroup;
class DELPHICLASS TEasyGridThumbnailGroup;
class DELPHICLASS TEasyGridTileGroup;
class DELPHICLASS TEasyGridFilmStripGroup;
class DELPHICLASS TEasyGridGridGroup;
class DELPHICLASS TEasyGridSingleColumn;
class DELPHICLASS TEasyGridTaskBandGroup;
class DELPHICLASS TEasyGridGroupTaskPanel;
class DELPHICLASS TEasyGroup;
class DELPHICLASS TEasyGroupInterfaced;
class DELPHICLASS TEasyBaseGroupStored;
class DELPHICLASS TEasyGroupStored;
class DELPHICLASS TEasyGroupTaskPanel;
class DELPHICLASS TEasyGroupVirtual;
class DELPHICLASS TEasyViewGroup;
class DELPHICLASS TEasyViewTaskBandGroup;
class DELPHICLASS TEasyViewTaskPanelGroup;
class DELPHICLASS TEasyGroups;
class DELPHICLASS TEasyGroupsTaskPanel;
class DELPHICLASS TEasyCellSize;
class DELPHICLASS TEasyCellSizeIcon;
class DELPHICLASS TEasyCellSizeSmallIcon;
class DELPHICLASS TEasyCellSizeThumbnail;
class DELPHICLASS TEasyCellSizeTile;
class DELPHICLASS TEasyCellSizeList;
class DELPHICLASS TEasyCellSizeReport;
class DELPHICLASS TEasyCellSizeReportThumb;
class DELPHICLASS TEasyCellSizeFilmStrip;
class DELPHICLASS TEasyCellGrid;
class DELPHICLASS TEasyCellSizes;
class DELPHICLASS TEasyColumnDropDownButton;
class DELPHICLASS TEasyColumn;
class DELPHICLASS TEasyColumnInterfaced;
class DELPHICLASS TEasyColumnStored;
class DELPHICLASS TEasyColumnVirtual;
class DELPHICLASS TEasyViewColumn;
class DELPHICLASS TEasyColumns;
class DELPHICLASS TColumnPos;
class DELPHICLASS TEasyHeader;
class DELPHICLASS TEasyEditManager;
class DELPHICLASS TEasyEnumFormatEtcManager;
class DELPHICLASS TEasyDataObjectManager;
class DELPHICLASS TCustomEasyDragManagerBase;
class DELPHICLASS TEasyHeaderDragManager;
class DELPHICLASS TEasyInsertMark;
class DELPHICLASS TEasyOLEDragManager;
class DELPHICLASS TEasySelectionManager;
class DELPHICLASS TEasyCheckManager;
class DELPHICLASS TEasyHotTrackManager;
class DELPHICLASS TEasyScrollbarManager;
class DELPHICLASS TEasyBackgroundManager;
class DELPHICLASS TEasyTaskBandBackgroundManager;
class DELPHICLASS TEasyDropTargetManager;
class DELPHICLASS TEasyDropSourceManager;
class DELPHICLASS TEasyDragRectManager;
class DELPHICLASS TEasySorter;
class DELPHICLASS TEasyQuickSort;
class DELPHICLASS TEasyBubbleSort;
class DELPHICLASS TEasyMergeSort;
struct TGroupSortInfoRec;
class DELPHICLASS TEasySortManager;
class DELPHICLASS TEasyHintInfo;
class DELPHICLASS TEasyHintWindow;
class DELPHICLASS TEasyIncrementalSearchManager;
class DELPHICLASS TEasyGestureManager;
struct TEasyHintInfoRec;
class DELPHICLASS TCustomEasyListview;
class DELPHICLASS TEasyBaseEditor;
class DELPHICLASS TEasyStringEditor;
class DELPHICLASS TEasyMemoEditor;
class DELPHICLASS TEasyListview;
class DELPHICLASS TEasyBaseTaskBand;
class DELPHICLASS TEasyTaskPanelBand;
class DELPHICLASS TEasyTaskBand;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TEasyCollectionItemClass;

typedef System::TMetaClass* TEasyViewItemClass;

typedef System::TMetaClass* TEasyViewColumnClass;

typedef System::TMetaClass* TEasyViewGroupClass;

typedef System::TMetaClass* TEasyGridGroupClass;

typedef System::TMetaClass* TEasyGroupClass;

typedef System::TMetaClass* TEasyItemClass;

typedef System::TMetaClass* TEasyColumnClass;

typedef System::TMetaClass* TEasyColumnStoredClass;

typedef TEasyItem* __fastcall (__closure *TItemNextEnum)(TEasyItem* Item);

typedef TEasyItem* __fastcall (__closure *TItemEnumFirstLast)(void);

typedef System::DynamicArray<System::Types::TRect> TRectArray;

typedef System::Set<Mpcommonutilities::TCommonMouseButton, Mpcommonutilities::TCommonMouseButton::cmbNone, Mpcommonutilities::TCommonMouseButton::cmbMiddle> TCommonMouseButtons;

typedef System::DynamicArray<TEasyItem*> TEasyItemArray;

typedef System::DynamicArray<TEasyGroup*> TEasyGroupArray;

typedef System::DynamicArray<TEasyColumn*> TEasyColumnArray;

struct DECLSPEC_DRECORD TEasyFontScale
{
public:
	double Width;
	double Height;
};


enum DECLSPEC_DENUM TEasyQueryDragResult : unsigned char { eqdrContinue, eqdrQuit, eqdrDrop };

enum DECLSPEC_DENUM TEasyCheckType : unsigned char { ectNone, ectNoneWithSpace, ectBox, ectRadio };

enum DECLSPEC_DENUM TEasyListStyle : unsigned char { elsIcon, elsSmallIcon, elsList, elsReport, elsThumbnail, elsTile, elsReportThumb, elsFilmStrip, elsGrid };

enum DECLSPEC_DENUM TEasyGroupMarginEdge : unsigned char { egmeBackground, egmeTop, egmeBottom, egmeLeft, egmeRight, egmeForeground };

enum DECLSPEC_DENUM TEasyHeaderType : unsigned char { ehtHeader, ehtFooter };

enum DECLSPEC_DENUM TEasyHeaderButtonStyle : unsigned char { ehbsThick, ehbsFlat, ehbsPlate, ehbsThemed };

enum DECLSPEC_DENUM TEasyHeaderImagePosition : unsigned char { ehpLeft, ehpTop, ehpRight, ehpBottom };

enum DECLSPEC_DENUM TEasySortDirection : unsigned char { esdNone, esdAscending, esdDescending };

enum DECLSPEC_DENUM TEasySortGlyphAlign : unsigned char { esgaLeft, esgaRight };

enum DECLSPEC_DENUM TEasyDragType : unsigned char { edtOLE, edtVCL };

enum DECLSPEC_DENUM TEasySelectionType : unsigned char { ecstSelect, ecstUnSelect, ecstInvert };

enum DECLSPEC_DENUM TEasyColumnHitTestInfo : unsigned char { ectOnCheckbox, ectOnIcon, ectOnLabel, ectOnText };

typedef System::Set<TEasyColumnHitTestInfo, TEasyColumnHitTestInfo::ectOnCheckbox, TEasyColumnHitTestInfo::ectOnText> TEasyColumnHitTestInfoSet;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TEasyHitInfoColumn
{
public:
	TEasyColumn* Column;
	TEasyColumnHitTestInfoSet HitInfo;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TEasyGroupHitTestInfo : unsigned char { egtOnBand, egtOnCheckbox, egtOnExpandButton, egtOnIcon, egtOnLabel, egtOnText, egtOnHeader, egtOnFooter, egtOnLeftMargin, egtOnRightMargin };

typedef System::Set<TEasyGroupHitTestInfo, TEasyGroupHitTestInfo::egtOnBand, TEasyGroupHitTestInfo::egtOnRightMargin> TEasyGroupHitTestInfoSet;

enum DECLSPEC_DENUM TEasyDefaultWheelScroll : unsigned char { edwsHorz, edwsVert };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TEasyHitInfoGroup
{
public:
	TEasyGroup* Group;
	TEasyGroupHitTestInfoSet HitInfo;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TEasyItemHitTestInfo : unsigned char { ehtStateIcon, ehtOnIcon, ehtOnLabel, ehtOnClickSelectBounds, ehtOnDragSelectBounds, ehtOnText, ehtOnCheck, ehtOnEdit };

typedef System::Set<TEasyItemHitTestInfo, TEasyItemHitTestInfo::ehtStateIcon, TEasyItemHitTestInfo::ehtOnEdit> TEasyItemHitTestInfoSet;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TEasyHitInfoItem
{
public:
	TEasyItem* Item;
	TEasyGroup* Group;
	TEasyColumn* Column;
	TEasyItemHitTestInfoSet HitInfo;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TEasyNonClientHitTest : unsigned char { enchBorder, enchBottom, enchBottomLeft, enchBottomRight, enchCaption, enchClient, enchClose, enchError, enchGrowBox, enchHelp, enchHScroll, enchLeft, enchMenu, enchMaxButton, enchMinButton, enchNoWhere, enchReduce, enchRight, enchSize, enchSysMenu, enchTop, enchTopLeft, enchTopRight, enchTransparent, enchVScroll, enchZoom };

enum DECLSPEC_DENUM TEasyMouseActivate : unsigned char { emaActivate, emaActivateAndEat, emaNoActivate, emaNoActivateAndEat };

enum DECLSPEC_DENUM TEasyStorageObjectState : unsigned char { esosChecked, esosCheckPending, esosCheckHover, esosClicking, esosCut, esosDestroying, esosHilighted, esosEnabled, esosFocused, esosInitialized, esosSelected, esosVisible, esosHotTracking, esosBold, esosDropTarget, esosGhosted };

typedef System::Set<TEasyStorageObjectState, TEasyStorageObjectState::esosChecked, TEasyStorageObjectState::esosGhosted> TEasyStorageObjectStates;

enum DECLSPEC_DENUM TEasyGroupsState : unsigned char { egsRebuilding };

typedef System::Set<TEasyGroupsState, TEasyGroupsState::egsRebuilding, TEasyGroupsState::egsRebuilding> TEasyGroupsStates;

enum DECLSPEC_DENUM TEasySelectHitType : unsigned char { eshtClickSelect, eshtDragSelect };

enum DECLSPEC_DENUM TEasyCellRectType : unsigned char { ertBounds, ertIcon, ertLabel, ertClickSelectBounds, ertDragSelectBounds, ertText, ertFullText };

enum DECLSPEC_DENUM TEasyImageSize : unsigned char { eisSmall, eisLarge, eisExtraLarge };

enum DECLSPEC_DENUM TEasyImageKind : unsigned char { eikNormal, eikOverlay, eikState };

enum DECLSPEC_DENUM TEasyDragManagerState : unsigned char { edmsDragging, edmsAutoScrolling };

typedef System::Set<TEasyDragManagerState, TEasyDragManagerState::edmsDragging, TEasyDragManagerState::edmsAutoScrolling> TEasyDragManagerStates;

enum DECLSPEC_DENUM TEasyControlState : unsigned char { ebcsLButtonDown, ebcsRButtonDown, ebcsMButtonDown, ebcsScrollButtonDown, ebcsDragPending, ebcsDragging, ebcsVCLDrag, ebcsDragSelectPending, ebcsDragSelecting, ebcsThemesLoaded, ebcsCheckboxClickPending, ebcsGroupExpandPending, ebcsHeaderCapture, ebcsScrolling, ebcsOLERegistered, ebcsCancelContextMenu, ebcsColumnStructureUpdatePending, ebcsGroupStructureUpdatePending, ebcsItemStructureUpdatePending, ebcsSettingParentFont, ebcsPrinting, ebcsPrintingIcons };

typedef System::Set<TEasyControlState, TEasyControlState::ebcsLButtonDown, TEasyControlState::ebcsPrintingIcons> TEasyControlStates;

enum DECLSPEC_DENUM TEasyHeaderState : unsigned char { ehsMouseCaptured, ehsResizing, ehsDragging, ehsDragPending, ehsClickPending, ehsCheckboxClickPending, ehsResizePending, ehsLButtonDown, ehsRButtonDown, ehsMButtonDown };

typedef System::Set<TEasyHeaderState, TEasyHeaderState::ehsMouseCaptured, TEasyHeaderState::ehsMButtonDown> TEasyHeaderStates;

enum DECLSPEC_DENUM TEasyItemState : unsigned char { eisTextRectCached };

typedef System::Set<TEasyItemState, TEasyItemState::eisTextRectCached, TEasyItemState::eisTextRectCached> TEasyItemStates;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TEasyRectArrayObject
{
public:
	System::Types::TRect LabelRect;
	System::Types::TRect IconRect;
	System::Types::TRect TextRect;
	System::Types::TRect CheckRect;
	System::Types::TRect BoundsRect;
	System::Types::TRect ClickSelectBoundsRect;
	System::Types::TRect DragSelectBoundsRect;
	System::Types::TRect FullTextRect;
	System::Types::TRect SelectionRect;
	System::Types::TRect FullFocusSelRect;
	System::Types::TRect FocusChangeInvalidRect;
	System::Types::TRect EditRect;
	System::Types::TRect SortRect;
	System::Types::TRect StateRect;
	TRectArray TextRects;
	System::Types::TRect ExpandButtonRect;
	System::Types::TRect BandRect;
	System::Types::TRect BackGndRect;
	System::Types::TRect GroupRect;
	System::Types::TRect DropDownArrow;
};
#pragma pack(pop)


typedef System::DynamicArray<TEasyRectArrayObject> TEasyRectArrayObjectArray;

enum DECLSPEC_DENUM TEasyMakeVisiblePos : unsigned char { emvTop, emvMiddle, emvBottom, emvAuto };

enum DECLSPEC_DENUM TEasySearchDirection : unsigned char { esdForward, esdBackward };

enum DECLSPEC_DENUM TEasyAdjacentCellDir : unsigned char { acdLeft, acdRight, acdUp, acdDown, acdPageDown, acdPageUp };

enum DECLSPEC_DENUM TEasyGridLayout : unsigned char { eglHorz, eglVert, eglGrid };

enum DECLSPEC_DENUM TEasyHintType : unsigned char { ehtText, ehtToolTip, ehtCustomDraw };

typedef TEasyHintInfoRec *PEasyHintInfoRec;

enum DECLSPEC_DENUM TEasySortAlgorithm : unsigned char { esaQuickSort, esaBubbleSort, esaMergeSort };

enum DECLSPEC_DENUM TEasyIncrementalSearchState : unsigned char { eissTimerRunning, eissSearching };

typedef System::Set<TEasyIncrementalSearchState, TEasyIncrementalSearchState::eissTimerRunning, TEasyIncrementalSearchState::eissSearching> TEasyIncrementalSearchStates;

enum DECLSPEC_DENUM TCoolIncrementalSearchStart : unsigned char { eissStartOver, eissLastHit, eissFocusedNode };

enum DECLSPEC_DENUM TEasyIncrementalSearchItemType : unsigned char { eisiAll, eisiInitializedOnly, eisiVisible };

enum DECLSPEC_DENUM TEasyIncrementalSearchDir : unsigned char { eisdForward, eisdBackward };

enum DECLSPEC_DENUM TEasyNextItemType : unsigned char { enitAny, enitVisible, enitInitialized, enitVisibleInExpandedGroup, enitEditable };

enum DECLSPEC_DENUM TEasyScrollbarDir : unsigned char { esdVertical, esdHorizontal, esdBoth };

enum DECLSPEC_DENUM TEasyHotTrackState : unsigned char { ehsEnable, ehsDisable };

enum DECLSPEC_DENUM TEasyHotTrackRectItem : unsigned char { htiIcon, htiText, htiAnyWhere };

typedef System::Set<TEasyHotTrackRectItem, TEasyHotTrackRectItem::htiIcon, TEasyHotTrackRectItem::htiAnyWhere> TEasyHotTrackRectItems;

enum DECLSPEC_DENUM TEasyHotTrackRectGroup : unsigned char { htgIcon, htgText, htgTopMargin, htgBottomMargin, htgLeftMargin, htgRightMargin, htgAnyWhere };

typedef System::Set<TEasyHotTrackRectGroup, TEasyHotTrackRectGroup::htgIcon, TEasyHotTrackRectGroup::htgAnyWhere> TEasyHotTrackRectGroups;

enum DECLSPEC_DENUM TEasyHotTrackRectColumn : unsigned char { htcIcon, htcText, htcAnyWhere };

typedef System::Set<TEasyHotTrackRectColumn, TEasyHotTrackRectColumn::htcIcon, TEasyHotTrackRectColumn::htcAnyWhere> TEasyHotTrackRectColumns;

enum DECLSPEC_DENUM TEasyInsertMarkerDir : unsigned char { dmdHorz, dmdVert };

enum DECLSPEC_DENUM TEasyInsertKind : unsigned char { eipNone, eipBefore, eipAfter, eipHeader };

__interface  INTERFACE_UUID("{6C838C0E-22A5-48D4-80C6-E266E950D3CF}") IEasyCaptions  : public System::IInterface 
{
	virtual System::Variant __fastcall GetCaption(int Column) = 0 ;
	__property System::Variant Captions[int Column] = {read=GetCaption};
};

__interface  INTERFACE_UUID("{F1403B00-7163-4FB7-804F-1A5500CD980A}") IEasyCaptionsEditable  : public IEasyCaptions 
{
	virtual bool __fastcall SetCaption(int Column, const System::Variant &Value) = 0 ;
};

__interface  INTERFACE_UUID("{298932FB-A0AE-4A0A-BE34-A782743A0579}") IEasyImageList  : public System::IInterface 
{
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(int Column, TEasyImageSize IconSize) = 0 ;
	__property Vcl::Imglist::TCustomImageList* ImageList[int Column][TEasyImageSize IconSize] = {read=GetImageList};
};

__interface  INTERFACE_UUID("{F0202D63-92A7-4C2F-9CA4-CBDE4DE0ED30}") IEasyStateImageList  : public System::IInterface 
{
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(int Column) = 0 ;
	__property Vcl::Imglist::TCustomImageList* ImageList[int Column] = {read=GetImageList};
};

__interface  INTERFACE_UUID("{20C419F5-F3DD-40C4-8526-88322E182C49}") IEasyImages  : public System::IInterface 
{
	virtual int __fastcall GetImageIndex(int Column, TEasyImageKind ImageKind) = 0 ;
	__property int ImageIndexes[int Column][TEasyImageKind ImageKind] = {read=GetImageIndex};
};

__interface  INTERFACE_UUID("{DC580B13-1D19-46BB-885F-FC5CE9B2BE66}") IEasyImagesEditable  : public IEasyImages 
{
	virtual void __fastcall SetImageIndex(int Column, TEasyImageKind ImageKind, const int Value) = 0 ;
	__property int ImageIndexes[int Column][TEasyImageKind ImageKind] = {read=GetImageIndex, write=SetImageIndex};
};

__interface  INTERFACE_UUID("{F9CA8297-0CB3-4C47-905F-3D1497C4FC4D}") IEasyThumbnail  : public System::IInterface 
{
	virtual void __fastcall ThumbnailDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ViewportRect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault) = 0 ;
};

__interface  INTERFACE_UUID("{00260055-6915-43B5-9D43-379E7F61EEA9}") IEasyCustomImage  : public System::IInterface 
{
	virtual void __fastcall CustomDrawn(TEasyColumn* Column, bool &IsCustom) = 0 ;
	virtual void __fastcall DrawImage(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender) = 0 ;
	virtual void __fastcall GetSize(TEasyColumn* Column, int &ImageW, int &ImageH) = 0 ;
};

__interface  INTERFACE_UUID("{AE1D21EB-BA52-4C24-9EB1-B35733299489}") IEasyDetails  : public System::IInterface 
{
	virtual int __fastcall GetDetailCount(void) = 0 ;
	virtual int __fastcall GetDetail(int Line) = 0 ;
	__property int Detail[int Line] = {read=GetDetail};
	__property int DetailCount = {read=GetDetailCount};
};

__interface  INTERFACE_UUID("{BBD853F9-D803-4478-B5A8-EE02FF47DC80}") IEasyDetailsEditable  : public IEasyDetails 
{
	virtual void __fastcall SetDetail(int Line, int Value) = 0 ;
	virtual void __fastcall SetDetailCount(int Value) = 0 ;
	__property int Detail[int Line] = {read=GetDetail, write=SetDetail};
	__property int DetailCount = {read=GetDetailCount, write=SetDetailCount};
};

__interface  INTERFACE_UUID("{E8820F40-2EE3-4718-B54A-39318D2D1232}") IEasyChecks  : public System::IInterface 
{
	virtual bool __fastcall GetChecked(int Column) = 0 ;
	virtual void __fastcall SetChecked(int Column, const bool Value) = 0 ;
	__property bool Checked[int Column] = {read=GetChecked, write=SetChecked};
};

__interface  INTERFACE_UUID("{2B87BB19-A133-4D43-9164-AC456747EB19}") IEasyGroupKey  : public System::IInterface 
{
	virtual unsigned __fastcall GetKey(int FocusedColumn) = 0 ;
	__property unsigned Key[int FocusedColumn] = {read=GetKey};
};

__interface  INTERFACE_UUID("{26EFE2C6-2DE2-4795-94E3-0DB0CAA38B09}") IEasyGroupKeyEditable  : public IEasyGroupKey 
{
	virtual void __fastcall SetKey(int FocusedColumn, unsigned Value) = 0 ;
	__property unsigned Key[int FocusedColumn] = {read=GetKey, write=SetKey};
};

__interface  INTERFACE_UUID("{E4F0D3DE-B2BD-4EC0-B24B-8A9B85B23A63}") IEasyNotificationSink  : public System::IInterface 
{
	virtual void __fastcall InvalidateItem(bool ImmediateRefresh) = 0 ;
	virtual void __fastcall UnRegister(void) = 0 ;
};

__interface  INTERFACE_UUID("{F10150F9-17E3-43B6-8C05-33283FF1B14E}") IEasyNotifier  : public System::IInterface 
{
	virtual void __fastcall OnRegisterNotify(const _di_IEasyNotificationSink ANotifier) = 0 ;
	virtual void __fastcall OnUnRegisterNotify(const _di_IEasyNotificationSink ANotifier) = 0 ;
};

__interface  INTERFACE_UUID("{0761D4F5-D451-4A6D-BFDC-B3000FFD0299}") IEasyCompare  : public System::IInterface 
{
	virtual int __fastcall Compare(const System::_di_IInterface Data, TEasyColumn* Column) = 0 ;
};

__interface  INTERFACE_UUID("{A1686E7E-7F39-4BD4-BE1F-9C20D7BC6EA0}") IEasyCellEditor  : public System::IInterface 
{
	virtual bool __fastcall AcceptEdit(void) = 0 ;
	virtual HWND __fastcall GetHandle(void) = 0 ;
	virtual bool __fastcall GetModified(void) = 0 ;
	virtual void __fastcall ControlWndHookProc(Winapi::Messages::TMessage &Message) = 0 ;
	virtual void __fastcall Hide(void) = 0 ;
	virtual void __fastcall Initialize(TEasyItem* AnItem, TEasyColumn* Column) = 0 ;
	virtual void __fastcall Finalize(void) = 0 ;
	virtual bool __fastcall PtInEditControl(const System::Types::TPoint &WindowPt) = 0 ;
	virtual bool __fastcall SetEditorFocus(void) = 0 ;
	virtual void __fastcall SelectAll(void) = 0 ;
	virtual void __fastcall Show(void) = 0 ;
	__property HWND Handle = {read=GetHandle};
	__property bool Modified = {read=GetModified};
};

typedef void __fastcall (__closure *TEasyListviewEvent)(TCustomEasyListview* Sender);

typedef void __fastcall (__closure *TAfterPaintEvent)(TCustomEasyListview* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ClipRect);

typedef void __fastcall (__closure *TAutoGroupGetKeyEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int ColumnIndex, TEasyGroups* Groups, unsigned &Key);

typedef void __fastcall (__closure *TAutoSortGroupCreateEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int ColumnIndex, TEasyGroups* Groups, TEasyGroup* &Group, bool &DoDefaultAction);

typedef void __fastcall (__closure *TEasyClipboardEvent)(TCustomEasyListview* Sender, bool &Handled);

typedef void __fastcall (__closure *TEasyClipboardCutEvent)(TCustomEasyListview* Sender, bool &MarkAsCut, bool &Handled);

typedef void __fastcall (__closure *TColumnCheckChangeEvent)(TCustomEasyListview* Sender, TEasyColumn* Column);

typedef void __fastcall (__closure *TColumnCheckChangingEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, bool &Allow);

typedef void __fastcall (__closure *TColumnClickEvent)(TCustomEasyListview* Sender, Mpcommonutilities::TCommonMouseButton Button, System::Classes::TShiftState ShiftState, TEasyColumn* const Column);

typedef void __fastcall (__closure *TColumnContextMenuEvent)(TCustomEasyListview* Sender, const TEasyHitInfoColumn &HitInfo, const System::Types::TPoint &WindowPoint, Vcl::Menus::TPopupMenu* &Menu);

typedef void __fastcall (__closure *TColumnDblClickEvent)(TCustomEasyListview* Sender, Mpcommonutilities::TCommonMouseButton Button, const System::Types::TPoint &MousePos, TEasyColumn* const Column);

typedef void __fastcall (__closure *TColumnDropDownButtonClickEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, Mpcommonutilities::TCommonMouseButton Button, System::Classes::TShiftState ShiftState, const System::Types::TPoint &WindowPt, bool &DoDefault);

typedef void __fastcall (__closure *TColumnEnableChangeEvent)(TCustomEasyListview* Sender, TEasyColumn* Column);

typedef void __fastcall (__closure *TColumnEnableChangingEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, bool &Allow);

typedef void __fastcall (__closure *TColumnFocusChangeEvent)(TCustomEasyListview* Sender, TEasyColumn* Column);

typedef void __fastcall (__closure *TColumnFocusChangingEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, bool &Allow);

typedef void __fastcall (__closure *TColumnFreeingEvent)(TCustomEasyListview* Sender, TEasyColumn* Column);

typedef void __fastcall (__closure *TColumnGetCaptionEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, int Line, System::WideString &Caption);

typedef void __fastcall (__closure *TColumnGetImageIndexEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, TEasyImageKind ImageKind, Mpcommonobjects::TCommonImageIndexInteger &ImageIndex);

typedef void __fastcall (__closure *TColumnGetImageListEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, Vcl::Imglist::TCustomImageList* &ImageList);

typedef void __fastcall (__closure *TColumnGetDetailCountEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, int &Count);

typedef void __fastcall (__closure *TColumnImageDrawEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);

typedef void __fastcall (__closure *TColumnImageGetSizeEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, int &ImageWidth, int &ImageHeight);

typedef void __fastcall (__closure *TColumnImageDrawIsCustomEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, bool &IsCustom);

typedef void __fastcall (__closure *TColumnGetDetailEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, int Line, int &Detail);

typedef void __fastcall (__closure *TColumnInitializeEvent)(TCustomEasyListview* Sender, TEasyColumn* Column);

typedef void __fastcall (__closure *TColumnPaintTextEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas);

typedef void __fastcall (__closure *TEasyColumnLoadFromStreamEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, System::Classes::TStream* S, int Version);

typedef void __fastcall (__closure *TEasyColumnSaveToStreamEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, System::Classes::TStream* S, int Version);

typedef void __fastcall (__closure *TColumnSelectionChangeEvent)(TCustomEasyListview* Sender, TEasyColumn* Column);

typedef void __fastcall (__closure *TColumnSelectionChangingEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, bool &Allow);

typedef void __fastcall (__closure *TColumnSetCaptionEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, System::WideString Caption);

typedef void __fastcall (__closure *TColumnSetImageIndexEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, TEasyImageKind ImageKind, int ImageIndex);

typedef void __fastcall (__closure *TColumnSetDetailEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, int Line, const int Detail);

typedef void __fastcall (__closure *TColumnSizeChangingEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, int Width, int NewWidth, bool &Allow);

typedef void __fastcall (__closure *TColumnSizeChangedEvent)(TCustomEasyListview* Sender, TEasyColumn* Column);

typedef void __fastcall (__closure *TColumnThumbnailDrawEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool &DoDefault);

typedef void __fastcall (__closure *TColumnVisibilityChangeEvent)(TCustomEasyListview* Sender, TEasyColumn* Column);

typedef void __fastcall (__closure *TColumnVisibilityChangingEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, bool &Allow);

typedef void __fastcall (__closure *TContextMenuEvent)(TCustomEasyListview* Sender, const System::Types::TPoint &MousePt, bool &Handled);

typedef void __fastcall (__closure *TColumnCustomViewEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, TEasyViewColumnClass &View);

typedef void __fastcall (__closure *TCustomGridEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, TEasyListStyle ViewStyle, TEasyGridGroupClass &Grid);

typedef void __fastcall (__closure *TDblClickEvent)(TCustomEasyListview* Sender, Mpcommonutilities::TCommonMouseButton Button, const System::Types::TPoint &MousePos, System::Classes::TShiftState ShiftState, bool &Handled);

typedef void __fastcall (__closure *TDragInsertDropEvent)(TCustomEasyListview* Sender, TEasyItem* Item, TEasyInsertKind InsertKind, Mpcommonutilities::TCommonMouseButton MouseButton, const System::Types::TPoint &InsertPt);

typedef void __fastcall (__closure *TEasyGenericCallback)(TCustomEasyListview* Sender, void * Data);

typedef void __fastcall (__closure *TEasyGestureEvent)(TCustomEasyListview* Sender, Mpcommonutilities::TCommonMouseButton Button, Mpcommonutilities::TCommonKeyStates KeyState, System::WideString Gesture, bool &DoDefaultMouseAction);

typedef void __fastcall (__closure *TGetDragImageEvent)(TCustomEasyListview* Sender, Vcl::Graphics::TBitmap* Image, const System::Types::TPoint &DragStartPt, System::Types::TPoint &HotSpot, System::Uitypes::TColor &TransparentColor, bool &Handled);

typedef void __fastcall (__closure *TGroupClickEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, Mpcommonutilities::TCommonKeyStates KeyStates, TEasyGroupHitTestInfoSet HitTest);

typedef void __fastcall (__closure *TGroupCollapseEvent)(TCustomEasyListview* Sender, TEasyGroup* Group);

typedef void __fastcall (__closure *TGroupCollapsingEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, bool &Allow);

typedef int __fastcall (__closure *TGroupCompareEvent)(TCustomEasyListview* Sender, TEasyGroup* Item1, TEasyGroup* Item2);

typedef void __fastcall (__closure *TGroupContextMenuEvent)(TCustomEasyListview* Sender, const TEasyHitInfoGroup &HitInfo, const System::Types::TPoint &WindowPoint, Vcl::Menus::TPopupMenu* &Menu, bool &Handled);

typedef void __fastcall (__closure *TGroupCustomViewEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, TEasyListStyle ViewStyle, TEasyViewGroupClass &View);

typedef void __fastcall (__closure *TGroupDblClickEvent)(TCustomEasyListview* Sender, Mpcommonutilities::TCommonMouseButton Button, const System::Types::TPoint &MousePos, const TEasyHitInfoGroup &HitInfo);

typedef void __fastcall (__closure *TGroupExpandEvent)(TCustomEasyListview* Sender, TEasyGroup* Group);

typedef void __fastcall (__closure *TGroupExpandingEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, bool &Allow);

typedef void __fastcall (__closure *TGroupFocusChangeEvent)(TCustomEasyListview* Sender, TEasyGroup* Group);

typedef void __fastcall (__closure *TGroupFocusChangingEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, bool &Allow);

typedef void __fastcall (__closure *TGroupFreeingEvent)(TCustomEasyListview* Sender, TEasyGroup* Group);

typedef void __fastcall (__closure *TGroupGetCaptionEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, System::WideString &Caption);

typedef void __fastcall (__closure *TGroupGetClassEvent)(TCustomEasyListview* Sender, TEasyCollectionItemClass &GroupClass);

typedef void __fastcall (__closure *TGroupGetImageIndexEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, TEasyImageKind ImageKind, Mpcommonobjects::TCommonImageIndexInteger &ImageIndex);

typedef void __fastcall (__closure *TGroupGetImageListEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, Vcl::Imglist::TCustomImageList* &ImageList);

typedef void __fastcall (__closure *TGroupGetDetailCountEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, int &Count);

typedef void __fastcall (__closure *TGroupImageDrawEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);

typedef void __fastcall (__closure *TGroupImageGetSizeEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, int &ImageWidth, int &ImageHeight);

typedef void __fastcall (__closure *TGroupImageDrawIsCustomEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, bool &IsCustom);

typedef void __fastcall (__closure *TGroupGetDetailEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, int Line, int &Detail);

typedef void __fastcall (__closure *TGroupInitializeEvent)(TCustomEasyListview* Sender, TEasyGroup* Group);

typedef void __fastcall (__closure *TGroupHotTrackEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, TEasyHotTrackState State, const System::Types::TPoint &MousePos);

typedef void __fastcall (__closure *TGroupLoadFromStreamEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, System::Classes::TStream* S, int Version);

typedef void __fastcall (__closure *TGroupPaintTextEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas);

typedef void __fastcall (__closure *TGroupSaveToStreamEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, System::Classes::TStream* S, int Version);

typedef void __fastcall (__closure *TGroupSetCaptionEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, System::WideString Caption);

typedef void __fastcall (__closure *TGroupSetImageIndexEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, TEasyImageKind ImageKind, int ImageIndex);

typedef void __fastcall (__closure *TGroupSetDetailEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, int Line, const int Detail);

typedef void __fastcall (__closure *TGroupSelectionChangeEvent)(TCustomEasyListview* Sender, TEasyGroup* Group);

typedef void __fastcall (__closure *TGroupSelectionChangingEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, bool &Allow);

typedef void __fastcall (__closure *TGroupThumbnailDrawEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);

typedef void __fastcall (__closure *TGroupVisibilityChangeEvent)(TCustomEasyListview* Sender, TEasyGroup* Group);

typedef void __fastcall (__closure *TGroupVisibilityChangingEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, bool &Allow);

typedef void __fastcall (__closure *THintCustomDrawEvent)(TCustomEasyListview* Sender, TEasyCollectionItem* TargetObj, TEasyHintInfo* const Info);

typedef void __fastcall (__closure *THintCustomizeInfoEvent)(TCustomEasyListview* Sender, TEasyCollectionItem* TargetObj, TEasyHintInfo* Info);

typedef void __fastcall (__closure *THintPauseTimeEvent)(TCustomEasyListview* Sender, bool HintWindowShown, int &PauseDelay);

typedef void __fastcall (__closure *THintPopupEvent)(TCustomEasyListview* Sender, TEasyCollectionItem* TargetObj, TEasyHintType HintType, const System::Types::TPoint &MousePos, System::WideString &AText, int &HideTimeout, int &ReShowTimeout, bool &Allow);

typedef void __fastcall (__closure *THeaderClickEvent)(TCustomEasyListview* Sender, Mpcommonutilities::TCommonMouseButton MouseButton, TEasyColumn* Column);

typedef void __fastcall (__closure *THeaderDblClickEvent)(TCustomEasyListview* Sender, Mpcommonutilities::TCommonMouseButton MouseButton, const System::Types::TPoint &MousePos, System::Classes::TShiftState ShiftState);

typedef void __fastcall (__closure *THeaderMouseEvent)(TCustomEasyListview* Sender, Mpcommonutilities::TCommonMouseButton MouseButton, System::Classes::TShiftState Shift, int X, int Y, TEasyColumn* Column);

typedef void __fastcall (__closure *TIncrementalSearchEvent)(TEasyCollectionItem* Item, const System::WideString SearchBuffer, bool &Handled, int &CompareResult);

typedef void __fastcall (__closure *TInsertMarkPositionEvent)(TCustomEasyListview* Sender, TEasyInsertMarkerDir &InsertMark, System::Byte &InsertMarkDropRange);

typedef void __fastcall (__closure *TItemCheckChangeEvent)(TCustomEasyListview* Sender, TEasyItem* Item);

typedef void __fastcall (__closure *TItemCheckChangingEvent)(TCustomEasyListview* Sender, TEasyItem* Item, bool &Allow);

typedef void __fastcall (__closure *TItemClickEvent)(TCustomEasyListview* Sender, TEasyItem* Item, Mpcommonutilities::TCommonKeyStates KeyStates, TEasyItemHitTestInfoSet HitInfo);

typedef int __fastcall (__closure *TItemCompareEvent)(TCustomEasyListview* Sender, TEasyColumn* Column, TEasyGroup* Group, TEasyItem* Item1, TEasyItem* Item2, bool &DoDefault);

typedef void __fastcall (__closure *TItemContextMenuEvent)(TCustomEasyListview* Sender, const TEasyHitInfoItem &HitInfo, const System::Types::TPoint &WindowPoint, Vcl::Menus::TPopupMenu* &Menu, bool &Handled);

typedef void __fastcall (__closure *TItemCreateEditorEvent)(TCustomEasyListview* Sender, TEasyItem* Item, _di_IEasyCellEditor &Editor);

typedef void __fastcall (__closure *TItemCustomViewEvent)(TCustomEasyListview* Sender, TEasyItem* Item, TEasyListStyle ViewStyle, TEasyViewItemClass &View);

typedef void __fastcall (__closure *TItemLoadFromStreamEvent)(TCustomEasyListview* Sender, TEasyItem* Item, System::Classes::TStream* S, int Version);

typedef void __fastcall (__closure *TItemSaveToStreamEvent)(TCustomEasyListview* Sender, TEasyItem* Item, System::Classes::TStream* S, int Version);

typedef void __fastcall (__closure *TItemDblClickEvent)(TCustomEasyListview* Sender, Mpcommonutilities::TCommonMouseButton Button, const System::Types::TPoint &MousePos, const TEasyHitInfoItem &HitInfo);

typedef void __fastcall (__closure *TItemEditAcceptedEvent)(TCustomEasyListview* Sender, TEasyItem* Item);

typedef void __fastcall (__closure *TItemEditBegin)(TCustomEasyListview* Sender, TEasyItem* Item, int &Column, bool &Allow);

typedef void __fastcall (__closure *TItemEditedEvent)(TCustomEasyListview* Sender, TEasyItem* Item, System::Variant &NewValue, bool &Accept);

typedef void __fastcall (__closure *TItemEditEnd)(TCustomEasyListview* Sender, TEasyItem* Item);

typedef void __fastcall (__closure *TItemEnableChangeEvent)(TCustomEasyListview* Sender, TEasyItem* Item);

typedef void __fastcall (__closure *TItemEnableChangingEvent)(TCustomEasyListview* Sender, TEasyItem* Item, bool &Allow);

typedef void __fastcall (__closure *TItemFreeingEvent)(TCustomEasyListview* Sender, TEasyItem* Item);

typedef void __fastcall (__closure *TItemFocusChangeEvent)(TCustomEasyListview* Sender, TEasyItem* Item);

typedef void __fastcall (__closure *TItemFocusChangingEvent)(TCustomEasyListview* Sender, TEasyItem* Item, bool &Allow);

typedef void __fastcall (__closure *TItemGetStreamingCreateClassEvent)(TCustomEasyListview* Sender, TEasyColumnStoredClass &AClass);

typedef void __fastcall (__closure *TItemGetCaptionEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int Column, System::WideString &Caption);

typedef void __fastcall (__closure *TEasyItemGetCaptionEvent)(TCustomEasyListview* Sender, TEasyItem* Item, TEasyColumn* Column, System::WideString &Caption);

typedef void __fastcall (__closure *TItemGetEditMenuEvent)(TCustomEasyListview* Sender, TEasyBaseEditor* Editor, Vcl::Menus::TPopupMenu* &Menu);

typedef void __fastcall (__closure *TItemGetClassEvent)(TCustomEasyListview* Sender, TEasyCollectionItemClass &ItemClass);

typedef void __fastcall (__closure *TItemGetGroupKeyEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int FocusedColumn, unsigned &GroupKey);

typedef void __fastcall (__closure *TItemGetImageIndexEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int Column, TEasyImageKind ImageKind, Mpcommonobjects::TCommonImageIndexInteger &ImageIndex);

typedef void __fastcall (__closure *TItemGetImageListEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int Column, Vcl::Imglist::TCustomImageList* &ImageList);

typedef void __fastcall (__closure *TEasyGetTaskPanelEvent)(TCustomEasyListview* Sender, TEasyGroup* Group, Easytaskpanelform::TEasyTaskPanelFormClass &TaskPanel);

typedef void __fastcall (__closure *TItemGetTileDetailCountEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int &Count);

typedef void __fastcall (__closure *TItemImageDrawEvent)(TCustomEasyListview* Sender, TEasyItem* Item, TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);

typedef void __fastcall (__closure *TItemImageGetSizeEvent)(TCustomEasyListview* Sender, TEasyItem* Item, TEasyColumn* Column, int &ImageWidth, int &ImageHeight);

typedef void __fastcall (__closure *TItemImageDrawIsCustomEvent)(TCustomEasyListview* Sender, TEasyItem* Item, TEasyColumn* Column, bool &IsCustom);

typedef void __fastcall (__closure *TItemGetTileDetailEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int Line, int &Detail);

typedef void __fastcall (__closure *TItemHotTrackEvent)(TCustomEasyListview* Sender, TEasyItem* Item, TEasyHotTrackState State, const System::Types::TPoint &MousePos);

typedef void __fastcall (__closure *TItemInitializeEvent)(TCustomEasyListview* Sender, TEasyItem* Item);

typedef void __fastcall (__closure *TItemMouseDownEvent)(TCustomEasyListview* Sender, TEasyItem* Item, Mpcommonutilities::TCommonMouseButton Button, bool &DoDefault);

typedef void __fastcall (__closure *TItemMouseUpEvent)(TCustomEasyListview* Sender, TEasyItem* Item, Mpcommonutilities::TCommonMouseButton Button, bool &DoDefault);

typedef void __fastcall (__closure *TItemPaintTextEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int Position, Vcl::Graphics::TCanvas* ACanvas);

typedef void __fastcall (__closure *TItemSelectionChangeEvent)(TCustomEasyListview* Sender, TEasyItem* Item);

typedef void __fastcall (__closure *TItemSelectionChangingEvent)(TCustomEasyListview* Sender, TEasyItem* Item, bool &Allow);

typedef void __fastcall (__closure *TEasyItemSelectionsChangedEvent)(TCustomEasyListview* Sender);

typedef void __fastcall (__closure *TItemSetCaptionEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int Column, System::WideString Caption);

typedef void __fastcall (__closure *TItemSetGroupKeyEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int Column, unsigned Key);

typedef void __fastcall (__closure *TItemSetImageIndexEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int Column, TEasyImageKind ImageKind, int ImageIndex);

typedef void __fastcall (__closure *TItemSetTileDetailEvent)(TCustomEasyListview* Sender, TEasyItem* Item, int Line, const int Detail);

typedef void __fastcall (__closure *TItemThumbnailDrawEvent)(TCustomEasyListview* Sender, TEasyItem* Item, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);

typedef void __fastcall (__closure *TItemVisibilityChangeEvent)(TCustomEasyListview* Sender, TEasyItem* Item);

typedef void __fastcall (__closure *TItemVisibilityChangingEvent)(TCustomEasyListview* Sender, TEasyItem* Item, bool &Allow);

typedef void __fastcall (__closure *TEasyMouseActivateEvent)(TCustomEasyListview* Sender, HWND TopLevelWindow, TEasyNonClientHitTest HitTest, System::Word MouseMsg, TEasyMouseActivate &Activate, bool &DoDefault);

typedef void __fastcall (__closure *TEasyKeyActionEvent)(TCustomEasyListview* Sender, System::Word &CharCode, System::Classes::TShiftState &Shift, bool &DoDefault);

typedef void __fastcall (__closure *TOLEDropSourceDragEndEvent)(TCustomEasyListview* Sender, _di_IDataObject ADataObject, Mpcommonutilities::TCommonOLEDragResult DragResult, Mpcommonutilities::TCommonDropEffects ResultEffect, Mpcommonutilities::TCommonKeyStates KeyStates);

typedef void __fastcall (__closure *TOLEDropSourceDragStartEvent)(TCustomEasyListview* Sender, _di_IDataObject ADataObject, Mpcommonutilities::TCommonDropEffects &AvailableEffects, bool &AllowDrag);

typedef void __fastcall (__closure *TOLEDropSourceQueryContineDragEvent)(TCustomEasyListview* Sender, bool EscapeKeyPressed, Mpcommonutilities::TCommonKeyStates KeyStates, TEasyQueryDragResult &QueryResult);

typedef void __fastcall (__closure *TOLEDropSourceGiveFeedbackEvent)(TCustomEasyListview* Sender, Mpcommonutilities::TCommonDropEffects Effect, bool &UseDefaultCursors);

typedef void __fastcall (__closure *TOLEDropTargetDragEnterEvent)(TCustomEasyListview* Sender, _di_IDataObject DataObject, Mpcommonutilities::TCommonKeyStates KeyState, const System::Types::TPoint &WindowPt, Mpcommonutilities::TCommonDropEffects AvailableEffects, Mpcommonutilities::TCommonDropEffect &DesiredDropEffect);

typedef void __fastcall (__closure *TOLEDropTargetDragOverEvent)(TCustomEasyListview* Sender, Mpcommonutilities::TCommonKeyStates KeyState, const System::Types::TPoint &WindowPt, Mpcommonutilities::TCommonDropEffects AvailableEffects, Mpcommonutilities::TCommonDropEffect &DesiredDropEffect);

typedef void __fastcall (__closure *TOLEDropTargetDragLeaveEvent)(TCustomEasyListview* Sender);

typedef void __fastcall (__closure *TOLEDropTargetDragDropEvent)(TCustomEasyListview* Sender, _di_IDataObject DataObject, Mpcommonutilities::TCommonKeyStates KeyState, const System::Types::TPoint &WindowPt, Mpcommonutilities::TCommonDropEffects AvailableEffects, Mpcommonutilities::TCommonDropEffect &DesiredDropEffect, bool &Handled);

typedef void __fastcall (__closure *TOLEGetCustomFormatsEvent)(TCustomEasyListview* Sender, int dwDirection, Mpdataobject::TFormatEtcArray &Formats);

typedef void __fastcall (__closure *TOLEGetDataEvent)(TCustomEasyListview* Sender, const tagFORMATETC &FormatEtcIn, tagSTGMEDIUM &Medium, bool &Handled);

typedef void __fastcall (__closure *FOLEGetDataObjectEvent)(TCustomEasyListview* Sender, _di_IDataObject &DataObject);

typedef void __fastcall (__closure *TOLEQueryDataEvent)(TCustomEasyListview* Sender, const tagFORMATETC &FormatEtcIn, bool &FormatAvailable, bool &Handled);

typedef void __fastcall (__closure *TPaintBkGndEvent)(TCustomEasyListview* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &AWindowRect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);

typedef void __fastcall (__closure *TPaintHeaderBkGndEvent)(TCustomEasyListview* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool &Handled);

typedef void __fastcall (__closure *TThreadCallbackEvent)(TCustomEasyListview* Sender, const Mpthreadmanager::TWMThreadRequest &Msg);

typedef void __fastcall (__closure *TViewChangingEvent)(TCustomEasyListview* Sender, TEasyListStyle View, bool &Allow);

typedef void __fastcall (__closure *TViewChangedEvent)(TCustomEasyListview* Sender);

typedef void __fastcall (__closure *TEasyScrollEvent)(TCustomEasyListview* Sender, int DeltaX, int DeltaY);

typedef void __fastcall (__closure *TEasyScrollEndEvent)(TCustomEasyListview* Sender, TEasyScrollbarDir ScrollDir);

typedef int __fastcall (__closure *TEasyDoGroupCompare)(TEasyColumn* Column, TEasyGroup* Group1, TEasyGroup* Group2);

typedef int __fastcall (__closure *TEasyDoItemCompare)(TEasyColumn* Column, TEasyGroup* Group, TEasyItem* Item1, TEasyItem* Item2);

class PASCALIMPLEMENTATION TEasyMemo : public Vcl::Stdctrls::TMemo
{
	typedef Vcl::Stdctrls::TMemo inherited;
	
public:
	/* TCustomMemo.Create */ inline __fastcall virtual TEasyMemo(System::Classes::TComponent* AOwner) : Vcl::Stdctrls::TMemo(AOwner) { }
	/* TCustomMemo.Destroy */ inline __fastcall virtual ~TEasyMemo(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEasyMemo(HWND ParentWindow) : Vcl::Stdctrls::TMemo(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEasyEdit : public Vcl::Stdctrls::TEdit
{
	typedef Vcl::Stdctrls::TEdit inherited;
	
public:
	/* TCustomEdit.Create */ inline __fastcall virtual TEasyEdit(System::Classes::TComponent* AOwner) : Vcl::Stdctrls::TEdit(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEasyEdit(HWND ParentWindow) : Vcl::Stdctrls::TEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TEasyEdit(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyInterfacedPersistent : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FRefCount;
	
protected:
	virtual int __stdcall _AddRef(void);
	virtual int __stdcall _Release(void);
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	System::TObject* __fastcall GetObj(void);
	
public:
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall BeforeDestruction(void);
	__classmethod virtual System::TObject* __fastcall NewInstance();
	__property System::TObject* Obj = {read=GetObj};
	__property int RefCount = {read=FRefCount, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEasyInterfacedPersistent(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TEasyInterfacedPersistent(void) : System::Classes::TPersistent() { }
	
private:
	void *__ICommonExtractObj;	// Mpcommonobjects::ICommonExtractObj 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7F667930-E47B-4474-BA62-B100D7DBDA70}
	operator Mpcommonobjects::_di_ICommonExtractObj()
	{
		Mpcommonobjects::_di_ICommonExtractObj intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mpcommonobjects::ICommonExtractObj*(void) { return (Mpcommonobjects::ICommonExtractObj*)&__ICommonExtractObj; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__ICommonExtractObj; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyOwnedInterfacedPersistent : public TEasyInterfacedPersistent
{
	typedef TEasyInterfacedPersistent inherited;
	
private:
	TCustomEasyListview* FOwner;
	
public:
	__fastcall virtual TEasyOwnedInterfacedPersistent(TCustomEasyListview* AnOwner);
	__property TCustomEasyListview* Owner = {read=FOwner};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEasyOwnedInterfacedPersistent(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyPersistent : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	__fastcall virtual TEasyPersistent(void);
	__fastcall virtual ~TEasyPersistent(void);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyOwnedPersistent : public TEasyPersistent
{
	typedef TEasyPersistent inherited;
	
private:
	TCustomEasyListview* FOwnerListview;
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	__fastcall virtual TEasyOwnedPersistent(TCustomEasyListview* AnOwner);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int Version = 0x6);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int Version = 0x6);
	__property TCustomEasyListview* OwnerListview = {read=FOwnerListview};
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyOwnedPersistent(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCanvasStore : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Vcl::Graphics::TBrush* FBrush;
	Vcl::Graphics::TFont* FFont;
	Vcl::Graphics::TPen* FPen;
	
public:
	__fastcall virtual ~TEasyCanvasStore(void);
	void __fastcall RestoreCanvasState(Vcl::Graphics::TCanvas* Canvas);
	void __fastcall StoreCanvasState(Vcl::Graphics::TCanvas* Canvas);
	__property Vcl::Graphics::TBrush* Brush = {read=FBrush, write=FBrush};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=FFont};
	__property Vcl::Graphics::TPen* Pen = {read=FPen, write=FPen};
public:
	/* TObject.Create */ inline __fastcall TEasyCanvasStore(void) : System::TObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyOwnedPersistentView : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	TEasyCanvasStore* FCanvasStore;
	TEasyCanvasStore* __fastcall GetCanvasStore(void);
	
protected:
	void __fastcall PaintCheckboxCore(TEasyCheckType CheckType, TCustomEasyListview* OwnerListView, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool IsEnabled, bool IsChecked, bool IsHot, bool IsFlat, bool IsHovering, bool IsPending, TEasyCollectionItem* Obj, int Size);
	__property TEasyCanvasStore* CanvasStore = {read=GetCanvasStore, write=FCanvasStore};
	
public:
	__fastcall virtual ~TEasyOwnedPersistentView(void);
public:
	/* TEasyOwnedPersistent.Create */ inline __fastcall virtual TEasyOwnedPersistentView(TCustomEasyListview* AnOwner) : TEasyOwnedPersistent(AnOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyAlphaBlender : public TEasyPersistent
{
	typedef TEasyPersistent inherited;
	
public:
	__fastcall virtual ~TEasyAlphaBlender(void);
	virtual void __fastcall BasicBlend(TCustomEasyListview* Listview, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ViewportRect, System::Uitypes::TColor Color, System::Byte Alpha = (System::Byte)(0x80), bool UseScrollPostion = true);
	virtual void __fastcall Blend(TCustomEasyListview* Listview, TEasyCollectionItem* Obj, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ViewportRect, Vcl::Graphics::TBitmap* Image);
	void __fastcall GetBlendParams(TCustomEasyListview* Listview, TEasyCollectionItem* Obj, System::Byte &BlendAlpha, System::Uitypes::TColor &BlendColor, bool &DoBlend);
public:
	/* TEasyPersistent.Create */ inline __fastcall virtual TEasyAlphaBlender(void) : TEasyPersistent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyOwnedPersistentGroupItem : public TEasyOwnedPersistentView
{
	typedef TEasyOwnedPersistentView inherited;
	
private:
	TEasyGroup* FOwnerGroup;
	
public:
	__fastcall virtual TEasyOwnedPersistentGroupItem(TEasyGroup* AnOwner);
	__property TEasyGroup* OwnerGroup = {read=FOwnerGroup};
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyOwnedPersistentGroupItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasySelectionGroupList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TEasyItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Types::TRect FDisplayRect;
	TEasyItem* FFirstItem;
	System::Classes::TList* FList;
	int FRefCount;
	
protected:
	TEasyItem* __fastcall GetItems(int Index);
	void __fastcall SetItems(int Index, TEasyItem* Value);
	__property System::Classes::TList* List = {read=FList, write=FList};
	__property int RefCount = {read=FRefCount, write=FRefCount, nodefault};
	
public:
	__fastcall TEasySelectionGroupList(void);
	__fastcall virtual ~TEasySelectionGroupList(void);
	int __fastcall Count(void);
	void __fastcall Add(TEasyItem* Item);
	void __fastcall Clear(void);
	void __fastcall DecRef(void);
	void __fastcall IncRef(void);
	__property System::Types::TRect DisplayRect = {read=FDisplayRect, write=FDisplayRect};
	__property TEasyItem* FirstItem = {read=FFirstItem, write=FFirstItem};
	__property TEasyItem* Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyMargin : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	int FSize;
	bool FVisible;
	void __fastcall SetSize(int Value);
	void __fastcall SetVisible(bool Value);
	
protected:
	int __fastcall RuntimeSize(void);
	
public:
	__fastcall virtual TEasyMargin(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyMargin(void);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int Size = {read=FSize, write=SetSize, default=30};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyHeaderMargin : public TEasyMargin
{
	typedef TEasyMargin inherited;
	
public:
	__fastcall virtual TEasyHeaderMargin(TCustomEasyListview* AnOwner);
	
__published:
	__property Visible = {default=1};
public:
	/* TEasyMargin.Destroy */ inline __fastcall virtual ~TEasyHeaderMargin(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomEasyFooterMargin : public TEasyMargin
{
	typedef TEasyMargin inherited;
	
private:
	System::WideString FCaption;
	Mpcommonobjects::TCommonImageIndexInteger FImageIndex;
	Mpcommonobjects::TCommonImageIndexInteger FImageOverlayIndex;
	TEasyPaintInfoBaseGroup* FPaintInfo;
	System::Classes::TAlignment __fastcall GetAlignment(void);
	int __fastcall GetCaptionIndent(void);
	int __fastcall GetCaptionLines(void);
	int __fastcall GetImageIndent(void);
	TEasyPaintInfoBaseGroup* __fastcall GetPaintInfo(void);
	Mpcommonutilities::TCommonVAlignment __fastcall GetVAlignment(void);
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetCaption(System::WideString Value);
	void __fastcall SetCaptionIndent(int Value);
	void __fastcall SetCaptionLines(int Value);
	void __fastcall SetImageIndent(int Value);
	void __fastcall SetImageIndex(const Mpcommonobjects::TCommonImageIndexInteger Value);
	void __fastcall SetImageOveralyIndex(const Mpcommonobjects::TCommonImageIndexInteger Value);
	void __fastcall SetPaintInfo(TEasyPaintInfoBaseGroup* const Value);
	void __fastcall SetVAlignment(Mpcommonutilities::TCommonVAlignment Value);
	
protected:
	__property System::Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, default=0};
	__property System::WideString Caption = {read=FCaption, write=SetCaption};
	__property int CaptionIndent = {read=GetCaptionIndent, write=SetCaptionIndent, default=2};
	__property int CaptionLines = {read=GetCaptionLines, write=SetCaptionLines, default=1};
	__property int ImageIndent = {read=GetImageIndent, write=SetImageIndent, default=2};
	__property Mpcommonobjects::TCommonImageIndexInteger ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property Mpcommonobjects::TCommonImageIndexInteger ImageOverlayIndex = {read=FImageOverlayIndex, write=SetImageOveralyIndex, default=-1};
	__property TEasyPaintInfoBaseGroup* PaintInfo = {read=GetPaintInfo, write=SetPaintInfo};
	__property Size = {default=30};
	__property Mpcommonutilities::TCommonVAlignment VAlignment = {read=GetVAlignment, write=SetVAlignment, default=2};
	
public:
	__fastcall virtual TCustomEasyFooterMargin(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TCustomEasyFooterMargin(void);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
};

#pragma pack(pop)

typedef System::TMetaClass* TEasyFooterMarginCustomClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyFooterMargin : public TCustomEasyFooterMargin
{
	typedef TCustomEasyFooterMargin inherited;
	
__published:
	__property Alignment = {default=0};
	__property Caption = {default=0};
	__property CaptionIndent = {default=2};
	__property CaptionLines = {default=1};
	__property ImageIndent = {default=2};
	__property ImageIndex = {default=-1};
	__property ImageOverlayIndex = {default=-1};
	__property Size = {default=30};
	__property VAlignment = {default=2};
public:
	/* TCustomEasyFooterMargin.Create */ inline __fastcall virtual TEasyFooterMargin(TCustomEasyListview* AnOwner) : TCustomEasyFooterMargin(AnOwner) { }
	/* TCustomEasyFooterMargin.Destroy */ inline __fastcall virtual ~TEasyFooterMargin(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyPaintInfoBasic : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	int FBorder;
	System::Uitypes::TColor FBorderColor;
	int FCaptionIndent;
	int FCaptionLines;
	bool FCheckFlat;
	int FCheckIndent;
	int FCheckSize;
	TEasyCheckType FCheckType;
	int FImageIndent;
	bool FShowBorder;
	Mpcommonutilities::TCommonVAlignment FVAlignment;
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetBorder(int Value);
	void __fastcall SetBorderColor(System::Uitypes::TColor Value);
	void __fastcall SetCaptionIndent(int Value);
	void __fastcall SetCaptionLines(int Value);
	void __fastcall SetCheckFlat(bool Value);
	void __fastcall SetCheckIndent(int Value);
	void __fastcall SetCheckSize(int Value);
	void __fastcall SetCheckType(TEasyCheckType Value);
	void __fastcall SetImageIndent(int Value);
	void __fastcall SetShowBorder(const bool Value);
	void __fastcall SetVAlignment(Mpcommonutilities::TCommonVAlignment Value);
	
protected:
	virtual void __fastcall Invalidate(bool ImmediateUpdate);
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property int Border = {read=FBorder, write=SetBorder, default=4};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=-16777203};
	__property int CaptionIndent = {read=FCaptionIndent, write=SetCaptionIndent, default=4};
	__property int CaptionLines = {read=FCaptionLines, write=SetCaptionLines, default=1};
	__property bool CheckFlat = {read=FCheckFlat, write=SetCheckFlat, default=0};
	__property int CheckIndent = {read=FCheckIndent, write=SetCheckIndent, default=2};
	__property int CheckSize = {read=FCheckSize, write=SetCheckSize, default=12};
	__property TEasyCheckType CheckType = {read=FCheckType, write=SetCheckType, default=0};
	__property int ImageIndent = {read=FImageIndent, write=SetImageIndent, default=2};
	__property bool ShowBorder = {read=FShowBorder, write=SetShowBorder, default=1};
	__property Mpcommonutilities::TCommonVAlignment VAlignment = {read=FVAlignment, write=SetVAlignment, default=2};
	
public:
	__fastcall virtual TEasyPaintInfoBasic(TCustomEasyListview* AnOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyPaintInfoBasic(void) { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TEasyPaintInfoBasicClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyPaintInfoBaseItem : public TEasyPaintInfoBasic
{
	typedef TEasyPaintInfoBasic inherited;
	
private:
	System::Uitypes::TColor FGridLineColor;
	bool FGridLines;
	bool FHideCaption;
	int FTileDetailCount;
	void __fastcall SetGridLineColor(const System::Uitypes::TColor Value);
	void __fastcall SetGridLines(const bool Value);
	void __fastcall SetHideCaption(const bool Value);
	void __fastcall SetTileDetailCount(int Value);
	
protected:
	__property System::Uitypes::TColor GridLineColor = {read=FGridLineColor, write=SetGridLineColor, default=-16777201};
	__property bool GridLines = {read=FGridLines, write=SetGridLines, default=0};
	__property bool HideCaption = {read=FHideCaption, write=SetHideCaption, default=0};
	__property int TileDetailCount = {read=FTileDetailCount, write=SetTileDetailCount, default=1};
	
public:
	__fastcall virtual TEasyPaintInfoBaseItem(TCustomEasyListview* AnOwner);
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyPaintInfoBaseItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyPaintInfoItem : public TEasyPaintInfoBaseItem
{
	typedef TEasyPaintInfoBaseItem inherited;
	
__published:
	__property Border = {default=4};
	__property BorderColor = {default=-16777203};
	__property CaptionIndent = {default=4};
	__property CaptionLines = {default=1};
	__property CheckFlat = {default=0};
	__property CheckIndent = {default=2};
	__property CheckSize = {default=12};
	__property CheckType = {default=0};
	__property GridLineColor = {default=-16777201};
	__property GridLines = {default=0};
	__property HideCaption = {default=0};
	__property ImageIndent = {default=2};
	__property ShowBorder = {default=1};
	__property TileDetailCount = {default=1};
	__property VAlignment = {default=2};
public:
	/* TEasyPaintInfoBaseItem.Create */ inline __fastcall virtual TEasyPaintInfoItem(TCustomEasyListview* AnOwner) : TEasyPaintInfoBaseItem(AnOwner) { }
	
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyPaintInfoItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyPaintInfoTaskBandItem : public TEasyPaintInfoBaseItem
{
	typedef TEasyPaintInfoBaseItem inherited;
	
__published:
	__property CaptionIndent = {default=4};
	__property CheckFlat = {default=0};
	__property CheckIndent = {default=2};
	__property CheckSize = {default=12};
	__property CheckType = {default=0};
	__property VAlignment = {default=2};
public:
	/* TEasyPaintInfoBaseItem.Create */ inline __fastcall virtual TEasyPaintInfoTaskBandItem(TCustomEasyListview* AnOwner) : TEasyPaintInfoBaseItem(AnOwner) { }
	
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyPaintInfoTaskBandItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyPaintInfoBaseColumn : public TEasyPaintInfoBasic
{
	typedef TEasyPaintInfoBasic inherited;
	
private:
	System::Uitypes::TColor FColor;
	bool FHilightFocused;
	System::Uitypes::TColor FHilightFocusedColor;
	bool FHotTrack;
	TEasyHeaderImagePosition FImagePosition;
	TEasySortGlyphAlign FSortGlyphAlign;
	int FSortGlyphIndent;
	TEasyHeaderButtonStyle FStyle;
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetHilightFocused(const bool Value);
	void __fastcall SetHilightFocusedColor(const System::Uitypes::TColor Value);
	void __fastcall SetImagePosition(TEasyHeaderImagePosition Value);
	void __fastcall SetSortGlpyhAlign(TEasySortGlyphAlign Value);
	void __fastcall SetSortGlyphIndent(int Value);
	void __fastcall SetStyle(TEasyHeaderButtonStyle Value);
	
protected:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=-16777201};
	__property bool HilightFocused = {read=FHilightFocused, write=SetHilightFocused, default=0};
	__property System::Uitypes::TColor HilightFocusedColor = {read=FHilightFocusedColor, write=SetHilightFocusedColor, default=16250871};
	__property bool HotTrack = {read=FHotTrack, write=FHotTrack, default=1};
	__property TEasyHeaderImagePosition ImagePosition = {read=FImagePosition, write=SetImagePosition, default=0};
	__property TEasySortGlyphAlign SortGlyphAlign = {read=FSortGlyphAlign, write=SetSortGlpyhAlign, default=1};
	__property int SortGlyphIndent = {read=FSortGlyphIndent, write=SetSortGlyphIndent, default=2};
	__property TEasyHeaderButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	
public:
	__fastcall virtual TEasyPaintInfoBaseColumn(TCustomEasyListview* AnOwner);
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyPaintInfoBaseColumn(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomEasyPaintInfoBaseColumn : public TEasyPaintInfoBaseColumn
{
	typedef TEasyPaintInfoBaseColumn inherited;
	
public:
	/* TEasyPaintInfoBaseColumn.Create */ inline __fastcall virtual TCustomEasyPaintInfoBaseColumn(TCustomEasyListview* AnOwner) : TEasyPaintInfoBaseColumn(AnOwner) { }
	
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TCustomEasyPaintInfoBaseColumn(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyPaintInfoColumn : public TCustomEasyPaintInfoBaseColumn
{
	typedef TCustomEasyPaintInfoBaseColumn inherited;
	
private:
	bool FBkGndColorFillsWindow;
	void __fastcall SetBkGndColorFillsWindow(const bool Value);
	
__published:
	__property bool BkGndColorFillsWindow = {read=FBkGndColorFillsWindow, write=SetBkGndColorFillsWindow, default=0};
	__property Border = {default=4};
	__property BorderColor = {default=-16777203};
	__property CaptionIndent = {default=4};
	__property CaptionLines = {default=1};
	__property CheckFlat = {default=0};
	__property CheckIndent = {default=2};
	__property CheckSize = {default=12};
	__property CheckType = {default=0};
	__property Color = {default=-16777201};
	__property HilightFocused = {default=0};
	__property HilightFocusedColor = {default=16250871};
	__property HotTrack = {default=1};
	__property ImageIndent = {default=2};
	__property ImagePosition = {default=0};
	__property SortGlyphAlign = {default=1};
	__property SortGlyphIndent = {default=2};
	__property Style = {default=0};
	__property VAlignment = {default=2};
public:
	/* TEasyPaintInfoBaseColumn.Create */ inline __fastcall virtual TEasyPaintInfoColumn(TCustomEasyListview* AnOwner) : TCustomEasyPaintInfoBaseColumn(AnOwner) { }
	
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyPaintInfoColumn(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyPaintInfoTaskBandColumn : public TCustomEasyPaintInfoBaseColumn
{
	typedef TCustomEasyPaintInfoBaseColumn inherited;
	
public:
	/* TEasyPaintInfoBaseColumn.Create */ inline __fastcall virtual TEasyPaintInfoTaskBandColumn(TCustomEasyListview* AnOwner) : TCustomEasyPaintInfoBaseColumn(AnOwner) { }
	
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyPaintInfoTaskBandColumn(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyPaintInfoBaseGroup : public TEasyPaintInfoBasic
{
	typedef TEasyPaintInfoBasic inherited;
	
private:
	bool FBandBlended;
	System::Uitypes::TColor FBandColor;
	System::Uitypes::TColor FBandColorFade;
	bool FBandEnabled;
	bool FBandFullWidth;
	int FBandIndent;
	int FBandLength;
	int FBandMargin;
	System::Byte FBandRadius;
	int FBandThickness;
	bool FExpandable;
	bool FExpanded;
	int FExpandImageIndent;
	TCustomEasyFooterMargin* FMarginBottom;
	TEasyMargin* FMarginLeft;
	TEasyMargin* FMarginRight;
	TEasyHeaderMargin* FMarginTop;
	TCustomEasyFooterMargin* __fastcall GetMarginBottom(void);
	TEasyMargin* __fastcall GetMarginLeft(void);
	TEasyMargin* __fastcall GetMarginRight(void);
	TEasyHeaderMargin* __fastcall GetMarginTop(void);
	void __fastcall SetBandBlended(bool Value);
	void __fastcall SetBandColor(System::Uitypes::TColor Value);
	void __fastcall SetBandColorFade(System::Uitypes::TColor Value);
	void __fastcall SetBandEnabled(bool Value);
	void __fastcall SetBandFullWidth(bool Value);
	void __fastcall SetBandIndent(int Value);
	void __fastcall SetBandLength(int Value);
	void __fastcall SetBandMargin(int Value);
	void __fastcall SetBandRadius(System::Byte Value);
	void __fastcall SetBandThickness(int Value);
	void __fastcall SetExpandable(bool Value);
	void __fastcall SetExpandImageIndent(int Value);
	void __fastcall SetMarginBottom(TCustomEasyFooterMargin* Value);
	void __fastcall SetMarginLeft(TEasyMargin* Value);
	void __fastcall SetMarginRight(TEasyMargin* Value);
	void __fastcall SetMarginTop(TEasyHeaderMargin* Value);
	
protected:
	__property bool BandBlended = {read=FBandBlended, write=SetBandBlended, default=1};
	__property System::Uitypes::TColor BandColor = {read=FBandColor, write=SetBandColor, default=16711680};
	__property System::Uitypes::TColor BandColorFade = {read=FBandColorFade, write=SetBandColorFade, default=-16777211};
	__property bool BandEnabled = {read=FBandEnabled, write=SetBandEnabled, default=1};
	__property bool BandFullWidth = {read=FBandFullWidth, write=SetBandFullWidth, default=0};
	__property int BandIndent = {read=FBandIndent, write=SetBandIndent, default=0};
	__property int BandLength = {read=FBandLength, write=SetBandLength, default=300};
	__property int BandMargin = {read=FBandMargin, write=SetBandMargin, default=2};
	__property System::Byte BandRadius = {read=FBandRadius, write=SetBandRadius, default=4};
	__property int BandThickness = {read=FBandThickness, write=SetBandThickness, default=3};
	__property bool Expandable = {read=FExpandable, write=SetExpandable, default=1};
	__property int ExpandImageIndent = {read=FExpandImageIndent, write=SetExpandImageIndent, default=4};
	__property TCustomEasyFooterMargin* MarginBottom = {read=GetMarginBottom, write=SetMarginBottom};
	__property TEasyMargin* MarginLeft = {read=GetMarginLeft, write=SetMarginLeft};
	__property TEasyMargin* MarginRight = {read=GetMarginRight, write=SetMarginRight};
	__property TEasyHeaderMargin* MarginTop = {read=GetMarginTop, write=SetMarginTop};
	
public:
	__fastcall virtual TEasyPaintInfoBaseGroup(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyPaintInfoBaseGroup(void);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyPaintInfoGroup : public TEasyPaintInfoBaseGroup
{
	typedef TEasyPaintInfoBaseGroup inherited;
	
__published:
	__property Alignment = {default=0};
	__property BandBlended = {default=1};
	__property BandColor = {default=16711680};
	__property BandColorFade = {default=-16777211};
	__property BandEnabled = {default=1};
	__property BandFullWidth = {default=0};
	__property BandIndent = {default=0};
	__property BandLength = {default=300};
	__property BandMargin = {default=2};
	__property BandRadius = {default=4};
	__property BandThickness = {default=3};
	__property CaptionIndent = {default=4};
	__property CaptionLines = {default=1};
	__property CheckFlat = {default=0};
	__property CheckIndent = {default=2};
	__property CheckSize = {default=12};
	__property CheckType = {default=0};
	__property Expandable = {default=1};
	__property ExpandImageIndent = {default=4};
	__property ImageIndent = {default=2};
	__property MarginBottom;
	__property MarginLeft;
	__property MarginRight;
	__property MarginTop;
	__property VAlignment = {default=2};
public:
	/* TEasyPaintInfoBaseGroup.Create */ inline __fastcall virtual TEasyPaintInfoGroup(TCustomEasyListview* AnOwner) : TEasyPaintInfoBaseGroup(AnOwner) { }
	/* TEasyPaintInfoBaseGroup.Destroy */ inline __fastcall virtual ~TEasyPaintInfoGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyPaintInfoTaskbandGroup : public TEasyPaintInfoBaseGroup
{
	typedef TEasyPaintInfoBaseGroup inherited;
	
__published:
	__property Alignment = {default=0};
	__property CaptionIndent = {default=4};
	__property CheckFlat = {default=0};
	__property CheckIndent = {default=2};
	__property CheckSize = {default=12};
	__property CheckType = {default=0};
	__property Expandable = {default=1};
	__property MarginBottom;
	__property MarginLeft;
	__property MarginRight;
	__property MarginTop;
	__property VAlignment = {default=2};
public:
	/* TEasyPaintInfoBaseGroup.Create */ inline __fastcall virtual TEasyPaintInfoTaskbandGroup(TCustomEasyListview* AnOwner) : TEasyPaintInfoBaseGroup(AnOwner) { }
	/* TEasyPaintInfoBaseGroup.Destroy */ inline __fastcall virtual ~TEasyPaintInfoTaskbandGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyDynamicDataHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Mpcommonutilities::TCommonWideStringDynArray FCaptionArray;
	Mpcommonutilities::TCommonIntegerDynArray FDetailArray;
	Mpcommonutilities::TCommonIntegerDynArray FGroupKeyArray;
	Mpcommonutilities::TCommonIntegerDynArray FImageIndexArray;
	Mpcommonutilities::TCommonIntegerDynArray FOverlayIndexArray;
	System::WideString __fastcall GetCaptions(int Index);
	int __fastcall GetDetails(int Index);
	int __fastcall GetImageIndexes(int Index);
	int __fastcall GetImageOverlayIndexes(int Index);
	void __fastcall LoadIntArrayFromStream(System::Classes::TStream* S, Mpcommonutilities::TCommonIntegerDynArray &AnArray);
	void __fastcall LoadWideStrArrayFromStream(System::Classes::TStream* S, Mpcommonutilities::TCommonWideStringDynArray &AnArray);
	void __fastcall SaveIntArrayToStream(System::Classes::TStream* S, Mpcommonutilities::TCommonIntegerDynArray &AnArray);
	void __fastcall SaveWideStrArrayToStream(System::Classes::TStream* S, Mpcommonutilities::TCommonWideStringDynArray &AnArray);
	void __fastcall SetCaptions(int Index, System::WideString Value);
	void __fastcall SetDetails(int Index, int Value);
	void __fastcall SetImageIndexes(int Index, int Value);
	void __fastcall SetImageOverlayIndexes(int Index, int Value);
	__property Mpcommonutilities::TCommonWideStringDynArray CaptionArray = {read=FCaptionArray, write=FCaptionArray};
	__property Mpcommonutilities::TCommonIntegerDynArray DetailArray = {read=FDetailArray, write=FDetailArray};
	__property Mpcommonutilities::TCommonIntegerDynArray GroupKeyArray = {read=FGroupKeyArray, write=FGroupKeyArray};
	__property Mpcommonutilities::TCommonIntegerDynArray ImageIndexArray = {read=FImageIndexArray, write=FImageIndexArray};
	__property Mpcommonutilities::TCommonIntegerDynArray OverlayIndexArray = {read=FOverlayIndexArray, write=FOverlayIndexArray};
	
public:
	void __fastcall Clear(void);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int Version);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int Version);
	__property System::WideString Captions[int Index] = {read=GetCaptions, write=SetCaptions};
	__property int Details[int Index] = {read=GetDetails, write=SetDetails};
	__property int ImageIndexes[int Index] = {read=GetImageIndexes, write=SetImageIndexes};
	__property int ImageOverlayIndexes[int Index] = {read=GetImageOverlayIndexes, write=SetImageOverlayIndexes};
public:
	/* TObject.Create */ inline __fastcall TEasyDynamicDataHelper(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TEasyDynamicDataHelper(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyItemDynamicDataHelper : public TEasyDynamicDataHelper
{
	typedef TEasyDynamicDataHelper inherited;
	
private:
	Mpcommonutilities::TCommonIntegerDynArray FStateImageArray;
	unsigned __fastcall GetGroupKey(int Index);
	Mpcommonobjects::TCommonImageIndexInteger __fastcall GetStateImageIndexes(int Index);
	void __fastcall SetGroupKey(int Index, unsigned Value);
	void __fastcall SetStateImageIndexes(int Index, Mpcommonobjects::TCommonImageIndexInteger Value);
	
protected:
	__property Mpcommonutilities::TCommonIntegerDynArray StateImageArray = {read=FStateImageArray, write=FStateImageArray};
	
public:
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int Version);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int Version);
	__property unsigned GroupKey[int Index] = {read=GetGroupKey, write=SetGroupKey};
	__property Mpcommonobjects::TCommonImageIndexInteger StateImageIndexes[int Index] = {read=GetStateImageIndexes, write=SetStateImageIndexes};
public:
	/* TObject.Create */ inline __fastcall TEasyItemDynamicDataHelper(void) : TEasyDynamicDataHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TEasyItemDynamicDataHelper(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCollectionItem : public TEasyPersistent
{
	typedef TEasyPersistent inherited;
	
private:
	_di_IAccessible FAccessible;
	TEasyCollection* FCollection;
	System::TObject* FData;
	System::_di_IInterface FDataInf;
	System::Types::TRect FDisplayRect;
	int FIndex;
	bool FOwnsPaintInfo;
	TEasyPaintInfoBasic* FPaintInfo;
	int FRefCount;
	TEasyStorageObjectStates FState;
	NativeInt FTag;
	int FVisibleIndex;
	System::Classes::TAlignment __fastcall GetAlignment(void);
	bool __fastcall GetBold(void);
	int __fastcall GetBorder(void);
	System::Uitypes::TColor __fastcall GetBorderColor(void);
	int __fastcall GetCaptionIndent(void);
	bool __fastcall GetCheckFlat(void);
	bool __fastcall GetCheckHovering(void);
	int __fastcall GetCheckIndent(void);
	bool __fastcall GetCheckPending(void);
	int __fastcall GetCheckSize(void);
	TEasyCheckType __fastcall GetCheckType(void);
	bool __fastcall GetClicking(void);
	bool __fastcall GetCut(void);
	System::_di_IInterface __fastcall GetDataInf(void);
	bool __fastcall GetDestroying(void);
	bool __fastcall GetGhosted(void);
	bool __fastcall GetHilighted(void);
	bool __fastcall GetEnabled(void);
	bool __fastcall GetFocused(void);
	bool __fastcall GetHotTracking(const System::Types::TPoint &MousePos);
	int __fastcall GetImageIndent(void);
	bool __fastcall GetInitialized(void);
	TCustomEasyListview* __fastcall GetOwnerListview(void);
	TEasyPaintInfoBasic* __fastcall GetPaintInfo(void);
	bool __fastcall GetSelected(void);
	Mpcommonutilities::TCommonVAlignment __fastcall GetVAlignment(void);
	System::Types::TRect __fastcall GetViewRect(void);
	bool __fastcall GetVisible(void);
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetBold(const bool Value);
	void __fastcall SetBorder(int Value);
	void __fastcall SetBorderColor(System::Uitypes::TColor Value);
	void __fastcall SetCaptionIndent(int Value);
	void __fastcall SetCheckFlat(bool Value);
	void __fastcall SetCheckHovering(bool Value);
	void __fastcall SetCheckIndent(int Value);
	void __fastcall SetCheckPending(bool Value);
	void __fastcall SetCheckSize(int Value);
	void __fastcall SetCheckType(TEasyCheckType Value);
	void __fastcall SetClicking(bool Value);
	void __fastcall SetCut(bool Value);
	virtual void __fastcall SetData(System::TObject* Value);
	void __fastcall SetDataInf(const System::_di_IInterface Value);
	void __fastcall SetGhosted(const bool Value);
	void __fastcall SetHilighted(bool Value);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetFocused(bool Value);
	void __fastcall SetHotTracking(const System::Types::TPoint &MousePos, bool Value);
	void __fastcall SetImageIndent(int Value);
	virtual void __fastcall SetInitialized(bool Value);
	void __fastcall SetPaintInfo(TEasyPaintInfoBasic* Value);
	void __fastcall SetSelected(bool Value);
	void __fastcall SetVAlignment(Mpcommonutilities::TCommonVAlignment Value);
	void __fastcall SetVisible(bool Value);
	
protected:
	virtual int __stdcall _AddRef(void);
	virtual int __stdcall _Release(void);
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	virtual bool __fastcall AllowDrag(const System::Types::TPoint &ViewportPt);
	virtual bool __fastcall CanChangeBold(bool NewValue) = 0 ;
	virtual bool __fastcall CanChangeCheck(bool NewValue) = 0 ;
	virtual bool __fastcall CanChangeEnable(bool NewValue) = 0 ;
	virtual bool __fastcall CanChangeFocus(bool NewValue) = 0 ;
	virtual bool __fastcall CanChangeHotTracking(bool NewValue) = 0 ;
	virtual bool __fastcall CanChangeSelection(bool NewValue) = 0 ;
	virtual bool __fastcall CanChangeVisibility(bool NewValue) = 0 ;
	virtual Vcl::Imglist::TCustomImageList* __fastcall DefaultImageList(TEasyImageSize ImageSize);
	virtual bool __fastcall GetChecked(void);
	virtual System::WideString __fastcall GetDisplayName(void);
	virtual TEasyPaintInfoBasic* __fastcall LocalPaintInfo(void) = 0 ;
	virtual void __fastcall Freeing(void) = 0 ;
	virtual void __fastcall GainingBold(void) = 0 ;
	virtual void __fastcall GainingCheck(void) = 0 ;
	virtual void __fastcall GainingEnable(void) = 0 ;
	virtual void __fastcall GainingFocus(void) = 0 ;
	virtual void __fastcall GainingGhosted(void) = 0 ;
	virtual void __fastcall GainingHilight(void) = 0 ;
	virtual void __fastcall GainingHotTracking(const System::Types::TPoint &MousePos) = 0 ;
	virtual void __fastcall GainingSelection(void) = 0 ;
	virtual void __fastcall GainingVisibility(void) = 0 ;
	virtual System::WideString __fastcall GetCaption(void);
	virtual System::WideString __fastcall GetCaptions(int Column) = 0 ;
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageIndex(void);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageIndexes(int Column) = 0 ;
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageOverlayIndex(void);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageOverlayIndexes(int Column) = 0 ;
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner(void);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(int Column, TEasyImageSize IconSize) = 0 ;
	virtual int __fastcall GetIndex(void);
	virtual int __fastcall GetDetailCount(void) = 0 ;
	virtual int __fastcall GetDetails(int Line) = 0 ;
	virtual void __fastcall ImageDraw(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender) = 0 ;
	virtual void __fastcall ImageDrawGetSize(TEasyColumn* Column, int &ImageW, int &ImageH) = 0 ;
	virtual void __fastcall ImageDrawIsCustom(TEasyColumn* Column, bool &IsCustom) = 0 ;
	void __fastcall InvalidateItem(bool ImmediateRefresh);
	virtual void __fastcall LosingBold(void) = 0 ;
	virtual void __fastcall LosingGhosted(void) = 0 ;
	virtual void __fastcall LosingHotTracking(void) = 0 ;
	virtual void __fastcall ThumbnailDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault) = 0 ;
	virtual void __fastcall Initialize(void) = 0 ;
	virtual void __fastcall LosingCheck(void) = 0 ;
	virtual void __fastcall LosingEnable(void) = 0 ;
	virtual void __fastcall LosingFocus(void) = 0 ;
	virtual void __fastcall LosingHilight(void) = 0 ;
	virtual void __fastcall LosingSelection(void) = 0 ;
	virtual void __fastcall LosingVisibility(void) = 0 ;
	virtual void __fastcall SetCaptions(int Column, System::WideString Value) = 0 ;
	virtual void __fastcall SetCaption(System::WideString Value);
	virtual void __fastcall SetChecked(bool Value);
	void __fastcall SetDestroyFlags(void);
	virtual void __fastcall SetDetailCount(int Value) = 0 ;
	virtual void __fastcall SetDetails(int Line, int Value) = 0 ;
	virtual void __fastcall SetImageIndex(const Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value) = 0 ;
	virtual void __fastcall SetImageOverlayIndex(const Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetImageOverlayIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value) = 0 ;
	void __fastcall UnRegister(void);
	__property System::Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, default=0};
	__property bool Bold = {read=GetBold, write=SetBold, default=0};
	__property int Border = {read=GetBorder, write=SetBorder, default=0};
	__property System::Uitypes::TColor BorderColor = {read=GetBorderColor, write=SetBorderColor, default=-16777211};
	__property int CaptionIndent = {read=GetCaptionIndent, write=SetCaptionIndent, default=2};
	__property bool Checked = {read=GetChecked, write=SetChecked, default=0};
	__property bool CheckFlat = {read=GetCheckFlat, write=SetCheckFlat, default=0};
	__property bool CheckHovering = {read=GetCheckHovering, write=SetCheckHovering, nodefault};
	__property int CheckIndent = {read=GetCheckIndent, write=SetCheckIndent, default=2};
	__property bool CheckPending = {read=GetCheckPending, write=SetCheckPending, nodefault};
	__property int CheckSize = {read=GetCheckSize, write=SetCheckSize, default=12};
	__property TEasyCheckType CheckType = {read=GetCheckType, write=SetCheckType, default=0};
	__property bool Clicking = {read=GetClicking, write=SetClicking, default=0};
	__property TEasyCollection* Collection = {read=FCollection, write=FCollection};
	__property bool Cut = {read=GetCut, write=SetCut, default=0};
	__property System::_di_IInterface DataInf = {read=GetDataInf, write=SetDataInf};
	__property bool Destroying = {read=GetDestroying, nodefault};
	__property System::Types::TRect DisplayRect = {read=FDisplayRect, write=FDisplayRect};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled, default=1};
	__property bool Focused = {read=GetFocused, write=SetFocused, default=0};
	__property bool Ghosted = {read=GetGhosted, write=SetGhosted, default=0};
	__property bool Hilighted = {read=GetHilighted, write=SetHilighted, default=0};
	__property int ImageIndent = {read=GetImageIndent, write=SetImageIndent, default=2};
	__property bool Initialized = {read=GetInitialized, write=SetInitialized, nodefault};
	__property bool OwnsPaintInfo = {read=FOwnsPaintInfo, write=FOwnsPaintInfo, default=0};
	__property TEasyPaintInfoBasic* PaintInfo = {read=GetPaintInfo, write=SetPaintInfo};
	__property bool Selected = {read=GetSelected, write=SetSelected, default=0};
	__property TEasyStorageObjectStates State = {read=FState, write=FState, nodefault};
	__property Mpcommonutilities::TCommonVAlignment VAlignment = {read=GetVAlignment, write=SetVAlignment, nodefault};
	__property bool Visible = {read=GetVisible, write=SetVisible, default=1};
	
public:
	__fastcall virtual TEasyCollectionItem(TEasyCollection* ACollection);
	__fastcall virtual ~TEasyCollectionItem(void);
	virtual bool __fastcall EditAreaHitPt(const System::Types::TPoint &ViewportPoint) = 0 ;
	virtual bool __fastcall SelectionHit(const System::Types::TRect &SelectViewportRect, TEasySelectHitType SelectType) = 0 ;
	virtual bool __fastcall SelectionHitPt(const System::Types::TPoint &ViewportPoint, TEasySelectHitType SelectType) = 0 ;
	virtual void __fastcall Invalidate(bool ImmediateUpdate);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int &AVersion);
	virtual void __fastcall MakeVisible(TEasyMakeVisiblePos Position);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int AVersion = 0x6);
	__property _di_IAccessible Accessible = {read=FAccessible, write=FAccessible};
	__property System::WideString Caption = {read=GetCaption, write=SetCaption};
	__property System::WideString Captions[int Column] = {read=GetCaptions, write=SetCaptions};
	__property System::TObject* Data = {read=FData, write=SetData};
	__property int DetailCount = {read=GetDetailCount, write=SetDetailCount, nodefault};
	__property int Details[int Line] = {read=GetDetails, write=SetDetails};
	__property bool HotTracking[System::Types::TPoint MousePos] = {read=GetHotTracking, write=SetHotTracking};
	__property Mpcommonobjects::TCommonImageIndexInteger ImageIndex = {read=GetImageIndex, write=SetImageIndex, default=-1};
	__property Mpcommonobjects::TCommonImageIndexInteger ImageIndexes[int Column] = {read=GetImageIndexes, write=SetImageIndexes};
	__property Vcl::Imglist::TCustomImageList* ImageList[int Column][TEasyImageSize IconSize] = {read=GetImageList};
	__property Mpcommonobjects::TCommonImageIndexInteger ImageOverlayIndex = {read=GetImageOverlayIndex, write=SetImageOverlayIndex, default=-1};
	__property Mpcommonobjects::TCommonImageIndexInteger ImageOverlayIndexes[int Column] = {read=GetImageOverlayIndexes, write=SetImageOverlayIndexes};
	__property int Index = {read=GetIndex, nodefault};
	__property TCustomEasyListview* OwnerListview = {read=GetOwnerListview};
	__property int RefCount = {read=FRefCount, nodefault};
	__property NativeInt Tag = {read=FTag, write=FTag, default=0};
	__property System::Types::TRect ViewRect = {read=GetViewRect};
	__property int VisibleIndex = {read=FVisibleIndex, nodefault};
private:
	void *__IEasyNotificationSink;	// IEasyNotificationSink 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E4F0D3DE-B2BD-4EC0-B24B-8A9B85B23A63}
	operator _di_IEasyNotificationSink()
	{
		_di_IEasyNotificationSink intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IEasyNotificationSink*(void) { return (IEasyNotificationSink*)&__IEasyNotificationSink; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IEasyNotificationSink; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyItem : public TEasyCollectionItem
{
	typedef TEasyCollectionItem inherited;
	
private:
	TEasySelectionGroupList* FSelectionGroup;
	TEasyViewItem* FView;
	int FVisibleIndexInGroup;
	int __fastcall GetColumnPos(void);
	TEasyGroup* __fastcall GetOwnerGroup(void);
	TEasyItems* __fastcall GetOwnerItems(void);
	HIDESBASE TEasyPaintInfoItem* __fastcall GetPaintInfo(void);
	int __fastcall GetRowPos(void);
	TEasyViewItem* __fastcall GetView(void);
	TEasyViewItemClass __fastcall GetViewClass(void);
	HIDESBASE void __fastcall SetPaintInfo(TEasyPaintInfoItem* const Value);
	void __fastcall SetSelectionGroup(TEasySelectionGroupList* Value);
	
protected:
	virtual bool __fastcall AllowDrag(const System::Types::TPoint &ViewportPt);
	virtual bool __fastcall CanChangeBold(bool NewValue);
	virtual bool __fastcall CanChangeCheck(bool NewValue);
	virtual bool __fastcall CanChangeEnable(bool NewValue);
	virtual bool __fastcall CanChangeFocus(bool NewValue);
	virtual bool __fastcall CanChangeHotTracking(bool NewValue);
	virtual bool __fastcall CanChangeSelection(bool NewValue);
	virtual bool __fastcall CanChangeVisibility(bool NewValue);
	Vcl::Imglist::TCustomImageList* __fastcall DefaultStateImageList(void);
	virtual TEasyViewItemClass __fastcall GetDefaultViewClass(void);
	virtual unsigned __fastcall GetGroupKey(int FocusedColumn);
	virtual int __fastcall GetIndex(void);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetStateImageIndex(void);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetStateImageIndexes(int Column) = 0 ;
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetStateImageList(int Column) = 0 ;
	virtual TEasyPaintInfoBasic* __fastcall LocalPaintInfo(void);
	virtual void __fastcall Freeing(void);
	virtual void __fastcall GainingBold(void);
	virtual void __fastcall GainingCheck(void);
	virtual void __fastcall GainingEnable(void);
	virtual void __fastcall GainingFocus(void);
	virtual void __fastcall GainingGhosted(void);
	virtual void __fastcall GainingHilight(void);
	virtual void __fastcall GainingHotTracking(const System::Types::TPoint &MousePos);
	virtual void __fastcall GainingSelection(void);
	virtual void __fastcall GainingVisibility(void);
	virtual void __fastcall Initialize(void);
	virtual void __fastcall LosingBold(void);
	virtual void __fastcall LosingCheck(void);
	virtual void __fastcall LosingEnable(void);
	virtual void __fastcall LosingFocus(void);
	virtual void __fastcall LosingGhosted(void);
	virtual void __fastcall LosingHilight(void);
	virtual void __fastcall LosingHotTracking(void);
	virtual void __fastcall LosingSelection(void);
	virtual void __fastcall LosingVisibility(void);
	void __fastcall ReleaseSelectionGroup(void);
	virtual void __fastcall SetStateImageIndex(const Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetStateImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value) = 0 ;
	__property TEasySelectionGroupList* SelectionGroup = {read=FSelectionGroup, write=SetSelectionGroup};
	virtual void __fastcall SetGroupKey(int FocusedColumn, unsigned Value);
	
public:
	__fastcall virtual TEasyItem(TEasyCollection* ACollection);
	__fastcall virtual ~TEasyItem(void);
	virtual bool __fastcall EditAreaHitPt(const System::Types::TPoint &ViewportPoint);
	bool __fastcall HitTestAt(const System::Types::TPoint &ViewportPoint, TEasyItemHitTestInfoSet &HitInfo);
	virtual bool __fastcall SelectionHit(const System::Types::TRect &SelectViewportRect, TEasySelectHitType SelectType);
	virtual bool __fastcall SelectionHitPt(const System::Types::TPoint &ViewportPoint, TEasySelectHitType SelectType);
	void __fastcall Edit(TEasyColumn* Column = (TEasyColumn*)(0x0));
	virtual void __fastcall Invalidate(bool ImmediateUpdate);
	void __fastcall ItemRectArray(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, TEasyRectArrayObject &RectArray);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int &AVersion);
	virtual void __fastcall MakeVisible(TEasyMakeVisiblePos Position);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ViewportClipRect, TEasyColumn* Column, bool ForceSelectionRectDraw);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int AVersion = 0x6);
	__property Alignment = {default=0};
	__property Bold = {default=0};
	__property Border = {default=0};
	__property BorderColor = {default=-16777211};
	__property Caption = {default=0};
	__property CaptionIndent = {default=2};
	__property Captions;
	__property Checked = {default=0};
	__property CheckFlat = {default=0};
	__property CheckHovering;
	__property CheckIndent = {default=2};
	__property CheckPending;
	__property CheckSize = {default=12};
	__property CheckType = {default=0};
	__property int ColumnPos = {read=GetColumnPos, nodefault};
	__property Cut = {default=0};
	__property Destroying;
	__property DetailCount;
	__property Details;
	__property Enabled = {default=1};
	__property Focused = {default=0};
	__property unsigned GroupKey[int FocusedColumn] = {read=GetGroupKey, write=SetGroupKey};
	__property Hilighted = {default=0};
	__property ImageIndent = {default=2};
	__property ImageIndex = {default=-1};
	__property ImageIndexes;
	__property ImageList;
	__property ImageOverlayIndex = {default=-1};
	__property ImageOverlayIndexes;
	__property Initialized;
	__property TEasyGroup* OwnerGroup = {read=GetOwnerGroup};
	__property TEasyItems* OwnerItems = {read=GetOwnerItems};
	__property OwnsPaintInfo = {default=0};
	__property TEasyPaintInfoItem* PaintInfo = {read=GetPaintInfo, write=SetPaintInfo};
	__property int RowPos = {read=GetRowPos, nodefault};
	__property Selected = {default=0};
	__property State;
	__property Mpcommonobjects::TCommonImageIndexInteger StateImageIndex = {read=GetStateImageIndex, write=SetStateImageIndex, default=-1};
	__property Mpcommonobjects::TCommonImageIndexInteger StateImageIndexes[int Column] = {read=GetStateImageIndexes, write=SetStateImageIndexes};
	__property Vcl::Imglist::TCustomImageList* StateImageList[int Column] = {read=GetStateImageList};
	__property VAlignment;
	__property TEasyViewItem* View = {read=GetView};
	__property TEasyViewItemClass ViewClass = {read=GetViewClass};
	__property Visible = {default=1};
	__property int VisibleIndexInGroup = {read=FVisibleIndexInGroup, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyItemInterfaced : public TEasyItem
{
	typedef TEasyItem inherited;
	
private:
	Mpcommonobjects::TCommonImageIndexInteger __fastcall GetCommonImageIndex(int Column, TEasyImageKind Kind);
	void __fastcall SetCommonImageIndex(int Column, TEasyImageKind Kind, Mpcommonobjects::TCommonImageIndexInteger Value);
	
protected:
	virtual System::WideString __fastcall GetCaptions(int Column);
	virtual bool __fastcall GetChecked(void);
	virtual int __fastcall GetDetailCount(void);
	virtual int __fastcall GetDetails(int Line);
	virtual unsigned __fastcall GetGroupKey(int FocusedColumn);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageIndexes(int Column);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(int Column, TEasyImageSize IconSize);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageOverlayIndexes(int Column);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetStateImageIndexes(int Column);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetStateImageList(int Column);
	virtual void __fastcall ImageDraw(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);
	virtual void __fastcall ImageDrawGetSize(TEasyColumn* Column, int &ImageW, int &ImageH);
	virtual void __fastcall ImageDrawIsCustom(TEasyColumn* Column, bool &IsCustom);
	virtual void __fastcall SetCaptions(int Column, System::WideString Value);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetDetailCount(int Value);
	virtual void __fastcall SetDetails(int Line, int Value);
	virtual void __fastcall SetGroupKey(int FocusedColumn, unsigned Value);
	virtual void __fastcall SetImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetImageOverlayIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetStateImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall ThumbnailDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);
	
public:
	System::TObject* __fastcall ExtractObject(void);
	__property DataInf;
public:
	/* TEasyItem.Create */ inline __fastcall virtual TEasyItemInterfaced(TEasyCollection* ACollection) : TEasyItem(ACollection) { }
	/* TEasyItem.Destroy */ inline __fastcall virtual ~TEasyItemInterfaced(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyItemVirtual : public TEasyItem
{
	typedef TEasyItem inherited;
	
protected:
	virtual System::WideString __fastcall GetCaptions(int Column);
	virtual int __fastcall GetDetailCount(void);
	virtual int __fastcall GetDetails(int Line);
	virtual unsigned __fastcall GetGroupKey(int FocusedColumn);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageIndexes(int Column);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(int Column, TEasyImageSize IconSize);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageOverlayIndexes(int Column);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetStateImageIndexes(int Column);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetStateImageList(int Column);
	virtual void __fastcall ImageDraw(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);
	virtual void __fastcall ImageDrawGetSize(TEasyColumn* Column, int &ImageW, int &ImageH);
	virtual void __fastcall ImageDrawIsCustom(TEasyColumn* Column, bool &IsCustom);
	virtual void __fastcall SetCaptions(int Column, System::WideString Value);
	virtual void __fastcall SetDetailCount(int Value);
	virtual void __fastcall SetDetails(int Line, int Value);
	virtual void __fastcall SetGroupKey(int FocusedColumn, unsigned Value);
	virtual void __fastcall SetImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetImageOverlayIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetStateImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall ThumbnailDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);
public:
	/* TEasyItem.Create */ inline __fastcall virtual TEasyItemVirtual(TEasyCollection* ACollection) : TEasyItem(ACollection) { }
	/* TEasyItem.Destroy */ inline __fastcall virtual ~TEasyItemVirtual(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyItemStored : public TEasyItem
{
	typedef TEasyItem inherited;
	
private:
	TEasyItemDynamicDataHelper* FDataHelper;
	
protected:
	virtual System::WideString __fastcall GetCaptions(int Column);
	virtual int __fastcall GetDetailCount(void);
	virtual int __fastcall GetDetails(int Line);
	virtual unsigned __fastcall GetGroupKey(int FocusedColumn);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageIndexes(int Column);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(int Column, TEasyImageSize IconSize);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageOverlayIndexes(int Column);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetStateImageIndexes(int Column);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetStateImageList(int Column);
	virtual void __fastcall ImageDraw(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);
	virtual void __fastcall ImageDrawGetSize(TEasyColumn* Column, int &ImageW, int &ImageH);
	virtual void __fastcall ImageDrawIsCustom(TEasyColumn* Column, bool &IsCustom);
	virtual void __fastcall SetCaptions(int Column, System::WideString Value);
	virtual void __fastcall SetDetailCount(int Value);
	virtual void __fastcall SetDetails(int Column, int Value);
	virtual void __fastcall SetGroupKey(int FocusedColumn, unsigned Value);
	virtual void __fastcall SetImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetImageOverlayIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetStateImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall ThumbnailDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);
	__property TEasyItemDynamicDataHelper* DataHelper = {read=FDataHelper, write=FDataHelper};
	
public:
	__fastcall virtual TEasyItemStored(TEasyCollection* ACollection);
	__fastcall virtual ~TEasyItemStored(void);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int &AVersion);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int AVersion = 0x6);
	
__published:
	__property Bold = {default=0};
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property Ghosted = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageOverlayIndex = {default=-1};
	__property Selected = {default=0};
	__property StateImageIndex = {default=-1};
	__property Tag = {default=0};
	__property Visible = {default=1};
};

#pragma pack(pop)

typedef System::TMetaClass* TEasyItemStoredClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCollection : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
public:
	TEasyCollectionItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	bool FHideFromDFM;
	System::Classes::TList* FList;
	int FReIndexCount;
	NativeInt FTag;
	System::Classes::TList* FVisibleList;
	int __fastcall GetCount(void);
	TEasyCollectionItem* __fastcall GetItem(int Index);
	TCustomEasyListview* __fastcall GetOwnerListview(void);
	bool __fastcall GetReIndexDisable(void);
	int __fastcall GetVisibleCount(void);
	void __fastcall SetItem(int Index, TEasyCollectionItem* Value);
	void __fastcall SetReIndexDisable(const bool Value);
	
protected:
	TEasyCollectionItemClass FItemClass;
	DYNAMIC bool __fastcall DoStore(void);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner(void);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DoItemAdd(TEasyCollectionItem* Item, int Index);
	virtual void __fastcall DoStructureChange(void);
	__property System::Classes::TList* List = {read=FList, write=FList};
	__property int ReIndexCount = {read=FReIndexCount, write=FReIndexCount, nodefault};
	__property System::Classes::TList* VisibleList = {read=FVisibleList, write=FVisibleList};
	
public:
	__fastcall virtual TEasyCollection(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyCollection(void);
	TEasyCollectionItem* __fastcall Add(System::TObject* Data = (System::TObject*)(0x0));
	virtual TEasyColumn* __fastcall FirstVisible(void);
	virtual TEasyColumn* __fastcall LastVisible(void);
	virtual TEasyColumn* __fastcall NextVisible(TEasyColumn* Column);
	virtual TEasyColumn* __fastcall PrevVisible(TEasyColumn* Column);
	virtual void __fastcall BeginUpdate(bool ReIndex);
	virtual void __fastcall Clear(bool FreeItems = true);
	virtual void __fastcall Delete(int Index);
	virtual void __fastcall EndUpdate(bool Invalidate = true);
	TEasyCollectionItem* __fastcall Insert(int Index, System::TObject* Data = (System::TObject*)(0x0));
	void __fastcall Exchange(int Index1, int Index2);
	virtual void __fastcall MakeAllVisible(void);
	virtual void __fastcall ReadItems(System::Classes::TStream* Stream);
	virtual void __fastcall ReIndexItems(bool Force = false);
	virtual void __fastcall WriteItems(System::Classes::TStream* Stream);
	__property int Count = {read=GetCount, nodefault};
	__property bool HideFromDFM = {read=FHideFromDFM, write=FHideFromDFM, default=0};
	__property TEasyCollectionItemClass ItemClass = {read=FItemClass};
	__property TEasyCollectionItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TCustomEasyListview* OwnerListview = {read=GetOwnerListview};
	__property bool ReIndexDisable = {read=GetReIndexDisable, write=SetReIndexDisable, nodefault};
	__property int VisibleCount = {read=GetVisibleCount, nodefault};
	
__published:
	__property NativeInt Tag = {read=FTag, write=FTag, default=0};
};

#pragma pack(pop)

typedef System::TMetaClass* TEasyCollectionClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewItem : public TEasyOwnedPersistentGroupItem
{
	typedef TEasyOwnedPersistentGroupItem inherited;
	
protected:
	virtual bool __fastcall AllowDrag(TEasyItem* Item, const System::Types::TPoint &ViewportPoint);
	void __fastcall PaintAlphaBlendedRoundRect(Vcl::Graphics::TCanvas* ACanvas, System::Uitypes::TColor AlphaColor, System::Uitypes::TColor GradientBottom, System::Uitypes::TColor GradientTop, System::Types::TRect &LocalSelWindowClippedRect, HRGN &Rgn);
	void __fastcall PaintAlphaBlendedSelection(Vcl::Graphics::TCanvas* ACanvas, System::Uitypes::TColor AlphaColor, const System::Types::TRect &HeaderClippedWindowRect, const System::Types::TRect &LocalSelRect);
	void __fastcall PaintAlphaBlendedGradientFill(Vcl::Graphics::TCanvas* ACanvas, System::Uitypes::TColor GradientBottom, System::Uitypes::TColor GradientTop, const System::Types::TRect &LocalSelRect, const System::Types::TRect &LocalSelWindowClippedRect, const System::Types::TRect &LocalSelClippedRect);
	void __fastcall PaintNonAlphaBlendedSelection(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &LocalSelRect);
	virtual bool __fastcall PaintStateImage(void);
	int __fastcall ValidateColumnIndex(TEasyColumn* Column);
	
public:
	virtual void __fastcall AfterFocusRectCalc(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, System::Types::TRect &LocalFocusRect);
	virtual void __fastcall AfterSelRectCalc(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, System::Types::TRect &LocalSelRect);
	void __fastcall CalculateTextRect(TEasyItem* Item, TEasyColumn* Column, System::Types::TRect &TextR, Vcl::Controls::TControlCanvas* ACanvas);
	virtual TEasyInsertMarkerDir __fastcall DropMarkerDir(void);
	virtual bool __fastcall EditAreaHitPt(TEasyItem* Item, const System::Types::TPoint &ViewportPoint);
	virtual System::Types::TRect __fastcall ExpandIconR(TEasyItem* Item, const TEasyRectArrayObject &RectArray, TEasySelectHitType SelectType);
	virtual System::Types::TRect __fastcall ExpandTextR(TEasyItem* Item, const TEasyRectArrayObject &RectArray, TEasySelectHitType SelectType);
	virtual bool __fastcall FullRowSelect(void);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(TEasyColumn* Column, TEasyItem* Item, TEasyImageKind Image);
	virtual void __fastcall GetImageSize(TEasyItem* Item, TEasyColumn* Column, int &ImageW, int &ImageH, TEasyImageKind Image);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetStateImageList(TEasyColumn* Column, TEasyItem* Item);
	virtual System::Types::TRect __fastcall ItemRect(TEasyItem* Item, TEasyColumn* Column, TEasyCellRectType RectType);
	virtual void __fastcall ItemRectArray(TEasyItem* Item, TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const System::WideString Caption, TEasyRectArrayObject &RectArray);
	virtual void __fastcall LoadTextFont(TEasyItem* Item, int Position, Vcl::Graphics::TCanvas* ACanvas, bool Hilightable);
	virtual bool __fastcall OverlappedFocus(void);
	virtual void __fastcall Paint(TEasyItem* Item, TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ViewportClipRect, bool ForceSelectionRectDraw);
	virtual void __fastcall PaintAfter(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintBefore(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, bool &Handled);
	virtual void __fastcall PaintCheckBox(TEasyItem* Item, TEasyColumn* Column, const TEasyRectArrayObject &RectArray, Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall PaintFocusRect(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, const TEasyRectArrayObject &RectArray, Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall PaintImage(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, const TEasyRectArrayObject &RectArray, TEasyImageSize ImageSize, Vcl::Graphics::TCanvas* ACanvas);
	virtual TEasyImageSize __fastcall PaintImageSize(void);
	virtual void __fastcall PaintSelectionRect(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, const TEasyRectArrayObject &RectArray, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ViewportClipRect, bool ForceSelectionRectDraw);
	virtual void __fastcall PaintText(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, const TEasyRectArrayObject &RectArray, Vcl::Graphics::TCanvas* ACanvas, int LinesToDraw);
	virtual System::Classes::TAlignment __fastcall PaintTextAlignment(TEasyItem* Item, TEasyColumn* Column);
	virtual int __fastcall PaintTextLineCount(TEasyItem* Item, TEasyColumn* Column);
	virtual Mpcommonutilities::TCommonVAlignment __fastcall PaintTextVAlignment(TEasyItem* Item, TEasyColumn* Column);
	virtual int __fastcall PtInRect(TEasyItem* Item, TEasyColumn* Column, const System::Types::TPoint &Pt);
	virtual void __fastcall ReSizeRectArray(TEasyRectArrayObjectArray &RectArray);
	virtual bool __fastcall SelectionHit(TEasyItem* Item, const System::Types::TRect &SelectViewportRect, TEasySelectHitType SelectType);
	virtual bool __fastcall SelectionHitPt(TEasyItem* Item, const System::Types::TPoint &ViewportPoint, TEasySelectHitType SelectType);
	void __fastcall TestAndClipImage(Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, HRGN &Rgn);
	void __fastcall TestAndUnClipImage(Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, HRGN Rgn);
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewItem(TEasyGroup* AnOwner) : TEasyOwnedPersistentGroupItem(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewIconItem : public TEasyViewItem
{
	typedef TEasyViewItem inherited;
	
public:
	virtual TEasyInsertMarkerDir __fastcall DropMarkerDir(void);
	virtual System::Types::TRect __fastcall ExpandIconR(TEasyItem* Item, const TEasyRectArrayObject &RectArray, TEasySelectHitType SelectType);
	virtual bool __fastcall OverlappedFocus(void);
	virtual TEasyImageSize __fastcall PaintImageSize(void);
	virtual int __fastcall PaintTextLineCount(TEasyItem* Item, TEasyColumn* Column);
	virtual void __fastcall AfterFocusRectCalc(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, System::Types::TRect &LocalFocusRect);
	virtual void __fastcall AfterSelRectCalc(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, System::Types::TRect &LocalSelRect);
	virtual void __fastcall ItemRectArray(TEasyItem* Item, TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const System::WideString Caption, TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintBefore(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, bool &Handled);
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewIconItem(TEasyGroup* AnOwner) : TEasyViewItem(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewIconItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewSmallIconItem : public TEasyViewItem
{
	typedef TEasyViewItem inherited;
	
public:
	virtual System::Types::TRect __fastcall CalculateDisplayRect(TEasyItem* Item, TEasyColumn* Column);
	virtual System::Types::TRect __fastcall ExpandIconR(TEasyItem* Item, const TEasyRectArrayObject &RectArray, TEasySelectHitType SelectType);
	virtual System::Types::TRect __fastcall ExpandTextR(TEasyItem* Item, const TEasyRectArrayObject &RectArray, TEasySelectHitType SelectType);
	virtual void __fastcall ItemRectArray(TEasyItem* Item, TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const System::WideString Caption, TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintBefore(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, bool &Handled);
	virtual System::Classes::TAlignment __fastcall PaintTextAlignment(TEasyItem* Item, TEasyColumn* Column);
	virtual int __fastcall PaintTextLineCount(TEasyItem* Item, TEasyColumn* Column);
	virtual Mpcommonutilities::TCommonVAlignment __fastcall PaintTextVAlignment(TEasyItem* Item, TEasyColumn* Column);
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewSmallIconItem(TEasyGroup* AnOwner) : TEasyViewItem(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewSmallIconItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewListItem : public TEasyViewSmallIconItem
{
	typedef TEasyViewSmallIconItem inherited;
	
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewListItem(TEasyGroup* AnOwner) : TEasyViewSmallIconItem(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewListItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewReportItem : public TEasyViewSmallIconItem
{
	typedef TEasyViewSmallIconItem inherited;
	
protected:
	virtual bool __fastcall AllowDrag(TEasyItem* Item, const System::Types::TPoint &ViewportPoint);
	virtual bool __fastcall PaintStateImage(void);
	
public:
	virtual System::Types::TRect __fastcall CalculateDisplayRect(TEasyItem* Item, TEasyColumn* Column);
	virtual System::Types::TRect __fastcall ExpandTextR(TEasyItem* Item, const TEasyRectArrayObject &RectArray, TEasySelectHitType SelectType);
	virtual bool __fastcall FullRowSelect(void);
	virtual bool __fastcall SelectionHit(TEasyItem* Item, const System::Types::TRect &SelectViewportRect, TEasySelectHitType SelectType);
	virtual bool __fastcall SelectionHitPt(TEasyItem* Item, const System::Types::TPoint &ViewportPoint, TEasySelectHitType SelectType);
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewReportItem(TEasyGroup* AnOwner) : TEasyViewSmallIconItem(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewReportItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewReportThumbItem : public TEasyViewReportItem
{
	typedef TEasyViewReportItem inherited;
	
public:
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(TEasyColumn* Column, TEasyItem* Item, TEasyImageKind Image);
	virtual TEasyImageSize __fastcall PaintImageSize(void);
	virtual void __fastcall GetImageSize(TEasyItem* Item, TEasyColumn* Column, int &ImageW, int &ImageH, TEasyImageKind Image);
	virtual void __fastcall ItemRectArray(TEasyItem* Item, TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const System::WideString Caption, TEasyRectArrayObject &RectArray);
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewReportThumbItem(TEasyGroup* AnOwner) : TEasyViewReportItem(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewReportThumbItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewGridItem : public TEasyViewSmallIconItem
{
	typedef TEasyViewSmallIconItem inherited;
	
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewGridItem(TEasyGroup* AnOwner) : TEasyViewSmallIconItem(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewGridItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewThumbnailItem : public TEasyViewItem
{
	typedef TEasyViewItem inherited;
	
public:
	virtual TEasyInsertMarkerDir __fastcall DropMarkerDir(void);
	virtual System::Types::TRect __fastcall ExpandTextR(TEasyItem* Item, const TEasyRectArrayObject &RectArray, TEasySelectHitType SelectType);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(TEasyColumn* Column, TEasyItem* Item, TEasyImageKind Image);
	virtual TEasyImageSize __fastcall PaintImageSize(void);
	virtual void __fastcall AfterFocusRectCalc(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, System::Types::TRect &LocalFocusRect);
	virtual void __fastcall AfterSelRectCalc(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, System::Types::TRect &LocalSelRect);
	virtual void __fastcall ItemRectArray(TEasyItem* Item, TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const System::WideString Caption, TEasyRectArrayObject &RectArray);
	virtual bool __fastcall OverlappedFocus(void);
	virtual void __fastcall PaintAfter(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintBefore(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, bool &Handled);
	virtual int __fastcall PaintTextLineCount(TEasyItem* Item, TEasyColumn* Column);
	virtual Mpcommonutilities::TCommonVAlignment __fastcall PaintTextVAlignment(TEasyItem* Item, TEasyColumn* Column);
	virtual bool __fastcall SelectionHit(TEasyItem* Item, const System::Types::TRect &SelectViewportRect, TEasySelectHitType SelectType);
	virtual bool __fastcall SelectionHitPt(TEasyItem* Item, const System::Types::TPoint &ViewportPoint, TEasySelectHitType SelectType);
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewThumbnailItem(TEasyGroup* AnOwner) : TEasyViewItem(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewThumbnailItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewTileItem : public TEasyViewItem
{
	typedef TEasyViewItem inherited;
	
public:
	virtual TEasyInsertMarkerDir __fastcall DropMarkerDir(void);
	virtual System::Types::TRect __fastcall ExpandIconR(TEasyItem* Item, const TEasyRectArrayObject &RectArray, TEasySelectHitType SelectType);
	virtual System::Types::TRect __fastcall ExpandTextR(TEasyItem* Item, const TEasyRectArrayObject &RectArray, TEasySelectHitType SelectType);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(TEasyColumn* Column, TEasyItem* Item, TEasyImageKind Image);
	virtual TEasyImageSize __fastcall PaintImageSize(void);
	virtual System::Classes::TAlignment __fastcall PaintTextAlignment(TEasyItem* Item, TEasyColumn* Column);
	virtual void __fastcall AfterFocusRectCalc(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, System::Types::TRect &LocalFocusRect);
	virtual void __fastcall AfterSelRectCalc(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, System::Types::TRect &LocalSelRect);
	virtual void __fastcall ItemRectArray(TEasyItem* Item, TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const System::WideString Caption, TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintBefore(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, bool &Handled);
	virtual void __fastcall PaintText(TEasyItem* Item, TEasyColumn* Column, const System::WideString Caption, const TEasyRectArrayObject &RectArray, Vcl::Graphics::TCanvas* ACanvas, int LinesToDraw);
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewTileItem(TEasyGroup* AnOwner) : TEasyViewItem(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewTileItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewFilmStripItem : public TEasyViewThumbnailItem
{
	typedef TEasyViewThumbnailItem inherited;
	
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewFilmStripItem(TEasyGroup* AnOwner) : TEasyViewThumbnailItem(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewFilmStripItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewTaskBandItem : public TEasyViewSmallIconItem
{
	typedef TEasyViewSmallIconItem inherited;
	
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewTaskBandItem(TEasyGroup* AnOwner) : TEasyViewSmallIconItem(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewTaskBandItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyItems : public TEasyCollection
{
	typedef TEasyCollection inherited;
	
public:
	TEasyItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TEasyGroup* FOwnerGroup;
	HIDESBASE TEasyItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TEasyItem* Value);
	
protected:
	virtual void __fastcall DoStructureChange(void);
	
public:
	__fastcall virtual TEasyItems(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup);
	__fastcall virtual ~TEasyItems(void);
	HIDESBASE TEasyItem* __fastcall Add(System::TObject* Data = (System::TObject*)(0x0));
	TEasyItemInterfaced* __fastcall AddInterfaced(const System::_di_IInterface DataInf, System::TObject* Data = (System::TObject*)(0x0));
	TEasyItemVirtual* __fastcall AddVirtual(System::TObject* Data = (System::TObject*)(0x0));
	TEasyItem* __fastcall AddCustom(TEasyItemClass CustomItem, System::TObject* Data = (System::TObject*)(0x0));
	virtual void __fastcall Clear(bool FreeItems = true);
	HIDESBASE void __fastcall Delete(int Index);
	HIDESBASE void __fastcall Exchange(int Index1, int Index2);
	HIDESBASE TEasyItem* __fastcall Insert(int Index, System::TObject* Data = (System::TObject*)(0x0));
	TEasyItem* __fastcall InsertCustom(int Index, TEasyItemClass CustomItem, System::TObject* Data = (System::TObject*)(0x0));
	TEasyItemInterfaced* __fastcall InsertInterfaced(int Index, const System::_di_IInterface DataInf, System::TObject* Data = (System::TObject*)(0x0));
	TEasyItemVirtual* __fastcall InsertVirtual(int Index, System::TObject* Data = (System::TObject*)(0x0));
	__property TEasyItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TEasyGroup* OwnerGroup = {read=FOwnerGroup};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGlobalItems : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TEasyItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCustomEasyListview* FOwner;
	int __fastcall GetCount(void);
	TEasyItem* __fastcall GetItem(int Index);
	TEasyItem* __fastcall GetItemInternal(int Index);
	TEasyGroup* __fastcall GetLastGroup(void);
	void __fastcall EnsureFirstGroup(void);
	void __fastcall IndexError(int Index);
	void __fastcall SetItem(int Index, TEasyItem* const Value);
	void __fastcall SetReIndexDisable(const bool Value);
	
public:
	__fastcall TEasyGlobalItems(TCustomEasyListview* AnOwner);
	TEasyItem* __fastcall Add(System::TObject* Data = (System::TObject*)(0x0));
	TEasyItem* __fastcall AddCustom(TEasyItemClass CustomItem, System::TObject* Data = (System::TObject*)(0x0));
	TEasyItemInterfaced* __fastcall AddInterfaced(const System::_di_IInterface DataInf, System::TObject* Data = (System::TObject*)(0x0));
	TEasyItemVirtual* __fastcall AddVirtual(System::TObject* Data = (System::TObject*)(0x0));
	TEasyItem* __fastcall FindByCaption(const System::WideString Caption, int Column = 0x0);
	int __fastcall IndexOf(TEasyItem* Item);
	TEasyItem* __fastcall Insert(int Index, System::TObject* Data = (System::TObject*)(0x0));
	TEasyItem* __fastcall InsertCustom(int Index, TEasyItemClass CustomItem, System::TObject* Data = (System::TObject*)(0x0));
	TEasyItemInterfaced* __fastcall InsertInterfaced(int Index, const System::_di_IInterface DataInf, System::TObject* Data = (System::TObject*)(0x0));
	TEasyItemVirtual* __fastcall InsertVirtual(int Index, System::TObject* Data = (System::TObject*)(0x0));
	void __fastcall Clear(void);
	void __fastcall Delete(int Index, bool ReIndex = true);
	void __fastcall Exchange(int Index1, int Index2);
	__property int Count = {read=GetCount, nodefault};
	__property TEasyItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TCustomEasyListview* OwnerListview = {read=FOwner};
	__property bool ReIndexDisable = {write=SetReIndexDisable, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEasyGlobalItems(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGlobalImageManager : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	Vcl::Graphics::TBitmap* FGroupExpandButton;
	Vcl::Graphics::TBitmap* FGroupCollapseButton;
	Vcl::Graphics::TBitmap* FColumnSortUp;
	Vcl::Graphics::TBitmap* FColumnSortDown;
	Vcl::Graphics::TBitmap* __fastcall GetColumnSortDown(void);
	Vcl::Graphics::TBitmap* __fastcall GetColumnSortUp(void);
	Vcl::Graphics::TBitmap* __fastcall GetGroupCollapseImage(void);
	Vcl::Graphics::TBitmap* __fastcall GetGroupExpandImage(void);
	void __fastcall SetColumnSortDown(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetColumnSortUp(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetGroupCollapseImage(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetGroupExpandImage(Vcl::Graphics::TBitmap* const Value);
	
protected:
	void __fastcall MakeTransparent(Vcl::Graphics::TBitmap* Bits, System::Uitypes::TColor TransparentColor);
	
public:
	__fastcall virtual TEasyGlobalImageManager(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyGlobalImageManager(void);
	
__published:
	__property Vcl::Graphics::TBitmap* GroupExpandButton = {read=GetGroupExpandImage, write=SetGroupExpandImage};
	__property Vcl::Graphics::TBitmap* GroupCollapseButton = {read=GetGroupCollapseImage, write=SetGroupCollapseImage};
	__property Vcl::Graphics::TBitmap* ColumnSortUp = {read=GetColumnSortUp, write=SetColumnSortUp};
	__property Vcl::Graphics::TBitmap* ColumnSortDown = {read=GetColumnSortDown, write=SetColumnSortDown};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridGroup : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	int FColumnCount;
	TEasyGridLayout FLayout;
	TEasyGroup* FOwnerGroup;
	int FRowCount;
	TEasyGroups* __fastcall GetOwnerGroups(void);
	
protected:
	virtual TEasyItem* __fastcall AdjacentItem(TEasyItem* Item, TEasyAdjacentCellDir Direction);
	virtual TEasyCellSize* __fastcall GetCellSize(void) = 0 ;
	virtual int __fastcall GetMaxColumns(TEasyGroup* Group, int WindowWidth);
	TEasyItem* __fastcall LastItemInNColumn(TEasyGroup* Group, int N);
	TEasyGroup* __fastcall NextVisibleGroupWithNItems(TEasyGroup* StartGroup, int N);
	TEasyGroup* __fastcall PrevVisibleGroupWithNItems(TEasyGroup* StartGroup, int N);
	TEasyItem* __fastcall SearchForHitRight(int ColumnPos, const System::Types::TPoint &Pt);
	virtual int __fastcall StaticTopItemMargin(void);
	virtual int __fastcall StaticTopMargin(void);
	virtual void __fastcall AutoSizeCells(void);
	void __fastcall FindLongestCaption(TEasyColumn* Column, TEasyItem* &Item);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value) = 0 ;
	
public:
	__fastcall virtual TEasyGridGroup(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup);
	__fastcall virtual ~TEasyGridGroup(void);
	virtual void __fastcall FindInsertPosition(const System::Types::TPoint &ViewportPoint, TEasyGroup* &Group, int &Index);
	virtual void __fastcall Rebuild(TEasyGroup* PrevGroup, int &NextVisibleItemIndex);
	__property TEasyCellSize* CellSize = {read=GetCellSize, write=SetCellSize};
	__property int ColumnCount = {read=FColumnCount, nodefault};
	__property TEasyGridLayout Layout = {read=FLayout, nodefault};
	__property TEasyGroup* OwnerGroup = {read=FOwnerGroup};
	__property TEasyGroups* OwnerGroups = {read=GetOwnerGroups};
	__property int RowCount = {read=FRowCount, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridIconGroup : public TEasyGridGroup
{
	typedef TEasyGridGroup inherited;
	
protected:
	virtual TEasyCellSize* __fastcall GetCellSize(void);
	virtual void __fastcall AutoSizeCells(void);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value);
public:
	/* TEasyGridGroup.Create */ inline __fastcall virtual TEasyGridIconGroup(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup) : TEasyGridGroup(AnOwner, AnOwnerGroup) { }
	/* TEasyGridGroup.Destroy */ inline __fastcall virtual ~TEasyGridIconGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridSmallIconGroup : public TEasyGridGroup
{
	typedef TEasyGridGroup inherited;
	
protected:
	virtual TEasyCellSize* __fastcall GetCellSize(void);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value);
public:
	/* TEasyGridGroup.Create */ inline __fastcall virtual TEasyGridSmallIconGroup(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup) : TEasyGridGroup(AnOwner, AnOwnerGroup) { }
	/* TEasyGridGroup.Destroy */ inline __fastcall virtual ~TEasyGridSmallIconGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridListGroup : public TEasyGridGroup
{
	typedef TEasyGridGroup inherited;
	
protected:
	virtual TEasyItem* __fastcall AdjacentItem(TEasyItem* Item, TEasyAdjacentCellDir Direction);
	virtual TEasyCellSize* __fastcall GetCellSize(void);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value);
	
public:
	__fastcall virtual TEasyGridListGroup(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup);
	virtual void __fastcall FindInsertPosition(const System::Types::TPoint &ViewportPoint, TEasyGroup* &Group, int &Index);
	virtual void __fastcall Rebuild(TEasyGroup* PrevGroup, int &NextVisibleItemIndex);
public:
	/* TEasyGridGroup.Destroy */ inline __fastcall virtual ~TEasyGridListGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridReportGroup : public TEasyGridGroup
{
	typedef TEasyGridGroup inherited;
	
protected:
	virtual TEasyItem* __fastcall AdjacentItem(TEasyItem* Item, TEasyAdjacentCellDir Direction);
	virtual TEasyCellSize* __fastcall GetCellSize(void);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value);
	
public:
	__fastcall virtual TEasyGridReportGroup(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup);
	virtual void __fastcall FindInsertPosition(const System::Types::TPoint &ViewportPoint, TEasyGroup* &Group, int &Index);
	virtual void __fastcall Rebuild(TEasyGroup* PrevGroup, int &NextVisibleItemIndex);
public:
	/* TEasyGridGroup.Destroy */ inline __fastcall virtual ~TEasyGridReportGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridReportThumbGroup : public TEasyGridReportGroup
{
	typedef TEasyGridReportGroup inherited;
	
protected:
	virtual TEasyCellSize* __fastcall GetCellSize(void);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value);
public:
	/* TEasyGridReportGroup.Create */ inline __fastcall virtual TEasyGridReportThumbGroup(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup) : TEasyGridReportGroup(AnOwner, AnOwnerGroup) { }
	
public:
	/* TEasyGridGroup.Destroy */ inline __fastcall virtual ~TEasyGridReportThumbGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridThumbnailGroup : public TEasyGridGroup
{
	typedef TEasyGridGroup inherited;
	
protected:
	virtual TEasyCellSize* __fastcall GetCellSize(void);
	virtual void __fastcall AutoSizeCells(void);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value);
public:
	/* TEasyGridGroup.Create */ inline __fastcall virtual TEasyGridThumbnailGroup(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup) : TEasyGridGroup(AnOwner, AnOwnerGroup) { }
	/* TEasyGridGroup.Destroy */ inline __fastcall virtual ~TEasyGridThumbnailGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridTileGroup : public TEasyGridGroup
{
	typedef TEasyGridGroup inherited;
	
protected:
	virtual TEasyCellSize* __fastcall GetCellSize(void);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value);
	
public:
	virtual void __fastcall FindInsertPosition(const System::Types::TPoint &ViewportPoint, TEasyGroup* &Group, int &Index);
public:
	/* TEasyGridGroup.Create */ inline __fastcall virtual TEasyGridTileGroup(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup) : TEasyGridGroup(AnOwner, AnOwnerGroup) { }
	/* TEasyGridGroup.Destroy */ inline __fastcall virtual ~TEasyGridTileGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridFilmStripGroup : public TEasyGridListGroup
{
	typedef TEasyGridListGroup inherited;
	
protected:
	virtual TEasyCellSize* __fastcall GetCellSize(void);
	virtual void __fastcall AutoSizeCells(void);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value);
public:
	/* TEasyGridListGroup.Create */ inline __fastcall virtual TEasyGridFilmStripGroup(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup) : TEasyGridListGroup(AnOwner, AnOwnerGroup) { }
	
public:
	/* TEasyGridGroup.Destroy */ inline __fastcall virtual ~TEasyGridFilmStripGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridGridGroup : public TEasyGridGroup
{
	typedef TEasyGridGroup inherited;
	
protected:
	virtual TEasyCellSize* __fastcall GetCellSize(void);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value);
	
public:
	__fastcall virtual TEasyGridGridGroup(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup);
	virtual void __fastcall Rebuild(TEasyGroup* PrevGroup, int &NextVisibleItemIndex);
public:
	/* TEasyGridGroup.Destroy */ inline __fastcall virtual ~TEasyGridGridGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridSingleColumn : public TEasyGridGroup
{
	typedef TEasyGridGroup inherited;
	
protected:
	virtual TEasyCellSize* __fastcall GetCellSize(void);
	virtual int __fastcall GetMaxColumns(TEasyGroup* Group, int WindowWidth);
	virtual void __fastcall AutoSizeCells(void);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value);
	
public:
	virtual void __fastcall FindInsertPosition(const System::Types::TPoint &ViewportPoint, TEasyGroup* &Group, int &Index);
public:
	/* TEasyGridGroup.Create */ inline __fastcall virtual TEasyGridSingleColumn(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup) : TEasyGridGroup(AnOwner, AnOwnerGroup) { }
	/* TEasyGridGroup.Destroy */ inline __fastcall virtual ~TEasyGridSingleColumn(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridTaskBandGroup : public TEasyGridSingleColumn
{
	typedef TEasyGridSingleColumn inherited;
	
private:
	TEasyCellSize* FCellSize;
	
protected:
	virtual TEasyCellSize* __fastcall GetCellSize(void);
	virtual int __fastcall StaticTopItemMargin(void);
	virtual int __fastcall StaticTopMargin(void);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value);
	__property TEasyCellSize* CellSize = {read=FCellSize, write=FCellSize};
	
public:
	__fastcall virtual TEasyGridTaskBandGroup(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup);
	__fastcall virtual ~TEasyGridTaskBandGroup(void);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGridGroupTaskPanel : public TEasyGridSingleColumn
{
	typedef TEasyGridSingleColumn inherited;
	
private:
	TEasyCellSize* FCellSize;
	
protected:
	virtual TEasyCellSize* __fastcall GetCellSize(void);
	virtual int __fastcall StaticTopMargin(void);
	virtual void __fastcall SetCellSize(TEasyCellSize* Value);
	
public:
	__fastcall virtual TEasyGridGroupTaskPanel(TCustomEasyListview* AnOwner, TEasyGroup* AnOwnerGroup);
	__fastcall virtual ~TEasyGridGroupTaskPanel(void);
	virtual void __fastcall Rebuild(TEasyGroup* PrevGroup, int &NextVisibleItemIndex);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGroup : public TEasyCollectionItem
{
	typedef TEasyCollectionItem inherited;
	
public:
	TEasyItem* operator[](int Index) { return this->Item[Index]; }
	
private:
	bool FExpanded;
	TEasyGridGroup* FGrid;
	TEasyItems* FItems;
	unsigned FKey;
	TEasyViewGroup* FView;
	System::Classes::TList* FVisibleItems;
	bool __fastcall GetBandBlended(void);
	System::Uitypes::TColor __fastcall GetBandColor(void);
	System::Uitypes::TColor __fastcall GetBandColorFade(void);
	bool __fastcall GetBandEnabled(void);
	bool __fastcall GetBandFullWidth(void);
	int __fastcall GetBandIndent(void);
	int __fastcall GetBandLength(void);
	int __fastcall GetBandMargin(void);
	System::Byte __fastcall GetBandRadius(void);
	int __fastcall GetBandThickness(void);
	System::Types::TRect __fastcall GetClientRect(void);
	bool __fastcall GetExpandable(void);
	int __fastcall GetExpandImageIndent(void);
	TEasyGridGroup* __fastcall GetGrid(void);
	TEasyGridGroupClass __fastcall GetGridClass(void);
	TEasyItem* __fastcall GetItem(int Index);
	int __fastcall GetItemCount(void);
	TEasyFooterMargin* __fastcall GetMarginBottom(void);
	TEasyMargin* __fastcall GetMarginLeft(void);
	TEasyMargin* __fastcall GetMarginRight(void);
	TEasyHeaderMargin* __fastcall GetMarginTop(void);
	TEasyGroups* __fastcall GetOwnerGroups(void);
	HIDESBASE TCustomEasyListview* __fastcall GetOwnerListview(void);
	HIDESBASE TEasyPaintInfoBaseGroup* __fastcall GetPaintInfo(void);
	TEasyViewGroup* __fastcall GetView(void);
	TEasyViewGroupClass __fastcall GetViewClass(void);
	int __fastcall GetVisibleCount(void);
	TEasyItem* __fastcall GetVisibleItem(int Index);
	void __fastcall SetBandBlended(bool Value);
	void __fastcall SetBandColor(System::Uitypes::TColor Value);
	void __fastcall SetBandColorFade(System::Uitypes::TColor Value);
	void __fastcall SetBandEnabled(bool Value);
	void __fastcall SetBandFullWidth(bool Value);
	void __fastcall SetBandIndent(int Value);
	void __fastcall SetBandLength(int Value);
	void __fastcall SetBandMargin(int Value);
	void __fastcall SetBandRadius(System::Byte Value);
	void __fastcall SetBandThickness(int Value);
	void __fastcall SetExpandable(bool Value);
	virtual void __fastcall SetExpanded(bool Value);
	void __fastcall SetExpandImageIndent(int Value);
	void __fastcall SetItem(int Index, TEasyItem* Value);
	void __fastcall SetMarginBottom(TEasyFooterMargin* Value);
	void __fastcall SetMarginLeft(TEasyMargin* Value);
	void __fastcall SetMarginRight(TEasyMargin* Value);
	void __fastcall SetMarginTop(TEasyHeaderMargin* Value);
	HIDESBASE void __fastcall SetPaintInfo(TEasyPaintInfoBaseGroup* const Value);
	
protected:
	virtual bool __fastcall CanChangeBold(bool NewValue);
	virtual bool __fastcall CanChangeCheck(bool NewValue);
	virtual bool __fastcall CanChangeEnable(bool NewValue);
	virtual bool __fastcall CanChangeFocus(bool NewValue);
	virtual bool __fastcall CanChangeHotTracking(bool NewValue);
	virtual bool __fastcall CanChangeSelection(bool NewValue);
	virtual bool __fastcall CanChangeVisibility(bool NewValue);
	virtual Vcl::Imglist::TCustomImageList* __fastcall DefaultImageList(TEasyImageSize ImageSize);
	virtual TEasyGridGroupClass __fastcall GetDefaultGridClass(void);
	virtual TEasyViewGroupClass __fastcall GetDefaultViewClass(void);
	virtual TEasyPaintInfoBasic* __fastcall LocalPaintInfo(void);
	virtual void __fastcall Freeing(void);
	virtual void __fastcall GainingBold(void);
	virtual void __fastcall GainingCheck(void);
	virtual void __fastcall GainingEnable(void);
	virtual void __fastcall GainingFocus(void);
	virtual void __fastcall GainingGhosted(void);
	virtual void __fastcall GainingHilight(void);
	virtual void __fastcall GainingHotTracking(const System::Types::TPoint &MousePos);
	virtual void __fastcall GainingSelection(void);
	virtual void __fastcall GainingVisibility(void);
	virtual void __fastcall Initialize(void);
	virtual void __fastcall LosingBold(void);
	virtual void __fastcall LosingCheck(void);
	virtual void __fastcall LosingEnable(void);
	virtual void __fastcall LosingFocus(void);
	virtual void __fastcall LosingGhosted(void);
	virtual void __fastcall LosingHilight(void);
	virtual void __fastcall LosingHotTracking(void);
	virtual void __fastcall LosingSelection(void);
	virtual void __fastcall LosingVisibility(void);
	__property Alignment = {default=0};
	__property bool BandBlended = {read=GetBandBlended, write=SetBandBlended, default=1};
	__property System::Uitypes::TColor BandColor = {read=GetBandColor, write=SetBandColor, default=16711680};
	__property System::Uitypes::TColor BandColorFade = {read=GetBandColorFade, write=SetBandColorFade, default=-16777211};
	__property bool BandEnabled = {read=GetBandEnabled, write=SetBandEnabled, default=1};
	__property bool BandFullWidth = {read=GetBandFullWidth, write=SetBandFullWidth, default=0};
	__property int BandIndent = {read=GetBandIndent, write=SetBandIndent, default=0};
	__property int BandLength = {read=GetBandLength, write=SetBandLength, default=300};
	__property int BandMargin = {read=GetBandMargin, write=SetBandMargin, default=0};
	__property System::Byte BandRadius = {read=GetBandRadius, write=SetBandRadius, default=4};
	__property int BandThickness = {read=GetBandThickness, write=SetBandThickness, default=3};
	__property CaptionIndent = {default=2};
	__property CheckFlat = {default=0};
	__property CheckIndent = {default=2};
	__property CheckSize = {default=12};
	__property CheckType = {default=0};
	__property bool Expandable = {read=GetExpandable, write=SetExpandable, default=1};
	__property int ExpandImageIndent = {read=GetExpandImageIndent, write=SetExpandImageIndent, default=4};
	__property ImageIndent = {default=2};
	__property unsigned Key = {read=FKey, write=FKey, nodefault};
	__property TEasyFooterMargin* MarginBottom = {read=GetMarginBottom, write=SetMarginBottom};
	__property TEasyMargin* MarginLeft = {read=GetMarginLeft, write=SetMarginLeft};
	__property TEasyMargin* MarginRight = {read=GetMarginRight, write=SetMarginRight};
	__property TEasyHeaderMargin* MarginTop = {read=GetMarginTop, write=SetMarginTop};
	__property OwnsPaintInfo = {default=0};
	__property TEasyPaintInfoBaseGroup* PaintInfo = {read=GetPaintInfo, write=SetPaintInfo};
	__property VAlignment = {default=2};
	__property TEasyItem* VisibleItem[int Index] = {read=GetVisibleItem};
	__property System::Classes::TList* VisibleItems = {read=FVisibleItems, write=FVisibleItems};
	
public:
	__fastcall virtual TEasyGroup(TEasyCollection* ACollection);
	__fastcall virtual ~TEasyGroup(void);
	System::Types::TRect __fastcall BoundsRectBkGnd(void);
	System::Types::TRect __fastcall BoundsRectBottomMargin(void);
	System::Types::TRect __fastcall BoundsRectLeftMargin(void);
	System::Types::TRect __fastcall BoundsRectRightMargin(void);
	System::Types::TRect __fastcall BoundsRectTopMargin(void);
	virtual bool __fastcall EditAreaHitPt(const System::Types::TPoint &ViewportPoint);
	bool __fastcall HitTestAt(const System::Types::TPoint &ViewportPoint, TEasyGroupHitTestInfoSet &HitInfo);
	TEasyItem* __fastcall ItemByPoint(const System::Types::TPoint &ViewportPoint);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int &AVersion);
	void __fastcall Paint(TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, Vcl::Graphics::TCanvas* ACanvas);
	void __fastcall Rebuild(TEasyGroup* PrevGroup, int &NextVisibleItemIndex);
	virtual bool __fastcall SelectionHit(const System::Types::TRect &SelectViewportRect, TEasySelectHitType SelectType);
	virtual bool __fastcall SelectionHitPt(const System::Types::TPoint &ViewportPoint, TEasySelectHitType SelectType);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int AVersion = 0x6);
	__property Bold = {default=0};
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property System::Types::TRect ClientRect = {read=GetClientRect};
	__property Cut = {default=0};
	__property Enabled = {default=1};
	__property bool Expanded = {read=FExpanded, write=SetExpanded, default=1};
	__property Focused = {default=0};
	__property TEasyGridGroup* Grid = {read=GetGrid};
	__property TEasyGridGroupClass GridClass = {read=GetGridClass};
	__property ImageIndex = {default=-1};
	__property ImageOverlayIndex = {default=-1};
	__property TEasyItem* Item[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property TEasyItems* Items = {read=FItems, write=FItems};
	__property TCustomEasyListview* OwnerListview = {read=GetOwnerListview};
	__property TEasyGroups* OwnerGroups = {read=GetOwnerGroups};
	__property TEasyViewGroup* View = {read=GetView};
	__property TEasyViewGroupClass ViewClass = {read=GetViewClass};
	__property Visible = {default=1};
	__property int VisibleCount = {read=GetVisibleCount, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGroupInterfaced : public TEasyGroup
{
	typedef TEasyGroup inherited;
	
protected:
	virtual System::WideString __fastcall GetCaptions(int Line);
	virtual int __fastcall GetDetailCount(void);
	virtual int __fastcall GetDetails(int Line);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageIndexes(int Column);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(int Column, TEasyImageSize IconSize);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageOverlayIndexes(int Column);
	virtual void __fastcall ImageDraw(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);
	virtual void __fastcall ImageDrawGetSize(TEasyColumn* Column, int &ImageW, int &ImageH);
	virtual void __fastcall ImageDrawIsCustom(TEasyColumn* Column, bool &IsCustom);
	virtual void __fastcall SetCaptions(int Column, System::WideString Value);
	virtual void __fastcall SetDetailCount(int Value);
	virtual void __fastcall SetDetails(int Line, int Value);
	virtual void __fastcall SetImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetImageOverlayIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall ThumbnailDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);
	
public:
	__property DataInf;
public:
	/* TEasyGroup.Create */ inline __fastcall virtual TEasyGroupInterfaced(TEasyCollection* ACollection) : TEasyGroup(ACollection) { }
	/* TEasyGroup.Destroy */ inline __fastcall virtual ~TEasyGroupInterfaced(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyBaseGroupStored : public TEasyGroup
{
	typedef TEasyGroup inherited;
	
private:
	TEasyDynamicDataHelper* FDataHelper;
	
protected:
	virtual System::WideString __fastcall GetCaptions(int Line);
	virtual int __fastcall GetDetailCount(void);
	virtual int __fastcall GetDetails(int Line);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageIndexes(int Column);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(int Column, TEasyImageSize IconSize);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageOverlayIndexes(int Column);
	virtual void __fastcall ImageDraw(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);
	virtual void __fastcall ImageDrawGetSize(TEasyColumn* Column, int &ImageW, int &ImageH);
	virtual void __fastcall ImageDrawIsCustom(TEasyColumn* Column, bool &IsCustom);
	virtual void __fastcall SetCaptions(int Column, System::WideString Value);
	virtual void __fastcall SetDetailCount(int Value);
	virtual void __fastcall SetDetails(int Line, int Value);
	virtual void __fastcall SetImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetImageOverlayIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall ThumbnailDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);
	__property TEasyDynamicDataHelper* DataHelper = {read=FDataHelper, write=FDataHelper};
	
public:
	__fastcall virtual TEasyBaseGroupStored(TEasyCollection* ACollection);
	__fastcall virtual ~TEasyBaseGroupStored(void);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int &AVersion);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int AVersion = 0x6);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGroupStored : public TEasyBaseGroupStored
{
	typedef TEasyBaseGroupStored inherited;
	
__published:
	__property Caption = {default=0};
	__property Bold = {default=0};
	__property Checked = {default=0};
	__property Cut = {default=0};
	__property Enabled = {default=1};
	__property Expanded = {default=1};
	__property ImageIndex = {default=-1};
	__property ImageOverlayIndex = {default=-1};
	__property Items;
	__property Tag = {default=0};
	__property Visible = {default=1};
public:
	/* TEasyBaseGroupStored.Create */ inline __fastcall virtual TEasyGroupStored(TEasyCollection* ACollection) : TEasyBaseGroupStored(ACollection) { }
	/* TEasyBaseGroupStored.Destroy */ inline __fastcall virtual ~TEasyGroupStored(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGroupTaskPanel : public TEasyBaseGroupStored
{
	typedef TEasyBaseGroupStored inherited;
	
private:
	int FHeight;
	Easytaskpanelform::TEasyTaskPanelForm* FTaskPanel;
	bool __fastcall GetTaskWindowCreated(void);
	virtual void __fastcall SetExpanded(bool Value);
	void __fastcall SetHeight(const int Value);
	virtual void __fastcall SetInitialized(bool Value);
	
protected:
	void __fastcall CreateTaskWindow(void);
	
public:
	__fastcall virtual TEasyGroupTaskPanel(TEasyCollection* ACollection);
	__fastcall virtual ~TEasyGroupTaskPanel(void);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int &AVersion);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int AVersion = 0x6);
	__property Easytaskpanelform::TEasyTaskPanelForm* TaskPanel = {read=FTaskPanel};
	
__published:
	__property Caption = {default=0};
	__property Bold = {default=0};
	__property Checked = {default=0};
	__property Cut = {default=0};
	__property Enabled = {default=1};
	__property Expanded = {default=1};
	__property int Height = {read=FHeight, write=SetHeight, default=100};
	__property ImageIndex = {default=-1};
	__property ImageOverlayIndex = {default=-1};
	__property Tag = {default=0};
	__property bool TaskWindowCreated = {read=GetTaskWindowCreated, nodefault};
	__property Visible = {default=1};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGroupVirtual : public TEasyGroup
{
	typedef TEasyGroup inherited;
	
protected:
	virtual System::WideString __fastcall GetCaptions(int Line);
	virtual int __fastcall GetDetailCount(void);
	virtual int __fastcall GetDetails(int Line);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageIndexes(int Column);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(int Column, TEasyImageSize IconSize);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageOverlayIndexes(int Column);
	virtual void __fastcall ImageDraw(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);
	virtual void __fastcall ImageDrawGetSize(TEasyColumn* Column, int &ImageW, int &ImageH);
	virtual void __fastcall ImageDrawIsCustom(TEasyColumn* Column, bool &IsCustom);
	virtual void __fastcall SetCaptions(int Column, System::WideString Value);
	virtual void __fastcall SetDetailCount(int Value);
	virtual void __fastcall SetDetails(int Line, int Value);
	virtual void __fastcall SetImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetImageOverlayIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall ThumbnailDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);
public:
	/* TEasyGroup.Create */ inline __fastcall virtual TEasyGroupVirtual(TEasyCollection* ACollection) : TEasyGroup(ACollection) { }
	/* TEasyGroup.Destroy */ inline __fastcall virtual ~TEasyGroupVirtual(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewGroup : public TEasyOwnedPersistentGroupItem
{
	typedef TEasyOwnedPersistentGroupItem inherited;
	
protected:
	bool __fastcall CustomExpandImages(void);
	void __fastcall GetCollapseExpandImages(Vcl::Graphics::TBitmap* &Expand, Vcl::Graphics::TBitmap* &Collapse);
	
public:
	virtual bool __fastcall EditAreaHitPt(TEasyGroup* Group, const System::Types::TPoint &ViewportPoint);
	Vcl::Imglist::TCustomImageList* __fastcall GetImageList(TEasyGroup* Group);
	virtual void __fastcall GetExpandImageSize(TEasyGroup* Group, int &ImageW, int &ImageH);
	virtual void __fastcall GetImageSize(TEasyGroup* Group, int &ImageW, int &ImageH);
	virtual void __fastcall GroupRectArray(TEasyGroup* Group, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, TEasyRectArrayObject &RectArray);
	virtual void __fastcall LoadTextFont(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall Paint(TEasyGroup* Group, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall PaintAfter(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintBackground(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintBand(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintBefore(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintCheckBox(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintExpandButton(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintFocusRect(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintImage(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintSelectionRect(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintText(TEasyGroup* Group, TEasyGroupMarginEdge MarginEdge, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	virtual bool __fastcall SelectionHit(TEasyGroup* Group, const System::Types::TRect &SelectViewportRect, TEasySelectHitType SelectType);
	virtual bool __fastcall SelectionHitPt(TEasyGroup* Group, const System::Types::TPoint &ViewportPoint, TEasySelectHitType SelectType);
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewGroup(TEasyGroup* AnOwner) : TEasyOwnedPersistentGroupItem(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewTaskBandGroup : public TEasyViewGroup
{
	typedef TEasyViewGroup inherited;
	
protected:
	virtual bool __fastcall DrawThemed(void);
	virtual void __fastcall PaintTextTopThemed(Vcl::Graphics::TCanvas* ACanvas, TEasyGroup* Group, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	
public:
	virtual void __fastcall GetExpandImageSize(TEasyGroup* Group, int &ImageW, int &ImageH);
	virtual void __fastcall GroupRectArray(TEasyGroup* Group, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, TEasyRectArrayObject &RectArray);
	virtual void __fastcall LoadTextFont(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall PaintBackground(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintBand(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintExpandButton(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintText(TEasyGroup* Group, TEasyGroupMarginEdge MarginEdge, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewTaskBandGroup(TEasyGroup* AnOwner) : TEasyViewGroup(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewTaskBandGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewTaskPanelGroup : public TEasyViewTaskBandGroup
{
	typedef TEasyViewTaskBandGroup inherited;
	
public:
	virtual void __fastcall PaintBefore(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, TEasyGroupMarginEdge MarginEdge, const System::Types::TRect &ObjRect, const TEasyRectArrayObject &RectArray);
public:
	/* TEasyOwnedPersistentGroupItem.Create */ inline __fastcall virtual TEasyViewTaskPanelGroup(TEasyGroup* AnOwner) : TEasyViewTaskBandGroup(AnOwner) { }
	
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewTaskPanelGroup(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGroups : public TEasyCollection
{
	typedef TEasyCollection inherited;
	
public:
	TEasyGroup* operator[](int Index) { return this->Groups[Index]; }
	
private:
	TEasyGroupsStates FGroupsState;
	bool FStreamGroups;
	int __fastcall GetCellHeight(void);
	int __fastcall GetCellWidth(void);
	TEasyGroup* __fastcall GetGroup(int Index);
	int __fastcall GetItemCount(void);
	System::Types::TRect __fastcall GetViewRect(void);
	TEasyGroup* __fastcall GetVisibleGroup(int Index);
	int __fastcall GetVisibleItemCount(void);
	void __fastcall SetCellHeight(int Value);
	void __fastcall SetCellWidth(int Value);
	void __fastcall SetGroup(int Index, TEasyGroup* Value);
	
protected:
	TEasyGroup* __fastcall FirstGroupInternal(bool VisibleOnly);
	TEasyItem* __fastcall FirstInGroupInternal(TEasyGroup* Group, bool VisibleOnly);
	TEasyItem* __fastcall FirstItemInternal(TEasyNextItemType NextItemType);
	TEasyGroup* __fastcall LastGroupInternal(bool VisibleOnly);
	TEasyItem* __fastcall LastInGroupInternal(TEasyGroup* Group, bool VisibleOnly);
	TEasyItem* __fastcall LastItemInternal(TEasyNextItemType NextItemType);
	TEasyGroup* __fastcall NavigateGroupInternal(TEasyGroup* Group, bool VisibleOnly, TEasySearchDirection Direction);
	TEasyItem* __fastcall NavigateInGroupInternal(TEasyGroup* Group, TEasyItem* Item, bool VisibleOnly, TEasySearchDirection Direction);
	TEasyItem* __fastcall NavigateItemInternal(TEasyItem* Item, TEasyNextItemType NextItemType, TEasySearchDirection Direction);
	virtual void __fastcall DoStructureChange(void);
	__property TEasyGroupsStates GroupsState = {read=FGroupsState, write=FGroupsState, nodefault};
	__property TEasyGroup* VisibleGroup[int Index] = {read=GetVisibleGroup};
	
public:
	__fastcall virtual TEasyGroups(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyGroups(void);
	HIDESBASE TEasyGroup* __fastcall Add(System::TObject* Data = (System::TObject*)(0x0));
	TEasyGroupInterfaced* __fastcall AddInterfaced(const System::_di_IInterface DataInf, System::TObject* Data = (System::TObject*)(0x0));
	TEasyGroupVirtual* __fastcall AddVirtual(System::TObject* Data = (System::TObject*)(0x0));
	TEasyGroup* __fastcall AddCustom(TEasyGroupClass CustomGroup, System::TObject* Data = (System::TObject*)(0x0));
	TEasyItem* __fastcall AdjacentItem(TEasyItem* Item, TEasyAdjacentCellDir Direction);
	bool __fastcall CanMoveDown(void);
	bool __fastcall CanMoveUp(void);
	virtual void __fastcall Clear(bool FreeItems = true);
	void __fastcall CollapseAll(void);
	void __fastcall DeleteGroup(TEasyGroup* Group);
	void __fastcall DeleteItem(TEasyItem* Item);
	void __fastcall DeleteItems(TEasyItemArray ItemArray)/* overload */;
	void __fastcall DeleteItems(System::Classes::TList* ItemList)/* overload */;
	void __fastcall ExpandAll(void);
	TEasyGroup* __fastcall FirstGroup(void);
	TEasyGroup* __fastcall FirstGroupInRect(const System::Types::TRect &ViewportRect);
	TEasyItem* __fastcall FirstInGroup(TEasyGroup* Group);
	TEasyItem* __fastcall FirstInitializedItem(void);
	TEasyItem* __fastcall FirstItem(void);
	TEasyItem* __fastcall FirstItemInRect(const System::Types::TRect &ViewportRect);
	TEasyGroup* __fastcall FirstVisibleGroup(void);
	TEasyItem* __fastcall FirstVisibleInGroup(TEasyGroup* Group);
	TEasyItem* __fastcall FirstVisibleItem(void);
	TEasyGroup* __fastcall GroupByPoint(const System::Types::TPoint &ViewportPoint);
	HIDESBASE TEasyGroup* __fastcall Insert(int Index, System::TObject* Data = (System::TObject*)(0x0));
	TEasyGroup* __fastcall InsertCustom(int Index, TEasyGroupClass CustomGroup, System::TObject* Data = (System::TObject*)(0x0));
	TEasyGroupInterfaced* __fastcall InsertInterfaced(int Index, const System::_di_IInterface DataInf, System::TObject* Data);
	TEasyGroupVirtual* __fastcall InsertVirtual(int Index, System::TObject* Data = (System::TObject*)(0x0));
	void __fastcall InitializeAll(void);
	void __fastcall InvalidateItem(TEasyCollectionItem* Item, bool ImmediateUpdate);
	TEasyGroup* __fastcall LastGroup(void);
	TEasyItem* __fastcall LastInGroup(TEasyGroup* Group);
	TEasyItem* __fastcall LastInitializedItem(void);
	TEasyItem* __fastcall LastItem(void);
	TEasyItem* __fastcall LastItemInRect(const System::Types::TRect &ViewportRect, bool CompleteOnly);
	TEasyGroup* __fastcall LastVisibleGroup(void);
	TEasyItem* __fastcall LastVisibleInGroup(TEasyGroup* Group);
	TEasyItem* __fastcall LastVisibleItem(void);
	TEasyItem* __fastcall ItemByPoint(const System::Types::TPoint &ViewportPoint);
	bool __fastcall MoveDown(void);
	bool __fastcall MoveUp(void);
	TEasyItem* __fastcall NextEditableItem(TEasyItem* Item);
	TEasyGroup* __fastcall NextGroup(TEasyGroup* Group);
	TEasyGroup* __fastcall NextGroupInRect(TEasyGroup* Group, const System::Types::TRect &ViewportRect);
	TEasyItem* __fastcall NextInitializedItem(TEasyItem* Item);
	TEasyItem* __fastcall NextInGroup(TEasyGroup* Group, TEasyItem* Item);
	TEasyItem* __fastcall NextItem(TEasyItem* Item);
	TEasyItem* __fastcall NextItemInRect(TEasyItem* Item, const System::Types::TRect &ViewportRect);
	TEasyGroup* __fastcall NextVisibleGroup(TEasyGroup* Group);
	TEasyGroup* __fastcall NextVisibleGroupWithVisibleItems(TEasyGroup* Group);
	TEasyItem* __fastcall NextVisibleInGroup(TEasyGroup* Group, TEasyItem* Item);
	TEasyItem* __fastcall NextVisibleItem(TEasyItem* Item);
	TEasyItem* __fastcall PrevEditableItem(TEasyItem* Item);
	TEasyGroup* __fastcall PrevGroup(TEasyGroup* Group);
	TEasyItem* __fastcall PrevInGroup(TEasyGroup* Group, TEasyItem* Item);
	TEasyItem* __fastcall PrevInitializedItem(TEasyItem* Item);
	TEasyItem* __fastcall PrevItem(TEasyItem* Item);
	TEasyGroup* __fastcall PrevVisibleGroup(TEasyGroup* Group);
	TEasyGroup* __fastcall PrevVisibleGroupWithVisibleItems(TEasyGroup* Group);
	TEasyItem* __fastcall PrevVisibleInGroup(TEasyGroup* Group, TEasyItem* Item);
	TEasyItem* __fastcall PrevVisibleItem(TEasyItem* Item);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int Version = 0x6);
	virtual void __fastcall MakeAllVisible(void);
	void __fastcall Move(TEasyItem* Item, TEasyGroup* NewGroup)/* overload */;
	void __fastcall Move(TEasyGroup* Group, int FromIndex, int ToIndex)/* overload */;
	void __fastcall Move(int FromIndex, int ToIndex)/* overload */;
	virtual void __fastcall Rebuild(bool Force = false);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int Version = 0x6);
	void __fastcall UnInitializeAll(void);
	__property int CellHeight = {read=GetCellHeight, write=SetCellHeight, nodefault};
	__property int CellWidth = {read=GetCellWidth, write=SetCellWidth, nodefault};
	__property TEasyGroup* Groups[int Index] = {read=GetGroup, write=SetGroup/*, default*/};
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property bool StreamGroups = {read=FStreamGroups, write=FStreamGroups, default=1};
	__property System::Types::TRect ViewRect = {read=GetViewRect};
	__property int VisibleItemCount = {read=GetVisibleItemCount, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGroupsTaskPanel : public TEasyGroups
{
	typedef TEasyGroups inherited;
	
public:
	TEasyGroupTaskPanel* operator[](int Index) { return this->Groups[Index]; }
	
private:
	HIDESBASE TEasyGroupTaskPanel* __fastcall GetGroup(int Index);
	HIDESBASE void __fastcall SetGroup(int Index, TEasyGroupTaskPanel* Value);
	
public:
	__fastcall virtual TEasyGroupsTaskPanel(TCustomEasyListview* AnOwner);
	__property TEasyGroupTaskPanel* Groups[int Index] = {read=GetGroup, write=SetGroup/*, default*/};
public:
	/* TEasyGroups.Destroy */ inline __fastcall virtual ~TEasyGroupsTaskPanel(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCellSize : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	bool FAutoSizeCaption;
	int FHeightAutoSizeRaw;
	int FWidthAutoSizeRaw;
	int FHeight;
	int FWidth;
	int __fastcall GetHeight(void);
	int __fastcall GetHeightRaw(void);
	int __fastcall GetWidth(void);
	int __fastcall GetWidthRaw(void);
	void __fastcall SetAutoSizeCaption(const bool Value);
	void __fastcall SetHeight(int Value);
	void __fastcall SetWidth(int Value);
	
protected:
	__property bool AutoSizeCaption = {read=FAutoSizeCaption, write=SetAutoSizeCaption, default=0};
	
public:
	__fastcall virtual TEasyCellSize(TCustomEasyListview* AnOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall RestoreDefaults(void);
	void __fastcall SetRawAutoSize(int AWidth, int AHeight);
	void __fastcall SetRawSize(int AWidth, int AHeight);
	void __fastcall SetSize(int AWidth, int AHeight);
	__property int HeightRaw = {read=GetHeightRaw, nodefault};
	__property int HeightAutoSizeRaw = {read=FHeightAutoSizeRaw, nodefault};
	__property int WidthRaw = {read=GetWidthRaw, nodefault};
	__property int WidthAutoSizeRaw = {read=FWidthAutoSizeRaw, nodefault};
	
__published:
	__property int Height = {read=GetHeight, write=SetHeight, default=75};
	__property int Width = {read=GetWidth, write=SetWidth, default=75};
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyCellSize(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCellSizeIcon : public TEasyCellSize
{
	typedef TEasyCellSize inherited;
	
public:
	/* TEasyCellSize.Create */ inline __fastcall virtual TEasyCellSizeIcon(TCustomEasyListview* AnOwner) : TEasyCellSize(AnOwner) { }
	
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyCellSizeIcon(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCellSizeSmallIcon : public TEasyCellSize
{
	typedef TEasyCellSize inherited;
	
public:
	__fastcall virtual TEasyCellSizeSmallIcon(TCustomEasyListview* AnOwner);
	virtual void __fastcall RestoreDefaults(void);
	
__published:
	__property AutoSizeCaption = {default=0};
	__property Width = {default=200};
	__property Height = {default=17};
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyCellSizeSmallIcon(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCellSizeThumbnail : public TEasyCellSize
{
	typedef TEasyCellSize inherited;
	
public:
	__fastcall virtual TEasyCellSizeThumbnail(TCustomEasyListview* AnOwner);
	virtual void __fastcall RestoreDefaults(void);
	
__published:
	__property Width = {default=125};
	__property Height = {default=143};
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyCellSizeThumbnail(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCellSizeTile : public TEasyCellSize
{
	typedef TEasyCellSize inherited;
	
public:
	__fastcall virtual TEasyCellSizeTile(TCustomEasyListview* AnOwner);
	virtual void __fastcall RestoreDefaults(void);
	
__published:
	__property Width = {default=218};
	__property Height = {default=58};
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyCellSizeTile(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCellSizeList : public TEasyCellSize
{
	typedef TEasyCellSize inherited;
	
public:
	__fastcall virtual TEasyCellSizeList(TCustomEasyListview* AnOwner);
	virtual void __fastcall RestoreDefaults(void);
	
__published:
	__property AutoSizeCaption = {default=0};
	__property Width = {default=200};
	__property Height = {default=17};
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyCellSizeList(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCellSizeReport : public TEasyCellSize
{
	typedef TEasyCellSize inherited;
	
public:
	__fastcall virtual TEasyCellSizeReport(TCustomEasyListview* AnOwner);
	virtual void __fastcall RestoreDefaults(void);
	
__published:
	__property AutoSizeCaption = {default=0};
	__property Width = {default=75};
	__property Height = {default=17};
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyCellSizeReport(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCellSizeReportThumb : public TEasyCellSize
{
	typedef TEasyCellSize inherited;
	
public:
	__fastcall virtual TEasyCellSizeReportThumb(TCustomEasyListview* AnOwner);
	virtual void __fastcall RestoreDefaults(void);
	
__published:
	__property AutoSizeCaption = {default=0};
	__property Width = {default=75};
	__property Height = {default=90};
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyCellSizeReportThumb(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCellSizeFilmStrip : public TEasyCellSizeThumbnail
{
	typedef TEasyCellSizeThumbnail inherited;
	
public:
	/* TEasyCellSizeThumbnail.Create */ inline __fastcall virtual TEasyCellSizeFilmStrip(TCustomEasyListview* AnOwner) : TEasyCellSizeThumbnail(AnOwner) { }
	
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyCellSizeFilmStrip(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCellGrid : public TEasyCellSizeReport
{
	typedef TEasyCellSizeReport inherited;
	
public:
	/* TEasyCellSizeReport.Create */ inline __fastcall virtual TEasyCellGrid(TCustomEasyListview* AnOwner) : TEasyCellSizeReport(AnOwner) { }
	
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyCellGrid(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCellSizes : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	TEasyCellSizeFilmStrip* FFilmStrip;
	TEasyCellSizeIcon* FIcon;
	TEasyCellSizeList* FList;
	TEasyCellSizeReport* FReport;
	TEasyCellSizeReportThumb* FReportThumb;
	TEasyCellSizeSmallIcon* FSmallIcon;
	TEasyCellGrid* FGrid;
	TEasyCellSizeThumbnail* FThumbnail;
	TEasyCellSizeTile* FTile;
	
public:
	__fastcall virtual TEasyCellSizes(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyCellSizes(void);
	
__published:
	__property TEasyCellSizeFilmStrip* FilmStrip = {read=FFilmStrip, write=FFilmStrip};
	__property TEasyCellSizeIcon* Icon = {read=FIcon, write=FIcon};
	__property TEasyCellSizeReportThumb* ReportThumb = {read=FReportThumb, write=FReportThumb};
	__property TEasyCellSizeSmallIcon* SmallIcon = {read=FSmallIcon, write=FSmallIcon};
	__property TEasyCellGrid* Grid = {read=FGrid, write=FGrid};
	__property TEasyCellSizeThumbnail* Thumbnail = {read=FThumbnail, write=FThumbnail};
	__property TEasyCellSizeTile* Tile = {read=FTile, write=FTile};
	__property TEasyCellSizeList* List = {read=FList, write=FList};
	__property TEasyCellSizeReport* Report = {read=FReport, write=FReport};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TEasyColumnDropDownButtonState : unsigned char { cdbsHovering, cdbsDown, cdbsClickPending };

typedef System::Set<TEasyColumnDropDownButtonState, TEasyColumnDropDownButtonState::cdbsHovering, TEasyColumnDropDownButtonState::cdbsClickPending> TEasyColumnDropDownButtonStates;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyColumnDropDownButton : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FAlwaysShow;
	bool FEnabled;
	Vcl::Menus::TPopupMenu* FMenu;
	TEasyColumn* FOwner;
	TEasyColumnDropDownButtonStates FState;
	bool FVisible;
	void __fastcall SetAlwaysShow(const bool Value);
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetVisible(const bool Value);
	
public:
	void __fastcall LoadFromStream(System::Classes::TStream* S, int &Version);
	void __fastcall SaveToStream(System::Classes::TStream* S, int Version = 0x6);
	__property TEasyColumnDropDownButtonStates State = {read=FState, write=FState, nodefault};
	__property TEasyColumn* Owner = {read=FOwner};
	
__published:
	__fastcall TEasyColumnDropDownButton(TEasyColumn* AnOwner);
	__property bool AlwaysShow = {read=FAlwaysShow, write=SetAlwaysShow, default=0};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property Vcl::Menus::TPopupMenu* Menu = {read=FMenu, write=FMenu};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEasyColumnDropDownButton(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyColumn : public TEasyCollectionItem
{
	typedef TEasyCollectionItem inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	bool FAutoSizeOnDblClk;
	bool FAutoSortOnClick;
	bool FAutoSpring;
	bool FAutoToggleSortGlyph;
	System::Uitypes::TColor FBkGndColor;
	bool FClickable;
	TEasyColumnDropDownButton* FDropDownButton;
	int FPosition;
	TEasySortDirection FSortDirection;
	float FSpringRest;
	TEasyHeaderButtonStyle FStyle;
	TEasyViewColumn* FView;
	int FWidth;
	HIDESBASE System::Classes::TAlignment __fastcall GetAlignment(void);
	System::Uitypes::TColor __fastcall GetColor(void);
	bool __fastcall GetHotTrack(void);
	TEasyHeaderImagePosition __fastcall GetImagePosition(void);
	TEasyColumns* __fastcall GetOwnerColumns(void);
	TEasyHeader* __fastcall GetOwnerHeader(void);
	HIDESBASE TEasyPaintInfoColumn* __fastcall GetPaintInfo(void);
	TEasySortGlyphAlign __fastcall GetSortGlyphAlign(void);
	int __fastcall GetSortGlyphIndent(void);
	TEasyHeaderButtonStyle __fastcall GetStyle(void);
	TEasyViewColumn* __fastcall GetView(void);
	TEasyViewColumnClass __fastcall GetViewClass(void);
	HIDESBASE void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetAutoSpring(const bool Value);
	void __fastcall SetBkGndColor(const System::Uitypes::TColor Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetHotTrack(bool Value);
	void __fastcall SetImagePosition(TEasyHeaderImagePosition Value);
	HIDESBASE void __fastcall SetPaintInfo(TEasyPaintInfoColumn* Value);
	void __fastcall SetPosition(int Value);
	void __fastcall SetSortDirection(TEasySortDirection Value);
	void __fastcall SetSortGlpyhAlign(TEasySortGlyphAlign Value);
	void __fastcall SetSortGlyphIndent(int Value);
	void __fastcall SetStyle(TEasyHeaderButtonStyle Value);
	void __fastcall SetWidth(int Value);
	
protected:
	virtual bool __fastcall CanChangeBold(bool NewValue);
	virtual bool __fastcall CanChangeCheck(bool NewValue);
	virtual bool __fastcall CanChangeEnable(bool NewValue);
	virtual bool __fastcall CanChangeFocus(bool NewValue);
	virtual bool __fastcall CanChangeHotTracking(bool NewValue);
	virtual bool __fastcall CanChangeSelection(bool NewValue);
	virtual bool __fastcall CanChangeVisibility(bool NewValue);
	virtual Vcl::Imglist::TCustomImageList* __fastcall DefaultImageList(TEasyImageSize ImageSize);
	virtual TEasyViewColumnClass __fastcall GetDefaultViewClass(void);
	virtual TEasyPaintInfoBasic* __fastcall LocalPaintInfo(void);
	virtual void __fastcall Freeing(void);
	virtual void __fastcall GainingBold(void);
	virtual void __fastcall GainingCheck(void);
	virtual void __fastcall GainingEnable(void);
	virtual void __fastcall GainingFocus(void);
	virtual void __fastcall GainingGhosted(void);
	virtual void __fastcall GainingHilight(void);
	virtual void __fastcall GainingHotTracking(const System::Types::TPoint &MousePos);
	virtual void __fastcall GainingSelection(void);
	virtual void __fastcall GainingVisibility(void);
	virtual void __fastcall Initialize(void);
	virtual void __fastcall LosingBold(void);
	virtual void __fastcall LosingCheck(void);
	virtual void __fastcall LosingEnable(void);
	virtual void __fastcall LosingFocus(void);
	virtual void __fastcall LosingGhosted(void);
	virtual void __fastcall LosingHilight(void);
	virtual void __fastcall LosingHotTracking(void);
	virtual void __fastcall LosingSelection(void);
	virtual void __fastcall LosingVisibility(void);
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, nodefault};
	__property bool HotTrack = {read=GetHotTrack, write=SetHotTrack, nodefault};
	__property TEasyHeaderImagePosition ImagePosition = {read=GetImagePosition, write=SetImagePosition, nodefault};
	__property TEasySortGlyphAlign SortGlyphAlign = {read=GetSortGlyphAlign, write=SetSortGlpyhAlign, nodefault};
	__property int SortGlyphIndent = {read=GetSortGlyphIndent, write=SetSortGlyphIndent, nodefault};
	__property float SpringRest = {read=FSpringRest, write=FSpringRest};
	__property TEasyHeaderButtonStyle Style = {read=GetStyle, write=SetStyle, nodefault};
	
public:
	__fastcall virtual TEasyColumn(TEasyCollection* ACollection);
	__fastcall virtual ~TEasyColumn(void);
	virtual void __fastcall AutoSizeToFit(void);
	virtual bool __fastcall EditAreaHitPt(const System::Types::TPoint &ViewportPoint);
	bool __fastcall HitTestAt(const System::Types::TPoint &ViewportPoint, TEasyColumnHitTestInfoSet &HitInfo);
	bool __fastcall PaintMouseHovering(void);
	virtual bool __fastcall SelectionHit(const System::Types::TRect &SelectViewportRect, TEasySelectHitType SelectType);
	virtual bool __fastcall SelectionHitPt(const System::Types::TPoint &ViewportPoint, TEasySelectHitType SelectType);
	virtual void __fastcall Invalidate(bool ImmediateUpdate);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int &AVersion);
	virtual void __fastcall MakeVisible(TEasyMakeVisiblePos Position);
	void __fastcall Paint(Vcl::Graphics::TCanvas* ACanvas, TEasyHeaderType HeaderType);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int AVersion = 0x6);
	__property System::Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, default=0};
	__property bool AutoSizeOnDblClk = {read=FAutoSizeOnDblClk, write=FAutoSizeOnDblClk, default=1};
	__property bool AutoSortOnClick = {read=FAutoSortOnClick, write=FAutoSortOnClick, default=1};
	__property bool AutoSpring = {read=FAutoSpring, write=SetAutoSpring, default=0};
	__property bool AutoToggleSortGlyph = {read=FAutoToggleSortGlyph, write=FAutoToggleSortGlyph, default=1};
	__property System::Uitypes::TColor BkGndColor = {read=FBkGndColor, write=SetBkGndColor, default=536870911};
	__property Bold = {default=0};
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property bool Clickable = {read=FClickable, write=FClickable, default=1};
	__property Clicking = {default=0};
	__property TEasyColumnDropDownButton* DropDownButton = {read=FDropDownButton, write=FDropDownButton};
	__property Enabled = {default=1};
	__property ImageIndex = {default=-1};
	__property ImageOverlayIndex = {default=-1};
	__property TEasyColumns* OwnerColumns = {read=GetOwnerColumns};
	__property TEasyHeader* OwnerHeader = {read=GetOwnerHeader};
	__property OwnsPaintInfo = {default=0};
	__property TEasyPaintInfoColumn* PaintInfo = {read=GetPaintInfo, write=SetPaintInfo};
	__property int Position = {read=FPosition, write=SetPosition, nodefault};
	__property Selected = {default=0};
	__property TEasySortDirection SortDirection = {read=FSortDirection, write=SetSortDirection, default=0};
	__property Tag = {default=0};
	__property TEasyViewColumn* View = {read=GetView};
	__property TEasyViewColumnClass ViewClass = {read=GetViewClass};
	__property Visible = {default=1};
	__property int Width = {read=FWidth, write=SetWidth, default=50};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyColumnInterfaced : public TEasyColumn
{
	typedef TEasyColumn inherited;
	
protected:
	virtual System::WideString __fastcall GetCaptions(int Line);
	virtual int __fastcall GetDetailCount(void);
	virtual int __fastcall GetDetails(int Line);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageIndexes(int Column);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(int Column, TEasyImageSize IconSize);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageOverlayIndexes(int Column);
	virtual void __fastcall ImageDraw(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);
	virtual void __fastcall ImageDrawGetSize(TEasyColumn* Column, int &ImageW, int &ImageH);
	virtual void __fastcall ImageDrawIsCustom(TEasyColumn* Column, bool &IsCustom);
	virtual void __fastcall SetCaptions(int Column, System::WideString Value);
	virtual void __fastcall SetDetailCount(int Value);
	virtual void __fastcall SetDetails(int Line, int Value);
	virtual void __fastcall SetImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetImageOverlayIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall ThumbnailDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);
	
public:
	__property DataInf;
public:
	/* TEasyColumn.Create */ inline __fastcall virtual TEasyColumnInterfaced(TEasyCollection* ACollection) : TEasyColumn(ACollection) { }
	/* TEasyColumn.Destroy */ inline __fastcall virtual ~TEasyColumnInterfaced(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyColumnStored : public TEasyColumn
{
	typedef TEasyColumn inherited;
	
private:
	TEasyDynamicDataHelper* FDataHelper;
	
protected:
	virtual System::WideString __fastcall GetCaptions(int Line);
	virtual int __fastcall GetDetailCount(void);
	virtual int __fastcall GetDetails(int Line);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageIndexes(int Column);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(int Column, TEasyImageSize IconSize);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageOverlayIndexes(int Column);
	virtual void __fastcall ImageDraw(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);
	virtual void __fastcall ImageDrawGetSize(TEasyColumn* Column, int &ImageW, int &ImageH);
	virtual void __fastcall ImageDrawIsCustom(TEasyColumn* Column, bool &IsCustom);
	virtual void __fastcall SetCaptions(int Column, System::WideString Value);
	virtual void __fastcall SetDetailCount(int Value);
	virtual void __fastcall SetDetails(int Line, int Value);
	virtual void __fastcall SetImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetImageOverlayIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall ThumbnailDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);
	__property TEasyDynamicDataHelper* DataHelper = {read=FDataHelper, write=FDataHelper};
	
public:
	__fastcall virtual TEasyColumnStored(TEasyCollection* ACollection);
	__fastcall virtual ~TEasyColumnStored(void);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int &AVersion);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int AVersion = 0x6);
	
__published:
	__property Alignment = {default=0};
	__property AutoSizeOnDblClk = {default=1};
	__property AutoSortOnClick = {default=1};
	__property AutoSpring = {default=0};
	__property AutoToggleSortGlyph = {default=1};
	__property BkGndColor = {default=536870911};
	__property Bold = {default=0};
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Clickable = {default=1};
	__property Color;
	__property DropDownButton;
	__property Enabled = {default=1};
	__property ImageIndex = {default=-1};
	__property ImageOverlayIndex = {default=-1};
	__property Position;
	__property Selected = {default=0};
	__property SortDirection = {default=0};
	__property Width = {default=50};
	__property Visible = {default=1};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyColumnVirtual : public TEasyColumn
{
	typedef TEasyColumn inherited;
	
protected:
	virtual System::WideString __fastcall GetCaptions(int Line);
	virtual int __fastcall GetDetailCount(void);
	virtual int __fastcall GetDetails(int Line);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageIndexes(int Column);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImageList(int Column, TEasyImageSize IconSize);
	virtual Mpcommonobjects::TCommonImageIndexInteger __fastcall GetImageOverlayIndexes(int Column);
	virtual void __fastcall ImageDraw(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);
	virtual void __fastcall ImageDrawGetSize(TEasyColumn* Column, int &ImageW, int &ImageH);
	virtual void __fastcall ImageDrawIsCustom(TEasyColumn* Column, bool &IsCustom);
	virtual void __fastcall SetCaptions(int Column, System::WideString Value);
	virtual void __fastcall SetDetailCount(int Value);
	virtual void __fastcall SetDetails(int Line, int Value);
	virtual void __fastcall SetImageIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall SetImageOverlayIndexes(int Column, Mpcommonobjects::TCommonImageIndexInteger Value);
	virtual void __fastcall ThumbnailDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);
public:
	/* TEasyColumn.Create */ inline __fastcall virtual TEasyColumnVirtual(TEasyCollection* ACollection) : TEasyColumn(ACollection) { }
	/* TEasyColumn.Destroy */ inline __fastcall virtual ~TEasyColumnVirtual(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyViewColumn : public TEasyOwnedPersistentView
{
	typedef TEasyOwnedPersistentView inherited;
	
public:
	virtual bool __fastcall EditAreaHitPt(TEasyColumn* Column, const System::Types::TPoint &ViewportPoint);
	Vcl::Imglist::TCustomImageList* __fastcall GetImageList(TEasyColumn* Column);
	virtual void __fastcall CalculateTextRect(TEasyColumn* Column, Vcl::Controls::TControlCanvas* Canvas, System::Types::TRect &TextR);
	void __fastcall GetImageSize(TEasyColumn* Column, int &ImageW, int &ImageH);
	virtual System::Types::TRect __fastcall ItemRect(TEasyColumn* Column, TEasyCellRectType RectType);
	virtual void __fastcall ItemRectArray(TEasyColumn* Column, TEasyRectArrayObject &RectArray);
	virtual void __fastcall LoadTextFont(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall Paint(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, TEasyHeaderType HeaderType);
	virtual void __fastcall PaintAfter(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, TEasyHeaderType HeaderType, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintBefore(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, TEasyHeaderType HeaderType, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintBkGnd(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, TEasyHeaderType HeaderType, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintCheckBox(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, TEasyHeaderType HeaderType, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintDropDownArrow(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, TEasyHeaderType HeaderType, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintDropGlyph(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, TEasyHeaderType HeaderType, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintFocusRect(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, TEasyHeaderType HeaderType, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintImage(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, TEasyHeaderType HeaderType, const TEasyRectArrayObject &RectArray, TEasyImageSize ImageSize);
	virtual TEasyImageSize __fastcall PaintImageSize(TEasyColumn* Column, TEasyHeaderType HeaderType);
	virtual void __fastcall PaintSortGlyph(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, TEasyHeaderType HeaderType, const TEasyRectArrayObject &RectArray);
	virtual void __fastcall PaintText(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, TEasyHeaderType HeaderType, const TEasyRectArrayObject &RectArray, int LinesToDraw);
	virtual void __fastcall ReSizeRectArray(TEasyRectArrayObjectArray &RectArray);
	virtual bool __fastcall SelectionHit(TEasyColumn* Column, const System::Types::TRect &SelectViewportRect, TEasySelectHitType SelectType);
	virtual bool __fastcall SelectionHitPt(TEasyColumn* Column, const System::Types::TPoint &ViewportPoint, TEasySelectHitType SelectType);
public:
	/* TEasyOwnedPersistentView.Destroy */ inline __fastcall virtual ~TEasyViewColumn(void) { }
	
public:
	/* TEasyOwnedPersistent.Create */ inline __fastcall virtual TEasyViewColumn(TCustomEasyListview* AnOwner) : TEasyOwnedPersistentView(AnOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyColumns : public TEasyCollection
{
	typedef TEasyCollection inherited;
	
public:
	TEasyColumn* operator[](int Index) { return this->Columns[Index]; }
	
private:
	TEasyColumn* __fastcall GetColumns(int Index);
	TEasyHeader* __fastcall GetOwnerHeader(void);
	void __fastcall SetColumns(int Index, TEasyColumn* Value);
	
protected:
	virtual void __fastcall DoItemAdd(TEasyCollectionItem* Item, int Index);
	virtual void __fastcall DoStructureChange(void);
	
public:
	__fastcall virtual TEasyColumns(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyColumns(void);
	HIDESBASE TEasyColumn* __fastcall Add(System::TObject* Data = (System::TObject*)(0x0));
	TEasyColumnInterfaced* __fastcall AddInterfaced(const System::_di_IInterface DataInf, System::TObject* Data);
	TEasyColumnVirtual* __fastcall AddVirtual(System::TObject* Data = (System::TObject*)(0x0));
	TEasyColumn* __fastcall AddCustom(TEasyColumnClass CustomItem, System::TObject* Data = (System::TObject*)(0x0));
	TEasyColumn* __fastcall ColumnByPoint(const System::Types::TPoint &ViewportPoint);
	HIDESBASE TEasyColumn* __fastcall Insert(int Index, System::TObject* Data = (System::TObject*)(0x0));
	TEasyColumn* __fastcall InsertCustom(int Index, TEasyColumnClass CustomColumn, System::TObject* Data = (System::TObject*)(0x0));
	TEasyColumnInterfaced* __fastcall InsertInterfaced(int Index, const System::_di_IInterface DataInf, System::TObject* Data = (System::TObject*)(0x0));
	TEasyColumnVirtual* __fastcall InsertVirtual(int Index, System::TObject* Data = (System::TObject*)(0x0));
	virtual void __fastcall Clear(bool FreeItems = true);
	__property TEasyColumn* Columns[int Index] = {read=GetColumns, write=SetColumns/*, default*/};
	__property TEasyHeader* OwnerHeader = {read=GetOwnerHeader};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TColumnPos : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	TEasyColumn* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TEasyColumn* __fastcall Get(int Index);
	HIDESBASE void __fastcall Put(int Index, TEasyColumn* Item);
	
public:
	__property TEasyColumn* Items[int Index] = {read=Get, write=Put/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TColumnPos(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TColumnPos(void) : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyHeader : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	_di_IAccessible FAccessible;
	bool FAutoSizeHeight;
	int FAutoSizeHeightMargin;
	TEasyCanvasStore* FCanvasStore;
	System::Uitypes::TColor FColor;
	TEasyColumns* FColumns;
	System::Types::TRect FDisplayRect;
	TEasyHeaderDragManager* FDragManager;
	TEasyColumn* FDropDownHoverColumn;
	bool FFixedSingleColumn;
	Vcl::Graphics::TFont* FFont;
	int FHeight;
	TEasyColumn* FHotTrackedColumn;
	Vcl::Imglist::TCustomImageList* FImages;
	int FLastWidth;
	TColumnPos* FPositions;
	TEasyColumn* FPressColumn;
	TEasyColumn* FResizeColumn;
	bool FShowInAllViews;
	bool FSizeable;
	TEasyHeaderStates FState;
	bool FStreamColumns;
	System::Types::TRect FViewRect;
	bool FVisible;
	TEasyCanvasStore* __fastcall GetCanvasStore(void);
	System::Types::TRect __fastcall GetDisplayRect(void);
	bool __fastcall GetDraggable(void);
	bool __fastcall GetFixedSingleColumn(void);
	int __fastcall GetHeight(void);
	bool __fastcall GetMouseCaptured(void);
	int __fastcall GetRuntimeHeight(void);
	bool __fastcall GetShowInAllViews(void);
	void __fastcall SetAutoSizeHeight(const bool Value);
	void __fastcall SetAutoSizeHeightMargin(const int Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetDraggable(bool Value);
	void __fastcall SetDropDownHoverColumn(TEasyColumn* const Value);
	void __fastcall SetFixedSingleColumn(const bool Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetHeight(int Value);
	void __fastcall SetHotTrackedColumn(TEasyColumn* const Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetShowInAllViews(const bool Value);
	void __fastcall SetVisible(bool Value);
	int __fastcall GetViewWidth(void);
	
protected:
	bool __fastcall InCheckZone(const System::Types::TPoint &ViewportPt, TEasyColumn* &Column);
	bool __fastcall InDropDownButtonZone(const System::Types::TPoint &ViewportPt, TEasyColumn* &Column);
	bool __fastcall InHotTrackZone(const System::Types::TPoint &ViewportPt, TEasyColumn* &Column);
	bool __fastcall InPressZone(const System::Types::TPoint &ViewportPt, TEasyColumn* &Column);
	bool __fastcall InResizeZone(const System::Types::TPoint &ViewportPt, TEasyColumn* &Column);
	bool __fastcall IsFontStored(void);
	void __fastcall CaptureMouse(void);
	void __fastcall ClearStates(void);
	void __fastcall DoMouseDown(Winapi::Messages::TWMMouse &Message, Mpcommonutilities::TCommonMouseButton Button, System::Classes::TShiftState Shift, TEasyColumn* Column);
	void __fastcall DoMouseMove(Winapi::Messages::TWMMouse &Message, System::Classes::TShiftState Shift);
	void __fastcall DoMouseUp(Winapi::Messages::TWMMouse &Message, Mpcommonutilities::TCommonMouseButton Button, System::Classes::TShiftState Shift, TEasyColumn* Column);
	void __fastcall HandleHotTrack(const Winapi::Messages::TWMMouse &Msg, bool ForceClear);
	void __fastcall ReleaseMouse(void);
	void __fastcall SizeFixedSingleColumn(int NewWidth);
	void __fastcall SpringColumns(int NewWidth);
	MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Msg);
	MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Msg);
	MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Msg);
	MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TWMMouse &Msg);
	MESSAGE void __fastcall WMRButtonUp(Winapi::Messages::TWMMouse &Msg);
	MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Msg);
	__property TEasyCanvasStore* CanvasStore = {read=GetCanvasStore, write=FCanvasStore};
	__property TEasyColumn* DropDownHoverColumn = {read=FDropDownHoverColumn, write=SetDropDownHoverColumn};
	__property TEasyColumn* HotTrackedColumn = {read=FHotTrackedColumn, write=SetHotTrackedColumn};
	__property int LastWidth = {read=FLastWidth, write=FLastWidth, nodefault};
	__property TColumnPos* Positions = {read=FPositions, write=FPositions};
	__property TEasyColumn* PressColumn = {read=FPressColumn, write=FPressColumn};
	__property TEasyColumn* ResizeColumn = {read=FResizeColumn, write=FResizeColumn};
	__property int RuntimeHeight = {read=GetRuntimeHeight, nodefault};
	__property TEasyHeaderStates State = {read=FState, write=FState, nodefault};
	
public:
	__fastcall virtual TEasyHeader(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyHeader(void);
	TEasyColumn* __fastcall FirstColumn(void);
	TEasyColumn* __fastcall FirstColumnByPosition(void);
	TEasyColumn* __fastcall FirstColumnInRect(const System::Types::TRect &ViewportRect);
	TEasyColumn* __fastcall FirstVisibleColumn(void);
	TEasyColumn* __fastcall LastColumn(void);
	TEasyColumn* __fastcall LastVisibleColumn(void);
	TEasyColumn* __fastcall NextColumn(TEasyColumn* AColumn);
	TEasyColumn* __fastcall NextColumnByPosition(TEasyColumn* AColumn);
	TEasyColumn* __fastcall NextVisibleColumn(TEasyColumn* Column);
	TEasyColumn* __fastcall PrevColumn(TEasyColumn* AColumn);
	TEasyColumn* __fastcall PrevColumnByPosition(TEasyColumn* AColumn);
	TEasyColumn* __fastcall PrevVisibleColumn(TEasyColumn* Column);
	void __fastcall ClickColumn(TEasyColumn* Column);
	virtual void __fastcall Invalidate(bool ImmediateUpdate);
	virtual void __fastcall InvalidateColumn(TEasyColumn* Item, bool ImmediateUpdate);
	TEasyColumn* __fastcall LastColumnByPosition(void);
	TEasyColumn* __fastcall NextColumnInRect(TEasyColumn* Column, const System::Types::TRect &ViewportRect);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int Version = 0x6);
	virtual void __fastcall PaintTo(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ViewRectCoords);
	virtual void __fastcall Rebuild(bool Force);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int Version = 0x6);
	__property _di_IAccessible Accessible = {read=FAccessible};
	__property System::Types::TRect DisplayRect = {read=GetDisplayRect, write=FDisplayRect};
	__property bool MouseCaptured = {read=GetMouseCaptured, nodefault};
	__property bool StreamColumns = {read=FStreamColumns, write=FStreamColumns, default=1};
	__property System::Types::TRect ViewRect = {read=FViewRect};
	__property int ViewWidth = {read=GetViewWidth, nodefault};
	
__published:
	__property bool AutoSizeHeight = {read=FAutoSizeHeight, write=SetAutoSizeHeight, default=1};
	__property int AutoSizeHeightMargin = {read=FAutoSizeHeightMargin, write=SetAutoSizeHeightMargin, default=8};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=-16777201};
	__property TEasyColumns* Columns = {read=FColumns, write=FColumns};
	__property bool Draggable = {read=GetDraggable, write=SetDraggable, default=1};
	__property TEasyHeaderDragManager* DragManager = {read=FDragManager, write=FDragManager};
	__property bool FixedSingleColumn = {read=GetFixedSingleColumn, write=SetFixedSingleColumn, default=0};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont, stored=IsFontStored};
	__property int Height = {read=GetHeight, write=SetHeight, default=21};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property bool ShowInAllViews = {read=GetShowInAllViews, write=SetShowInAllViews, default=0};
	__property bool Sizeable = {read=FSizeable, write=FSizeable, default=1};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyEditManager : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	bool FAppHooked;
	bool FArrowMoveFocus;
	int FAutoEditDelayTime;
	System::Types::TPoint FAutoEditStartClickPt;
	System::Uitypes::TColor FColor;
	TEasyColumn* FEditColumn;
	bool FEditFinished;
	bool FEditing;
	TEasyItem* FEditItem;
	_di_IEasyCellEditor FEditor;
	bool FEnabled;
	Vcl::Graphics::TFont* FFont;
	bool FTabEditColumns;
	bool FTabMoveFocus;
	TEasyColumn* FTabMoveFocusColumn;
	TEasyItem* FTabMoveFocusItem;
	Vcl::Extctrls::TTimer* FTimer;
	bool FTimerRunning;
	bool __fastcall GetEditing(void);
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	
protected:
	bool __fastcall MainWindowHook(Winapi::Messages::TMessage &Message);
	void __fastcall StartAutoEditTimer(void);
	void __fastcall StopAutoEditTimer(void);
	void __fastcall TimerEvent(System::TObject* Sender);
	__property bool AppHooked = {read=FAppHooked, write=FAppHooked, nodefault};
	__property System::Types::TPoint AutoEditStartClickPt = {read=FAutoEditStartClickPt, write=FAutoEditStartClickPt};
	__property TEasyColumn* EditColumn = {read=FEditColumn, write=FEditColumn};
	__property bool TabEditColumns = {read=FTabEditColumns, write=FTabEditColumns, default=0};
	__property TEasyColumn* TabMoveFocusColumn = {read=FTabMoveFocusColumn, write=FTabMoveFocusColumn};
	__property TEasyItem* TabMoveFocusItem = {read=FTabMoveFocusItem, write=FTabMoveFocusItem};
	__property Vcl::Extctrls::TTimer* Timer = {read=FTimer, write=FTimer};
	__property bool TimerRunning = {read=FTimerRunning, nodefault};
	
public:
	__fastcall virtual TEasyEditManager(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyEditManager(void);
	virtual void __fastcall BeginEdit(TEasyItem* Item, TEasyColumn* Column);
	void __fastcall EndEdit(void);
	__property bool Editing = {read=GetEditing, nodefault};
	__property TEasyItem* EditItem = {read=FEditItem};
	__property _di_IEasyCellEditor Editor = {read=FEditor, write=FEditor};
	
__published:
	__property bool ArrowMoveFocus = {read=FArrowMoveFocus, write=FArrowMoveFocus, default=0};
	__property int AutoEditDelayTime = {read=FAutoEditDelayTime, write=FAutoEditDelayTime, default=300};
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=-16777211};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property bool TabMoveFocus = {read=FTabMoveFocus, write=FTabMoveFocus, default=0};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyEnumFormatEtcManager : public TEasyInterfacedPersistent
{
	typedef TEasyInterfacedPersistent inherited;
	
private:
	int FInternalIndex;
	Mpdataobject::TFormatEtcArray FFormats;
	
protected:
	HRESULT __stdcall Next(int celt, /* out */ void *elt, System::PLongInt pceltFetched);
	HRESULT __stdcall Skip(int celt);
	HRESULT __stdcall Reset(void);
	HRESULT __stdcall Clone(/* out */ _di_IEnumFORMATETC &Enum);
	__property int InternalIndex = {read=FInternalIndex, write=FInternalIndex, nodefault};
	
public:
	__fastcall TEasyEnumFormatEtcManager(void);
	__fastcall virtual ~TEasyEnumFormatEtcManager(void);
	__property Mpdataobject::TFormatEtcArray Formats = {read=FFormats, write=FFormats};
private:
	void *__IEnumFORMATETC;	// IEnumFORMATETC 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000103-0000-0000-C000-000000000046}
	operator _di_IEnumFORMATETC()
	{
		_di_IEnumFORMATETC intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IEnumFORMATETC*(void) { return (IEnumFORMATETC*)&__IEnumFORMATETC; }
	#endif
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TEasyDataObjectManager : public Mpdataobject::TCommonDataObject
{
	typedef Mpdataobject::TCommonDataObject inherited;
	
private:
	TCustomEasyListview* FListview;
	
protected:
	virtual void __fastcall DoGetCustomFormats(int dwDirection, Mpdataobject::TFormatEtcArray &Formats);
	virtual void __fastcall DoOnGetData(const tagFORMATETC &FormatEtcIn, tagSTGMEDIUM &Medium, bool &Handled);
	virtual void __fastcall DoOnQueryGetData(const tagFORMATETC &FormatEtcIn, bool &FormatAvailable, bool &Handled);
	
public:
	__property TCustomEasyListview* Listview = {read=FListview, write=FListview};
public:
	/* TCommonDataObject.Create */ inline __fastcall TEasyDataObjectManager(bool IsReferenceCounted) : Mpdataobject::TCommonDataObject(IsReferenceCounted) { }
	/* TCommonDataObject.Destroy */ inline __fastcall virtual ~TEasyDataObjectManager(void) { }
	
private:
	void *__ICommonExtractObj;	// Mpcommonobjects::ICommonExtractObj 
	void *__ICommonDataObject;	// Mpdataobject::ICommonDataObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7F667930-E47B-4474-BA62-B100D7DBDA70}
	operator Mpcommonobjects::_di_ICommonExtractObj()
	{
		Mpcommonobjects::_di_ICommonExtractObj intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mpcommonobjects::ICommonExtractObj*(void) { return (Mpcommonobjects::ICommonExtractObj*)&__ICommonExtractObj; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F8B3EE47-C6C1-4FE3-9D94-757AA35DC038}
	operator Mpdataobject::_di_ICommonDataObject()
	{
		Mpdataobject::_di_ICommonDataObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mpdataobject::ICommonDataObject*(void) { return (Mpdataobject::ICommonDataObject*)&__ICommonDataObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0000010E-0000-0000-C000-000000000046}
	operator _di_IDataObject()
	{
		_di_IDataObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDataObject*(void) { return (IDataObject*)&__ICommonDataObject; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomEasyDragManagerBase : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	bool FAutoScroll;
	int FAutoScrollDelay;
	bool FAutoScrollDelayMet;
	int FAutoScrollTime;
	_di_IDataObject FDataObject;
	TCommonMouseButtons FMouseButton;
	bool FRegistered;
	Vcl::Extctrls::TTimer* FTimer;
	TEasyDragManagerStates FDragState;
	Mpcommonutilities::TCommonKeyStates FLastKeyState;
	bool FEnabled;
	System::Byte FAutoScrollAccelerator;
	int FAutoScrollMargin;
	bool __fastcall GetAutoScrolling(void);
	bool __fastcall GetDragging(void);
	Vcl::Extctrls::TTimer* __fastcall GetTimer(void);
	void __fastcall SetRegistered(bool Value);
	
protected:
	virtual void __fastcall AutoScrollWindow(void);
	virtual void __fastcall DoAfterAutoScroll(void);
	virtual void __fastcall DoBeforeAutoScroll(void);
	virtual void __fastcall DoAutoScroll(int DeltaX, int DeltaY);
	virtual void __fastcall DoDrag(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual void __fastcall DoDragBegin(const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState);
	virtual void __fastcall DoDragDrop(const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual void __fastcall DoDragEnd(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState);
	virtual void __fastcall DoDragEnter(const _di_IDataObject DataObject, Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual void __fastcall DoGetDragImage(Vcl::Graphics::TBitmap* Bitmap, const System::Types::TPoint &DragStartPt, System::Types::TPoint &HotSpot, System::Uitypes::TColor &TransparentColor, bool &Handled);
	virtual void __fastcall DoOLEDragEnd(const _di_IDataObject ADataObject, Mpcommonutilities::TCommonOLEDragResult DragResult, Mpcommonutilities::TCommonDropEffects ResultEffect, Mpcommonutilities::TCommonKeyStates KeyStates);
	virtual void __fastcall DoOLEDragStart(const _di_IDataObject ADataObject, Mpcommonutilities::TCommonDropEffects &AvailableEffects, bool &AllowDrag);
	virtual bool __fastcall DoPtInAutoScrollDownRegion(const System::Types::TPoint &WindowPoint);
	virtual bool __fastcall DoPtInAutoScrollLeftRegion(const System::Types::TPoint &WindowPoint);
	virtual bool __fastcall DoPtInAutoScrollRightRegion(const System::Types::TPoint &WindowPoint);
	virtual bool __fastcall DoPtInAutoScrollUpRegion(const System::Types::TPoint &WindowPoint);
	virtual void __fastcall DoEnable(bool Enable);
	bool __fastcall PtInAutoScrollDownRegion(const System::Types::TPoint &WindowPoint);
	bool __fastcall PtInAutoScrollLeftRegion(const System::Types::TPoint &WindowPoint);
	bool __fastcall PtInAutoScrollRegion(const System::Types::TPoint &WindowPoint);
	bool __fastcall PtInAutoScrollRightRegion(const System::Types::TPoint &WindowPoint);
	bool __fastcall PtInAutoScrollUpRegion(const System::Types::TPoint &WindowPoint);
	virtual int __fastcall ScrollDeltaDown(const System::Types::TPoint &WindowPoint);
	virtual int __fastcall ScrollDeltaLeft(const System::Types::TPoint &WindowPoint);
	virtual int __fastcall ScrollDeltaRight(const System::Types::TPoint &WindowPoint);
	virtual int __fastcall ScrollDeltaUp(const System::Types::TPoint &WindowPoint);
	void __fastcall RegisterOLEDragDrop(bool DoRegister);
	virtual void __fastcall SetEnabled(const bool Value);
	virtual void __fastcall UpdateAfterAutoScroll(void);
	virtual void __fastcall VCLDragStart(void);
	__property _di_IDataObject DataObject = {read=FDataObject, write=FDataObject};
	__property Mpcommonutilities::TCommonKeyStates LastKeyState = {read=FLastKeyState, write=FLastKeyState, nodefault};
	
public:
	__fastcall virtual TCustomEasyDragManagerBase(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TCustomEasyDragManagerBase(void);
	virtual void __fastcall BeginDrag(const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState);
	void __fastcall Drag(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual void __fastcall DragEnd(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState);
	void __fastcall DragEnter(const _di_IDataObject ADataObject, Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual void __fastcall DragDrop(const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects, bool Handled);
	virtual void __fastcall HandleTimer(System::TObject* Sender);
	virtual void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	__property bool AutoScroll = {read=FAutoScroll, write=FAutoScroll, default=1};
	__property System::Byte AutoScrollAccelerator = {read=FAutoScrollAccelerator, write=FAutoScrollAccelerator, default=2};
	__property int AutoScrollDelay = {read=FAutoScrollDelay, write=FAutoScrollDelay, default=500};
	__property bool AutoScrollDelayMet = {read=FAutoScrollDelayMet, nodefault};
	__property bool AutoScrolling = {read=GetAutoScrolling, nodefault};
	__property int AutoScrollMargin = {read=FAutoScrollMargin, write=FAutoScrollMargin, default=15};
	__property int AutoScrollTime = {read=FAutoScrollTime, write=FAutoScrollTime, default=50};
	__property bool Dragging = {read=GetDragging, nodefault};
	__property TEasyDragManagerStates DragState = {read=FDragState, write=FDragState, nodefault};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property TCommonMouseButtons MouseButton = {read=FMouseButton, write=FMouseButton, default=2};
	__property Vcl::Extctrls::TTimer* Timer = {read=GetTimer, write=FTimer};
	__property bool Registered = {read=FRegistered, write=SetRegistered, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TEasyHeaderDragManager : public TCustomEasyDragManagerBase
{
	typedef TCustomEasyDragManagerBase inherited;
	
private:
	bool FAllowDrop;
	TEasyColumn* FColumn;
	TGetDragImageEvent FDefaultImageEvent;
	int FDragImageWidth;
	int FDragImageHeight;
	System::Uitypes::TDragMode FDragMode;
	TEasyDragType FDragType;
	bool FEnableDragImage;
	TEasyHeader* FHeader;
	TEasyColumn* FTargetColumn;
	System::Uitypes::TCursor __fastcall GetDragCursor(void);
	System::Uitypes::TDragMode __fastcall GetDragMode(void);
	void __fastcall SetDragCursor(System::Uitypes::TCursor Value);
	void __fastcall SetDragMode(System::Uitypes::TDragMode Value);
	void __fastcall SetDragType(TEasyDragType Value);
	
protected:
	virtual bool __fastcall DoPtInAutoScrollDownRegion(const System::Types::TPoint &WindowPoint);
	virtual bool __fastcall DoPtInAutoScrollUpRegion(const System::Types::TPoint &WindowPoint);
	virtual void __fastcall DefaultImage(TCustomEasyListview* Sender, Vcl::Graphics::TBitmap* Image, const System::Types::TPoint &DragStartPt, System::Types::TPoint &HotSpot, System::Uitypes::TColor &TransparentColor, bool &Handled);
	virtual void __fastcall DoDrag(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual void __fastcall DoDragBegin(const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyStates);
	virtual void __fastcall DoDragDrop(const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual void __fastcall DoDragEnd(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState);
	virtual void __fastcall DoDragEnter(const _di_IDataObject DataObject, Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual void __fastcall DoOLEDragEnd(const _di_IDataObject ADataObject, Mpcommonutilities::TCommonOLEDragResult DragResult, Mpcommonutilities::TCommonDropEffects ResultEffect, Mpcommonutilities::TCommonKeyStates KeyStates);
	virtual void __fastcall DoOLEDragStart(const _di_IDataObject ADataObject, Mpcommonutilities::TCommonDropEffects &AvailableEffects, bool &AllowDrag);
	virtual bool __fastcall DoPtInAutoScrollLeftRegion(const System::Types::TPoint &WindowPoint);
	virtual bool __fastcall DoPtInAutoScrollRightRegion(const System::Types::TPoint &WindowPoint);
	virtual void __fastcall ImageSize(int &Width, int &Height);
	__property bool AllowDrop = {read=FAllowDrop, write=FAllowDrop, nodefault};
	__property TEasyColumn* Column = {read=FColumn, write=FColumn};
	__property TGetDragImageEvent DefaultImageEvent = {read=FDefaultImageEvent, write=FDefaultImageEvent};
	__property int DragImageHeight = {read=FDragImageHeight, write=FDragImageHeight, default=300};
	__property int DragImageWidth = {read=FDragImageWidth, write=FDragImageWidth, default=200};
	__property System::Uitypes::TDragMode DragMode = {read=GetDragMode, write=SetDragMode, default=0};
	__property TEasyDragType DragType = {read=FDragType, write=SetDragType, default=0};
	__property TEasyHeader* Header = {read=FHeader, write=FHeader};
	__property TEasyColumn* TargetColumn = {read=FTargetColumn, write=FTargetColumn};
	
public:
	__fastcall virtual TEasyHeaderDragManager(TCustomEasyListview* AnOwner);
	
__published:
	__property AutoScroll = {default=1};
	__property AutoScrollAccelerator = {default=2};
	__property AutoScrollDelay = {default=500};
	__property AutoScrollMargin = {default=15};
	__property AutoScrollTime = {default=50};
	__property System::Uitypes::TCursor DragCursor = {read=GetDragCursor, write=SetDragCursor, default=-12};
	__property bool EnableDragImage = {read=FEnableDragImage, write=FEnableDragImage, default=1};
	__property MouseButton = {default=2};
public:
	/* TCustomEasyDragManagerBase.Destroy */ inline __fastcall virtual ~TEasyHeaderDragManager(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyInsertMark : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FAutoMove;
	System::Uitypes::TColor FColor;
	System::Types::TRect FDisplayRect;
	TEasyInsertMarkerDir FDropMarkerDir;
	bool FEnabled;
	TEasyInsertKind FPosition;
	bool FReSelectAfterMove;
	TEasyCollectionItem* FTarget;
	bool FVisible;
	int FWidth;
	bool FCenterMark;
	
protected:
	__property System::Types::TRect DisplayRect = {read=FDisplayRect, write=FDisplayRect};
	__property TEasyInsertMarkerDir DropMarkerDir = {read=FDropMarkerDir, write=FDropMarkerDir, nodefault};
	
public:
	__fastcall TEasyInsertMark(void);
	__property TEasyInsertKind Position = {read=FPosition, nodefault};
	__property TEasyCollectionItem* Target = {read=FTarget};
	__property bool Visible = {read=FVisible, nodefault};
	
__published:
	__property bool AutoMove = {read=FAutoMove, write=FAutoMove, default=1};
	__property bool CenterMark = {read=FCenterMark, write=FCenterMark, default=1};
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=0};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=0};
	__property bool ReSelectAfterMove = {read=FReSelectAfterMove, write=FReSelectAfterMove, default=1};
	__property int Width = {read=FWidth, write=FWidth, default=2};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEasyInsertMark(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TEasyOLEDragManager : public TEasyHeaderDragManager
{
	typedef TEasyHeaderDragManager inherited;
	
private:
	System::Types::TPoint FDragAnchorPt;
	TEasyItem* FDragItem;
	bool FDragTarget;
	TEasyCollectionItem* FDropTarget;
	bool FHilightDropTarget;
	TEasyInsertMark* FInsertMark;
	
protected:
	void __fastcall ClearDragItem(void);
	void __fastcall ClearDropMark(void);
	void __fastcall ClearDropTarget(void);
	virtual void __fastcall DefaultImage(TCustomEasyListview* Sender, Vcl::Graphics::TBitmap* Image, const System::Types::TPoint &DragStartPt, System::Types::TPoint &HotSpot, System::Uitypes::TColor &TransparentColor, bool &Handled);
	virtual void __fastcall DoDrag(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual void __fastcall DoDragDrop(const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual void __fastcall DoDragEnd(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState);
	virtual void __fastcall DoDragEnter(const _di_IDataObject DataObject, Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual void __fastcall DoGetDragImage(Vcl::Graphics::TBitmap* Bitmap, const System::Types::TPoint &DragStartPt, System::Types::TPoint &HotSpot, System::Uitypes::TColor &TransparentColor, bool &Handled);
	virtual void __fastcall DoOLEDragEnd(const _di_IDataObject ADataObject, Mpcommonutilities::TCommonOLEDragResult DragResult, Mpcommonutilities::TCommonDropEffects ResultEffect, Mpcommonutilities::TCommonKeyStates KeyStates);
	virtual void __fastcall DoOLEDragStart(const _di_IDataObject ADataObject, Mpcommonutilities::TCommonDropEffects &AvailableEffects, bool &AllowDrag);
	virtual bool __fastcall DoPtInAutoScrollDownRegion(const System::Types::TPoint &WindowPoint);
	virtual bool __fastcall DoPtInAutoScrollUpRegion(const System::Types::TPoint &WindowPoint);
	virtual void __fastcall ImageSize(int &Width, int &Height);
	virtual void __fastcall SetEnabled(const bool Value);
	virtual void __fastcall VCLDragStart(void);
	
public:
	__fastcall virtual TEasyOLEDragManager(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyOLEDragManager(void);
	virtual void __fastcall DragDrop(const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects, bool Handled);
	virtual void __fastcall DragEnd(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState);
	void __fastcall FinalizeDrag(Mpcommonutilities::TCommonKeyStates KeyState);
	bool __fastcall InitializeDrag(TEasyItem* HitItem, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState);
	__property System::Types::TPoint DragAnchorPt = {read=FDragAnchorPt, write=FDragAnchorPt};
	__property TEasyItem* DragItem = {read=FDragItem};
	__property bool DragTarget = {read=FDragTarget, nodefault};
	__property TEasyCollectionItem* DropTarget = {read=FDropTarget};
	
__published:
	__property AutoScroll = {default=1};
	__property AutoScrollAccelerator = {default=2};
	__property AutoScrollDelay = {default=500};
	__property AutoScrollMargin = {default=15};
	__property AutoScrollTime = {default=50};
	__property DragImageHeight = {default=300};
	__property DragImageWidth = {default=200};
	__property DragMode = {default=0};
	__property DragType = {default=0};
	__property Enabled = {default=0};
	__property bool HilightDropTarget = {read=FHilightDropTarget, write=FHilightDropTarget, default=1};
	__property TEasyInsertMark* InsertMark = {read=FInsertMark, write=FInsertMark};
	__property MouseButton = {default=2};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasySelectionManager : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	bool FAlphaBlend;
	bool FAlphaBlendSelRect;
	System::Byte FBlendAlphaImage;
	System::Byte FBlendAlphaSelRect;
	System::Byte FBlendAlphaTextRect;
	System::Uitypes::TColor FBlendColorIcon;
	System::Uitypes::TColor FBlendColorSelRect;
	bool FBlendIcon;
	bool FBlurAlphaBkGnd;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FBorderColorSelRect;
	System::Uitypes::TColor FColor;
	int FCount;
	TEasyColumn* FFocusedColumn;
	TEasyItem* FFocusedItem;
	TEasyItem* FAnchorItem;
	TEasyGroup* FFocusedGroup;
	bool FEnabled;
	bool FForceDefaultBlend;
	bool FFullCellPaint;
	bool FFullItemPaint;
	bool FFullRowSelect;
	bool FGradient;
	System::Uitypes::TColor FGradientColorBottom;
	System::Uitypes::TColor FGradientColorTop;
	bool FGroupSelections;
	int FGroupSelectUpdateCount;
	System::Uitypes::TColor FInactiveBorderColor;
	System::Uitypes::TColor FInactiveColor;
	System::Uitypes::TColor FInactiveTextColor;
	int FItemsToggled;
	TCommonMouseButtons FMouseButton;
	int FMultiChangeCount;
	bool FMultiSelect;
	bool FPopupMode;
	bool FRectSelect;
	bool FResizeGroupOnFocus;
	bool FRoundRect;
	System::Byte FRoundRectRadius;
	System::Uitypes::TColor FTextColor;
	bool FUseFocusRect;
	bool __fastcall GetAutoScroll(void);
	System::Byte __fastcall GetAutoScrollAccelerator(void);
	int __fastcall GetAutoScrollDelay(void);
	int __fastcall GetAutoScrollMargin(void);
	int __fastcall GetAutoScrollTime(void);
	bool __fastcall GetEnableDragSelect(void);
	TCommonMouseButtons __fastcall GeTCommonMouseButton(void);
	TEasyColumn* __fastcall GetFocusedColumn(void);
	TCommonMouseButtons __fastcall GetMouseButtonSelRect(void);
	bool __fastcall GetSelecting(void);
	void __fastcall SetAutoScroll(bool Value);
	void __fastcall SetAutoScrollAccelerator(System::Byte Value);
	void __fastcall SetAutoScrollDelay(int Value);
	void __fastcall SetAutoScrollMargin(int Value);
	void __fastcall SetAutoScrollTime(int Value);
	void __fastcall SetBlendIcon(bool Value);
	void __fastcall SetBlurAlphaBkGnd(const bool Value);
	void __fastcall SetEnableDragSelect(bool Value);
	void __fastcall SetFocusedColumn(TEasyColumn* Value);
	void __fastcall SetFocusedItem(TEasyItem* Value);
	void __fastcall SetFocusedGroup(TEasyGroup* const Value);
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SeTCommonMouseButton(TCommonMouseButtons Value);
	void __fastcall SetFullCellPaint(bool Value);
	void __fastcall SetFullItemPaint(bool Value);
	void __fastcall SetGradient(const bool Value);
	void __fastcall SetGradientColorBottom(const System::Uitypes::TColor Value);
	void __fastcall SetGradientColorTop(const System::Uitypes::TColor Value);
	void __fastcall SetGroupSelections(bool Value);
	void __fastcall SetMouseButtonSelRect(TCommonMouseButtons Value);
	void __fastcall SetMultiSelect(const bool Value);
	void __fastcall SetAnchorItem(TEasyItem* Value);
	
protected:
	void __fastcall ActOnAll(TEasySelectionType SelectType, TEasyItem* ExceptItem);
	virtual void __fastcall BuildSelectionGroupings(bool Force);
	void __fastcall DragSelect(Mpcommonutilities::TCommonKeyStates KeyStates);
	void __fastcall GainingSelection(TEasyItem* Item);
	void __fastcall LosingSelection(TEasyItem* Item);
	void __fastcall NotifyOwnerListview(void);
	__property int ItemsToggled = {read=FItemsToggled, write=FItemsToggled, nodefault};
	__property int MultiChangeCount = {read=FMultiChangeCount, write=FMultiChangeCount, nodefault};
	
public:
	__fastcall virtual TEasySelectionManager(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasySelectionManager(void);
	TEasyItemArray __fastcall SelectedToArray(void);
	void __fastcall ClearAll(void);
	void __fastcall ClearAllExcept(TEasyItem* Item);
	TEasyItem* __fastcall First(void);
	TEasyItem* __fastcall FirstInGroup(TEasyGroup* Group);
	void __fastcall FocusFirst(void);
	void __fastcall DecMultiChangeCount(void);
	void __fastcall DeleteSelected(bool SelectPrevItem = false);
	void __fastcall GroupSelectBeginUpdate(void);
	void __fastcall GroupSelectEndUpdate(void);
	void __fastcall IncMultiChangeCount(void);
	void __fastcall InvalidateVisibleSelected(bool ValidateWindow);
	void __fastcall Invert(void);
	TEasyItem* __fastcall Next(TEasyItem* Item);
	TEasyItem* __fastcall NextInGroup(TEasyGroup* Group, TEasyItem* Item);
	TEasyItem* __fastcall Prev(TEasyItem* Item);
	TEasyItem* __fastcall PrevInGroup(TEasyGroup* Group, TEasyItem* Item);
	void __fastcall SelectAll(void);
	void __fastcall SelectFirst(void);
	void __fastcall SelectGroupItems(TEasyGroup* Group, bool ClearOtherItems);
	void __fastcall SelectRange(TEasyItem* FromItem, TEasyItem* ToItem, bool RectSelect, bool ClearFirst);
	void __fastcall SelectRect(const System::Types::TRect &ViewportSelRect, bool ClearFirst);
	__property TEasyItem* AnchorItem = {read=FAnchorItem, write=SetAnchorItem};
	__property int Count = {read=FCount, nodefault};
	__property TEasyColumn* FocusedColumn = {read=GetFocusedColumn, write=SetFocusedColumn};
	__property TEasyItem* FocusedItem = {read=FFocusedItem, write=SetFocusedItem};
	__property TEasyGroup* FocusedGroup = {read=FFocusedGroup, write=SetFocusedGroup};
	__property bool Selecting = {read=GetSelecting, nodefault};
	
__published:
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, default=0};
	__property bool AlphaBlendSelRect = {read=FAlphaBlendSelRect, write=FAlphaBlendSelRect, default=0};
	__property bool AutoScroll = {read=GetAutoScroll, write=SetAutoScroll, default=1};
	__property System::Byte AutoScrollAccelerator = {read=GetAutoScrollAccelerator, write=SetAutoScrollAccelerator, default=2};
	__property int AutoScrollDelay = {read=GetAutoScrollDelay, write=SetAutoScrollDelay, default=500};
	__property int AutoScrollMargin = {read=GetAutoScrollMargin, write=SetAutoScrollMargin, default=15};
	__property int AutoScrollTime = {read=GetAutoScrollTime, write=SetAutoScrollTime, default=50};
	__property System::Byte BlendAlphaImage = {read=FBlendAlphaImage, write=FBlendAlphaImage, default=128};
	__property System::Byte BlendAlphaSelRect = {read=FBlendAlphaSelRect, write=FBlendAlphaSelRect, default=70};
	__property System::Byte BlendAlphaTextRect = {read=FBlendAlphaTextRect, write=FBlendAlphaTextRect, default=128};
	__property System::Uitypes::TColor BlendColorSelRect = {read=FBlendColorSelRect, write=FBlendColorSelRect, default=-16777203};
	__property bool BlendIcon = {read=FBlendIcon, write=SetBlendIcon, default=1};
	__property bool BlurAlphaBkGnd = {read=FBlurAlphaBkGnd, write=SetBlurAlphaBkGnd, default=0};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, default=-16777203};
	__property System::Uitypes::TColor BorderColorSelRect = {read=FBorderColorSelRect, write=FBorderColorSelRect, default=-16777203};
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=-16777203};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property bool EnableDragSelect = {read=GetEnableDragSelect, write=SetEnableDragSelect, default=0};
	__property bool ForceDefaultBlend = {read=FForceDefaultBlend, write=FForceDefaultBlend, default=0};
	__property bool FullCellPaint = {read=FFullCellPaint, write=SetFullCellPaint, default=0};
	__property bool FullItemPaint = {read=FFullItemPaint, write=SetFullItemPaint, default=0};
	__property bool FullRowSelect = {read=FFullRowSelect, write=FFullRowSelect, default=0};
	__property bool Gradient = {read=FGradient, write=SetGradient, default=0};
	__property System::Uitypes::TColor GradientColorBottom = {read=FGradientColorBottom, write=SetGradientColorBottom, default=16576469};
	__property System::Uitypes::TColor GradientColorTop = {read=FGradientColorTop, write=SetGradientColorTop, default=16644337};
	__property bool GroupSelections = {read=FGroupSelections, write=SetGroupSelections, default=0};
	__property System::Uitypes::TColor InactiveBorderColor = {read=FInactiveBorderColor, write=FInactiveBorderColor, default=-16777205};
	__property System::Uitypes::TColor InactiveColor = {read=FInactiveColor, write=FInactiveColor, default=-16777205};
	__property System::Uitypes::TColor InactiveTextColor = {read=FInactiveTextColor, write=FInactiveTextColor, default=0};
	__property TCommonMouseButtons MouseButton = {read=GeTCommonMouseButton, write=SeTCommonMouseButton, default=2};
	__property TCommonMouseButtons MouseButtonSelRect = {read=GetMouseButtonSelRect, write=SetMouseButtonSelRect, default=6};
	__property bool MultiSelect = {read=FMultiSelect, write=SetMultiSelect, default=0};
	__property bool PopupMode = {read=FPopupMode, write=FPopupMode, default=0};
	__property bool RectSelect = {read=FRectSelect, write=FRectSelect, default=0};
	__property bool ResizeGroupOnFocus = {read=FResizeGroupOnFocus, write=FResizeGroupOnFocus, default=0};
	__property bool RoundRect = {read=FRoundRect, write=FRoundRect, default=0};
	__property System::Byte RoundRectRadius = {read=FRoundRectRadius, write=FRoundRectRadius, default=4};
	__property System::Uitypes::TColor TextColor = {read=FTextColor, write=FTextColor, default=-16777202};
	__property bool UseFocusRect = {read=FUseFocusRect, write=FUseFocusRect, default=1};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCheckManager : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	int FCount;
	TEasyCollectionItem* FPendingObject;
	int __fastcall GetCountInGroup(TEasyGroup* Group);
	void __fastcall SetPendingObject(TEasyCollectionItem* Value);
	
protected:
	__property TEasyCollectionItem* PendingObject = {read=FPendingObject, write=SetPendingObject};
	
public:
	TEasyItemArray __fastcall CheckedToArray(void);
	void __fastcall CheckAll(void);
	void __fastcall CheckAllInGroup(TEasyGroup* Group);
	TEasyItem* __fastcall First(void);
	TEasyItem* __fastcall FirstInGroup(TEasyGroup* Group);
	TEasyItem* __fastcall Next(TEasyItem* Item);
	TEasyItem* __fastcall NextInGroup(TEasyGroup* Group, TEasyItem* Item);
	void __fastcall DeleteChecked(void);
	void __fastcall UnCheckAll(void);
	void __fastcall UnCheckAllInGroup(TEasyGroup* Group);
	__property int Count = {read=FCount, nodefault};
	__property int CountInGroup[TEasyGroup* Group] = {read=GetCountInGroup};
public:
	/* TEasyOwnedPersistent.Create */ inline __fastcall virtual TEasyCheckManager(TCustomEasyListview* AnOwner) : TEasyOwnedPersistent(AnOwner) { }
	
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyCheckManager(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyHotTrackManager : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	System::Uitypes::TColor FColor;
	TEasyHotTrackRectColumns FColumnTrack;
	bool FEnabled;
	System::Uitypes::TCursor FCursor;
	TEasyHotTrackRectGroups FGroupTrack;
	TEasyHotTrackRectItems FItemTrack;
	bool FOnlyFocused;
	TEasyCollectionItem* FPendingObject;
	TEasyCollectionItem* FPendingObjectCheck;
	bool FUnderline;
	TEasyCollectionItem* __fastcall GetPendingObject(const System::Types::TPoint &MousePos);
	void __fastcall SetPendingObject(const System::Types::TPoint &MousePos, TEasyCollectionItem* Value);
	void __fastcall SetPendingObjectCheck(TEasyCollectionItem* const Value);
	
protected:
	__property TEasyCollectionItem* PendingObject[System::Types::TPoint MousePos] = {read=GetPendingObject, write=SetPendingObject};
	__property TEasyCollectionItem* PendingObjectCheck = {read=FPendingObjectCheck, write=SetPendingObjectCheck};
	
public:
	__fastcall virtual TEasyHotTrackManager(TCustomEasyListview* AnOwner);
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=-16777203};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=0};
	__property System::Uitypes::TCursor Cursor = {read=FCursor, write=FCursor, default=-21};
	__property TEasyHotTrackRectGroups GroupTrack = {read=FGroupTrack, write=FGroupTrack, default=3};
	__property TEasyHotTrackRectItems ItemTrack = {read=FItemTrack, write=FItemTrack, default=3};
	__property bool OnlyFocused = {read=FOnlyFocused, write=FOnlyFocused, default=0};
	__property bool Underline = {read=FUnderline, write=FUnderline, default=1};
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyHotTrackManager(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyScrollbarManager : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	bool FHorzEnabled;
	int FOffsetX;
	int FOffsetY;
	bool FRebuilding;
	bool FSnapHorzView;
	bool FVertEnabled;
	System::Types::TRect FViewRect;
	bool __fastcall GetHorzBarVisible(void);
	int __fastcall GetLine(void);
	int __fastcall GetMaxOffsetX(void);
	int __fastcall GetMaxOffsetY(void);
	bool __fastcall GetVertBarVisible(void);
	int __fastcall GetViewHeight(void);
	int __fastcall GetViewWidth(void);
	void __fastcall SetHorzEnabled(const bool Value);
	void __fastcall SetOffsetX(const int Value);
	void __fastcall SetOffsetY(const int Value);
	void __fastcall SetVertEnabled(const bool Value);
	
public:
	__fastcall virtual TEasyScrollbarManager(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyScrollbarManager(void);
	System::Types::TPoint __fastcall MapWindowToView(const System::Types::TPoint &WindowPoint, bool AccountForHeader = true)/* overload */;
	System::Types::TPoint __fastcall MapWindowToView(System::Types::TSmallPoint WindowPoint, bool AccountForHeader = true)/* overload */;
	System::Types::TRect __fastcall MapWindowRectToViewRect(const System::Types::TRect &WindowRect, bool AccountForHeader = true);
	System::Types::TPoint __fastcall MapViewToWindow(const System::Types::TPoint &ViewportPoint, bool AccountForHeader = true)/* overload */;
	System::Types::TPoint __fastcall MapViewToWindow(System::Types::TSmallPoint ViewportPoint, bool AccountForHeader = true)/* overload */;
	System::Types::TRect __fastcall MapViewRectToWindowRect(const System::Types::TRect &ViewPortRect, bool AccountForHeader = true);
	void __fastcall ReCalculateScrollbars(bool Redraw, bool Force);
	void __fastcall Scroll(int DeltaX, int DeltaY);
	void __fastcall SetViewRect(const System::Types::TRect &AViewRect, bool InvalidateWindow);
	void __fastcall ValidateOffsets(int &AnOffsetX, int &AnOffsetY);
	System::Types::TRect __fastcall ViewableViewportRect(void);
	void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Msg);
	void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Msg);
	__property bool HorzBarVisible = {read=GetHorzBarVisible, nodefault};
	__property int Line = {read=GetLine, nodefault};
	__property int MaxOffsetX = {read=GetMaxOffsetX, nodefault};
	__property int MaxOffsetY = {read=GetMaxOffsetY, nodefault};
	__property int OffsetX = {read=FOffsetX, write=SetOffsetX, nodefault};
	__property int OffsetY = {read=FOffsetY, write=SetOffsetY, nodefault};
	__property bool Rebuilding = {read=FRebuilding, nodefault};
	__property bool VertBarVisible = {read=GetVertBarVisible, nodefault};
	__property int ViewHeight = {read=GetViewHeight, nodefault};
	__property System::Types::TRect ViewRect = {read=FViewRect};
	__property int ViewWidth = {read=GetViewWidth, nodefault};
	
__published:
	__property bool HorzEnabled = {read=FHorzEnabled, write=SetHorzEnabled, default=1};
	__property bool SnapHorzView = {read=FSnapHorzView, write=FSnapHorzView, default=1};
	__property bool VertEnabled = {read=FVertEnabled, write=SetVertEnabled, default=1};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyBackgroundManager : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	bool FAlphaBlend;
	TEasyAlphaBlender* FAlphaBlender;
	int FBlendAlpha;
	Mpcommonutilities::TCommonBlendMode FBlendMode;
	System::WideString FCaption;
	System::Classes::TAlignment FCaptionAlignment;
	bool FCaptionShow;
	bool FCaptionShowOnlyWhenEmpty;
	bool FCaptionSingleLine;
	Mpcommonutilities::TCommonVAlignment FCaptionVAlignment;
	bool FEnabled;
	Vcl::Graphics::TBitmap* FImage;
	bool FOffsetTrack;
	int FOffsetX;
	int FOffsetY;
	bool FTile;
	bool FTransparent;
	Vcl::Graphics::TBitmap* FAlphaImage;
	void __fastcall SetAlphaBlend(const bool Value);
	void __fastcall SetAlphaImage(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetBlendAlpha(const int Value);
	void __fastcall SetCaption(const System::WideString Value);
	void __fastcall SetCaptionAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetCaptionShow(const bool Value);
	void __fastcall SetCaptionShowOnlyWhenEmpty(const bool Value);
	void __fastcall SetCaptionSingleLine(const bool Value);
	void __fastcall SetCaptionVAlignment(const Mpcommonutilities::TCommonVAlignment Value);
	void __fastcall SetCommonBlendMode(const Mpcommonutilities::TCommonBlendMode Value);
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetImage(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetOffsetX(const int Value);
	void __fastcall SetOffsetY(const int Value);
	void __fastcall SetTile(const bool Value);
	void __fastcall SetTransparent(const bool Value);
	
protected:
	void __fastcall ChangeBitmapBits(System::TObject* Sender);
	__property TEasyAlphaBlender* AlphaBlender = {read=FAlphaBlender, write=FAlphaBlender};
	
public:
	__fastcall virtual TEasyBackgroundManager(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyBackgroundManager(void);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Target);
	virtual void __fastcall PaintTo(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool PaintDefault);
	virtual void __fastcall WMWindowPosChanging(Winapi::Messages::TWMWindowPosMsg &Msg);
	
__published:
	__property bool AlphaBlend = {read=FAlphaBlend, write=SetAlphaBlend, default=0};
	__property Vcl::Graphics::TBitmap* AlphaImage = {read=FAlphaImage, write=SetAlphaImage};
	__property int BlendAlpha = {read=FBlendAlpha, write=SetBlendAlpha, default=128};
	__property Mpcommonutilities::TCommonBlendMode BlendMode = {read=FBlendMode, write=SetCommonBlendMode, default=3};
	__property System::WideString Caption = {read=FCaption, write=SetCaption};
	__property System::Classes::TAlignment CaptionAlignment = {read=FCaptionAlignment, write=SetCaptionAlignment, default=2};
	__property bool CaptionShow = {read=FCaptionShow, write=SetCaptionShow, default=0};
	__property bool CaptionShowOnlyWhenEmpty = {read=FCaptionShowOnlyWhenEmpty, write=SetCaptionShowOnlyWhenEmpty, default=1};
	__property bool CaptionSingleLine = {read=FCaptionSingleLine, write=SetCaptionSingleLine, default=1};
	__property Mpcommonutilities::TCommonVAlignment CaptionVAlignment = {read=FCaptionVAlignment, write=SetCaptionVAlignment, default=2};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
	__property Vcl::Graphics::TBitmap* Image = {read=FImage, write=SetImage};
	__property bool OffsetTrack = {read=FOffsetTrack, write=FOffsetTrack, default=0};
	__property int OffsetX = {read=FOffsetX, write=SetOffsetX, default=0};
	__property int OffsetY = {read=FOffsetY, write=SetOffsetY, default=0};
	__property bool Tile = {read=FTile, write=SetTile, default=1};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyTaskBandBackgroundManager : public TEasyBackgroundManager
{
	typedef TEasyBackgroundManager inherited;
	
public:
	virtual void __fastcall PaintTo(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool PaintDefault);
public:
	/* TEasyBackgroundManager.Create */ inline __fastcall virtual TEasyTaskBandBackgroundManager(TCustomEasyListview* AnOwner) : TEasyBackgroundManager(AnOwner) { }
	/* TEasyBackgroundManager.Destroy */ inline __fastcall virtual ~TEasyTaskBandBackgroundManager(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyDropTargetManager : public TEasyOwnedInterfacedPersistent
{
	typedef TEasyOwnedInterfacedPersistent inherited;
	
private:
	TCustomEasyDragManagerBase* FDragManager;
	Mpshelltypes::_di_IDropTargetHelper FDropTargetHelper;
	Mpshelltypes::_di_IDropTargetHelper __fastcall GetDropTargetHelper(void);
	
protected:
	HRESULT __stdcall DragEnter(const _di_IDataObject dataObj, int grfKeyState, const System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DragOver(int grfKeyState, const System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DragLeave(void);
	HRESULT __stdcall Drop(const _di_IDataObject dataObj, int grfKeyState, const System::Types::TPoint pt, int &dwEffect);
	__property TCustomEasyDragManagerBase* DragManager = {read=FDragManager, write=FDragManager};
	__property Mpshelltypes::_di_IDropTargetHelper DropTargetHelper = {read=GetDropTargetHelper};
public:
	/* TEasyOwnedInterfacedPersistent.Create */ inline __fastcall virtual TEasyDropTargetManager(TCustomEasyListview* AnOwner) : TEasyOwnedInterfacedPersistent(AnOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEasyDropTargetManager(void) { }
	
private:
	void *__IDropTarget;	// IDropTarget 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000122-0000-0000-C000-000000000046}
	operator _di_IDropTarget()
	{
		_di_IDropTarget intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDropTarget*(void) { return (IDropTarget*)&__IDropTarget; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyDropSourceManager : public TEasyOwnedInterfacedPersistent
{
	typedef TEasyOwnedInterfacedPersistent inherited;
	
protected:
	HRESULT __stdcall QueryContinueDrag(System::LongBool fEscapePressed, int grfKeyState);
	HRESULT __stdcall GiveFeedback(int dwEffect);
public:
	/* TEasyOwnedInterfacedPersistent.Create */ inline __fastcall virtual TEasyDropSourceManager(TCustomEasyListview* AnOwner) : TEasyOwnedInterfacedPersistent(AnOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEasyDropSourceManager(void) { }
	
private:
	void *__IDropSource;	// IDropSource 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000121-0000-0000-C000-000000000046}
	operator _di_IDropSource()
	{
		_di_IDropSource intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDropSource*(void) { return (IDropSource*)&__IDropSource; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyDragRectManager : public TCustomEasyDragManagerBase
{
	typedef TCustomEasyDragManagerBase inherited;
	
private:
	System::Types::TPoint FAnchorPoint;
	System::Types::TPoint FDragPoint;
	System::Types::TPoint FOldOffsets;
	System::Types::TRect FPrevRect;
	System::Types::TRect __fastcall GetSelectionRect(void);
	void __fastcall PaintRect(Vcl::Graphics::TCanvas* Canvas);
	void __fastcall SetAnchorPoint(const System::Types::TPoint &ViewportAnchor);
	void __fastcall SetDragPoint(const System::Types::TPoint &Value);
	
protected:
	virtual void __fastcall DoAfterAutoScroll(void);
	virtual void __fastcall DoAutoScroll(int DeltaX, int DeltaY);
	virtual void __fastcall DoBeforeAutoScroll(void);
	virtual void __fastcall DoDrag(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual void __fastcall DoDragBegin(const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState);
	virtual void __fastcall DoDragEnd(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState);
	virtual void __fastcall DoDragEnter(const _di_IDataObject DataObject, Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, Mpcommonutilities::TCommonDropEffect &Effects);
	virtual bool __fastcall DoPtInAutoScrollDownRegion(const System::Types::TPoint &WindowPoint);
	virtual bool __fastcall DoPtInAutoScrollLeftRegion(const System::Types::TPoint &WindowPoint);
	virtual bool __fastcall DoPtInAutoScrollRightRegion(const System::Types::TPoint &WindowPoint);
	virtual bool __fastcall DoPtInAutoScrollUpRegion(const System::Types::TPoint &WindowPoint);
	virtual void __fastcall UpdateAfterAutoScroll(void);
	__property System::Types::TPoint OldOffsets = {read=FOldOffsets, write=FOldOffsets};
	
public:
	__fastcall virtual TEasyDragRectManager(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyDragRectManager(void);
	void __fastcall FinalizeDrag(Mpcommonutilities::TCommonKeyStates KeyState);
	bool __fastcall InitializeDrag(const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState);
	void __fastcall PaintSelectionRect(Vcl::Graphics::TCanvas* Canvas);
	System::Types::TRect __fastcall SelRectInWindowCoords(void);
	virtual void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	__property System::Types::TPoint AnchorPoint = {read=FAnchorPoint, write=SetAnchorPoint};
	__property System::Types::TPoint DragPoint = {read=FDragPoint, write=SetDragPoint};
	__property System::Types::TRect PrevRect = {read=FPrevRect};
	__property System::Types::TRect SelectionRect = {read=GetSelectionRect};
};

#pragma pack(pop)

typedef int __fastcall (*TEasySortProc)(TEasyColumn* Column, TEasyCollectionItem* Item1, TEasyCollectionItem* Item2);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasySorter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TEasySortManager* FOwner;
	
public:
	__fastcall virtual TEasySorter(TEasySortManager* AnOwner);
	virtual void __fastcall Sort(TEasyColumn* Column, TEasyCollection* Collection, int Min, int Max, TEasyDoGroupCompare GroupCompare, TEasyDoItemCompare ItemCompare, bool UseInterfaces) = 0 ;
	__property TEasySortManager* Owner = {read=FOwner, write=FOwner};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEasySorter(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyQuickSort : public TEasySorter
{
	typedef TEasySorter inherited;
	
public:
	virtual void __fastcall Sort(TEasyColumn* Column, TEasyCollection* Collection, int Min, int Max, TEasyDoGroupCompare GroupCompare, TEasyDoItemCompare ItemCompare, bool UseInterfaces);
public:
	/* TEasySorter.Create */ inline __fastcall virtual TEasyQuickSort(TEasySortManager* AnOwner) : TEasySorter(AnOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEasyQuickSort(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyBubbleSort : public TEasySorter
{
	typedef TEasySorter inherited;
	
public:
	virtual void __fastcall Sort(TEasyColumn* Column, TEasyCollection* Collection, int Min, int Max, TEasyDoGroupCompare GroupCompare, TEasyDoItemCompare ItemCompare, bool UseInterfaces);
public:
	/* TEasySorter.Create */ inline __fastcall virtual TEasyBubbleSort(TEasySortManager* AnOwner) : TEasySorter(AnOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEasyBubbleSort(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TEasyMergeSort : public TEasySorter
{
	typedef TEasySorter inherited;
	
private:
	TEasyColumn* FColumn;
	TEasyDoGroupCompare FGroupCompareFunc;
	TEasyDoItemCompare FItemCompareFunc;
	TEasyGroup* FOwnerGroup;
	
protected:
	bool __fastcall CompareInterfaces(TEasyCollectionItem* i1, TEasyCollectionItem* i2);
	bool __fastcall CompareGroup(TEasyCollectionItem* i1, TEasyCollectionItem* i2);
	bool __fastcall CompareItem(TEasyCollectionItem* i1, TEasyCollectionItem* i2);
	bool __fastcall CompareDefault(TEasyCollectionItem* i1, TEasyCollectionItem* i2);
	__property TEasyColumn* Column = {read=FColumn, write=FColumn};
	__property TEasyDoGroupCompare GroupCompareFunc = {read=FGroupCompareFunc, write=FGroupCompareFunc};
	__property TEasyDoItemCompare ItemCompareFunc = {read=FItemCompareFunc, write=FItemCompareFunc};
	__property TEasyGroup* OwnerGroup = {read=FOwnerGroup, write=FOwnerGroup};
	
public:
	virtual void __fastcall Sort(TEasyColumn* Column, TEasyCollection* Collection, int Min, int Max, TEasyDoGroupCompare GroupCompare, TEasyDoItemCompare ItemCompare, bool UseInterfaces);
public:
	/* TEasySorter.Create */ inline __fastcall virtual TEasyMergeSort(TEasySortManager* AnOwner) : TEasySorter(AnOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEasyMergeSort(void) { }
	
};


struct DECLSPEC_DRECORD TGroupSortInfoRec
{
public:
	TEasyItem* Item;
	unsigned Key;
};


typedef System::DynamicArray<TGroupSortInfoRec> TGroupSortInfoArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasySortManager : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	TEasySortAlgorithm FAlgorithm;
	bool FAutoRegroup;
	bool FAutoSort;
	bool FLockoutSort;
	TGroupSortInfoArray FSortList;
	TEasySorter* FSorter;
	int FUpdateCount;
	void __fastcall SetAlgorithm(TEasySortAlgorithm Value);
	void __fastcall SetAutoRegroup(bool Value);
	void __fastcall SetAutoSort(bool Value);
	
protected:
	bool __fastcall CollectionSupportsInterfaceSorting(TEasyCollection* Collection);
	void __fastcall GroupItem(TEasyItem* Item, int ColumnIndex, unsigned Key);
	__property TEasySorter* Sorter = {read=FSorter, write=FSorter};
	__property TGroupSortInfoArray SortList = {read=FSortList, write=FSortList};
	__property int UpdateCount = {read=FUpdateCount, write=FUpdateCount, nodefault};
	
public:
	__fastcall virtual TEasySortManager(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasySortManager(void);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(void);
	virtual void __fastcall ReGroup(TEasyColumn* Column);
	void __fastcall SortAll(bool Force = false);
	__property bool LockoutSort = {read=FLockoutSort, write=FLockoutSort, nodefault};
	
__published:
	__property TEasySortAlgorithm Algorithm = {read=FAlgorithm, write=SetAlgorithm, default=2};
	__property bool AutoRegroup = {read=FAutoRegroup, write=SetAutoRegroup, default=0};
	__property bool AutoSort = {read=FAutoSort, write=SetAutoSort, default=0};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyHintInfo : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	System::Types::TRect FBounds;
	Vcl::Graphics::TCanvas* FCanvas;
	System::Uitypes::TColor FColor;
	System::Types::TPoint FCursorPos;
	int FHideTimeout;
	TEasyHintType FHintType;
	int FMaxWidth;
	int FReshowTimeout;
	System::WideString FText;
	System::Types::TPoint FWindowPos;
	
public:
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas, write=FCanvas};
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, nodefault};
	__property System::Types::TPoint CursorPos = {read=FCursorPos, write=FCursorPos};
	__property System::Types::TRect Bounds = {read=FBounds, write=FBounds};
	__property int HideTimeout = {read=FHideTimeout, write=FHideTimeout, nodefault};
	__property TEasyHintType HintType = {read=FHintType, write=FHintType, nodefault};
	__property int MaxWidth = {read=FMaxWidth, write=FMaxWidth, nodefault};
	__property int ReshowTimeout = {read=FReshowTimeout, write=FReshowTimeout, nodefault};
	__property System::WideString Text = {read=FText, write=FText};
	__property System::Types::TPoint WindowPos = {read=FWindowPos, write=FWindowPos};
public:
	/* TEasyOwnedPersistent.Create */ inline __fastcall virtual TEasyHintInfo(TCustomEasyListview* AnOwner) : TEasyOwnedPersistent(AnOwner) { }
	
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyHintInfo(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TEasyHintWindow : public Vcl::Controls::THintWindow
{
	typedef Vcl::Controls::THintWindow inherited;
	
protected:
	TEasyHintInfo* FEasyHintInfo;
	TEasyHintInfoRec *FHintInfo;
	virtual void __fastcall Paint(void);
	__property TEasyHintInfo* EasyHintInfo = {read=FEasyHintInfo, write=FEasyHintInfo};
	__property PEasyHintInfoRec HintInfo = {read=FHintInfo, write=FHintInfo};
	
public:
	__fastcall virtual TEasyHintWindow(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEasyHintWindow(void);
	virtual void __fastcall ActivateHint(const System::Types::TRect &ARect, const System::UnicodeString AHint);
	virtual void __fastcall ActivateHintData(const System::Types::TRect &ARect, const System::UnicodeString AHint, void * AData);
	virtual System::Types::TRect __fastcall CalcHintRect(int MaxWidth, const System::UnicodeString AHint, void * AData);
	virtual bool __fastcall IsHintMsg(tagMSG &Msg);
public:
	/* TWinControl.CreateParented */ inline __fastcall TEasyHintWindow(HWND ParentWindow) : Vcl::Controls::THintWindow(ParentWindow) { }
	
};


typedef System::TMetaClass* TEasyHintWindowClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyIncrementalSearchManager : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	TEasyIncrementalSearchDir FDirection;
	bool FEnabled;
	NativeUInt FhTimer;
	TEasyIncrementalSearchItemType FItemType;
	TEasyItem* FNextSearchItem;
	int FResetTime;
	System::WideString FSearchBuffer;
	TEasyItem* FSearchItem;
	TCoolIncrementalSearchStart FStart;
	TEasyIncrementalSearchStates FState;
	Mpcommonutilities::_di_ICallbackStub FTimerStub;
	void __fastcall SetSearchItem(TEasyItem* Value);
	
protected:
	void __fastcall EndTimer(void);
	bool __fastcall IsSearching(void);
	virtual void __fastcall HandleWMChar(Winapi::Messages::TWMKey &Msg);
	virtual void __fastcall HandleWMKeyDown(Winapi::Messages::TWMKey &Msg);
	void __fastcall LoadFutureItem(void);
	void __fastcall ResetTimer(void);
	void __fastcall SearchPreloadItem(TItemNextEnum Next, TItemNextEnum Prev, TItemEnumFirstLast First, TItemEnumFirstLast Last, TEasyItem* &SearchItem);
	void __fastcall StartSearch(void);
	void __fastcall StartTimer(void);
	void __stdcall TimerProc(HWND Window, unsigned uMsg, unsigned idEvent, unsigned dwTime);
	__property NativeUInt hTimer = {read=FhTimer, write=FhTimer, nodefault};
	__property TEasyItem* NextSearchItem = {read=FNextSearchItem, write=FNextSearchItem};
	__property System::WideString SearchBuffer = {read=FSearchBuffer, write=FSearchBuffer};
	__property TEasyItem* SearchItem = {read=FSearchItem, write=SetSearchItem};
	__property Mpcommonutilities::_di_ICallbackStub TimerStub = {read=FTimerStub, write=FTimerStub};
	
public:
	__fastcall virtual TEasyIncrementalSearchManager(TCustomEasyListview* AnOwner);
	__fastcall virtual ~TEasyIncrementalSearchManager(void);
	virtual void __fastcall ClearSearch(void);
	void __fastcall ResetSearch(void);
	__property TEasyIncrementalSearchStates State = {read=FState, write=FState, nodefault};
	
__published:
	__property TEasyIncrementalSearchDir Direction = {read=FDirection, write=FDirection, default=0};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=0};
	__property int ResetTime = {read=FResetTime, write=FResetTime, default=2000};
	__property TCoolIncrementalSearchStart StartType = {read=FStart, write=FStart, default=0};
	__property TEasyIncrementalSearchItemType ItemType = {read=FItemType, write=FItemType, default=2};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyGestureManager : public TEasyOwnedPersistent
{
	typedef TEasyOwnedPersistent inherited;
	
private:
	TCommonMouseButtons FButton;
	bool FEnabled;
	System::WideString FPath;
	int FTolerance;
	
protected:
	__property System::WideString Path = {read=FPath, write=FPath};
	
public:
	__fastcall virtual TEasyGestureManager(TCustomEasyListview* AnOwner);
	
__published:
	__property TCommonMouseButtons Button = {read=FButton, write=FButton, default=4};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=0};
	__property int Tolerance = {read=FTolerance, write=FTolerance, default=3};
public:
	/* TEasyPersistent.Destroy */ inline __fastcall virtual ~TEasyGestureManager(void) { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TEasyHintInfoRec
{
public:
	Vcl::Controls::TControl* HintControl;
	Vcl::Controls::THintWindowClass HintWindowClass;
	System::Types::TPoint HintPos;
	int HintMaxWidth;
	System::Uitypes::TColor HintColor;
	TEasyHintType HintType;
	System::Types::TRect CursorRect;
	System::Types::TPoint CursorPos;
	int ReshowTimeout;
	int HideTimeout;
	System::WideString HintStr;
	void *HintData;
	TCustomEasyListview* Listview;
	TEasyCollectionItem* TargetObj;
	System::Types::TRect ToolTipRect;
};


class PASCALIMPLEMENTATION TCustomEasyListview : public Mpcommonobjects::TCommonCanvasControl
{
	typedef Mpcommonobjects::TCommonCanvasControl inherited;
	
private:
	_di_IAccessible FAccessible;
	bool FAllowInvisibleCheckedItems;
	TEasyBackgroundManager* FBackGround;
	TEasyCellSizes* FCellSizes;
	TEasyCheckManager* FCheckManager;
	System::Byte FDisabledBlendAlpha;
	System::Uitypes::TColor FDisabledBlendColor;
	TEasyOLEDragManager* FDragManager;
	TEasyDragRectManager* FDragRect;
	_di_IDropTarget FDropTarget;
	TEasyEditManager* FEditManager;
	TEasyGestureManager* FGesture;
	TEasyGlobalImageManager* FGlobalImages;
	Vcl::Graphics::TBitmap* FGroupCollapseButton;
	Vcl::Graphics::TBitmap* FGroupExpandButton;
	Vcl::Graphics::TFont* FGroupFont;
	TGroupImageGetSizeEvent FGroupImageGetSize;
	TEasyGroups* FGroups;
	TEasyHeader* FHeader;
	System::Classes::TAlignment FHintAlignment;
	TEasyHintInfoRec FHintData;
	TEasyHintInfo* FHintInfo;
	TEasyHotTrackManager* FHotTrack;
	Vcl::Imglist::TCustomImageList* FImagesExLarge;
	Vcl::Imglist::TCustomImageList* FImagesGroup;
	Vcl::Imglist::TCustomImageList* FImagesLarge;
	Vcl::Imglist::TCustomImageList* FImagesSmall;
	Vcl::Imglist::TCustomImageList* FImagesState;
	TEasyIncrementalSearchManager* FIncrementalSearch;
	TEasyGlobalItems* FItems;
	System::Types::TSmallPoint FLastMousePos;
	System::Classes::TNotifyEvent FOldGroupFontChange;
	System::Classes::TNotifyEvent FOldHeaderFontChange;
	TAutoGroupGetKeyEvent FOnAutoGroupGetKey;
	TAutoSortGroupCreateEvent FOnAutoSortGroupCreate;
	TEasyClipboardEvent FOnClipboardCopy;
	TEasyClipboardCutEvent FOnClipboardCut;
	TEasyClipboardEvent FOnClipboardPaste;
	TColumnCheckChangeEvent FOnColumnCheckChange;
	TColumnCheckChangingEvent FOnColumnCheckChanging;
	TColumnClickEvent FOnColumnClick;
	TColumnContextMenuEvent FOnColumnContextMenu;
	TColumnDblClickEvent FOnColumnDblClick;
	TColumnDropDownButtonClickEvent FOnColumnDropDownButtonClick;
	TColumnImageDrawIsCustomEvent FOnColumnImageDrawIsCustom;
	TColumnEnableChangeEvent FOnColumnEnableChange;
	TColumnEnableChangingEvent FOnColumnEnableChanging;
	TColumnFocusChangeEvent FOnColumnFocusChanged;
	TColumnFocusChangingEvent FOnColumnFocusChanging;
	TColumnFreeingEvent FOnColumnFreeing;
	TColumnGetCaptionEvent FOnColumnGetCaption;
	TColumnGetDetailEvent FOnColumnGetDetail;
	TColumnGetDetailCountEvent FOnColumnGetDetailCount;
	TColumnGetImageIndexEvent FOnColumnGetImageIndex;
	TColumnGetImageListEvent FOnColumnGetImageList;
	TColumnImageDrawEvent FOnColumnImageDraw;
	TColumnImageGetSizeEvent FOnColumnImageGetSize;
	TColumnInitializeEvent FOnColumnInitialize;
	TEasyColumnLoadFromStreamEvent FOnColumnLoadFromStream;
	TColumnPaintTextEvent FOnColumnPaintText;
	TEasyColumnSaveToStreamEvent FOnColumnSaveToStream;
	TColumnSelectionChangeEvent FOnColumnSelectionChanged;
	TColumnSelectionChangingEvent FOnColumnSelectionChanging;
	TColumnSetCaptionEvent FOnColumnSetCaption;
	TColumnSetDetailEvent FOnColumnSetDetail;
	TColumnSetImageIndexEvent FOnColumnSetImageIndex;
	TColumnSizeChangedEvent FOnColumnSizeChanged;
	TColumnSizeChangingEvent FOnColumnSizeChanging;
	System::Classes::TNotifyEvent FOnColumnStructureChange;
	TColumnThumbnailDrawEvent FOnColumnThumbnailDraw;
	TColumnVisibilityChangeEvent FOnColumnVisibilityChanged;
	TColumnVisibilityChangingEvent FOnColumnVisibilityChanging;
	TContextMenuEvent FOnContextMenu;
	TColumnCustomViewEvent FOnColumnCustomView;
	TCustomGridEvent FOnCustomGrid;
	TDblClickEvent FOnDblClick;
	TDragInsertDropEvent FOnDragInsertDrop;
	TItemEditAcceptedEvent FOnItemEditAccepted;
	TEasyMouseActivateEvent FOnMouseActivate;
	TEasyGestureEvent FOnMouseGesture;
	TEasyGenericCallback FOnGenericCallback;
	TGetDragImageEvent FOnGetDragImage;
	TGroupClickEvent FOnGroupClick;
	TGroupCollapseEvent FOnGroupCollapse;
	TGroupCollapsingEvent FOnGroupCollapsing;
	TGroupCompareEvent FOnGroupCompare;
	TGroupContextMenuEvent FOnGroupContextMenu;
	TGroupCustomViewEvent FOnGroupCustomView;
	TGroupDblClickEvent FOnGroupDblClick;
	TGroupImageDrawIsCustomEvent FOnGroupImageDrawIsCustom;
	TGroupExpandEvent FOnGroupExpand;
	TGroupExpandingEvent FOnGroupExpanding;
	TGroupFocusChangeEvent FOnGroupFocusChanged;
	TGroupFocusChangingEvent FOnGroupFocusChanging;
	TGroupFreeingEvent FOnGroupFreeing;
	TGroupGetCaptionEvent FOnGroupGetCaption;
	TGroupGetDetailCountEvent FOnGroupGetDetailCount;
	TGroupGetDetailEvent FOnGroupGetDetailIndex;
	TGroupGetImageIndexEvent FOnGroupGetImageIndex;
	TGroupGetImageListEvent FOnGroupGetImageList;
	TGroupImageDrawEvent FOnGroupImageDrawEvent;
	TGroupInitializeEvent FOnGroupInitialize;
	TGroupHotTrackEvent FOnGroupHotTrack;
	TGroupLoadFromStreamEvent FOnGroupLoadFromStream;
	TGroupPaintTextEvent FOnGroupPaintText;
	TGroupSaveToStreamEvent FOnGroupSaveToStream;
	TGroupSelectionChangeEvent FOnGroupSelectionChanged;
	TGroupSelectionChangingEvent FOnGroupSelectionChanging;
	TGroupSetCaptionEvent FOnGroupSetCaption;
	TGroupSetImageIndexEvent FOnGroupSetImageIndex;
	TGroupSetDetailEvent FOnGroupSetDetail;
	System::Classes::TNotifyEvent FOnGroupStructureChange;
	TGroupThumbnailDrawEvent FOnGroupThumbnailDraw;
	TGroupVisibilityChangeEvent FOnGroupVisibilityChanged;
	TGroupVisibilityChangingEvent FOnGroupVisibilityChanging;
	THeaderDblClickEvent FOnHeaderDblClick;
	THeaderMouseEvent FOnHeaderMouseDown;
	Vcl::Controls::TMouseMoveEvent FOnHeaderMouseMove;
	THeaderMouseEvent FOnHeaderMouseUp;
	THintCustomDrawEvent FOnHintCustomDraw;
	THintCustomizeInfoEvent FOnHintCustomInfo;
	THintPauseTimeEvent FOnHintPauseTime;
	THintPopupEvent FOnHintPopup;
	TIncrementalSearchEvent FOnIncrementalSearch;
	TInsertMarkPositionEvent FOnInsertMarkPosition;
	TItemCheckChangeEvent FOnItemCheckChange;
	TItemCheckChangingEvent FOnItemCheckChanging;
	TItemClickEvent FOnItemClick;
	TItemCompareEvent FOnItemCompare;
	TItemContextMenuEvent FOnItemContextMenu;
	TItemCreateEditorEvent FOnItemCreateEditor;
	TItemCustomViewEvent FOnItemCustomView;
	TItemDblClickEvent FOnItemDblClick;
	TEasyItemGetCaptionEvent FOnItemGetEditCaption;
	TItemGetEditMenuEvent FOnItemGetEditMenu;
	TItemGetImageListEvent FOnItemGetStateImageList;
	TItemImageDrawIsCustomEvent FOnItemImageDrawIsCustom;
	TItemEditBegin FOnItemEditBegin;
	TItemEditedEvent FOnItemEdited;
	TItemEditEnd FOnItemEditEnd;
	TItemEnableChangeEvent FOnItemEnableChange;
	TItemEnableChangingEvent FOnItemEnableChanging;
	TItemFocusChangeEvent FOnItemFocusChanged;
	TItemFocusChangingEvent FOnItemFocusChanging;
	TItemFreeingEvent FOnItemFreeing;
	TItemGetCaptionEvent FOnItemGetCaption;
	TItemGetGroupKeyEvent FOnItemGetGroupKey;
	TItemHotTrackEvent FOnItemHotTrack;
	TItemGetTileDetailEvent FOnItemGetTileDetailIndex;
	TItemGetImageIndexEvent FOnItemGetImageIndex;
	TItemGetImageListEvent FOnItemGetImageList;
	TItemGetTileDetailCountEvent FOnItemGetTileDetailCount;
	TItemImageDrawEvent FOnItemImageDraw;
	TItemImageGetSizeEvent FOnItemImageGetSize;
	TItemInitializeEvent FOnItemInitialize;
	TItemLoadFromStreamEvent FOnItemLoadFromStream;
	TItemMouseDownEvent FOnItemMouseDown;
	TItemMouseUpEvent FOnItemMouseUp;
	TItemPaintTextEvent FOnItemPaintText;
	TItemSaveToStreamEvent FOnItemSaveToStream;
	TItemSelectionChangeEvent FOnItemSelectionChanged;
	TItemSelectionChangingEvent FOnItemSelectionChanging;
	TEasyItemSelectionsChangedEvent FOnItemSelectionsChanged;
	TItemSetCaptionEvent FOnItemSetCaption;
	TItemSetGroupKeyEvent FOnItemSetGroupKey;
	TItemSetImageIndexEvent FOnItemSetImageIndex;
	TItemSetTileDetailEvent FOnItemSetTileDetail;
	System::Classes::TNotifyEvent FOnItemStructureChange;
	TItemThumbnailDrawEvent FOnItemThumbnailDraw;
	TItemVisibilityChangeEvent FOnItemVisibilityChanged;
	TItemVisibilityChangingEvent FOnItemVisibilityChanging;
	TEasyKeyActionEvent FOnKeyAction;
	TOLEDropTargetDragDropEvent FOnOLEDragDrop;
	TOLEDropSourceDragEndEvent FOnOLEDragEnd;
	TOLEDropTargetDragEnterEvent FOnOLEDragEnter;
	TOLEDropTargetDragLeaveEvent FOnOLEDragLeave;
	TOLEDropTargetDragOverEvent FOnOLEDragOver;
	TOLEDropSourceDragStartEvent FOnOLEDragStart;
	TOLEGetCustomFormatsEvent FOnOLEGetCustomFormats;
	TOLEGetDataEvent FOnOLEGetData;
	FOLEGetDataObjectEvent FOnOLEGetDataObject;
	TOLEDropSourceGiveFeedbackEvent FOnOLEGiveFeedback;
	TOLEDropSourceQueryContineDragEvent FOnOLEQueryContineDrag;
	TOLEQueryDataEvent FOnOLEQueryData;
	TPaintBkGndEvent FOnPaintBkGnd;
	TPaintHeaderBkGndEvent FOnPaintHeaderBkGnd;
	TEasyScrollEvent FOnScroll;
	TEasyScrollEndEvent FOnScrollEnd;
	TEasyListviewEvent FOnSortBegin;
	TEasyListviewEvent FOnSortEnd;
	TThreadCallbackEvent FOnThreadCallBack;
	TViewChangedEvent FOnViewChange;
	TEasyPaintInfoBaseColumn* FPaintInfoColumn;
	TEasyPaintInfoBaseGroup* FPaintInfoGroup;
	TEasyPaintInfoBaseItem* FPaintInfoItem;
	Vcl::Menus::TPopupMenu* FPopupMenuHeader;
	Vcl::Controls::TControlCanvas* FScratchCanvas;
	TEasyScrollbarManager* FScrollbars;
	TEasySelectionManager* FSelection;
	bool FShowGroupMargins;
	bool FShowImages;
	bool FShowInactive;
	TEasySortManager* FSort;
	TEasyControlStates FStates;
	TEasyListStyle FView;
	TEasyDefaultWheelScroll FWheelMouseDefaultScroll;
	bool FWheelMouseScrollModifierEnabled;
	TAfterPaintEvent FOnAfterPaint;
	Vcl::Graphics::TBitmap* __fastcall GetGroupCollapseImage(void);
	Vcl::Graphics::TBitmap* __fastcall GetGroupExpandImage(void);
	TEasyHintType __fastcall GetHintType(void);
	virtual TEasyPaintInfoBaseColumn* __fastcall GetPaintInfoColumn(void);
	virtual TEasyPaintInfoBaseGroup* __fastcall GetPaintInfoGroup(void);
	virtual TEasyPaintInfoBaseItem* __fastcall GetPaintInfoItem(void);
	Vcl::Controls::TControlCanvas* __fastcall GetScratchCanvas(void);
	TEasyItem* __fastcall GetTopItem(void);
	void __fastcall SetBackGround(TEasyBackgroundManager* const Value);
	void __fastcall SetGroupCollapseImage(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetGroupExpandImage(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetGroupFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetHintType(TEasyHintType Value);
	void __fastcall SetImagesExLarge(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetImagesGroup(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetImagesLarge(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetImagesSmall(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetImagesState(Vcl::Imglist::TCustomImageList* const Value);
	virtual void __fastcall SetPaintInfoColumn(TEasyPaintInfoBaseColumn* const Value);
	virtual void __fastcall SetPaintInfoGroup(TEasyPaintInfoBaseGroup* const Value);
	virtual void __fastcall SetPaintInfoItem(TEasyPaintInfoBaseItem* const Value);
	void __fastcall SetSelection(TEasySelectionManager* Value);
	void __fastcall SetShowImages(const bool Value);
	void __fastcall SetShowInactive(const bool Value);
	void __fastcall SetShowGroupMargins(const bool Value);
	
protected:
	virtual TEasyPaintInfoBaseColumn* __fastcall CreateColumnPaintInfo(void);
	virtual TEasyPaintInfoBaseGroup* __fastcall CreateGroupPaintInfo(void);
	virtual TEasyGroups* __fastcall CreateGroups(void);
	virtual TEasyPaintInfoBaseItem* __fastcall CreateItemPaintInfo(void);
	virtual HRESULT __fastcall ExecuteDragDrop(Mpcommonutilities::TCommonDropEffects AvailableEffects, _di_IDataObject DataObjectInf, _di_IDropSource DropSource, int &dwEffect);
	DYNAMIC Vcl::Controls::THintWindowClass __fastcall CustomEasyHintWindowClass(void);
	virtual TEasyColumn* __fastcall GetSortColumn(void);
	virtual bool __fastcall GroupTestExpand(TEasyGroupHitTestInfoSet HitInfo);
	bool __fastcall ToolTipNeeded(TEasyCollectionItem* TargetObj, System::WideString &TipCaption);
	virtual bool __fastcall UseInternalDragImage(_di_IDataObject DataObject);
	bool __fastcall ViewSupportsHeader(void);
	virtual void __fastcall AfterPaintRect(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ClipRect);
	virtual void __fastcall CalcThemedNCSize(System::Types::TRect &ContextRect);
	void __fastcall CancelCut(void);
	virtual void __fastcall CheckFocus(void);
	void __fastcall ClearDraggingFlags(void);
	void __fastcall ClearPendingDrags(void);
	void __fastcall ClearStates(void);
	TEasyGroup* __fastcall ClickTestGroup(const System::Types::TPoint &ViewportPoint, Mpcommonutilities::TCommonKeyStates KeyStates, TEasyGroupHitTestInfoSet &HitInfo);
	TEasyItem* __fastcall ClickTestItem(const System::Types::TPoint &ViewportPoint, TEasyGroup* Group, Mpcommonutilities::TCommonKeyStates KeyStates, TEasyItemHitTestInfoSet &HitInfo);
	void __fastcall ClipHeader(Vcl::Graphics::TCanvas* ACanvas, bool ResetClipRgn);
	HIDESBASE MESSAGE void __fastcall CMDrag(Vcl::Controls::TCMDrag &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	MESSAGE void __fastcall CMHintShowPause(Vcl::Controls::TCMHintShow &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseWheel(Winapi::Messages::TWMMouseWheel &Msg);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Winapi::Messages::TMessage &Msg);
	virtual void __fastcall CopyToClipboard(int UserData = 0x0);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall CutToClipboard(int UserData = 0x0);
	void __fastcall DisconnectAccessibility(void);
	virtual void __fastcall DoAfterPaint(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ClipRect);
	virtual void __fastcall DoAutoGroupGetKey(TEasyItem* Item, int ColumnIndex, TEasyGroups* Groups, unsigned &Key);
	virtual void __fastcall DoAutoSortGroupCreate(TEasyItem* Item, int ColumnIndex, TEasyGroups* Groups, TEasyGroup* &Group, bool &DoDefaultAction);
	virtual void __fastcall DoClipboardCopy(bool &Handled);
	virtual void __fastcall DoClipboardCut(bool &MarkAsCut, bool &Handled);
	virtual void __fastcall DoClipboardPaste(bool &Handled);
	virtual void __fastcall DoColumnCheckChanged(TEasyColumn* Column);
	virtual void __fastcall DoColumnCheckChanging(TEasyColumn* Column, bool &Allow);
	virtual void __fastcall DoColumnClick(Mpcommonutilities::TCommonMouseButton Button, System::Classes::TShiftState ShiftState, TEasyColumn* const Column);
	virtual void __fastcall DoColumnContextMenu(const TEasyHitInfoColumn &HitInfo, const System::Types::TPoint &WindowPoint, Vcl::Menus::TPopupMenu* &Menu);
	virtual void __fastcall DoColumnCustomView(TEasyColumn* Column, TEasyViewColumnClass &ViewClass);
	virtual void __fastcall DoColumnDblClick(Mpcommonutilities::TCommonMouseButton Button, System::Classes::TShiftState ShiftState, const System::Types::TPoint &MousePos, TEasyColumn* Column);
	virtual void __fastcall DoColumnDropDownButtonClick(TEasyColumn* Column, Mpcommonutilities::TCommonMouseButton Button, System::Classes::TShiftState ShiftState, const System::Types::TPoint &MousePos, bool &DoDefault);
	virtual void __fastcall DoColumnEnableChanged(TEasyColumn* Column);
	virtual void __fastcall DoColumnEnableChanging(TEasyColumn* Column, bool &Allow);
	virtual void __fastcall DoColumnFocusChanged(TEasyColumn* Column);
	virtual void __fastcall DoColumnFocusChanging(TEasyColumn* Column, bool &Allow);
	virtual void __fastcall DoColumnFreeing(TEasyColumn* Column);
	virtual void __fastcall DoColumnGetCaption(TEasyColumn* Column, int Line, System::WideString &Caption);
	virtual void __fastcall DoColumnGetImageIndex(TEasyColumn* Column, TEasyImageKind ImageKind, Mpcommonobjects::TCommonImageIndexInteger &ImageIndex);
	virtual void __fastcall DoColumnGetImageList(TEasyColumn* Column, Vcl::Imglist::TCustomImageList* &ImageList);
	virtual void __fastcall DoColumnGetDetail(TEasyColumn* Column, int Line, int &Detail);
	virtual void __fastcall DoColumnGetDetailCount(TEasyColumn* Column, int &Count);
	virtual void __fastcall DoColumnImageDraw(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);
	virtual void __fastcall DoColumnImageGetSize(TEasyColumn* Column, int &ImageWidth, int &ImageHeight);
	virtual void __fastcall DoColumnImageDrawIsCustom(TEasyColumn* Column, bool &IsCustom);
	virtual void __fastcall DoColumnInitialize(TEasyColumn* Column);
	virtual void __fastcall DoColumnLoadFromStream(TEasyColumn* Column, System::Classes::TStream* S, int Version);
	virtual void __fastcall DoColumnPaintText(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall DoColumnSaveToStream(TEasyColumn* Column, System::Classes::TStream* S, int Version);
	virtual void __fastcall DoColumnSelectionChanged(TEasyColumn* Column);
	virtual void __fastcall DoColumnSelectionChanging(TEasyColumn* Column, bool &Allow);
	virtual void __fastcall DoColumnSetCaption(TEasyColumn* Column, const System::WideString Caption);
	virtual void __fastcall DoColumnSetImageIndex(TEasyColumn* Column, TEasyImageKind ImageKind, int ImageIndex);
	virtual void __fastcall DoColumnSetDetail(TEasyColumn* Column, int Line, int Detail);
	virtual void __fastcall DoColumnSetDetailCount(TEasyColumn* Column, int DetailCount);
	void __fastcall DoColumnStructureChange(void);
	virtual void __fastcall DoColumnThumbnailDraw(TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool &DoDefault);
	virtual void __fastcall DoColumnSizeChanged(TEasyColumn* Column);
	virtual void __fastcall DoColumnSizeChanging(TEasyColumn* Column, int Size, int NewSize, bool &Allow);
	virtual void __fastcall DoColumnVisibilityChanged(TEasyColumn* Column);
	virtual void __fastcall DoColumnVisibilityChanging(TEasyColumn* Column, bool &Allow);
	virtual void __fastcall DoContextMenu(const System::Types::TPoint &MousePt, bool &Handled);
	virtual void __fastcall DoCustomGrid(TEasyGroup* Group, TEasyListStyle ViewStyle, TEasyGridGroupClass &Grid);
	virtual void __fastcall DoDblClick(Mpcommonutilities::TCommonMouseButton Button, const System::Types::TPoint &MousePos, System::Classes::TShiftState ShiftState, bool &Handled);
	virtual void __fastcall DoDragInsertDrop(TEasyItem* Item, TEasyInsertKind InsertKind, Mpcommonutilities::TCommonMouseButton MouseButton, const System::Types::TPoint &InsertPt);
	virtual void __fastcall DoGetDragImage(Vcl::Graphics::TBitmap* Bitmap, const System::Types::TPoint &DragStartPt, System::Types::TPoint &HotSpot, System::Uitypes::TColor &TransparentColor, bool &Handled);
	DYNAMIC void __fastcall DoGetHintTimeOut(int &HintTimeOut);
	virtual void __fastcall DoGroupClick(TEasyGroup* Group, Mpcommonutilities::TCommonKeyStates KeyStates, TEasyGroupHitTestInfoSet HitTest);
	virtual void __fastcall DoGroupCollapse(TEasyGroup* Group);
	virtual void __fastcall DoGroupCollapsing(TEasyGroup* Group, bool &Allow);
	virtual int __fastcall DoGroupCompare(TEasyColumn* Column, TEasyGroup* Group1, TEasyGroup* Group2);
	virtual void __fastcall DoGroupContextMenu(const TEasyHitInfoGroup &HitInfo, const System::Types::TPoint &WindowPoint, Vcl::Menus::TPopupMenu* &Menu, bool &Handled);
	virtual void __fastcall DoGroupCustomView(TEasyGroup* Group, TEasyListStyle ViewStyle, TEasyViewGroupClass &View);
	virtual void __fastcall DoGroupDblClick(Mpcommonutilities::TCommonMouseButton Button, const System::Types::TPoint &MousePos, const TEasyHitInfoGroup &HitInfo);
	virtual void __fastcall DoGroupExpand(TEasyGroup* Group);
	virtual void __fastcall DoGroupExpanding(TEasyGroup* Group, bool &Allow);
	virtual void __fastcall DoGroupFreeing(TEasyGroup* Group);
	virtual void __fastcall DoGroupGetCaption(TEasyGroup* Group, System::WideString &Caption);
	virtual void __fastcall DoGroupGetImageIndex(TEasyGroup* Group, TEasyImageKind ImageKind, Mpcommonobjects::TCommonImageIndexInteger &ImageIndex);
	virtual void __fastcall DoGroupGetImageList(TEasyGroup* Group, Vcl::Imglist::TCustomImageList* &ImageList);
	virtual void __fastcall DoGroupGetDetail(TEasyGroup* Group, int Line, int &Detail);
	virtual void __fastcall DoGroupGetDetailCount(TEasyGroup* Group, int &Count);
	virtual void __fastcall DoGroupImageDraw(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);
	virtual void __fastcall DoGroupImageGetSize(TEasyGroup* Group, int &ImageWidth, int &ImageHeight);
	virtual void __fastcall DoGroupImageDrawIsCustom(TEasyGroup* Group, bool &IsCustom);
	virtual void __fastcall DoGroupInitialize(TEasyGroup* Group);
	virtual void __fastcall DoGroupHotTrack(TEasyGroup* Group, TEasyHotTrackState State, const System::Types::TPoint &MousePos);
	virtual void __fastcall DoGroupLoadFromStream(TEasyGroup* Group, System::Classes::TStream* S, int Version);
	virtual void __fastcall DoGroupPaintText(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall DoGroupSaveToStream(TEasyGroup* Group, System::Classes::TStream* S, int Version);
	virtual void __fastcall DoGroupSelectionChanged(TEasyGroup* Group);
	virtual void __fastcall DoGroupSelectionChanging(TEasyGroup* Group, bool &Allow);
	virtual void __fastcall DoGroupSetCaption(TEasyGroup* Group, const System::WideString Caption);
	virtual void __fastcall DoGroupSetImageIndex(TEasyGroup* Group, TEasyImageKind ImageKind, int ImageIndex);
	virtual void __fastcall DoGroupSetDetail(TEasyGroup* Group, int Line, int Detail);
	virtual void __fastcall DoGroupSetDetailCount(TEasyGroup* Group, int DetailCount);
	virtual void __fastcall DoGroupStructureChange(void);
	virtual void __fastcall DoGroupThumbnailDraw(TEasyGroup* Group, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);
	virtual void __fastcall DoGroupVisibilityChanged(TEasyGroup* Group);
	virtual void __fastcall DoGroupVisibilityChanging(TEasyGroup* Group, bool &Allow);
	virtual void __fastcall DoHeaderDblClick(Mpcommonutilities::TCommonMouseButton Button, const System::Types::TPoint &MousePos, System::Classes::TShiftState ShiftState);
	virtual void __fastcall DoHintCustomInfo(TEasyCollectionItem* TargetObj, TEasyHintInfo* const Info);
	virtual void __fastcall DoHintCustomDraw(TEasyCollectionItem* TargetObj, TEasyHintInfo* const Info);
	virtual void __fastcall DoHintPopup(TEasyCollectionItem* TargetObj, TEasyHintType HintType, const System::Types::TPoint &MousePos, System::WideString &AText, int &HideTimeout, int &ReshowTimeout, bool &Allow);
	void __fastcall DoHintShowPause(bool HintShowingNow, int &PauseTime);
	virtual void __fastcall DoIncrementalSearch(TEasyItem* Item, const System::WideString SearchBuffer, int &CompareResult);
	virtual void __fastcall DoInsertMarkPosition(TEasyInsertMarkerDir &InsertMark, System::Byte &InsertMarkDropRange);
	virtual void __fastcall DoItemCheckChanged(TEasyItem* Item);
	virtual void __fastcall DoItemCheckChanging(TEasyItem* Item, bool &Allow);
	virtual void __fastcall DoItemClick(TEasyItem* Item, Mpcommonutilities::TCommonKeyStates KeyStates, TEasyItemHitTestInfoSet HitInfo);
	virtual int __fastcall DoItemCompare(TEasyColumn* Column, TEasyGroup* Group, TEasyItem* Item1, TEasyItem* Item2);
	virtual void __fastcall DoItemContextMenu(const TEasyHitInfoItem &HitInfo, const System::Types::TPoint &WindowPoint, Vcl::Menus::TPopupMenu* &Menu, bool &Handled);
	virtual void __fastcall DoItemCreateEditor(TEasyItem* Item, _di_IEasyCellEditor &Editor);
	virtual void __fastcall DoItemCustomView(TEasyItem* Item, TEasyListStyle ViewStyle, TEasyViewItemClass &View);
	virtual void __fastcall DoItemDblClick(Mpcommonutilities::TCommonMouseButton Button, const System::Types::TPoint &MousePos, const TEasyHitInfoItem &HitInfo);
	virtual void __fastcall DoItemEditAccepted(TEasyItem* Item);
	virtual void __fastcall DoItemEditBegin(TEasyItem* Item, int &Column, bool &Allow);
	virtual void __fastcall DoItemEdited(TEasyItem* Item, System::Variant &NewValue, bool &Accept);
	virtual void __fastcall DoItemEditEnd(TEasyItem* Item);
	virtual void __fastcall DoItemGetEditMenu(TEasyBaseEditor* Editor, Vcl::Menus::TPopupMenu* &Menu);
	virtual void __fastcall DoItemEnableChanged(TEasyItem* Item);
	virtual void __fastcall DoItemEnableChanging(TEasyItem* Item, bool &Allow);
	virtual void __fastcall DoItemFreeing(TEasyItem* Item);
	virtual void __fastcall DoItemFocusChanged(TEasyItem* Item);
	virtual void __fastcall DoItemFocusChanging(TEasyItem* Item, bool &Allow);
	virtual void __fastcall DoItemGetCaption(TEasyItem* Item, int Column, System::WideString &ACaption);
	virtual void __fastcall DoItemGetEditCaption(TEasyItem* Item, TEasyColumn* Column, System::WideString &Caption);
	virtual void __fastcall DoItemGetGroupKey(TEasyItem* Item, int FocusedColumn, unsigned &Key);
	virtual void __fastcall DoItemGetImageIndex(TEasyItem* Item, int Column, TEasyImageKind ImageKind, Mpcommonobjects::TCommonImageIndexInteger &ImageIndex);
	virtual void __fastcall DoItemGetImageList(TEasyItem* Item, int Column, Vcl::Imglist::TCustomImageList* &ImageList);
	virtual void __fastcall DoItemGetStateImageList(TEasyItem* Item, int Column, Vcl::Imglist::TCustomImageList* &ImageList);
	virtual void __fastcall DoItemGetTileDetail(TEasyItem* Item, int Line, int &Detail);
	virtual void __fastcall DoItemGetTileDetailCount(TEasyItem* Item, int &Count);
	virtual void __fastcall DoItemHotTrack(TEasyItem* Item, TEasyHotTrackState State, const System::Types::TPoint &MousePos);
	virtual void __fastcall DoItemImageDraw(TEasyItem* Item, TEasyColumn* Column, Vcl::Graphics::TCanvas* ACanvas, const TEasyRectArrayObject &RectArray, TEasyAlphaBlender* AlphaBlender);
	virtual void __fastcall DoItemImageGetSize(TEasyItem* Item, TEasyColumn* Column, int &ImageWidth, int &ImageHeight);
	virtual void __fastcall DoItemImageDrawIsCustom(TEasyColumn* Column, TEasyItem* Item, bool &IsCustom);
	virtual void __fastcall DoItemInitialize(TEasyItem* Item);
	virtual void __fastcall DoItemLoadFromStream(TEasyItem* Item, System::Classes::TStream* S, int Version);
	virtual void __fastcall DoItemMouseDown(TEasyItem* Item, Mpcommonutilities::TCommonMouseButton Button, bool &DoDefault);
	virtual void __fastcall DoItemMouseUp(TEasyItem* Item, Mpcommonutilities::TCommonMouseButton Button, bool &DoDefault);
	virtual void __fastcall DoItemPaintText(TEasyItem* Item, int Position, Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall DoItemSaveToStream(TEasyItem* Item, System::Classes::TStream* S, int Version);
	virtual void __fastcall DoItemSelectionChanged(TEasyItem* Item);
	virtual void __fastcall DoItemSelectionChanging(TEasyItem* Item, bool &Allow);
	virtual void __fastcall DoItemSelectionsChanged(void);
	virtual void __fastcall DoItemSetCaption(TEasyItem* Item, int Column, const System::WideString Caption);
	virtual void __fastcall DoItemSetGroupKey(TEasyItem* Item, int FocusedColumn, unsigned Key);
	virtual void __fastcall DoItemSetImageIndex(TEasyItem* Item, int Column, TEasyImageKind ImageKind, int ImageIndex);
	virtual void __fastcall DoItemSetTileDetail(TEasyItem* Item, int Line, int Detail);
	virtual void __fastcall DoItemSetTileDetailCount(TEasyItem* Item, int Detail);
	virtual void __fastcall DoItemStructureChange(void);
	virtual void __fastcall DoItemThumbnailDraw(TEasyItem* Item, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);
	virtual void __fastcall DoItemVisibilityChanged(TEasyItem* Item);
	virtual void __fastcall DoItemVisibilityChanging(TEasyItem* Item, bool &Allow);
	virtual void __fastcall DoMouseGesture(System::WideString Gesture, Mpcommonutilities::TCommonMouseButton Button, Mpcommonutilities::TCommonKeyStates KeyState, bool &Handled);
	DYNAMIC bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	virtual void __fastcall DoKeyAction(System::Word &CharCode, System::Classes::TShiftState &Shift, bool &DoDefault);
	HIDESBASE virtual void __fastcall DoMouseActivate(HWND TopLevelWindow, TEasyNonClientHitTest HitTest, System::Word MouseMsg, TEasyMouseActivate &Activate, bool &DoDefault);
	virtual void __fastcall DoMouseExit(void);
	virtual void __fastcall DoOLEDragEnd(_di_IDataObject ADataObject, Mpcommonutilities::TCommonOLEDragResult DragResult, Mpcommonutilities::TCommonDropEffects ResultEffect, Mpcommonutilities::TCommonKeyStates KeyStates);
	virtual void __fastcall DoOLEDragStart(_di_IDataObject ADataObject, Mpcommonutilities::TCommonDropEffects &AvailableEffects, bool &AllowDrag);
	virtual void __fastcall DoOLEDropSourceQueryContineDrag(bool EscapeKeyPressed, Mpcommonutilities::TCommonKeyStates KeyStates, TEasyQueryDragResult &QueryResult);
	virtual void __fastcall DoOLEDropSourceGiveFeedback(Mpcommonutilities::TCommonDropEffects Effect, bool &UseDefaultCursors);
	virtual void __fastcall DoOLEDropTargetDragEnter(_di_IDataObject DataObject, Mpcommonutilities::TCommonKeyStates KeyState, const System::Types::TPoint &WindowPt, Mpcommonutilities::TCommonDropEffects AvailableEffects, Mpcommonutilities::TCommonDropEffect &DesiredEffect);
	virtual void __fastcall DoOLEDropTargetDragOver(Mpcommonutilities::TCommonKeyStates KeyState, const System::Types::TPoint &WindowPt, Mpcommonutilities::TCommonDropEffects AvailableEffects, Mpcommonutilities::TCommonDropEffect &DesiredEffect);
	virtual void __fastcall DoOLEDropTargetDragLeave(void);
	virtual void __fastcall DoOLEDropTargetDragDrop(_di_IDataObject DataObject, Mpcommonutilities::TCommonKeyStates KeyState, const System::Types::TPoint &WindowPt, Mpcommonutilities::TCommonDropEffects AvailableEffects, Mpcommonutilities::TCommonDropEffect &DesiredEffect, bool &Handled);
	virtual void __fastcall DoOLEGetCustomFormats(int dwDirection, Mpdataobject::TFormatEtcArray &Formats);
	virtual void __fastcall DoOLEGetData(const tagFORMATETC &FormatEtcIn, tagSTGMEDIUM &Medium, bool &Handled);
	virtual void __fastcall DoOLEGetDataObject(_di_IDataObject &DataObject);
	virtual void __fastcall DoPaintBkGnd(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &AWindowRect, TEasyAlphaBlender* AlphaBlender, bool &DoDefault);
	virtual void __fastcall DoPaintHeaderBkGnd(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool &Handled);
	virtual void __fastcall DoPaintRect(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ClipRect, bool SelectedOnly, bool ClipRectInViewPortCoords = false);
	virtual void __fastcall DoQueryOLEData(const tagFORMATETC &FormatEtcIn, bool &FormatAvailable, bool &Handled);
	virtual void __fastcall DoResize(int DeltaX, int DeltaY);
	virtual void __fastcall DoScroll(int DeltaX, int DeltaY);
	virtual void __fastcall DoScrollEnd(TEasyScrollbarDir ScrollBar);
	virtual void __fastcall DoSortBegin(void);
	virtual void __fastcall DoSortEnd(void);
	DYNAMIC void __fastcall DoStartDrag(Vcl::Controls::TDragObject* &DragObject);
	virtual void __fastcall DoThreadCallback(Mpthreadmanager::TWMThreadRequest &Msg);
	virtual void __fastcall DoUpdate(void);
	virtual void __fastcall DoViewChange(void);
	virtual void __fastcall DestroyWnd(void);
	bool __fastcall DragInitiated(void);
	void __fastcall FinalizeDrag(const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState);
	void __fastcall GroupFontChange(System::TObject* Sender);
	virtual void __fastcall HandleDblClick(Mpcommonutilities::TCommonMouseButton Button, const Winapi::Messages::TWMMouse &Msg);
	virtual void __fastcall HandleKeyDown(const Winapi::Messages::TWMKey &Msg);
	virtual void __fastcall HandleMouseDown(Mpcommonutilities::TCommonMouseButton Button, const Winapi::Messages::TWMMouse &Msg);
	virtual void __fastcall HandleMouseUp(Mpcommonutilities::TCommonMouseButton Button, const Winapi::Messages::TWMMouse &Msg);
	void __fastcall HeaderFontChange(System::TObject* Sender);
	void __fastcall InitializeDragPendings(TEasyItem* HitItem, const System::Types::TPoint &WindowPoint, Mpcommonutilities::TCommonKeyStates KeyState, bool AllowDrag, bool AllowDragRect);
	HIDESBASE bool __fastcall IsFontStored(void);
	bool __fastcall IsHeaderMouseMsg(System::Types::TSmallPoint MousePos, bool ForceTest = false);
	void __fastcall MarkSelectedCut(void);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall PasteFromClipboard(void);
	virtual void __fastcall SetView(TEasyListStyle Value);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	MESSAGE void __fastcall WMClose(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMEasyThreadCallback(Mpthreadmanager::TWMThreadRequest &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TWMEraseBkgnd &Msg);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Msg);
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMMButtonDblClk(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMMButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMMButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Msg);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMRButtonDblClk(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMRButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Msg);
	MESSAGE void __fastcall WMTabMoveFocusAndEdit(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Msg);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Msg);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanging(Winapi::Messages::TWMWindowPosMsg &Msg);
	__property _di_IAccessible Accessible = {read=FAccessible, write=FAccessible};
	__property bool AllowHiddenCheckedItems = {read=FAllowInvisibleCheckedItems, write=FAllowInvisibleCheckedItems, default=0};
	__property TEasyBackgroundManager* BackGround = {read=FBackGround, write=SetBackGround};
	__property BevelInner = {index=0, default=2};
	__property TEasyCheckManager* CheckManager = {read=FCheckManager, write=FCheckManager};
	__property Color = {default=-16777211};
	__property TEasyCellSizes* CellSizes = {read=FCellSizes, write=FCellSizes};
	__property System::Byte DisabledBlendAlpha = {read=FDisabledBlendAlpha, write=FDisabledBlendAlpha, default=128};
	__property System::Uitypes::TColor DisabledBlendColor = {read=FDisabledBlendColor, write=FDisabledBlendColor, default=-16777211};
	__property TEasyOLEDragManager* DragManager = {read=FDragManager, write=FDragManager};
	__property TEasyDragRectManager* DragRect = {read=FDragRect, write=FDragRect};
	__property _di_IDropTarget DropTarget = {read=FDropTarget, write=FDropTarget};
	__property TEasyEditManager* EditManager = {read=FEditManager, write=FEditManager};
	__property TEasyGestureManager* Gesture = {read=FGesture, write=FGesture};
	__property TEasyGlobalImageManager* GlobalImages = {read=FGlobalImages, write=FGlobalImages};
	__property Vcl::Graphics::TBitmap* GroupCollapseButton = {read=GetGroupCollapseImage, write=SetGroupCollapseImage};
	__property Vcl::Graphics::TBitmap* GroupExpandButton = {read=GetGroupExpandImage, write=SetGroupExpandImage};
	__property Vcl::Graphics::TFont* GroupFont = {read=FGroupFont, write=SetGroupFont, stored=IsFontStored};
	__property TEasyGroups* Groups = {read=FGroups, write=FGroups};
	__property TEasyHeader* Header = {read=FHeader, write=FHeader};
	__property System::Classes::TAlignment HintAlignment = {read=FHintAlignment, write=FHintAlignment, default=0};
	__property TEasyHintInfoRec HintData = {read=FHintData, write=FHintData};
	__property TEasyHintInfo* HintInfo = {read=FHintInfo, write=FHintInfo};
	__property TEasyHintType HintType = {read=GetHintType, write=SetHintType, default=0};
	__property TEasyHotTrackManager* HotTrack = {read=FHotTrack, write=FHotTrack};
	__property Vcl::Imglist::TCustomImageList* ImagesGroup = {read=FImagesGroup, write=SetImagesGroup};
	__property Vcl::Imglist::TCustomImageList* ImagesSmall = {read=FImagesSmall, write=SetImagesSmall};
	__property Vcl::Imglist::TCustomImageList* ImagesLarge = {read=FImagesLarge, write=SetImagesLarge};
	__property Vcl::Imglist::TCustomImageList* ImagesExLarge = {read=FImagesExLarge, write=SetImagesExLarge};
	__property Vcl::Imglist::TCustomImageList* ImagesState = {read=FImagesState, write=SetImagesState};
	__property TEasyIncrementalSearchManager* IncrementalSearch = {read=FIncrementalSearch, write=FIncrementalSearch};
	__property TEasyGlobalItems* Items = {read=FItems};
	__property System::Types::TSmallPoint LastMousePos = {read=FLastMousePos, write=FLastMousePos};
	__property System::Classes::TNotifyEvent OldGroupFontChange = {read=FOldGroupFontChange, write=FOldGroupFontChange};
	__property System::Classes::TNotifyEvent OldHeaderFontChange = {read=FOldHeaderFontChange, write=FOldHeaderFontChange};
	__property TAfterPaintEvent OnAfterPaint = {read=FOnAfterPaint, write=FOnAfterPaint};
	__property TAutoGroupGetKeyEvent OnAutoGroupGetKey = {read=FOnAutoGroupGetKey, write=FOnAutoGroupGetKey};
	__property TAutoSortGroupCreateEvent OnAutoSortGroupCreate = {read=FOnAutoSortGroupCreate, write=FOnAutoSortGroupCreate};
	__property TEasyClipboardEvent OnClipboardCopy = {read=FOnClipboardCopy, write=FOnClipboardCopy};
	__property TEasyClipboardCutEvent OnClipboardCut = {read=FOnClipboardCut, write=FOnClipboardCut};
	__property TEasyClipboardEvent OnClipboardPaste = {read=FOnClipboardPaste, write=FOnClipboardPaste};
	__property TColumnCheckChangeEvent OnColumnCheckChanged = {read=FOnColumnCheckChange, write=FOnColumnCheckChange};
	__property TColumnCheckChangingEvent OnColumnCheckChanging = {read=FOnColumnCheckChanging, write=FOnColumnCheckChanging};
	__property TColumnClickEvent OnColumnClick = {read=FOnColumnClick, write=FOnColumnClick};
	__property TColumnContextMenuEvent OnColumnContextMenu = {read=FOnColumnContextMenu, write=FOnColumnContextMenu};
	__property TColumnCustomViewEvent OnColumnCustomView = {read=FOnColumnCustomView, write=FOnColumnCustomView};
	__property TColumnDblClickEvent OnColumnDblClick = {read=FOnColumnDblClick, write=FOnColumnDblClick};
	__property TColumnDropDownButtonClickEvent OnColumnDropDownButtonClick = {read=FOnColumnDropDownButtonClick, write=FOnColumnDropDownButtonClick};
	__property TColumnEnableChangeEvent OnColumnEnableChanged = {read=FOnColumnEnableChange, write=FOnColumnEnableChange};
	__property TColumnEnableChangingEvent OnColumnEnableChanging = {read=FOnColumnEnableChanging, write=FOnColumnEnableChanging};
	__property TColumnFocusChangeEvent OnColumnFocusChanged = {read=FOnColumnFocusChanged, write=FOnColumnFocusChanged};
	__property TColumnFocusChangingEvent OnColumnFocusChanging = {read=FOnColumnFocusChanging, write=FOnColumnFocusChanging};
	__property TColumnFreeingEvent OnColumnFreeing = {read=FOnColumnFreeing, write=FOnColumnFreeing};
	__property TColumnGetCaptionEvent OnColumnGetCaption = {read=FOnColumnGetCaption, write=FOnColumnGetCaption};
	__property TColumnGetImageIndexEvent OnColumnGetImageIndex = {read=FOnColumnGetImageIndex, write=FOnColumnGetImageIndex};
	__property TColumnGetImageListEvent OnColumnGetImageList = {read=FOnColumnGetImageList, write=FOnColumnGetImageList};
	__property TColumnGetDetailEvent OnColumnGetDetail = {read=FOnColumnGetDetail, write=FOnColumnGetDetail};
	__property TColumnGetDetailCountEvent OnColumnGetDetailCount = {read=FOnColumnGetDetailCount, write=FOnColumnGetDetailCount};
	__property TColumnImageDrawEvent OnColumnImageDraw = {read=FOnColumnImageDraw, write=FOnColumnImageDraw};
	__property TColumnImageGetSizeEvent OnColumnImageGetSize = {read=FOnColumnImageGetSize, write=FOnColumnImageGetSize};
	__property TColumnImageDrawIsCustomEvent OnColumnImageDrawIsCustom = {read=FOnColumnImageDrawIsCustom, write=FOnColumnImageDrawIsCustom};
	__property TColumnInitializeEvent OnColumnInitialize = {read=FOnColumnInitialize, write=FOnColumnInitialize};
	__property TEasyColumnLoadFromStreamEvent OnColumnLoadFromStream = {read=FOnColumnLoadFromStream, write=FOnColumnLoadFromStream};
	__property TColumnPaintTextEvent OnColumnPaintText = {read=FOnColumnPaintText, write=FOnColumnPaintText};
	__property TEasyColumnSaveToStreamEvent OnColumnSaveToStream = {read=FOnColumnSaveToStream, write=FOnColumnSaveToStream};
	__property TColumnSelectionChangeEvent OnColumnSelectionChanged = {read=FOnColumnSelectionChanged, write=FOnColumnSelectionChanged};
	__property TColumnSelectionChangingEvent OnColumnSelectionChanging = {read=FOnColumnSelectionChanging, write=FOnColumnSelectionChanging};
	__property TColumnSetCaptionEvent OnColumnSetCaption = {read=FOnColumnSetCaption, write=FOnColumnSetCaption};
	__property TColumnSetImageIndexEvent OnColumnSetImageIndex = {read=FOnColumnSetImageIndex, write=FOnColumnSetImageIndex};
	__property TColumnSetDetailEvent OnColumnSetDetail = {read=FOnColumnSetDetail, write=FOnColumnSetDetail};
	__property System::Classes::TNotifyEvent OnColumnStructureChange = {read=FOnColumnStructureChange, write=FOnColumnStructureChange};
	__property TColumnThumbnailDrawEvent OnColumnThumbnailDraw = {read=FOnColumnThumbnailDraw, write=FOnColumnThumbnailDraw};
	__property TColumnSizeChangedEvent OnColumnSizeChanged = {read=FOnColumnSizeChanged, write=FOnColumnSizeChanged};
	__property TColumnSizeChangingEvent OnColumnSizeChanging = {read=FOnColumnSizeChanging, write=FOnColumnSizeChanging};
	__property TColumnVisibilityChangeEvent OnColumnVisibilityChanged = {read=FOnColumnVisibilityChanged, write=FOnColumnVisibilityChanged};
	__property TColumnVisibilityChangingEvent OnColumnVisibilityChanging = {read=FOnColumnVisibilityChanging, write=FOnColumnVisibilityChanging};
	__property TContextMenuEvent OnContextMenu = {read=FOnContextMenu, write=FOnContextMenu};
	__property TCustomGridEvent OnCustomGrid = {read=FOnCustomGrid, write=FOnCustomGrid};
	__property TDblClickEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property TDragInsertDropEvent OnDragInsertDrop = {read=FOnDragInsertDrop, write=FOnDragInsertDrop};
	__property TEasyGenericCallback OnGenericCallback = {read=FOnGenericCallback, write=FOnGenericCallback};
	__property TGetDragImageEvent OnGetDragImage = {read=FOnGetDragImage, write=FOnGetDragImage};
	__property TGroupClickEvent OnGroupClick = {read=FOnGroupClick, write=FOnGroupClick};
	__property TGroupCollapseEvent OnGroupCollapse = {read=FOnGroupCollapse, write=FOnGroupCollapse};
	__property TGroupCollapsingEvent OnGroupCollapsing = {read=FOnGroupCollapsing, write=FOnGroupCollapsing};
	__property TGroupCompareEvent OnGroupCompare = {read=FOnGroupCompare, write=FOnGroupCompare};
	__property TGroupContextMenuEvent OnGroupContextMenu = {read=FOnGroupContextMenu, write=FOnGroupContextMenu};
	__property TGroupCustomViewEvent OnGroupCustomView = {read=FOnGroupCustomView, write=FOnGroupCustomView};
	__property TGroupDblClickEvent OnGroupDblClick = {read=FOnGroupDblClick, write=FOnGroupDblClick};
	__property TGroupExpandEvent OnGroupExpand = {read=FOnGroupExpand, write=FOnGroupExpand};
	__property TGroupExpandingEvent OnGroupExpanding = {read=FOnGroupExpanding, write=FOnGroupExpanding};
	__property TGroupFocusChangeEvent OnGroupFocusChanged = {read=FOnGroupFocusChanged, write=FOnGroupFocusChanged};
	__property TGroupFocusChangingEvent OnGroupFocusChanging = {read=FOnGroupFocusChanging, write=FOnGroupFocusChanging};
	__property TGroupFreeingEvent OnGroupFreeing = {read=FOnGroupFreeing, write=FOnGroupFreeing};
	__property TGroupGetCaptionEvent OnGroupGetCaption = {read=FOnGroupGetCaption, write=FOnGroupGetCaption};
	__property TGroupGetImageIndexEvent OnGroupGetImageIndex = {read=FOnGroupGetImageIndex, write=FOnGroupGetImageIndex};
	__property TGroupGetImageListEvent OnGroupGetImageList = {read=FOnGroupGetImageList, write=FOnGroupGetImageList};
	__property TGroupGetDetailEvent OnGroupGetDetail = {read=FOnGroupGetDetailIndex, write=FOnGroupGetDetailIndex};
	__property TGroupGetDetailCountEvent OnGroupGetDetailCount = {read=FOnGroupGetDetailCount, write=FOnGroupGetDetailCount};
	__property TGroupHotTrackEvent OnGroupHotTrack = {read=FOnGroupHotTrack, write=FOnGroupHotTrack};
	__property TGroupImageDrawEvent OnGroupImageDraw = {read=FOnGroupImageDrawEvent, write=FOnGroupImageDrawEvent};
	__property TGroupImageGetSizeEvent OnGroupImageGetSize = {read=FGroupImageGetSize, write=FGroupImageGetSize};
	__property TGroupImageDrawIsCustomEvent OnGroupImageDrawIsCustom = {read=FOnGroupImageDrawIsCustom, write=FOnGroupImageDrawIsCustom};
	__property TGroupInitializeEvent OnGroupInitialize = {read=FOnGroupInitialize, write=FOnGroupInitialize};
	__property TGroupLoadFromStreamEvent OnGroupLoadFromStream = {read=FOnGroupLoadFromStream, write=FOnGroupLoadFromStream};
	__property TGroupPaintTextEvent OnGroupPaintText = {read=FOnGroupPaintText, write=FOnGroupPaintText};
	__property TGroupSaveToStreamEvent OnGroupSaveToStream = {read=FOnGroupSaveToStream, write=FOnGroupSaveToStream};
	__property TGroupSelectionChangeEvent OnGroupSelectionChanged = {read=FOnGroupSelectionChanged, write=FOnGroupSelectionChanged};
	__property TGroupSelectionChangingEvent OnGroupSelectionChanging = {read=FOnGroupSelectionChanging, write=FOnGroupSelectionChanging};
	__property TGroupSetCaptionEvent OnGroupSetCaption = {read=FOnGroupSetCaption, write=FOnGroupSetCaption};
	__property TGroupSetImageIndexEvent OnGroupSetImageIndex = {read=FOnGroupSetImageIndex, write=FOnGroupSetImageIndex};
	__property TGroupSetDetailEvent OnGroupSetDetail = {read=FOnGroupSetDetail, write=FOnGroupSetDetail};
	__property System::Classes::TNotifyEvent OnGroupStructureChange = {read=FOnGroupStructureChange, write=FOnGroupStructureChange};
	__property TGroupThumbnailDrawEvent OnGroupThumbnailDraw = {read=FOnGroupThumbnailDraw, write=FOnGroupThumbnailDraw};
	__property TGroupVisibilityChangeEvent OnGroupVisibilityChanged = {read=FOnGroupVisibilityChanged, write=FOnGroupVisibilityChanged};
	__property TGroupVisibilityChangingEvent OnGroupVisibilityChanging = {read=FOnGroupVisibilityChanging, write=FOnGroupVisibilityChanging};
	__property THeaderDblClickEvent OnHeaderDblClick = {read=FOnHeaderDblClick, write=FOnHeaderDblClick};
	__property THeaderMouseEvent OnHeaderMouseDown = {read=FOnHeaderMouseDown, write=FOnHeaderMouseDown};
	__property Vcl::Controls::TMouseMoveEvent OnHeaderMouseMove = {read=FOnHeaderMouseMove, write=FOnHeaderMouseMove};
	__property THeaderMouseEvent OnHeaderMouseUp = {read=FOnHeaderMouseUp, write=FOnHeaderMouseUp};
	__property THintCustomDrawEvent OnHintCustomDraw = {read=FOnHintCustomDraw, write=FOnHintCustomDraw};
	__property THintCustomizeInfoEvent OnHintCustomInfo = {read=FOnHintCustomInfo, write=FOnHintCustomInfo};
	__property THintPauseTimeEvent OnHintPauseTime = {read=FOnHintPauseTime, write=FOnHintPauseTime};
	__property THintPopupEvent OnHintPopup = {read=FOnHintPopup, write=FOnHintPopup};
	__property TIncrementalSearchEvent OnIncrementalSearch = {read=FOnIncrementalSearch, write=FOnIncrementalSearch};
	__property TInsertMarkPositionEvent OnInsertMarkPosition = {read=FOnInsertMarkPosition, write=FOnInsertMarkPosition};
	__property TItemCheckChangeEvent OnItemCheckChange = {read=FOnItemCheckChange, write=FOnItemCheckChange};
	__property TItemCheckChangingEvent OnItemCheckChanging = {read=FOnItemCheckChanging, write=FOnItemCheckChanging};
	__property TItemClickEvent OnItemClick = {read=FOnItemClick, write=FOnItemClick};
	__property TItemCompareEvent OnItemCompare = {read=FOnItemCompare, write=FOnItemCompare};
	__property TItemContextMenuEvent OnItemContextMenu = {read=FOnItemContextMenu, write=FOnItemContextMenu};
	__property TItemCreateEditorEvent OnItemCreateEditor = {read=FOnItemCreateEditor, write=FOnItemCreateEditor};
	__property TItemCustomViewEvent OnItemCustomView = {read=FOnItemCustomView, write=FOnItemCustomView};
	__property TItemDblClickEvent OnItemDblClick = {read=FOnItemDblClick, write=FOnItemDblClick};
	__property TItemEditAcceptedEvent OnItemEditAccepted = {read=FOnItemEditAccepted, write=FOnItemEditAccepted};
	__property TItemEditBegin OnItemEditBegin = {read=FOnItemEditBegin, write=FOnItemEditBegin};
	__property TItemEditedEvent OnItemEdited = {read=FOnItemEdited, write=FOnItemEdited};
	__property TItemEditEnd OnItemEditEnd = {read=FOnItemEditEnd, write=FOnItemEditEnd};
	__property TItemEnableChangeEvent OnItemEnableChange = {read=FOnItemEnableChange, write=FOnItemEnableChange};
	__property TItemEnableChangingEvent OnItemEnableChanging = {read=FOnItemEnableChanging, write=FOnItemEnableChanging};
	__property TItemFreeingEvent OnItemFreeing = {read=FOnItemFreeing, write=FOnItemFreeing};
	__property TItemFocusChangeEvent OnItemFocusChanged = {read=FOnItemFocusChanged, write=FOnItemFocusChanged};
	__property TItemFocusChangingEvent OnItemFocusChanging = {read=FOnItemFocusChanging, write=FOnItemFocusChanging};
	__property TItemGetCaptionEvent OnItemGetCaption = {read=FOnItemGetCaption, write=FOnItemGetCaption};
	__property TEasyItemGetCaptionEvent OnItemGetEditCaption = {read=FOnItemGetEditCaption, write=FOnItemGetEditCaption};
	__property TItemGetEditMenuEvent OnItemGetEditMenu = {read=FOnItemGetEditMenu, write=FOnItemGetEditMenu};
	__property TItemGetGroupKeyEvent OnItemGetGroupKey = {read=FOnItemGetGroupKey, write=FOnItemGetGroupKey};
	__property TItemHotTrackEvent OnItemHotTrack = {read=FOnItemHotTrack, write=FOnItemHotTrack};
	__property TItemGetImageIndexEvent OnItemGetImageIndex = {read=FOnItemGetImageIndex, write=FOnItemGetImageIndex};
	__property TItemGetImageListEvent OnItemGetImageList = {read=FOnItemGetImageList, write=FOnItemGetImageList};
	__property TItemGetImageListEvent OnItemGetStateImageList = {read=FOnItemGetStateImageList, write=FOnItemGetStateImageList};
	__property TItemGetTileDetailEvent OnItemGetTileDetail = {read=FOnItemGetTileDetailIndex, write=FOnItemGetTileDetailIndex};
	__property TItemGetTileDetailCountEvent OnItemGetTileDetailCount = {read=FOnItemGetTileDetailCount, write=FOnItemGetTileDetailCount};
	__property TItemImageDrawEvent OnItemImageDraw = {read=FOnItemImageDraw, write=FOnItemImageDraw};
	__property TItemImageGetSizeEvent OnItemImageGetSize = {read=FOnItemImageGetSize, write=FOnItemImageGetSize};
	__property TItemImageDrawIsCustomEvent OnItemImageDrawIsCustom = {read=FOnItemImageDrawIsCustom, write=FOnItemImageDrawIsCustom};
	__property TItemLoadFromStreamEvent OnItemLoadFromStream = {read=FOnItemLoadFromStream, write=FOnItemLoadFromStream};
	__property TItemInitializeEvent OnItemInitialize = {read=FOnItemInitialize, write=FOnItemInitialize};
	__property TItemMouseDownEvent OnItemMouseDown = {read=FOnItemMouseDown, write=FOnItemMouseDown};
	__property TItemMouseUpEvent OnItemMouseUp = {read=FOnItemMouseUp, write=FOnItemMouseUp};
	__property TItemPaintTextEvent OnItemPaintText = {read=FOnItemPaintText, write=FOnItemPaintText};
	__property TItemSaveToStreamEvent OnItemSaveToStream = {read=FOnItemSaveToStream, write=FOnItemSaveToStream};
	__property TItemSelectionChangeEvent OnItemSelectionChanged = {read=FOnItemSelectionChanged, write=FOnItemSelectionChanged};
	__property TItemSelectionChangingEvent OnItemSelectionChanging = {read=FOnItemSelectionChanging, write=FOnItemSelectionChanging};
	__property TEasyItemSelectionsChangedEvent OnItemSelectionsChanged = {read=FOnItemSelectionsChanged, write=FOnItemSelectionsChanged};
	__property TItemSetCaptionEvent OnItemSetCaption = {read=FOnItemSetCaption, write=FOnItemSetCaption};
	__property TItemSetGroupKeyEvent OnItemSetGroupKey = {read=FOnItemSetGroupKey, write=FOnItemSetGroupKey};
	__property TItemSetImageIndexEvent OnItemSetImageIndex = {read=FOnItemSetImageIndex, write=FOnItemSetImageIndex};
	__property TItemSetTileDetailEvent OnItemSetTileDetail = {read=FOnItemSetTileDetail, write=FOnItemSetTileDetail};
	__property System::Classes::TNotifyEvent OnItemStructureChange = {read=FOnItemStructureChange, write=FOnItemStructureChange};
	__property TItemThumbnailDrawEvent OnItemThumbnailDraw = {read=FOnItemThumbnailDraw, write=FOnItemThumbnailDraw};
	__property TItemVisibilityChangeEvent OnItemVisibilityChanged = {read=FOnItemVisibilityChanged, write=FOnItemVisibilityChanged};
	__property TItemVisibilityChangingEvent OnItemVisibilityChanging = {read=FOnItemVisibilityChanging, write=FOnItemVisibilityChanging};
	__property TEasyKeyActionEvent OnKeyAction = {read=FOnKeyAction, write=FOnKeyAction};
	__property TEasyMouseActivateEvent OnMouseActivate = {read=FOnMouseActivate, write=FOnMouseActivate};
	__property TEasyGestureEvent OnMouseGesture = {read=FOnMouseGesture, write=FOnMouseGesture};
	__property TOLEDropSourceDragEndEvent OnOLEDragEnd = {read=FOnOLEDragEnd, write=FOnOLEDragEnd};
	__property TOLEDropSourceDragStartEvent OnOLEDragStart = {read=FOnOLEDragStart, write=FOnOLEDragStart};
	__property TOLEDropTargetDragEnterEvent OnOLEDragEnter = {read=FOnOLEDragEnter, write=FOnOLEDragEnter};
	__property TOLEDropTargetDragOverEvent OnOLEDragOver = {read=FOnOLEDragOver, write=FOnOLEDragOver};
	__property TOLEDropTargetDragLeaveEvent OnOLEDragLeave = {read=FOnOLEDragLeave, write=FOnOLEDragLeave};
	__property TOLEDropTargetDragDropEvent OnOLEDragDrop = {read=FOnOLEDragDrop, write=FOnOLEDragDrop};
	__property TOLEGetCustomFormatsEvent OnOLEGetCustomFormats = {read=FOnOLEGetCustomFormats, write=FOnOLEGetCustomFormats};
	__property TOLEGetDataEvent OnOLEGetData = {read=FOnOLEGetData, write=FOnOLEGetData};
	__property FOLEGetDataObjectEvent OnOLEGetDataObject = {read=FOnOLEGetDataObject, write=FOnOLEGetDataObject};
	__property TOLEDropSourceQueryContineDragEvent OnOLEQueryContineDrag = {read=FOnOLEQueryContineDrag, write=FOnOLEQueryContineDrag};
	__property TOLEDropSourceGiveFeedbackEvent OnOLEGiveFeedback = {read=FOnOLEGiveFeedback, write=FOnOLEGiveFeedback};
	__property TOLEQueryDataEvent OnOLEQueryData = {read=FOnOLEQueryData, write=FOnOLEQueryData};
	__property TPaintBkGndEvent OnPaintBkGnd = {read=FOnPaintBkGnd, write=FOnPaintBkGnd};
	__property TPaintHeaderBkGndEvent OnPaintHeaderBkGnd = {read=FOnPaintHeaderBkGnd, write=FOnPaintHeaderBkGnd};
	__property TEasyScrollEvent OnScroll = {read=FOnScroll, write=FOnScroll};
	__property TEasyScrollEndEvent OnScrollEnd = {read=FOnScrollEnd, write=FOnScrollEnd};
	__property TEasyListviewEvent OnSortBegin = {read=FOnSortBegin, write=FOnSortBegin};
	__property TEasyListviewEvent OnSortEnd = {read=FOnSortEnd, write=FOnSortEnd};
	__property TThreadCallbackEvent OnThreadCallBack = {read=FOnThreadCallBack, write=FOnThreadCallBack};
	__property TViewChangedEvent OnViewChange = {read=FOnViewChange, write=FOnViewChange};
	__property TEasyPaintInfoBaseColumn* PaintInfoColumn = {read=GetPaintInfoColumn, write=SetPaintInfoColumn};
	__property TEasyPaintInfoBaseGroup* PaintInfoGroup = {read=GetPaintInfoGroup, write=SetPaintInfoGroup};
	__property TEasyPaintInfoBaseItem* PaintInfoItem = {read=GetPaintInfoItem, write=SetPaintInfoItem};
	__property ParentBackground = {default=0};
	__property ParentColor = {default=0};
	__property Vcl::Menus::TPopupMenu* PopupMenuHeader = {read=FPopupMenuHeader, write=FPopupMenuHeader};
	__property Vcl::Controls::TControlCanvas* ScratchCanvas = {read=GetScratchCanvas, write=FScratchCanvas};
	__property TEasyScrollbarManager* Scrollbars = {read=FScrollbars, write=FScrollbars};
	__property TEasySelectionManager* Selection = {read=FSelection, write=SetSelection};
	__property bool ShowGroupMargins = {read=FShowGroupMargins, write=SetShowGroupMargins, default=0};
	__property bool ShowImages = {read=FShowImages, write=SetShowImages, default=1};
	__property bool ShowInactive = {read=FShowInactive, write=SetShowInactive, default=0};
	__property TEasySortManager* Sort = {read=FSort, write=FSort};
	__property TabStop = {default=1};
	__property TEasyListStyle View = {read=FView, write=SetView, default=0};
	__property TEasyDefaultWheelScroll WheelMouseDefaultScroll = {read=FWheelMouseDefaultScroll, write=FWheelMouseDefaultScroll, default=1};
	__property bool WheelMouseScrollModifierEnabled = {read=FWheelMouseScrollModifierEnabled, write=FWheelMouseScrollModifierEnabled, default=1};
	
public:
	__fastcall virtual TCustomEasyListview(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomEasyListview(void);
	System::Types::TRect __fastcall ClientInViewportCoords(void);
	virtual bool __fastcall IsGrouped(void);
	bool __fastcall IsThumbnailView(void);
	bool __fastcall IsVertView(void);
	bool __fastcall ScrollHeaderHorz(void);
	void __fastcall AutoFitAllCellCaptions(bool VisibleOnly);
	virtual void __fastcall BeginUpdate(void);
	virtual void __fastcall EndUpdate(bool Invalidate = true);
	virtual void __fastcall Loaded(void);
	void __fastcall LoadFromFile(System::WideString FileName, System::Word Mode);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S);
	virtual void __fastcall PaintThemedNCBkgnd(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect);
	void __fastcall SaveToFile(System::WideString FileName, System::Word Mode);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S);
	__property TEasyControlStates States = {read=FStates, write=FStates, nodefault};
	__property TEasyItem* TopItem = {read=GetTopItem};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomEasyListview(HWND ParentWindow) : Mpcommonobjects::TCommonCanvasControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEasyBaseEditor : public TEasyInterfacedPersistent
{
	typedef TEasyInterfacedPersistent inherited;
	
private:
	TEasyColumn* FEditColumn;
	Vcl::Controls::TWinControl* FEditor;
	TEasyItem* FItem;
	bool FModified;
	System::Classes::TWndMethod FOldWndProc;
	TEasyRectArrayObject FRectArray;
	virtual Vcl::Controls::TWinControl* __fastcall GetEditor(void);
	TCustomEasyListview* __fastcall GetListview(void);
	virtual void __fastcall SetEditor(Vcl::Controls::TWinControl* const Value);
	
protected:
	virtual System::WideString __fastcall EditText(TEasyItem* Item, TEasyColumn* Column);
	System::Uitypes::TColor __fastcall GetEditorColor(void);
	virtual void __fastcall CalculateEditorRect(System::WideString NewText, System::Types::TRect &NewRect) = 0 ;
	virtual void __fastcall CreateEditor(Vcl::Controls::TWinControl* &AnEditor, TEasyColumn* Column, Vcl::Controls::TWinControl* Parent) = 0 ;
	virtual Vcl::Graphics::TFont* __fastcall GetEditorFont(void) = 0 ;
	virtual System::Variant __fastcall GetText(void) = 0 ;
	void __fastcall ResizeEditor(void);
	__property TEasyColumn* EditColumn = {read=FEditColumn, write=FEditColumn};
	__property Vcl::Controls::TWinControl* Editor = {read=GetEditor, write=SetEditor};
	__property TEasyItem* Item = {read=FItem, write=FItem};
	__property TCustomEasyListview* Listview = {read=GetListview};
	__property bool Modified = {read=FModified, write=FModified, nodefault};
	__property System::Classes::TWndMethod OldWndProc = {read=FOldWndProc, write=FOldWndProc};
	__property TEasyRectArrayObject RectArray = {read=FRectArray, write=FRectArray};
	
public:
	bool __fastcall AcceptEdit(void);
	void __fastcall ControlWndHookProc(Winapi::Messages::TMessage &Message);
	HWND __fastcall GetHandle(void);
	bool __fastcall GetModified(void);
	bool __fastcall PtInEditControl(const System::Types::TPoint &WindowPt);
	void __fastcall Finalize(void);
	void __fastcall Hide(void);
	void __fastcall Initialize(TEasyItem* AnItem, TEasyColumn* Column);
	virtual void __fastcall SelectAll(void) = 0 ;
	virtual bool __fastcall SetEditorFocus(void);
	void __fastcall Show(void);
	__property HWND Handle = {read=GetHandle, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEasyBaseEditor(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TEasyBaseEditor(void) : TEasyInterfacedPersistent() { }
	
private:
	void *__IEasyCellEditor;	// IEasyCellEditor 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A1686E7E-7F39-4BD4-BE1F-9C20D7BC6EA0}
	operator _di_IEasyCellEditor()
	{
		_di_IEasyCellEditor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IEasyCellEditor*(void) { return (IEasyCellEditor*)&__IEasyCellEditor; }
	#endif
	
};


class PASCALIMPLEMENTATION TEasyStringEditor : public TEasyBaseEditor
{
	typedef TEasyBaseEditor inherited;
	
protected:
	virtual void __fastcall CalculateEditorRect(System::WideString NewText, System::Types::TRect &NewRect);
	virtual void __fastcall CreateEditor(Vcl::Controls::TWinControl* &AnEditor, TEasyColumn* Column, Vcl::Controls::TWinControl* Parent);
	virtual Vcl::Graphics::TFont* __fastcall GetEditorFont(void);
	virtual System::Variant __fastcall GetText(void);
	virtual void __fastcall DoEditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift, bool &DoDefault);
	void __fastcall OnEditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	
public:
	virtual bool __fastcall SetEditorFocus(void);
	virtual void __fastcall SelectAll(void);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEasyStringEditor(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TEasyStringEditor(void) : TEasyBaseEditor() { }
	
};


class PASCALIMPLEMENTATION TEasyMemoEditor : public TEasyBaseEditor
{
	typedef TEasyBaseEditor inherited;
	
protected:
	virtual void __fastcall CalculateEditorRect(System::WideString NewText, System::Types::TRect &NewRect);
	virtual void __fastcall CreateEditor(Vcl::Controls::TWinControl* &AnEditor, TEasyColumn* Column, Vcl::Controls::TWinControl* Parent);
	virtual Vcl::Graphics::TFont* __fastcall GetEditorFont(void);
	virtual System::Variant __fastcall GetText(void);
	virtual void __fastcall DoEditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift, bool &DoDefault);
	void __fastcall OnEditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	
public:
	virtual void __fastcall SelectAll(void);
	virtual bool __fastcall SetEditorFocus(void);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEasyMemoEditor(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TEasyMemoEditor(void) : TEasyBaseEditor() { }
	
};


class PASCALIMPLEMENTATION TEasyListview : public TCustomEasyListview
{
	typedef TCustomEasyListview inherited;
	
private:
	HIDESBASE virtual TEasyPaintInfoColumn* __fastcall GetPaintInfoColumn(void);
	HIDESBASE virtual TEasyPaintInfoGroup* __fastcall GetPaintInfoGroup(void);
	HIDESBASE virtual TEasyPaintInfoItem* __fastcall GetPaintInfoItem(void);
	HIDESBASE virtual void __fastcall SetPaintInfoColumn(TEasyPaintInfoColumn* const Value);
	HIDESBASE virtual void __fastcall SetPaintInfoGroup(TEasyPaintInfoGroup* const Value);
	HIDESBASE virtual void __fastcall SetPaintInfoItem(TEasyPaintInfoItem* const Value);
	
public:
	__property CheckManager;
	__property OnGenericCallback;
	__property GlobalImages;
	__property Items;
	__property States;
	
__published:
	__property Align = {default=0};
	__property AllowHiddenCheckedItems = {default=0};
	__property Anchors = {default=3};
	__property BackGround;
	__property BevelKind = {default=0};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property CacheDoubleBufferBits = {default=0};
	__property CellSizes;
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DisabledBlendAlpha = {default=128};
	__property DisabledBlendColor = {default=-16777211};
	__property EditManager;
	__property Gesture;
	__property ImagesState;
	__property UseDockManager = {default=1};
	__property DragKind = {default=0};
	__property DragManager;
	__property Font;
	__property GroupCollapseButton;
	__property GroupExpandButton;
	__property GroupFont;
	__property Groups;
	__property HintAlignment = {default=0};
	__property HintType = {default=0};
	__property Header;
	__property HotTrack;
	__property IncrementalSearch;
	__property ImagesGroup;
	__property ImagesSmall;
	__property ImagesLarge;
	__property ImagesExLarge;
	__property TEasyPaintInfoColumn* PaintInfoColumn = {read=GetPaintInfoColumn, write=SetPaintInfoColumn};
	__property TEasyPaintInfoGroup* PaintInfoGroup = {read=GetPaintInfoGroup, write=SetPaintInfoGroup};
	__property TEasyPaintInfoItem* PaintInfoItem = {read=GetPaintInfoItem, write=SetPaintInfoItem};
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property PopupMenuHeader;
	__property Scrollbars;
	__property ShowGroupMargins = {default=0};
	__property ShowImages = {default=1};
	__property ShowInactive = {default=0};
	__property ShowThemedBorder = {default=1};
	__property ShowHint;
	__property Selection;
	__property Sort;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Themed = {default=1};
	__property View = {default=0};
	__property Visible = {default=1};
	__property WheelMouseDefaultScroll = {default=1};
	__property WheelMouseScrollModifierEnabled = {default=1};
	__property OnAfterPaint;
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnAutoGroupGetKey;
	__property OnAutoSortGroupCreate;
	__property OnBeginUpdate;
	__property OnClipboardCopy;
	__property OnClipboardCut;
	__property OnClipboardPaste;
	__property OnColumnCheckChanged;
	__property OnColumnCheckChanging;
	__property OnColumnClick;
	__property OnColumnContextMenu;
	__property OnColumnCustomView;
	__property OnColumnDblClick;
	__property OnColumnDropDownButtonClick;
	__property OnColumnEnableChanged;
	__property OnColumnEnableChanging;
	__property OnColumnFreeing;
	__property OnColumnGetCaption;
	__property OnColumnGetImageIndex;
	__property OnColumnGetImageList;
	__property OnColumnGetDetail;
	__property OnColumnGetDetailCount;
	__property OnColumnImageDraw;
	__property OnColumnImageGetSize;
	__property OnColumnImageDrawIsCustom;
	__property OnColumnInitialize;
	__property OnColumnLoadFromStream;
	__property OnColumnPaintText;
	__property OnColumnSaveToStream;
	__property OnColumnSelectionChanged;
	__property OnColumnSelectionChanging;
	__property OnColumnSetCaption;
	__property OnColumnSetImageIndex;
	__property OnColumnSetDetail;
	__property OnColumnSizeChanged;
	__property OnColumnSizeChanging;
	__property OnColumnStructureChange;
	__property OnColumnVisibilityChanged;
	__property OnColumnVisibilityChanging;
	__property OnCustomGrid;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEndUpdate;
	__property OnEnter;
	__property OnExit;
	__property OnGetDragImage;
	__property OnGetSiteInfo;
	__property OnGroupClick;
	__property OnGroupCollapse;
	__property OnGroupCollapsing;
	__property OnGroupCompare;
	__property OnGroupContextMenu;
	__property OnGroupCustomView;
	__property OnGroupDblClick;
	__property OnGroupExpand;
	__property OnGroupExpanding;
	__property OnGroupFreeing;
	__property OnGroupGetCaption;
	__property OnGroupGetImageIndex;
	__property OnGroupGetImageList;
	__property OnGroupGetDetail;
	__property OnGroupGetDetailCount;
	__property OnGroupImageDraw;
	__property OnGroupImageGetSize;
	__property OnGroupImageDrawIsCustom;
	__property OnGroupInitialize;
	__property OnGroupLoadFromStream;
	__property OnGroupPaintText;
	__property OnGroupHotTrack;
	__property OnGroupSaveToStream;
	__property OnGroupSetCaption;
	__property OnGroupSetImageIndex;
	__property OnGroupSetDetail;
	__property OnGroupStructureChange;
	__property OnGroupVisibilityChanged;
	__property OnGroupVisibilityChanging;
	__property OnHeaderDblClick;
	__property OnHeaderMouseDown;
	__property OnHeaderMouseMove;
	__property OnHeaderMouseUp;
	__property OnHintCustomInfo;
	__property OnHintCustomDraw;
	__property OnHintPauseTime;
	__property OnHintPopup;
	__property OnIncrementalSearch;
	__property OnInsertMarkPosition;
	__property OnItemCheckChange;
	__property OnItemCheckChanging;
	__property OnItemClick;
	__property OnItemCompare;
	__property OnItemContextMenu;
	__property OnItemCreateEditor;
	__property OnItemCustomView;
	__property OnItemDblClick;
	__property OnItemEditBegin;
	__property OnItemEdited;
	__property OnItemEditEnd;
	__property OnItemEnableChange;
	__property OnItemEnableChanging;
	__property OnItemFreeing;
	__property OnItemFocusChanged;
	__property OnItemFocusChanging;
	__property OnItemGetCaption;
	__property OnItemGetEditCaption;
	__property OnItemGetEditMenu;
	__property OnItemGetGroupKey;
	__property OnItemGetImageIndex;
	__property OnItemGetImageList;
	__property OnItemGetTileDetail;
	__property OnItemGetTileDetailCount;
	__property OnItemHotTrack;
	__property OnItemImageDraw;
	__property OnItemImageGetSize;
	__property OnItemImageDrawIsCustom;
	__property OnItemInitialize;
	__property OnItemLoadFromStream;
	__property OnItemMouseDown;
	__property OnItemMouseUp;
	__property OnItemPaintText;
	__property OnItemSaveToStream;
	__property OnItemSelectionChanged;
	__property OnItemSelectionChanging;
	__property OnItemSelectionsChanged;
	__property OnItemSetCaption;
	__property OnItemSetGroupKey;
	__property OnItemSetImageIndex;
	__property OnItemSetTileDetail;
	__property OnItemStructureChange;
	__property OnItemThumbnailDraw;
	__property OnItemVisibilityChanged;
	__property OnItemVisibilityChanging;
	__property OnKeyAction;
	__property OnMouseActivate;
	__property OnMouseGesture;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnOLEDragEnd;
	__property OnOLEDragStart;
	__property OnOLEDragEnter;
	__property OnOLEDragOver;
	__property OnOLEDragLeave;
	__property OnOLEDragDrop;
	__property OnOLEGetCustomFormats;
	__property OnOLEGetData;
	__property OnOLEGetDataObject;
	__property OnOLEQueryContineDrag;
	__property OnOLEGiveFeedback;
	__property OnOLEQueryData;
	__property OnPaintHeaderBkGnd;
	__property OnPaintBkGnd;
	__property OnResize;
	__property OnScroll;
	__property OnScrollEnd;
	__property OnSortBegin;
	__property OnSortEnd;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnThreadCallBack;
	__property OnUnDock;
	__property OnViewChange;
public:
	/* TCustomEasyListview.Create */ inline __fastcall virtual TEasyListview(System::Classes::TComponent* AOwner) : TCustomEasyListview(AOwner) { }
	/* TCustomEasyListview.Destroy */ inline __fastcall virtual ~TEasyListview(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEasyListview(HWND ParentWindow) : TCustomEasyListview(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEasyBaseTaskBand : public TCustomEasyListview
{
	typedef TCustomEasyListview inherited;
	
protected:
	virtual TEasyPaintInfoBaseColumn* __fastcall CreateColumnPaintInfo(void);
	virtual TEasyPaintInfoBaseGroup* __fastcall CreateGroupPaintInfo(void);
	virtual TEasyPaintInfoBaseItem* __fastcall CreateItemPaintInfo(void);
	HIDESBASE virtual TEasyPaintInfoTaskBandColumn* __fastcall GetPaintInfoColumn(void);
	HIDESBASE virtual TEasyPaintInfoTaskbandGroup* __fastcall GetPaintInfoGroup(void);
	HIDESBASE virtual TEasyPaintInfoTaskBandItem* __fastcall GetPaintInfoItem(void);
	virtual bool __fastcall GroupTestExpand(TEasyGroupHitTestInfoSet HitInfo);
	virtual void __fastcall DoCustomGrid(TEasyGroup* Group, TEasyListStyle ViewStyle, TEasyGridGroupClass &Grid);
	virtual void __fastcall DoGroupCustomView(TEasyGroup* Group, TEasyListStyle ViewStyle, TEasyViewGroupClass &View);
	virtual void __fastcall DoItemCustomView(TEasyItem* Item, TEasyListStyle ViewStyle, TEasyViewItemClass &View);
	HIDESBASE virtual void __fastcall SetPaintInfoColumn(TEasyPaintInfoTaskBandColumn* const Value);
	HIDESBASE virtual void __fastcall SetPaintInfoGroup(TEasyPaintInfoTaskbandGroup* const Value);
	HIDESBASE virtual void __fastcall SetPaintInfoItem(TEasyPaintInfoTaskBandItem* const Value);
	__property TEasyPaintInfoTaskBandColumn* PaintInfoColumn = {read=GetPaintInfoColumn, write=SetPaintInfoColumn};
	
public:
	__fastcall virtual TEasyBaseTaskBand(System::Classes::TComponent* AOwner);
public:
	/* TCustomEasyListview.Destroy */ inline __fastcall virtual ~TEasyBaseTaskBand(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEasyBaseTaskBand(HWND ParentWindow) : TCustomEasyListview(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEasyTaskPanelBand : public TEasyBaseTaskBand
{
	typedef TEasyBaseTaskBand inherited;
	
private:
	bool FAutoScrollPanels;
	TEasyGetTaskPanelEvent FOnGetTaskPanel;
	TEasyGroupsTaskPanel* __fastcall GetGroups(void);
	void __fastcall SetGroups(TEasyGroupsTaskPanel* const Value);
	
protected:
	virtual TEasyGroups* __fastcall CreateGroups(void);
	HIDESBASE MESSAGE void __fastcall CMMouseWheel(Vcl::Controls::TCMMouseWheel &Msg);
	virtual void __fastcall DoCustomGrid(TEasyGroup* Group, TEasyListStyle ViewStyle, TEasyGridGroupClass &Grid);
	virtual void __fastcall DoGetTaskPanel(TEasyGroupTaskPanel* Sender, Easytaskpanelform::TEasyTaskPanelFormClass &TaskPanel);
	virtual void __fastcall DoGroupCustomView(TEasyGroup* Group, TEasyListStyle ViewStyle, TEasyViewGroupClass &View);
	virtual void __fastcall DoGroupExpand(TEasyGroup* Group);
	void __fastcall PositionPanels(void);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Msg);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Msg);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanging(Winapi::Messages::TWMWindowPosMsg &Msg);
	
public:
	__fastcall virtual TEasyTaskPanelBand(System::Classes::TComponent* AOwner);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property bool AutoScrollPanels = {read=FAutoScrollPanels, write=FAutoScrollPanels, default=0};
	__property BackGround;
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property TEasyGetTaskPanelEvent OnGetTaskPanel = {read=FOnGetTaskPanel, write=FOnGetTaskPanel};
	__property UseDockManager = {default=1};
	__property Font;
	__property GroupFont;
	__property TEasyGroupsTaskPanel* Groups = {read=GetGroups, write=SetGroups};
	__property HintAlignment = {default=0};
	__property HintType = {default=0};
	__property HotTrack;
	__property IncrementalSearch;
	__property ImagesGroup;
	__property ImagesSmall;
	__property PaintInfoGroup;
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowThemedBorder = {default=1};
	__property ShowHint;
	__property Selection;
	__property Sort;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Themed = {default=1};
	__property Visible = {default=1};
	__property WheelMouseDefaultScroll = {default=1};
	__property WheelMouseScrollModifierEnabled = {default=1};
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnAutoSortGroupCreate;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEndUpdate;
	__property OnEnter;
	__property OnExit;
	__property OnGetSiteInfo;
	__property OnGroupClick;
	__property OnGroupCollapse;
	__property OnGroupCollapsing;
	__property OnGroupContextMenu;
	__property OnGroupCustomView;
	__property OnGroupDblClick;
	__property OnGroupExpand;
	__property OnGroupExpanding;
	__property OnGroupFreeing;
	__property OnGroupGetCaption;
	__property OnGroupGetImageIndex;
	__property OnGroupGetImageList;
	__property OnGroupImageDraw;
	__property OnGroupImageGetSize;
	__property OnGroupImageDrawIsCustom;
	__property OnGroupInitialize;
	__property OnGroupPaintText;
	__property OnGroupHotTrack;
	__property OnGroupSetCaption;
	__property OnGroupSetImageIndex;
	__property OnGroupVisibilityChanged;
	__property OnGroupVisibilityChanging;
	__property OnHintCustomInfo;
	__property OnHintCustomDraw;
	__property OnHintPauseTime;
	__property OnHintPopup;
	__property OnKeyAction;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnPaintBkGnd;
	__property OnResize;
	__property OnSortBegin;
	__property OnSortEnd;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TCustomEasyListview.Destroy */ inline __fastcall virtual ~TEasyTaskPanelBand(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEasyTaskPanelBand(HWND ParentWindow) : TEasyBaseTaskBand(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEasyTaskBand : public TEasyBaseTaskBand
{
	typedef TEasyBaseTaskBand inherited;
	
protected:
	virtual void __fastcall DoGroupCollapse(TEasyGroup* Group);
	virtual void __fastcall DoGroupExpand(TEasyGroup* Group);
	
public:
	__property GlobalImages;
	__property Items;
	__property States;
	__property Scrollbars;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property CellSizes;
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property EditManager;
	__property UseDockManager = {default=1};
	__property DragKind = {default=0};
	__property DragManager;
	__property Font;
	__property GroupFont;
	__property Groups;
	__property HintAlignment = {default=0};
	__property HintType = {default=0};
	__property HotTrack;
	__property IncrementalSearch;
	__property ImagesGroup;
	__property ImagesSmall;
	__property TEasyPaintInfoTaskbandGroup* PaintInfoGroup = {read=GetPaintInfoGroup, write=SetPaintInfoGroup};
	__property TEasyPaintInfoTaskBandItem* PaintInfoItem = {read=GetPaintInfoItem, write=SetPaintInfoItem};
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property PopupMenuHeader;
	__property ShowGroupMargins = {default=0};
	__property ShowThemedBorder = {default=1};
	__property ShowHint;
	__property Selection;
	__property Sort;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Themed = {default=1};
	__property Visible = {default=1};
	__property WheelMouseDefaultScroll = {default=1};
	__property WheelMouseScrollModifierEnabled = {default=1};
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnAutoSortGroupCreate;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEndUpdate;
	__property OnEnter;
	__property OnExit;
	__property OnGetDragImage;
	__property OnGetSiteInfo;
	__property OnGroupClick;
	__property OnGroupCollapse;
	__property OnGroupCollapsing;
	__property OnGroupCompare;
	__property OnGroupContextMenu;
	__property OnGroupCustomView;
	__property OnGroupDblClick;
	__property OnGroupExpand;
	__property OnGroupExpanding;
	__property OnGroupFreeing;
	__property OnGroupGetCaption;
	__property OnGroupGetImageIndex;
	__property OnGroupGetImageList;
	__property OnGroupImageDraw;
	__property OnGroupImageGetSize;
	__property OnGroupImageDrawIsCustom;
	__property OnGroupInitialize;
	__property OnGroupPaintText;
	__property OnGroupHotTrack;
	__property OnGroupSetCaption;
	__property OnGroupSetImageIndex;
	__property OnGroupSetDetail;
	__property OnGroupVisibilityChanged;
	__property OnGroupVisibilityChanging;
	__property OnHeaderDblClick;
	__property OnHeaderMouseDown;
	__property OnHeaderMouseMove;
	__property OnHeaderMouseUp;
	__property OnHintCustomInfo;
	__property OnHintCustomDraw;
	__property OnHintPauseTime;
	__property OnHintPopup;
	__property OnIncrementalSearch;
	__property OnItemCheckChange;
	__property OnItemCheckChanging;
	__property OnItemClick;
	__property OnItemCompare;
	__property OnItemContextMenu;
	__property OnItemCreateEditor;
	__property OnItemDblClick;
	__property OnItemEditAccepted;
	__property OnItemEditBegin;
	__property OnItemEdited;
	__property OnItemEditEnd;
	__property OnItemEnableChange;
	__property OnItemEnableChanging;
	__property OnItemFreeing;
	__property OnItemFocusChanged;
	__property OnItemFocusChanging;
	__property OnItemGetCaption;
	__property OnItemGetGroupKey;
	__property OnItemGetImageIndex;
	__property OnItemGetImageList;
	__property OnItemHotTrack;
	__property OnItemImageDraw;
	__property OnItemImageGetSize;
	__property OnItemImageDrawIsCustom;
	__property OnItemInitialize;
	__property OnItemMouseDown;
	__property OnItemPaintText;
	__property OnItemSelectionChanged;
	__property OnItemSelectionChanging;
	__property OnItemSetCaption;
	__property OnItemSetGroupKey;
	__property OnItemSetImageIndex;
	__property OnItemVisibilityChanged;
	__property OnItemVisibilityChanging;
	__property OnKeyAction;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnOLEDragEnd;
	__property OnOLEDragStart;
	__property OnOLEDragEnter;
	__property OnOLEDragOver;
	__property OnOLEDragLeave;
	__property OnOLEDragDrop;
	__property OnOLEGetCustomFormats;
	__property OnOLEGetData;
	__property OnOLEQueryContineDrag;
	__property OnOLEGiveFeedback;
	__property OnOLEQueryData;
	__property OnPaintBkGnd;
	__property OnResize;
	__property OnSortBegin;
	__property OnSortEnd;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TEasyBaseTaskBand.Create */ inline __fastcall virtual TEasyTaskBand(System::Classes::TComponent* AOwner) : TEasyBaseTaskBand(AOwner) { }
	
public:
	/* TCustomEasyListview.Destroy */ inline __fastcall virtual ~TEasyTaskBand(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEasyTaskBand(HWND ParentWindow) : TEasyBaseTaskBand(ParentWindow) { }
	
};


typedef System::StaticArray<System::UnicodeString, 9> Easylistview__621;

typedef System::StaticArray<System::UnicodeString, 3> Easylistview__721;

//-- var, const, procedure ---------------------------------------------------
static const System::Word EGT_FIRSTLETTER = System::Word(0xffff);
#define IID_IEasyCellEditor L"{A1686E7E-7F39-4BD4-BE1F-9C20D7BC6EA0}"
#define IID_IEasyCellEditorSink L"{C0AAA3C0-AC98-43C8-8D9A-376A3F64FAD2}"
#define IID_IEasyCaptions L"{6C838C0E-22A5-48D4-80C6-E266E950D3CF}"
#define IID_IEasyCaptionsEditable L"{F1403B00-7163-4FB7-804F-1A5500CD980A}"
#define IID_IEasyImageList L"{298932FB-A0AE-4A0A-BE34-A782743A0579}"
#define IID_IEasyStateImageList L"{F0202D63-92A7-4C2F-9CA4-CBDE4DE0ED30}"
#define IID_IEasyImages L"{20C419F5-F3DD-40C4-8526-88322E182C49}"
#define IID_IEasyImagesEditable L"{DC580B13-1D19-46BB-885F-FC5CE9B2BE66}"
#define IID_IEasyThumbnail L"{F9CA8297-0CB3-4C47-905F-3D1497C4FC4D}"
#define IID_IEasyCustomImage L"{00260055-6915-43B5-9D43-379E7F61EEA9}"
#define IID_IEasyDetails L"{AE1D21EB-BA52-4C24-9EB1-B35733299489}"
#define IID_IEasyDetailsEditable L"{BBD853F9-D803-4478-B5A8-EE02FF47DC80}"
#define IID_IEasyChecks L"{E8820F40-2EE3-4718-B54A-39318D2D1232}"
#define IID_IEasyNotficationSink L"{E4F0D3DE-B2BD-4EC0-B24B-8A9B85B23A63}"
#define IID_IEasyNotifier L"{F10150F9-17E3-43B6-8C05-33283FF1B14E}"
#define IID_IEasyCompare L"{0761D4F5-D451-4A6D-BFDC-B3000FFD0299}"
#define IID_IEasyDividerPersist L"{EE6C3C89-7FAE-46CD-AD30-6954B4308721}"
#define IID_IEasyGroupKey L"{2B87BB19-A133-4D43-9164-AC456747EB19}"
#define IID_IEasyGroupKeyEditable L"{26EFE2C6-2DE2-4795-94E3-0DB0CAA38B09}"
static const System::Int8 EASYLISTVIEW_STREAM_VERSION = System::Int8(0x6);
static const int STREAM_ID_KEY = int(0xcefeff);
static const System::Word _AUTOSCROLLDELAY = System::Word(0x1f4);
static const System::Int8 _AUTOSCROLLTIME = System::Int8(0x32);
#define CURSOR_VHEADERSPLIT L"VEASYHEADERSPLIT"
#define BITMAP_DEFAULTGROUPEXPANDED L"DEFAULTEXPANDED"
#define BITMAP_DEFAULTGROUPCOLLAPSED L"DEFAULTCOLLAPSED"
#define BITMAP_SORTARROWUP L"SORTARROWUP"
#define BITMAP_SORTARROWDOWN L"SORTARROWDOWN"
#define BITMAP_DEFAULTColumnGLYPHS L"ColumnGLYPHS"
static const int BITMAP_DEFAULTColumnGLYPHSBKGND = int(0xff00ff);
#define SELECTION_OFFSET  (1.500000E-01)
static const System::Word WM_HOOKAPPACTIVATE = System::Word(0x80cc);
static const System::Word WM_EDITORRESIZE = System::Word(0x80cd);
static const System::Word WM_TABMOVEFOCUSANDEDIT = System::Word(0x80ce);
static const System::Int8 RESIZEHITZONEMARGIN = System::Int8(0x4);
static const System::Int8 DEFAULT_WIDTH_ICON = System::Int8(0x4b);
static const System::Int8 DEFAULT_HEIGHT_ICON = System::Int8(0x4b);
static const System::Byte DEFAULT_WIDTH_SMALLICON = System::Byte(0xc8);
static const System::Int8 DEFAULT_HEIGHT_SMALLICON = System::Int8(0x11);
static const System::Byte DEFAULT_WIDTH_LIST = System::Byte(0xc8);
static const System::Int8 DEFAULT_HEIGHT_LIST = System::Int8(0x11);
static const System::Int8 DEFAULT_WIDTH_REPORT = System::Int8(0x4b);
static const System::Int8 DEFAULT_HEIGHT_REPORT = System::Int8(0x11);
static const System::Int8 DEFAULT_WIDTH_THUMBNAIL = System::Int8(0x7d);
static const System::Byte DEFAULT_HEIGHT_THUMBNAIL = System::Byte(0x8f);
static const System::Byte DEFAULT_WIDTH_TILE = System::Byte(0xda);
static const System::Int8 DEFAULT_HEIGHT_TILE = System::Int8(0x3a);
static const System::Int8 DEFAULT_WIDTH_FILMSTRIP = System::Int8(0x7d);
static const System::Byte DEFAULT_HEIGHT_FILMSTRIP = System::Byte(0x8f);
static const System::Int8 DEFAULT_WIDTH_GRID = System::Int8(0x4b);
static const System::Int8 DEFAULT_HEIGHT_GRID = System::Int8(0x11);
static const System::Int8 DEFAULT_WIDTH_REPORTTHUMB = System::Int8(0x4b);
static const System::Int8 DEFAULT_HEIGHT_REPORTTHUMB = System::Int8(0x5a);
static const System::Int8 DEFAULT_PIXEL_PER_INCH = System::Int8(0x60);
static const System::Word crVHeaderSplit = System::Word(0x300);
#define DEFAULT_GROUP_NAME L"Default Group"
#define EASYLISTVIEW_HEADER_CLIPFORMAT L"EasyListview.Header"
extern DELPHI_PACKAGE Easylistview__621 EASYLISTSTYLETEXTS;
extern DELPHI_PACKAGE Easylistview__721 EASYSORTALGORITHMS;
#define HEADERSUPPORTEDVIEWS (System::Set<TEasyListStyle, TEasyListStyle::elsIcon, TEasyListStyle::elsGrid>() << TEasyListStyle::elsReport << TEasyListStyle::elsReportThumb << TEasyListStyle::elsGrid )
#define VERTICALVIEWS (System::Set<TEasyListStyle, TEasyListStyle::elsIcon, TEasyListStyle::elsGrid>() << TEasyListStyle::elsIcon << TEasyListStyle::elsSmallIcon << TEasyListStyle::elsReport << TEasyListStyle::elsThumbnail << TEasyListStyle::elsTile << TEasyListStyle::elsReportThumb << TEasyListStyle::elsGrid )
#define THUMBNAILVIEWS (System::Set<TEasyListStyle, TEasyListStyle::elsIcon, TEasyListStyle::elsGrid>() << TEasyListStyle::elsThumbnail << TEasyListStyle::elsReportThumb << TEasyListStyle::elsFilmStrip )
#define MULTILINEVIEWS (System::Set<TEasyListStyle, TEasyListStyle::elsIcon, TEasyListStyle::elsGrid>() << TEasyListStyle::elsIcon << TEasyListStyle::elsThumbnail << TEasyListStyle::elsTile << TEasyListStyle::elsFilmStrip )
#define REPORT_THUMB_SCALING  (1.500000E+00)
extern DELPHI_PACKAGE TEasyAlphaBlender* AlphaBlender;
extern DELPHI_PACKAGE tagFORMATETC __fastcall HeaderClipFormat(void);
extern DELPHI_PACKAGE void __fastcall FillStringsWithEasyListStyles(System::Classes::TStrings* Strings);
extern DELPHI_PACKAGE void __fastcall FillStringsWithEasySortAlgorithms(System::Classes::TStrings* Strings);
}	/* namespace Easylistview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EASYLISTVIEW)
using namespace Easylistview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EasylistviewHPP
