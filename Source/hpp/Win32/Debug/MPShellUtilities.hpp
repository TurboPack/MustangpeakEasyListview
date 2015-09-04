// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'MPShellUtilities.pas' rev: 30.00 (Windows)

#ifndef MpshellutilitiesHPP
#define MpshellutilitiesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ImgList.hpp>
#include <Winapi.ShlObj.hpp>
#include <Winapi.ShellAPI.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Win.Registry.hpp>
#include <MPShellTypes.hpp>
#include <MPCommonObjects.hpp>
#include <MPCommonUtilities.hpp>
#include <MPThreadManager.hpp>
#include <MPResources.hpp>
#include <MPDataObject.hpp>
#include <System.Variants.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.Menus.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mpshellutilities
{
//-- forward type declarations -----------------------------------------------
struct TCategoryInfo;
struct TCategoriesInfo;
struct TDetailsOfCacheRec;
struct TCacheData;
struct TShellCacheRec;
struct TSHGetFileInfoRec;
class DELPHICLASS EVSTInvalidFileName;
class DELPHICLASS EWow64RevertException;
class DELPHICLASS TStreamableClass;
class DELPHICLASS TStreamableList;
class DELPHICLASS TColumnItem;
class DELPHICLASS TColumnMap;
class DELPHICLASS TReferenceCounted;
class DELPHICLASS TReferenceCountedList;
class DELPHICLASS TExtractImage;
class DELPHICLASS TVirtualShellLink;
class DELPHICLASS TShellSortHelper;
class DELPHICLASS TNamespace;
class DELPHICLASS TVirtualNameSpaceList;
struct TMenuItemLink;
class DELPHICLASS TMenuItemMap;
class DELPHICLASS TCommonShellContextMenu;
class DELPHICLASS TCommonShellBackgroundContextMenu;
class DELPHICLASS TCommonShellMultiParentContextMenu;
class DELPHICLASS TExplorerThreadInstance;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::WideString, 5> Mpshellutilities__1;

typedef System::StaticArray<System::WideString, 8> Mpshellutilities__2;

enum DECLSPEC_DENUM TMPFileAction : unsigned char { mpfaCopy, mpfaMove, mpfaDelete };

typedef System::StaticArray<int, 37> TColumnWidthArray;

typedef TColumnWidthArray *PColumnWidthArray;

enum DECLSPEC_DENUM TExecuteVerbShift : unsigned char { evsCurrent, evsUp, evsDown };

enum DECLSPEC_DENUM TDefaultFolderIcon : unsigned char { diNormalFolder, diOpenFolder, diUnknownFile, diLink, diMyDocuments };

enum DECLSPEC_DENUM TMPBrowseFlag : unsigned char { mpbfComputers, mpbfPrinters, mpbfDontGoBelowDomain, mpbfFileSysAncestors, mpbfFileSysFolder, mpbfIncludeFiles, mpbfNewStyleDialog, mpbfEditBox, mpbfIncludeURLs, mpbfSharable, mpbfMustExist };

typedef System::Set<TMPBrowseFlag, TMPBrowseFlag::mpbfComputers, TMPBrowseFlag::mpbfMustExist> TMPBrowseFlags;

enum DECLSPEC_DENUM TNamespaceState : unsigned char { nsFreePIDLOnDestroy, nsIsRecycleBin, nsRecycleBinChecked, nsOwnsParent, nsShellDetailsSupported, nsShellFolder2Supported, nsShellOverlaySupported, nsThreadedIconLoaded, nsThreadedIconLoading, nsThreadedImageLoaded, nsThreadedImageLoading, nsThreadedImageResizing, nsThreadedTileInfoLoaded, nsThreadedTileInfoLoading, nsIconIndexChanged };

typedef System::Set<TNamespaceState, TNamespaceState::nsFreePIDLOnDestroy, TNamespaceState::nsIconIndexChanged> TNamespaceStates;

typedef HRESULT __stdcall (*TSHLimitInputEdit)(HWND hWndEdit, _di_IShellFolder psf);

typedef Mpshelltypes::_di_IShellDetailsBCB6 IVETShellDetails;

enum DECLSPEC_DENUM Mpshellutilities__3 : unsigned char { scInFolderName, scNormalName, scParsedName, scSmallIcon, scSmallOpenIcon, scOverlayIndex, scCreationTime, scLastAccessTime, scLastWriteTime, scFileSize, scFileSizeKB, scFileSizeInt64, scFileType, scInvalidIDListData, scFileSystem, scFolder, scCanDelete, scCanRename, scGhosted, scCanCopy, scCanMove, scCanLink, scLink, scFileSysAncestor, scCompressed, scFileTimes, scSupportedColumns, scFolderSize, scDetailsOfCache, scBrowsable, scInLibrary };

typedef System::Set<Mpshellutilities__3, Mpshellutilities__3::scInFolderName, Mpshellutilities__3::scInLibrary> TShellCache;

enum DECLSPEC_DENUM Mpshellutilities__4 : unsigned char { caFileSystem, caFolder, caCanDelete, caCanRename, caGhosted, caCanCopy, caCanMove, caCanLink, caLink, caFileSysAncestor, caCompressed, caVirtualHook, caHookedNamespace, caVirtualNamespace, caRootVirtualNamespace, caHardHookedNamespace, caBrowsable, caInLibrary };

typedef System::Set<Mpshellutilities__4, Mpshellutilities__4::caFileSystem, Mpshellutilities__4::caInLibrary> TCacheAttributes;

enum DECLSPEC_DENUM TSHColumnState : unsigned char { csTypeString, csTypeInt, csTypeDate, csOnByDefault, csSlow, csExtended, csSecondaryUI, csHidden };

typedef System::Set<TSHColumnState, TSHColumnState::csTypeString, TSHColumnState::csHidden> TSHColumnStates;

enum DECLSPEC_DENUM THotKeyModifier : unsigned char { hkmAlt, hkmControl, hkmExtendedKey, hkmShift };

typedef System::Set<THotKeyModifier, THotKeyModifier::hkmAlt, THotKeyModifier::hkmShift> THotKeyModifiers;

enum DECLSPEC_DENUM TCmdShow : unsigned char { swHide, swMaximize, swMinimize, swRestore, swShow, swShowDefault, swShowMinimized, swShowMinNoActive, swShowNA, swShowNoActive, swShowNormal };

enum DECLSPEC_DENUM TIconSize : unsigned char { icSmall, icLarge };

enum DECLSPEC_DENUM TFileSort : unsigned char { fsFileType, fsFileExtension };

enum DECLSPEC_DENUM TObjectDescription : unsigned char { odError, odRootRegistered, odFile, odDirectory, odUnidentifiedFileItem, od35Floppy, od525Floppy, odRemovableDisk, odFixedDrive, odMappedDrive, odCDROMDrive, odRAMDisk, odUnidentifiedDevice, odNetworkDomain, odNetworkServer, odNetworkShare, odNetworkRestOfNet, odUnidentifiedNetwork, odComputerImaging, odComputerAudio, odShareDocuments };

enum DECLSPEC_DENUM TDetailsColumnTitleInfo : unsigned char { tiCenterAlign, tiLeftAlign, tiRightAlign, tiContainsImage };

enum DECLSPEC_DENUM Mpshellutilities__5 : unsigned char { foFolders, foNonFolders, foHidden, foShareable, foNetworkPrinters, foInitOnFirstNext, foStorage, foNavigationEnum, foFastItems, foFlatList, foEnableAsync, foIncludeSuperHidden };

typedef System::Set<Mpshellutilities__5, Mpshellutilities__5::foFolders, Mpshellutilities__5::foIncludeSuperHidden> TFileObjects;

typedef TFileObjects *PFileObjects;

typedef System::DynamicArray<Mpshelltypes::tagSHCOLUMNID> TSHColumnIDArray;

typedef System::DynamicArray<GUID> TGUIDArray;

typedef System::DynamicArray<System::WideString> TWideStringArray;

typedef System::DynamicArray<Mpshelltypes::_di_ICategorizer> TCategoryArray;

struct DECLSPEC_DRECORD TCategoryInfo
{
public:
	System::WideString Description;
	bool Collapsed;
	bool Hidden;
};


typedef System::DynamicArray<TCategoryInfo> TCategoryInfoArray;

typedef System::DynamicArray<bool> TBooleanArray;

struct DECLSPEC_DRECORD TCategoriesInfo
{
public:
	TSHColumnIDArray ColumnID;
	TGUIDArray CatGUID;
	TWideStringArray CategoryNames;
	TCategoryInfoArray Categories;
	TBooleanArray CanCatatorize;
	int DefaultColumn;
	int CategoryCount;
};


enum DECLSPEC_DENUM TBtyeSize : unsigned char { bsKiloBytes, bsMegaBytes, bsGigiBytes, bsTereBytes, bsCustom };

typedef System::DynamicArray<unsigned> TMenuItemIDArray;

typedef System::DynamicArray<System::Word> TVisibleColumnIndexArray;

enum DECLSPEC_DENUM TDetailsOfCacheFlag : unsigned char { docCaptionValid, docStatesValid, docThreadLoading, docThreadLoaded };

typedef System::Set<TDetailsOfCacheFlag, TDetailsOfCacheFlag::docCaptionValid, TDetailsOfCacheFlag::docThreadLoaded> TDetailsOfCacheFlags;

typedef TDetailsOfCacheRec *PDetailsOfCacheRec;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TDetailsOfCacheRec
{
public:
	TDetailsOfCacheFlags Cached;
	System::WideString Caption;
	TSHColumnStates States;
};
#pragma pack(pop)


typedef System::DynamicArray<TDetailsOfCacheRec> TDetailsOfCacheArray;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCacheData
{
public:
	TCacheAttributes Attributes;
	int SmallIcon;
	int SmallOpenIcon;
	System::WideString InFolderName;
	System::WideString NormalName;
	System::WideString ParsedName;
	System::WideString CreationTime;
	System::WideString LastAccessTime;
	System::WideString LastWriteTime;
	System::WideString FileSize;
	System::WideString FileSizeKB;
	System::WideString FileType;
	__int64 FileSizeInt64;
	int SupportedColumns;
	__int64 FolderSize;
	int OverlayIndex;
	int OverlayIconIndex;
	TDetailsOfCacheArray DetailsOfCache;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TShellCacheRec
{
public:
	TShellCache ShellCacheFlags;
	TCacheData Data;
};
#pragma pack(pop)


typedef TSHGetFileInfoRec *PSHGetFileInfoRec;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TSHGetFileInfoRec
{
public:
	System::WideString FileType;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TShellContextMenuFlag : unsigned char { cmfCanRename, cmfDefaultOnly, cmfExplore, cmfExtendedVerbs, cmfIncludeStatic, cmfItemMenu, cmfNoDefault, cmfNormal, cmfNoVerbs, cmfVerbsOnly };

typedef System::Set<TShellContextMenuFlag, TShellContextMenuFlag::cmfCanRename, TShellContextMenuFlag::cmfVerbsOnly> TShellContextMenuFlags;

typedef System::DynamicArray<TNamespace*> TNamespaceArray;

typedef void __fastcall (__closure *TCommonShellMenuEvent)(TCommonShellContextMenu* Sender);

typedef void __fastcall (__closure *TCommonShellMenuInvokeEvent)(TCommonShellContextMenu* Sender, Vcl::Menus::TMenuItem* MenuItem, Winapi::Shlobj::PCMInvokeCommandInfo InvokeInfo, bool &Handled);

typedef void __fastcall (__closure *TCommonShellMenuMergeEvent)(TCommonShellContextMenu* Sender, HMENU Menu, unsigned IndexMenu, unsigned &CmdFirst, unsigned CmdLast, TShellContextMenuFlags Flags);

typedef void __fastcall (__closure *TCommonShellMenuItemEvent)(TCommonShellContextMenu* Sender, _di_IShellFolder ShellFolder, _di_IDataObject DataObject, Mpshelltypes::PDFMICS DFMICS, bool &Handled);

typedef void __fastcall (__closure *TCommonShellMenuNewItemEvent)(TCommonShellContextMenu* Sender, TNamespace* NS);

typedef TCommonShellMenuItemEvent TCommonShellMenuCopyEvent;

typedef TCommonShellMenuItemEvent TCommonShellMenuCreateShortcutEvent;

typedef TCommonShellMenuItemEvent TCommonShellMenuCutEvent;

typedef TCommonShellMenuItemEvent TCommonShellMenuDeleteEvent;

typedef TCommonShellMenuItemEvent TCommonShellMenuNewFolderEvent;

typedef TCommonShellMenuItemEvent TCommonShellMenuPasteEvent;

typedef TCommonShellMenuItemEvent TCommonShellMenuPasteLinkEvent;

typedef TCommonShellMenuItemEvent TCommonShellMenuPasteShortCutEvent;

typedef TCommonShellMenuItemEvent TCommonShellMenuProperitesEvent;

typedef NativeInt __stdcall (*TSHShellFolderView_Message)(HWND hWndMain, unsigned uMsg, NativeInt lParm);

#pragma pack(push,4)
class PASCALIMPLEMENTATION EVSTInvalidFileName : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVSTInvalidFileName(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVSTInvalidFileName(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVSTInvalidFileName(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVSTInvalidFileName(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVSTInvalidFileName(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVSTInvalidFileName(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVSTInvalidFileName(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVSTInvalidFileName(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVSTInvalidFileName(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVSTInvalidFileName(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVSTInvalidFileName(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVSTInvalidFileName(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVSTInvalidFileName(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EWow64RevertException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EWow64RevertException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EWow64RevertException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EWow64RevertException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EWow64RevertException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EWow64RevertException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EWow64RevertException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EWow64RevertException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EWow64RevertException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EWow64RevertException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EWow64RevertException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EWow64RevertException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EWow64RevertException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EWow64RevertException(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TStreamableClass : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FStreamVersion;
	
public:
	__fastcall TStreamableClass(void);
	virtual void __fastcall LoadFromFile(System::WideString FileName, int Version = 0x0, bool ReadVerFromStream = false);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int Version = 0x0, bool ReadVerFromStream = false);
	virtual void __fastcall SaveToFile(System::WideString FileName, int Version = 0x0, bool ReadVerFromStream = false);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int Version = 0x0, bool WriteVerToStream = false);
	__property int StreamVersion = {read=FStreamVersion, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TStreamableClass(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TStreamableList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
private:
	int FStreamVersion;
	
public:
	__fastcall TStreamableList(void);
	virtual void __fastcall LoadFromFile(System::WideString FileName, int Version = 0x0, bool ReadVerFromStream = false);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S, int Version = 0x0, bool ReadVerFromStream = false);
	virtual void __fastcall SaveToFile(System::WideString FileName, int Version = 0x0, bool ReadVerFromStream = false);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S, int Version = 0x0, bool WriteVerToStream = false);
	__property int StreamVersion = {read=FStreamVersion, nodefault};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TStreamableList(void) { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TCommonFolderMapType : unsigned char { cftUnknown, cftFileSystem, cftMyComputer, cftNetwork, cftControlPanel };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TColumnItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::WideString FFriendlyName;
	System::WideString FGUID;
	Mpshelltypes::_tagpropertykey FKey;
	int FPosition;
	bool FVisible;
	int FWidth;
	TCommonFolderMapType FFolderType;
	System::WideString FFolderName;
	
public:
	__property System::WideString FolderName = {read=FFolderName, write=FFolderName};
	__property TCommonFolderMapType FolderType = {read=FFolderType, write=FFolderType, nodefault};
	__property System::WideString FriendlyName = {read=FFriendlyName, write=FFriendlyName};
	__property System::WideString GUID = {read=FGUID, write=FGUID};
	__property Mpshelltypes::_tagpropertykey Key = {read=FKey, write=FKey};
	__property int Position = {read=FPosition, write=FPosition, nodefault};
	__property bool Visible = {read=FVisible, write=FVisible, nodefault};
	__property int Width = {read=FWidth, write=FWidth, nodefault};
public:
	/* TObject.Create */ inline __fastcall TColumnItem(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TColumnItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TColumnMap : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TColumnItem* operator[](int Index) { return ColumnItem[Index]; }
	
private:
	System::Classes::TList* FList;
	TColumnItem* __fastcall GetColumnItem(int Index);
	int __fastcall GetCount(void);
	void __fastcall RestoreDefaultNamespaceColumnMap(System::WideString FolderName, TNamespace* ColumnNS, const TColumnWidthArray &ColumnWidths);
	void __fastcall SetColumnItem(int Index, TColumnItem* Value);
	
protected:
	int __fastcall DefaultControlPanelColumnWidth(int iColumn);
	int __fastcall DefaultFileSystemColumnWidth(int iColumn);
	int __fastcall DefaultMyComputerColumnWidth(int iColumn);
	int __fastcall DefaultNetworkColumnWidth(int iColumn);
	Mpshelltypes::_tagpropertykey __fastcall MapColumnToDefaultSCID(TCommonFolderMapType FolderType, int i);
	void __fastcall DefaultColumnWidth(TCommonFolderMapType FolderType, int i);
	void __fastcall ForceandLoadMapItem(TNamespace* FolderNS, const TColumnWidthArray &ColumnWidths, System::WideString FolderName, TCommonFolderMapType FolderType, int i, const Mpshelltypes::_tagpropertykey &Key);
	void __fastcall MimicColumnSCID(TNamespace* ColumnNS, const TColumnWidthArray &ColumnWidths, System::WideString FolderName, TCommonFolderMapType FolderType, int i, const Mpshelltypes::_tagpropertykey &Key);
	__property System::Classes::TList* List = {read=FList, write=FList};
	
public:
	__fastcall TColumnMap(void);
	__fastcall virtual ~TColumnMap(void);
	TColumnItem* __fastcall FindByColumnIndex(TNamespace* FolderNS, int iColumn);
	TColumnItem* __fastcall FindByPropertyKey(TNamespace* FolderNS, const Mpshelltypes::_tagpropertykey &Key);
	TCommonFolderMapType __fastcall MapNamespaceToFolderMapType(TNamespace* NS);
	void __fastcall Add(TColumnItem* Item);
	void __fastcall Clear(void);
	void __fastcall RestoreDefaults(void);
	void __fastcall Sort(void);
	__property TColumnItem* ColumnItem[int Index] = {read=GetColumnItem, write=SetColumnItem/*, default*/};
	__property int Count = {read=GetCount, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TReferenceCounted : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FRefCount;
	
public:
	void __fastcall AddRef(void);
	void __fastcall Release(void);
public:
	/* TObject.Create */ inline __fastcall TReferenceCounted(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TReferenceCounted(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TReferenceCountedList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
protected:
	int FRefCount;
	
public:
	void __fastcall AddRef(void);
	void __fastcall Release(void);
	__property int RefCount = {read=FRefCount, nodefault};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TReferenceCountedList(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TReferenceCountedList(void) : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TExtractImage : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	unsigned FFlags;
	unsigned FPriority;
	unsigned FHeight;
	unsigned FWidth;
	unsigned FColorDepth;
	Mpshelltypes::_di_IExtractImage FExtractImageInterface;
	Mpshelltypes::_di_IExtractImage2 FExtractImage2Interface;
	TNamespace* FOwner;
	bool FPathExtracted;
	Vcl::Graphics::TBitmap* __fastcall GetImage(void);
	System::WideString __fastcall GetImagePath(void);
	Mpshelltypes::_di_IExtractImage __fastcall GetExtractImageInterface(void);
	Mpshelltypes::_di_IExtractImage2 __fastcall GetExtractImageInterface2(void);
	
protected:
	__property bool PathExtracted = {read=FPathExtracted, write=FPathExtracted, nodefault};
	
public:
	__fastcall TExtractImage(void);
	__property unsigned ColorDepth = {read=FColorDepth, write=FColorDepth, nodefault};
	__property System::WideString ImagePath = {read=GetImagePath};
	__property Vcl::Graphics::TBitmap* Image = {read=GetImage};
	__property Mpshelltypes::_di_IExtractImage ExtractImageInterface = {read=GetExtractImageInterface};
	__property Mpshelltypes::_di_IExtractImage2 ExtractImage2Interface = {read=GetExtractImageInterface2};
	__property unsigned Flags = {read=FFlags, write=FFlags, nodefault};
	__property unsigned Height = {read=FHeight, write=FHeight, nodefault};
	__property TNamespace* Owner = {read=FOwner, write=FOwner};
	__property unsigned Priority = {read=FPriority, nodefault};
	__property unsigned Width = {read=FWidth, write=FWidth, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TExtractImage(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TVirtualShellLink : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::WideString FFileName;
	_di_IShellLinkA FShellLinkA;
	_di_IShellLinkW FShellLinkW;
	int FIconIndex;
	_ITEMIDLIST *FTargetIDList;
	TCmdShow FShowCmd;
	THotKeyModifiers FHotKeyModifiers;
	System::WideString FTargetPath;
	System::WideString FArguments;
	System::WideString FDescription;
	System::WideString FWorkingDirectory;
	System::WideString FIconLocation;
	System::Word FHotKey;
	bool FSilentWrite;
	_di_IShellLinkA __fastcall GetShellLinkAInterface(void);
	_di_IShellLinkW __fastcall GetShellLinkWInterface(void);
	
protected:
	void __fastcall FreeTargetIDList(void);
	
public:
	__fastcall virtual ~TVirtualShellLink(void);
	bool __fastcall ReadLink(System::WideString LinkFileName);
	bool __fastcall WriteLink(System::WideString LinkFileName);
	__property System::WideString Arguments = {read=FArguments, write=FArguments};
	__property System::WideString Description = {read=FDescription, write=FDescription};
	__property System::WideString FileName = {read=FFileName, write=FFileName};
	__property System::Word HotKey = {read=FHotKey, write=FHotKey, nodefault};
	__property THotKeyModifiers HotKeyModifiers = {read=FHotKeyModifiers, write=FHotKeyModifiers, nodefault};
	__property int IconIndex = {read=FIconIndex, write=FIconIndex, nodefault};
	__property System::WideString IconLocation = {read=FIconLocation, write=FIconLocation};
	__property Winapi::Shlobj::PItemIDList TargetIDList = {read=FTargetIDList, write=FTargetIDList};
	__property _di_IShellLinkA ShellLinkAInterface = {read=GetShellLinkAInterface};
	__property _di_IShellLinkW ShellLinkWInterface = {read=GetShellLinkWInterface};
	__property TCmdShow ShowCmd = {read=FShowCmd, write=FShowCmd, nodefault};
	__property bool SilentWrite = {read=FSilentWrite, write=FSilentWrite, nodefault};
	__property System::WideString TargetPath = {read=FTargetPath, write=FTargetPath};
	__property System::WideString WorkingDirectory = {read=FWorkingDirectory, write=FWorkingDirectory};
public:
	/* TComponent.Create */ inline __fastcall virtual TVirtualShellLink(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TShellSortHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TFileSort FFileSort;
	
public:
	virtual int __fastcall CompareIDSort(int SortColumn, TNamespace* NS1, TNamespace* NS2);
	virtual int __fastcall DiscriminateFolders(TNamespace* NS1, TNamespace* NS2);
	virtual int __fastcall SortFileSize(TNamespace* NS1, TNamespace* NS2);
	virtual int __fastcall SortFileTime(const _FILETIME &FT1, const _FILETIME &FT2, TNamespace* NS1, TNamespace* NS2);
	virtual int __fastcall SortString(System::WideString S1, System::WideString S2, TNamespace* NS1, TNamespace* NS2);
	virtual int __fastcall SortType(TNamespace* NS1, TNamespace* NS2);
	__property TFileSort FileSort = {read=FFileSort, write=FFileSort, nodefault};
public:
	/* TObject.Create */ inline __fastcall TShellSortHelper(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TShellSortHelper(void) { }
	
};

#pragma pack(pop)

typedef bool __fastcall (__closure *TEnumFolderCallback)(HWND MessageWnd, Winapi::Shlobj::PItemIDList APIDL, TNamespace* AParent, void * Data, bool &Terminate);

typedef void __fastcall (__closure *TContextMenuCmdCallback)(TNamespace* Namespace, System::WideString Verb, int MenuItemID, bool &Handled);

typedef void __fastcall (__closure *TContextMenuShowCallback)(TNamespace* Namespace, HMENU Menu, bool &Allow);

typedef void __fastcall (__closure *TContextMenuAfterCmdCallback)(TNamespace* Namespace, System::WideString Verb, int MenuItemID, bool Successful);

class PASCALIMPLEMENTATION TNamespace : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	_ITEMIDLIST *FAbsolutePIDL;
	TCategoriesInfo FCatInfo;
	Mpshelltypes::_di_IContextMenu FCurrentContextMenu;
	Mpshelltypes::_di_IContextMenu2 FCurrentContextMenu2;
	TNamespace* FDelagateNS;
	_di_IDropTarget FDropTargetInterface;
	TExtractImage* FExtractImage;
	int FIconCache;
	Vcl::Graphics::TBitmap* FImage;
	int FNamespaceID;
	System::Classes::TWndMethod FOldWndProcForContextMenu;
	TNamespace* FParent;
	Mpshelltypes::_di_IPropertyStore FPropertyStoreInterface;
	_ITEMIDLIST *FRelativePIDL;
	Mpshelltypes::_di_IShellDetailsBCB6 FShellDetailsInterface;
	_di_IShellFolder FShellFolder;
	_di_IShellFolder2 FShellFolder2;
	_di_IShellIcon FShellIconInterface;
	TVirtualShellLink* FShellLink;
	TSHGetFileInfoRec *FSHGetFileInfoRec;
	TNamespaceStates FStates;
	int FTag;
	Mpcommonutilities::TCommonIntegerDynArray FTileDetail;
	_di_IQueryInfo FQueryInfoInterface;
	_WIN32_FIND_DATAA *FWin32FindDataA;
	_WIN32_FIND_DATAW *FWin32FindDataW;
	bool FSystemIsSuperHidden;
	Mpshelltypes::_di_IShellIconOverlay FShellIconOverlayInterface;
	Mpshelltypes::_di_ICategoryProvider FCategoryProviderInterface;
	Mpshelltypes::_di_IBrowserFrameOptions FBrowserFrameOptionsInterface;
	Mpshelltypes::_di_IQueryAssociations FQueryAssociationsInterface;
	int __fastcall GetCategoryCount(void);
	Mpshelltypes::_di_IContextMenu __fastcall GetCurrentContextMenu(void);
	Mpshelltypes::_di_IContextMenu2 __fastcall GetCurrentContextMenu2(void);
	TNamespace* __fastcall GetDelagateNS(void);
	bool __fastcall GetIsLibraryChild(void);
	bool __fastcall GetJunctionPoint(void);
	System::WideString __fastcall GetJunctionPointResolvePath(void);
	TNamespace* __fastcall GetParent(void);
	Mpshelltypes::_di_IPropertyStore __fastcall GetPropertyStoreInterface(void);
	bool __fastcall GetSymbolicLink(void);
	System::WideString __fastcall GetSymbolicLinkResolvePath(void);
	void __fastcall SetCurrentContextMenu(const Mpshelltypes::_di_IContextMenu Value);
	void __fastcall SetCurrentContextMenu2(const Mpshelltypes::_di_IContextMenu2 Value);
	
protected:
	TShellCacheRec FShellCache;
	bool __fastcall DelegateNamespace(void);
	virtual bool __fastcall GetArchive(void);
	virtual System::WideString __fastcall GetAttributesString(void);
	virtual bool __fastcall GetBrowsable(void);
	virtual Mpshelltypes::_di_IBrowserFrameOptions __fastcall GetBrowserFrameOptionsInterface(void);
	virtual bool __fastcall GetCanCopy(void);
	virtual bool __fastcall GetCanDelete(void);
	virtual bool __fastcall GetCanLink(void);
	virtual bool __fastcall GetCanMoniker(void);
	virtual bool __fastcall GetCanMove(void);
	virtual bool __fastcall GetCanRename(void);
	virtual Mpshelltypes::_di_ICategoryProvider __fastcall GetCategoryProviderInterface(void);
	virtual GUID __fastcall GetCLSID(void);
	virtual bool __fastcall GetCompressed(void);
	virtual Mpshelltypes::_di_IContextMenu2 __fastcall GetContextMenu2Interface(void);
	virtual Mpshelltypes::_di_IContextMenu3 __fastcall GetContextMenu3Interface(void);
	virtual Mpshelltypes::_di_IContextMenu __fastcall GetContextMenuInterface(void);
	virtual System::TDateTime __fastcall GetCreationDateTime(void);
	virtual System::WideString __fastcall GetCreationTime(void);
	virtual _FILETIME __fastcall GetCreationTimeRaw(void);
	virtual _di_IDataObject __fastcall GetDataObjectInterface(void);
	virtual TObjectDescription __fastcall GetDescription(void);
	virtual bool __fastcall GetDetailsSupported(void);
	virtual bool __fastcall GetDirectory(void);
	virtual bool __fastcall GetDropTarget(void);
	virtual _di_IDropTarget __fastcall GetDropTargetInterface(void);
	virtual bool __fastcall GetEncrypted(void);
	virtual System::WideString __fastcall GetExtension(void);
	virtual _di_IExtractIconA __fastcall GetExtractIconAInterface(void);
	virtual _di_IExtractIconW __fastcall GetExtractIconWInterface(void);
	virtual TExtractImage* __fastcall GetExtractImage(void);
	virtual System::WideString __fastcall GetFileName(void);
	virtual bool __fastcall GetFileSysAncestor(void);
	virtual bool __fastcall GetFileSystem(void);
	virtual System::WideString __fastcall GetFileType(void);
	virtual bool __fastcall GetFolder(void);
	virtual bool __fastcall GetFreePIDLOnDestroy(void);
	virtual bool __fastcall GetGhosted(void);
	virtual bool __fastcall GetHasPropSheet(void);
	virtual bool __fastcall GetHasStorage(void);
	virtual bool __fastcall GetHasSubFolder(void);
	virtual bool __fastcall GetHidden(void);
	virtual bool __fastcall GetIconIndexChanged(void);
	virtual System::WideString __fastcall GetInfoTip(void);
	virtual bool __fastcall GetIsSlow(void);
	virtual System::TDateTime __fastcall GetLastAccessDateTime(void);
	virtual System::WideString __fastcall GetLastAccessTime(void);
	virtual _FILETIME __fastcall GetLastAccessTimeRaw(void);
	virtual System::TDateTime __fastcall GetLastWriteDateTime(void);
	virtual System::WideString __fastcall GetLastWriteTime(void);
	virtual _FILETIME __fastcall GetLastWriteTimeRaw(void);
	virtual bool __fastcall GetLink(void);
	virtual System::WideString __fastcall GetNameAddressbar(void);
	virtual System::WideString __fastcall GetNameAddressbarInFolder(void);
	virtual System::WideString __fastcall GetNameForEditing(void);
	virtual System::WideString __fastcall GetNameForEditingInFolder(void);
	virtual System::WideString __fastcall GetNameForParsing(void);
	virtual System::WideString __fastcall GetNameForParsingInFolder(void);
	virtual System::WideString __fastcall GetNameInFolder(void);
	virtual System::WideString __fastcall GetNameNormal(void);
	virtual System::WideString __fastcall GetNameParseAddress(void);
	virtual System::WideString __fastcall GetNameParseAddressInFolder(void);
	virtual bool __fastcall GetNewContent(void);
	virtual bool __fastcall GetNonEnumerated(void);
	virtual bool __fastcall GetNormal(void);
	virtual bool __fastcall GetOffLine(void);
	virtual int __fastcall GetOverlayIconIndex(void);
	virtual int __fastcall GetOverlayIndex(void);
	virtual Mpshelltypes::_di_IShellDetailsBCB6 __fastcall GetParentShellDetailsInterface(void);
	virtual _di_IShellFolder __fastcall GetParentShellFolder(void);
	virtual _di_IShellFolder2 __fastcall GetParentShellFolder2(void);
	virtual Mpshelltypes::_di_IQueryAssociations __fastcall GetQueryAssociationsInterface(void);
	virtual _di_IQueryInfo __fastcall GetQueryInfoInterface(void);
	virtual bool __fastcall GetReadOnly(void);
	virtual bool __fastcall GetReadOnlyFile(void);
	virtual bool __fastcall GetReparsePoint(void);
	virtual bool __fastcall GetRemovable(void);
	virtual bool __fastcall GetShare(void);
	virtual Mpshelltypes::_di_IShellDetailsBCB6 __fastcall GetShellDetailsInterface(void);
	virtual _di_IShellFolder __fastcall GetShellFolder(void);
	virtual _di_IShellFolder2 __fastcall GetShellFolder2(void);
	virtual _di_IShellIcon __fastcall GetShellIconInterface(void);
	virtual Mpshelltypes::_di_IShellIconOverlay __fastcall GetShellIconOverlayInterface(void);
	virtual TVirtualShellLink* __fastcall GetShellLink(void);
	virtual System::WideString __fastcall GetShortFileName(void);
	virtual System::WideString __fastcall GetSizeOfFile(void);
	virtual System::WideString __fastcall GetSizeOfFileDiskUsage(void);
	virtual __int64 __fastcall GetSizeOfFileInt64(void);
	virtual System::WideString __fastcall GetSizeOfFileKB(void);
	virtual bool __fastcall GetSparseFile(void);
	virtual bool __fastcall GetStorage(void);
	virtual bool __fastcall GetStorageAncestor(void);
	virtual bool __fastcall GetStream(void);
	virtual bool __fastcall GetSubFolders(void);
	virtual bool __fastcall GetSubItems(void);
	virtual bool __fastcall GetSystem(void);
	virtual bool __fastcall GetTemporary(void);
	virtual bool __fastcall GetThreadedDetailLoaded(int ColumnIndex);
	virtual bool __fastcall GetThreadedDetailLoading(int ColumnIndex);
	virtual bool __fastcall GetThreadedIconLoaded(void);
	virtual bool __fastcall GetThreadedImageLoaded(void);
	virtual bool __fastcall GetThreadedImageLoading(void);
	virtual bool __fastcall GetThreadIconLoading(void);
	virtual bool __fastcall GetValid(void);
	HWND __fastcall ParentWnd(void);
	void __fastcall EnsureDetailCache(void);
	void __fastcall ExecuteContextMenuVerbMultiPath(Vcl::Controls::TWinControl* Owner, System::WideString Verb, TNamespaceArray Namespaces, TExecuteVerbShift ShiftKeyState = (TExecuteVerbShift)(0x0));
	void __fastcall LoadCategoryInfo(void);
	virtual void __fastcall SetFreePIDLOnDestroy(const bool Value);
	virtual void __fastcall SetIconIndexChanged(const bool Value);
	virtual void __fastcall SetThreadedDetailLoaded(int ColumnIndex, bool Value);
	virtual void __fastcall SetThreadedDetailLoading(int ColumnIndex, bool Value);
	virtual void __fastcall SetThreadIconLoading(const bool Value);
	virtual void __fastcall SetThreadImageLoading(const bool Value);
	Mpshelltypes::_di_ICategorizer __fastcall CreateCategory(const GUID &GUID);
	bool __fastcall EnumFuncDummy(HWND MessageWnd, Winapi::Shlobj::PItemIDList APIDL, TNamespace* AParent, void * Data, bool &Terminate);
	System::WideString __fastcall ExplorerStyleAttributeStringList(bool CapitalLetters);
	System::WideString __fastcall DisplayNameOf(unsigned Flags);
	void __fastcall GetDataFromIDList(void);
	void __fastcall GetFileTimes(void);
	void __fastcall GetSHFileInfo(void);
	TMenuItemIDArray __fastcall InjectCustomSubMenu(HMENU Menu, System::UnicodeString Caption, Vcl::Menus::TPopupMenu* PopupMenu, HMENU &SubMenu);
	Mpshelltypes::_di_IContextMenu __fastcall InternalGetContextMenuInterface(Mpcommonobjects::TPIDLArray PIDLArray);
	_di_IDataObject __fastcall InternalGetDataObjectInterface(Mpcommonobjects::TPIDLArray PIDLArray);
	bool __fastcall InternalShowContextMenu(Vcl::Controls::TWinControl* Owner, TContextMenuCmdCallback ContextMenuCmdCallback, TContextMenuShowCallback ContextMenuShowCallback, TContextMenuAfterCmdCallback ContextMenuAfterCmdCallback, Mpcommonobjects::TPIDLArray PIDLArray, System::Types::PPoint Position, Vcl::Menus::TPopupMenu* CustomShellSubMenu, System::WideString CustomSubMenuCaption);
	bool __fastcall InternalSubItems(unsigned Flags);
	void __fastcall ReplacePIDL(Winapi::Shlobj::PItemIDList NewPIDL, TNamespace* AParent);
	bool __fastcall ShowContextMenuMultiPath(Vcl::Controls::TWinControl* Owner, TNamespace* Focused, TNamespaceArray Namespaces, bool ShowPasteItem, bool ShowRenameItem, bool ShowShortCutMenuItem, System::Types::PPoint Position = (System::Types::PPoint)(0x0));
	void __fastcall WindowProcForContextMenu(Winapi::Messages::TMessage &Message);
	__property TCategoriesInfo CatInfo = {read=FCatInfo, write=FCatInfo};
	__property Mpshelltypes::_di_IContextMenu CurrentContextMenu = {read=GetCurrentContextMenu, write=SetCurrentContextMenu};
	__property Mpshelltypes::_di_IContextMenu2 CurrentContextMenu2 = {read=GetCurrentContextMenu2, write=SetCurrentContextMenu2};
	__property TShellCacheRec ShellCache = {read=FShellCache, write=FShellCache};
	__property bool SystemIsSuperHidden = {read=FSystemIsSuperHidden, write=FSystemIsSuperHidden, nodefault};
	
public:
	__fastcall TNamespace(Winapi::Shlobj::PItemIDList PIDL, TNamespace* AParent);
	__fastcall virtual ~TNamespace(void);
	__fastcall virtual TNamespace(int CustomID, TNamespace* AParent);
	__fastcall virtual TNamespace(System::WideString FileName);
	virtual bool __fastcall CanCopyAll(TNamespaceArray NamespaceArray);
	virtual bool __fastcall CanCutAll(TNamespaceArray NamespaceArray);
	virtual bool __fastcall CanDeleteAll(TNamespaceArray NamespaceArray);
	virtual bool __fastcall CanPasteToAll(TNamespaceArray NamespaceArray);
	virtual bool __fastcall CanRenameAll(TNamespaceArray NamespaceArray);
	virtual bool __fastcall CanShowPropertiesOfAll(TNamespaceArray NamespaceArray);
	virtual TNamespace* __fastcall Clone(bool ReleasePIDLOnDestroy);
	virtual System::Int8 __fastcall ComparePIDL(Winapi::Shlobj::PItemIDList PIDLToCompare, bool IsAbsolutePIDL, int Column = 0x0);
	virtual System::WideString __fastcall ContextMenuItemHelp(unsigned MenuItemID);
	virtual System::WideString __fastcall ContextMenuVerb(unsigned MenuItemID);
	virtual bool __fastcall Copy(Vcl::Controls::TWinControl* Owner, TNamespaceArray NamespaceArray);
	virtual bool __fastcall Cut(Vcl::Controls::TWinControl* Owner, TNamespaceArray NamespaceArray);
	virtual _di_IDataObject __fastcall DataObjectMulti(TNamespaceArray NamespaceArray);
	virtual bool __fastcall Delete(Vcl::Controls::TWinControl* Owner, TNamespaceArray NamespaceArray, TExecuteVerbShift ShiftKeyState = (TExecuteVerbShift)(0x0));
	virtual System::Classes::TAlignment __fastcall DetailsAlignment(int ColumnIndex);
	virtual System::WideString __fastcall DetailsColumnTitle(int ColumnIndex);
	virtual System::WideString __fastcall DetailsDefaultColumnTitle(int ColumnIndex);
	virtual System::WideString __fastcall DetailsDefaultOf(int ColumnIndex);
	virtual int __fastcall DetailsDefaultSupportedColumns(void);
	virtual TSHColumnStates __fastcall DetailsGetDefaultColumnState(int ColumnIndex);
	virtual System::WideString __fastcall DetailsOf(int ColumnIndex);
	virtual System::WideString __fastcall DetailsOfEx(int ColumnIndex);
	virtual int __fastcall DetailsSupportedColumns(void);
	virtual TVisibleColumnIndexArray __fastcall DetailsSupportedVisibleColumns(void);
	virtual bool __fastcall DetailsValidIndex(int DetailsIndex);
	virtual HRESULT __fastcall DragEffect(int grfKeyState);
	virtual HRESULT __fastcall DragEnter(const _di_IDataObject dataObj, int grfKeyState, const System::Types::TPoint &pt, int &dwEffect);
	virtual HRESULT __fastcall DragLeave(void);
	virtual HRESULT __fastcall DragOver(int grfKeyState, const System::Types::TPoint &pt, int &dwEffect);
	virtual HRESULT __fastcall Drop(const _di_IDataObject dataObj, int grfKeyState, const System::Types::TPoint &pt, int &dwEffect);
	virtual int __fastcall EnumerateFolder(HWND MessageWnd, bool Folders, bool NonFolders, bool IncludeHidden, TEnumFolderCallback EnumFunc, void * UserData);
	virtual int __fastcall EnumerateFolderEx(HWND MessageWnd, TFileObjects FileObjects, TEnumFolderCallback EnumFunc, void * UserData, System::Classes::TNotifyEvent AfterValidEnumIDList = 0x0);
	virtual bool __fastcall ExecuteContextMenuVerb(Vcl::Controls::TWinControl* Owner, System::WideString AVerb, Mpcommonobjects::TPIDLArray APIDLArray, TExecuteVerbShift ShiftKeyState = (TExecuteVerbShift)(0x0), System::WideString WorkingDir = System::WideString());
	virtual __int64 __fastcall FolderSize(bool Invalidate, bool RecurseFolder = false);
	virtual int __fastcall GetIconIndex(bool OpenIcon, TIconSize IconSize, bool ForceLoad = true);
	virtual Vcl::Graphics::TBitmap* __fastcall GetImage(void);
	bool __fastcall VerifyPIDLRelationship(TNamespaceArray NamespaceArray, bool Silent = false);
	virtual void __fastcall HandleContextMenuMsg(int Msg, int wParam, int lParam, NativeInt &Result);
	virtual void __fastcall InvalidateCache(void);
	void __fastcall InvalidateDetailsOfCache(bool FlushStrings);
	virtual void __fastcall InvalidateNamespace(bool RefreshIcon = true);
	virtual void __fastcall InvalidateRelativePIDL(TFileObjects FileObjects);
	virtual void __fastcall InvalidateThumbImage(void);
	virtual bool __fastcall IsChildByNamespace(TNamespace* TestNamespace, bool Immediate);
	virtual bool __fastcall IsChildByPIDL(Winapi::Shlobj::PItemIDList TestPIDL, bool Immediate);
	virtual bool __fastcall IsChildOfRemovableDrive(void);
	virtual bool __fastcall IsControlPanel(void);
	virtual bool __fastcall IsControlPanelChildFolder(void);
	virtual bool __fastcall IsDesktop(void);
	virtual bool __fastcall IsMyComputer(void);
	virtual bool __fastcall IsNetworkNeighborhood(void);
	virtual bool __fastcall IsNetworkNeighborhoodChild(void);
	virtual bool __fastcall IsParentByNamespace(TNamespace* TestNamespace, bool Immediate);
	virtual bool __fastcall IsParentByPIDL(Winapi::Shlobj::PItemIDList TestPIDL, bool Immediate);
	bool __fastcall IsRecycleBin(void);
	virtual bool __fastcall OkToBrowse(bool ShowExplorerMsg);
	virtual Winapi::Shlobj::PItemIDList __fastcall ParseDisplayName(void)/* overload */;
	virtual Winapi::Shlobj::PItemIDList __fastcall ParseDisplayName(System::WideString Path)/* overload */;
	virtual bool __fastcall Paste(Vcl::Controls::TWinControl* Owner, TNamespaceArray NamespaceArray, bool AsShortCut = false);
	void __fastcall SetDetailByThread(int ColumnIndex, System::WideString Detail);
	virtual void __fastcall SetIconIndexByThread(int IconIndex, int OverlayIndex, bool ClearThreadLoading);
	virtual void __fastcall SetImageByThread(Vcl::Graphics::TBitmap* Bitmap, bool ClearThreadLoading);
	virtual bool __fastcall SetNameOf(System::WideString NewName);
	virtual bool __fastcall ShellExecuteNamespace(System::WideString WorkingDir, System::WideString CmdLineArguments, bool ExecuteFolder = false, bool ExecuteFolderShortCut = false, bool RunInThread = false);
	virtual bool __fastcall ShowContextMenu(Vcl::Controls::TWinControl* Owner, TContextMenuCmdCallback ContextMenuCmdCallback, TContextMenuShowCallback ContextMenuShowCallback, TContextMenuAfterCmdCallback ContextMenuAfterCmdCallback, System::Types::PPoint Position = (System::Types::PPoint)(0x0), Vcl::Menus::TPopupMenu* CustomShellSubMenu = (Vcl::Menus::TPopupMenu*)(0x0), System::WideString CustomSubMenuCaption = System::WideString());
	virtual bool __fastcall ShowContextMenuMulti(Vcl::Controls::TWinControl* Owner, TContextMenuCmdCallback ContextMenuCmdCallback, TContextMenuShowCallback ContextMenuShowCallback, TContextMenuAfterCmdCallback ContextMenuAfterCmdCallback, TNamespaceArray NamespaceArray, System::Types::PPoint Position = (System::Types::PPoint)(0x0), Vcl::Menus::TPopupMenu* CustomShellSubMenu = (Vcl::Menus::TPopupMenu*)(0x0), System::WideString CustomSubMenuCaption = System::WideString(), TNamespace* Focused = (TNamespace*)(0x0), bool ShowPasteItem = false, bool ShowRenameItem = false, bool ShowShortCutMenuItem = false);
	virtual void __fastcall ShowPropertySheet(Vcl::Controls::TWinControl* Owner);
	virtual void __fastcall ShowPropertySheetMulti(Vcl::Controls::TWinControl* Owner, TNamespaceArray NamespaceArray, bool UseSHMultiFileProperties = true, bool ForceNonMultiPath = false);
	virtual bool __fastcall SubFoldersEx(unsigned Flags = (unsigned)(0x20));
	virtual bool __fastcall SubItemsEx(unsigned Flags = (unsigned)(0x40));
	virtual bool __fastcall TestAttributesOf(unsigned Flags, bool FlushCache, bool SoftFlush = false);
	__property Winapi::Shlobj::PItemIDList AbsolutePIDL = {read=FAbsolutePIDL, write=FAbsolutePIDL};
	__property bool AdvDetailsSupported = {read=GetDetailsSupported, nodefault};
	__property bool Browsable = {read=GetBrowsable, nodefault};
	__property Mpshelltypes::_di_IBrowserFrameOptions BrowserFrameOptionsInterface = {read=GetBrowserFrameOptionsInterface};
	__property bool CanCopy = {read=GetCanCopy, nodefault};
	__property bool CanDelete = {read=GetCanDelete, nodefault};
	__property bool CanLink = {read=GetCanLink, nodefault};
	__property bool CanMoniker = {read=GetCanMoniker, nodefault};
	__property bool CanMove = {read=GetCanMove, nodefault};
	__property bool CanRename = {read=GetCanRename, nodefault};
	__property int CategoryCount = {read=GetCategoryCount, nodefault};
	__property Mpshelltypes::_di_ICategoryProvider CategoryProviderInterface = {read=GetCategoryProviderInterface};
	__property GUID CLSID = {read=GetCLSID};
	__property Mpshelltypes::_di_IContextMenu ContextMenuInterface = {read=GetContextMenuInterface};
	__property Mpshelltypes::_di_IContextMenu2 ContextMenu2Interface = {read=GetContextMenu2Interface};
	__property Mpshelltypes::_di_IContextMenu3 ContextMenu3Interface = {read=GetContextMenu3Interface};
	__property _di_IDataObject DataObjectInterface = {read=GetDataObjectInterface};
	__property TNamespace* DelagateNS = {read=GetDelagateNS};
	__property TObjectDescription Description = {read=GetDescription, nodefault};
	__property bool DropTarget = {read=GetDropTarget, nodefault};
	__property _di_IDropTarget DropTargetInterface = {read=GetDropTargetInterface};
	__property bool Encrypted = {read=GetEncrypted, nodefault};
	__property TExtractImage* ExtractImage = {read=GetExtractImage};
	__property _di_IExtractIconA ExtractIconAInterface = {read=GetExtractIconAInterface};
	__property _di_IExtractIconW ExtractIconWInterface = {read=GetExtractIconWInterface};
	__property bool FileSystem = {read=GetFileSystem, nodefault};
	__property bool FileSysAncestor = {read=GetFileSysAncestor, nodefault};
	__property bool Folder = {read=GetFolder, nodefault};
	__property bool FreePIDLOnDestroy = {read=GetFreePIDLOnDestroy, write=SetFreePIDLOnDestroy, nodefault};
	__property bool Ghosted = {read=GetGhosted, nodefault};
	__property bool HasPropSheet = {read=GetHasPropSheet, nodefault};
	__property bool HasStorage = {read=GetHasStorage, nodefault};
	__property bool HasSubFolder = {read=GetHasSubFolder, nodefault};
	__property int IconCache = {read=FIconCache, write=FIconCache, nodefault};
	__property bool IconIndexChanged = {read=GetIconIndexChanged, write=SetIconIndexChanged, nodefault};
	__property bool IsLibraryChild = {read=GetIsLibraryChild, nodefault};
	__property bool IsSlow = {read=GetIsSlow, nodefault};
	__property bool JunctionPoint = {read=GetJunctionPoint, nodefault};
	__property System::WideString JunctionPointResolvePath = {read=GetJunctionPointResolvePath};
	__property bool Link = {read=GetLink, nodefault};
	__property System::WideString InfoTip = {read=GetInfoTip};
	__property System::WideString NameAddressbar = {read=GetNameAddressbar};
	__property System::WideString NameAddressbarInFolder = {read=GetNameAddressbarInFolder};
	__property System::WideString NameForEditing = {read=GetNameForEditing};
	__property System::WideString NameForEditingInFolder = {read=GetNameForEditingInFolder};
	__property System::WideString NameForParsing = {read=GetNameForParsing};
	__property System::WideString NameForParsingInFolder = {read=GetNameForParsingInFolder};
	__property System::WideString NameInFolder = {read=GetNameInFolder};
	__property System::WideString NameNormal = {read=GetNameNormal};
	__property System::WideString NameParseAddress = {read=GetNameParseAddress};
	__property System::WideString NameParseAddressInFolder = {read=GetNameParseAddressInFolder};
	__property int NamespaceID = {read=FNamespaceID, nodefault};
	__property bool NewContent = {read=GetNewContent, nodefault};
	__property bool NonEnumerated = {read=GetNonEnumerated, nodefault};
	__property TNamespace* Parent = {read=GetParent};
	__property _di_IShellFolder ParentShellFolder = {read=GetParentShellFolder};
	__property _di_IShellFolder2 ParentShellFolder2 = {read=GetParentShellFolder2};
	__property Mpshelltypes::_di_IShellDetailsBCB6 ParentShellDetailsInterface = {read=GetParentShellDetailsInterface};
	__property Mpshelltypes::_di_IPropertyStore PropertyStoreInterface = {read=GetPropertyStoreInterface};
	__property Mpshelltypes::_di_IQueryAssociations QueryAssociationsInterface = {read=GetQueryAssociationsInterface};
	__property bool ReadOnly = {read=GetReadOnly, nodefault};
	__property Winapi::Shlobj::PItemIDList RelativePIDL = {read=FRelativePIDL};
	__property bool Removable = {read=GetRemovable, nodefault};
	__property bool Share = {read=GetShare, nodefault};
	__property _di_IShellFolder ShellFolder = {read=GetShellFolder};
	__property _di_IShellFolder2 ShellFolder2 = {read=GetShellFolder2};
	__property Mpshelltypes::_di_IShellDetailsBCB6 ShellDetailsInterface = {read=GetShellDetailsInterface};
	__property TVirtualShellLink* ShellLink = {read=GetShellLink};
	__property _di_IShellIcon ShellIconInterface = {read=GetShellIconInterface};
	__property Mpshelltypes::_di_IShellIconOverlay ShellIconOverlayInterface = {read=GetShellIconOverlayInterface};
	__property System::WideString ShortFileName = {read=GetShortFileName};
	__property bool SparseFile = {read=GetSparseFile, nodefault};
	__property TNamespaceStates States = {read=FStates, write=FStates, nodefault};
	__property bool Storage = {read=GetStorage, nodefault};
	__property bool StorageAncestor = {read=GetStorageAncestor, nodefault};
	__property bool Stream = {read=GetStream, nodefault};
	__property bool SubFolders = {read=GetSubFolders, nodefault};
	__property bool SubItems = {read=GetSubItems, nodefault};
	__property bool SymbolicLink = {read=GetSymbolicLink, nodefault};
	__property System::WideString SymbolicLinkResolvePath = {read=GetSymbolicLinkResolvePath};
	__property int Tag = {read=FTag, write=FTag, nodefault};
	__property bool ThreadedDetailLoaded[int Column] = {read=GetThreadedDetailLoaded, write=SetThreadedDetailLoaded};
	__property bool ThreadedDetailLoading[int Column] = {read=GetThreadedDetailLoading, write=SetThreadedDetailLoading};
	__property bool ThreadedIconLoaded = {read=GetThreadedIconLoaded, nodefault};
	__property bool ThreadIconLoading = {read=GetThreadIconLoading, write=SetThreadIconLoading, nodefault};
	__property bool ThreadImageLoaded = {read=GetThreadedImageLoaded, nodefault};
	__property bool ThreadImageLoading = {read=GetThreadedImageLoading, write=SetThreadImageLoading, nodefault};
	__property Mpcommonutilities::TCommonIntegerDynArray TileDetail = {read=FTileDetail, write=FTileDetail};
	__property _di_IQueryInfo QueryInfoInterface = {read=GetQueryInfoInterface};
	__property Winapi::Windows::PWin32FindDataA Win32FindDataA = {read=FWin32FindDataA};
	__property Winapi::Windows::PWin32FindDataW Win32FindDataW = {read=FWin32FindDataW};
	__property System::WideString AttributesString = {read=GetAttributesString};
	__property bool Archive = {read=GetArchive, nodefault};
	__property bool Compressed = {read=GetCompressed, nodefault};
	__property System::WideString CreationTime = {read=GetCreationTime};
	__property System::TDateTime CreationDateTime = {read=GetCreationDateTime};
	__property _FILETIME CreationTimeRaw = {read=GetCreationTimeRaw};
	__property bool Directory = {read=GetDirectory, nodefault};
	__property System::WideString Extension = {read=GetExtension};
	__property System::WideString FileName = {read=GetFileName};
	__property System::WideString FileType = {read=GetFileType};
	__property bool Hidden = {read=GetHidden, nodefault};
	__property System::WideString LastAccessTime = {read=GetLastAccessTime};
	__property System::TDateTime LastAccessDateTime = {read=GetLastAccessDateTime};
	__property _FILETIME LastAccessTimeRaw = {read=GetLastAccessTimeRaw};
	__property System::WideString LastWriteTime = {read=GetLastWriteTime};
	__property System::TDateTime LastWriteDateTime = {read=GetLastWriteDateTime};
	__property _FILETIME LastWriteTimeRaw = {read=GetLastWriteTimeRaw};
	__property bool Normal = {read=GetNormal, nodefault};
	__property bool OffLine = {read=GetOffLine, nodefault};
	__property int OverlayIndex = {read=GetOverlayIndex, nodefault};
	__property int OverlayIconIndex = {read=GetOverlayIconIndex, nodefault};
	__property bool ReadOnlyFile = {read=GetReadOnlyFile, nodefault};
	__property bool ReparsePoint = {read=GetReparsePoint, nodefault};
	__property System::WideString SizeOfFile = {read=GetSizeOfFile};
	__property __int64 SizeOfFileInt64 = {read=GetSizeOfFileInt64};
	__property System::WideString SizeOfFileKB = {read=GetSizeOfFileKB};
	__property System::WideString SizeOfFileDiskUsage = {read=GetSizeOfFileDiskUsage};
	__property bool SystemFile = {read=GetSystem, nodefault};
	__property bool Temporary = {read=GetTemporary, nodefault};
	__property bool Valid = {read=GetValid, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TVirtualNameSpaceList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TNamespace* operator[](int Index) { return Items[Index]; }
	
private:
	TNamespace* __fastcall GetItems(int Index);
	void __fastcall SetItems(int Index, TNamespace* ANamespace);
	
public:
	HIDESBASE int __fastcall Add(TNamespace* ANamespace);
	void __fastcall FillArray(TNamespaceArray &NamespaceArray);
	HIDESBASE int __fastcall IndexOf(TNamespace* ANamespace);
	HIDESBASE void __fastcall Insert(int Index, TNamespace* ANamespace);
	__property TNamespace* Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
public:
	/* TObjectList.Create */ inline __fastcall TVirtualNameSpaceList(void)/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TVirtualNameSpaceList(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TVirtualNameSpaceList(void) { }
	
};

#pragma pack(pop)

typedef TMenuItemLink *PMenuItemLink;

struct DECLSPEC_DRECORD TMenuItemLink
{
public:
	unsigned MenuID;
	Vcl::Menus::TMenuItem* Item;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TMenuItemMap : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	PMenuItemLink operator[](int Index) { return Items[Index]; }
	
protected:
	HIDESBASE PMenuItemLink __fastcall Get(int Index);
	HIDESBASE void __fastcall Put(int Index, PMenuItemLink Item);
	
public:
	HIDESBASE PMenuItemLink __fastcall Add(void);
	HIDESBASE PMenuItemLink __fastcall First(void);
	HIDESBASE int __fastcall IndexOf(PMenuItemLink Item);
	virtual void __fastcall Clear(void);
	HIDESBASE PMenuItemLink __fastcall Insert(int Index);
	HIDESBASE PMenuItemLink __fastcall Last(void);
	HIDESBASE int __fastcall Remove(PMenuItemLink Item);
	__property PMenuItemLink Items[int Index] = {read=Get, write=Put/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TMenuItemMap(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TMenuItemMap(void) : System::Classes::TList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCommonShellContextMenu : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	_di_IShellFolder FActiveFolder;
	Mpcommonobjects::TCommonPIDLList* FActivePIDLs;
	bool FCopyValidated;
	Mpshelltypes::_di_IContextMenu FCurrentContextMenu;
	Mpshelltypes::_di_IContextMenu2 FCurrentContextMenu2;
	bool FCutValidated;
	bool FDeleteValidated;
	Mpcommonobjects::TCommonShellContextMenuExtensions FExtensions;
	bool FFromDesktop;
	TNamespace* FLocalFocused;
	TNamespaceArray FLocalNamespaces;
	TMenuItemMap* FMenuMap;
	Vcl::Controls::TWinControl* FMsgWnd;
	System::Classes::TWndMethod FOldWndProcForContextMenu;
	System::Classes::TStringList* FKeyStrings;
	TCommonShellMenuEvent FOnHide;
	TCommonShellMenuInvokeEvent FOnInvokeCommand;
	TCommonShellMenuMergeEvent FOnMenuMerge;
	TCommonShellMenuMergeEvent FOnMenuMergeBottom;
	TCommonShellMenuMergeEvent FOnMenuMergeTop;
	TCommonShellMenuItemEvent FOnShellMenuCopy;
	TCommonShellMenuItemEvent FOnShellMenuCreateShortcut;
	TCommonShellMenuItemEvent FOnShellMenuCut;
	TCommonShellMenuItemEvent FOnShellMenuDelete;
	TCommonShellMenuItemEvent FOnShellMenuNewFolder;
	TCommonShellMenuItemEvent FOnShellMenuPaste;
	TCommonShellMenuItemEvent FOnShellMenuPasteLink;
	TCommonShellMenuItemEvent FOnShellMenuPasteShortCut;
	TCommonShellMenuItemEvent FOnShellMenuProperites;
	TCommonShellMenuEvent FOnShow;
	int FRefCount;
	bool FReferenceCounted;
	bool FRenameMenuItem;
	bool FShortCutMenuItem;
	Mpcommonutilities::_di_ICallbackStub FStub;
	bool FPasteMenuItem;
	_di_IDataObject FUIObjectOfDataObject;
	_di_IDropTarget FUIObjectOfDropTarget;
	
protected:
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	HIDESBASE int __stdcall _AddRef(void);
	HIDESBASE int __stdcall _Release(void);
	HRESULT __stdcall ParseDisplayName(HWND hwndOwner, void * pbcReserved, System::WideChar * lpszDisplayName, /* out */ unsigned &pchEaten, /* out */ Winapi::Shlobj::PItemIDList &ppidl, unsigned &dwAttributes);
	HRESULT __stdcall EnumObjects(HWND hwndOwner, unsigned grfFlags, /* out */ _di_IEnumIDList &EnumIDList);
	HRESULT __stdcall BindToObject(Winapi::Shlobj::PItemIDList pidl, void * pbcReserved, const GUID &riid, /* out */ void *ppvOut);
	HRESULT __stdcall BindToStorage(Winapi::Shlobj::PItemIDList pidl, void * pbcReserved, const GUID &riid, /* out */ void *ppvObj);
	HRESULT __stdcall CompareIDs(NativeInt lParam, Winapi::Shlobj::PItemIDList pidl1, Winapi::Shlobj::PItemIDList pidl2);
	HRESULT __stdcall CreateViewObject(HWND hwndOwner, const GUID &riid, /* out */ void *ppvOut);
	HRESULT __stdcall GetAttributesOf(unsigned cidl, Winapi::Shlobj::PItemIDList &apidl, unsigned &rgfInOut);
	HRESULT __stdcall GetUIObjectOf(HWND hwndOwner, unsigned cidl, Winapi::Shlobj::PItemIDList &apidl, const GUID &riid, void * prgfInOut, /* out */ void *ppvOut);
	HRESULT __stdcall GetDisplayNameOf(Winapi::Shlobj::PItemIDList pidl, unsigned uFlags, _STRRET &lpName);
	HRESULT __stdcall SetNameOf(HWND hwndOwner, Winapi::Shlobj::PItemIDList pidl, System::WideChar * lpszName, unsigned uFlags, Winapi::Shlobj::PItemIDList &ppidlOut);
	HRESULT __stdcall DragEnter(const _di_IDataObject dataObj, int grfKeyState, const System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DragOver(int grfKeyState, const System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DragLeave(void);
	HRESULT __stdcall Drop(const _di_IDataObject dataObj, int grfKeyState, const System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DefMenuCreateCallback(const _di_IShellFolder psf, HWND wnd, const _di_IDataObject pdtObj, unsigned uMsg, NativeUInt WParm, NativeInt lParm);
	void __fastcall AddMenuKey(System::WideString Key);
	void __fastcall AddMenuKeys(System::Classes::TStringList* Keys);
	void __fastcall ClearKeys(void);
	virtual void __fastcall DoCopy(_di_IShellFolder ShellFolder, _di_IDataObject DataObject, Mpshelltypes::PDFMICS DFMICS, bool &DoDefault);
	virtual void __fastcall DoCreateShortCut(_di_IShellFolder ShellFolder, _di_IDataObject DataObject, Mpshelltypes::PDFMICS DFMICS, bool &DoDefault);
	virtual void __fastcall DoCut(_di_IShellFolder ShellFolder, _di_IDataObject DataObject, Mpshelltypes::PDFMICS DFMICS, bool &DoDefault);
	virtual void __fastcall DoDelete(_di_IShellFolder ShellFolder, _di_IDataObject DataObject, Mpshelltypes::PDFMICS DFMICS, bool &DoDefault);
	virtual void __fastcall DoHide(void);
	virtual void __fastcall DoInvokeCommand(Vcl::Menus::TMenuItem* MenuItem, Winapi::Shlobj::PCMInvokeCommandInfo InvokeInfo);
	virtual void __fastcall DoMenuMerge(HMENU Menu, unsigned IndexMenu, unsigned &CmdFirst, unsigned CmdLast, TShellContextMenuFlags Flags);
	virtual void __fastcall DoMenuMergeBottom(HMENU Menu, unsigned IndexMenu, unsigned &CmdFirst, unsigned CmdLast, TShellContextMenuFlags Flags);
	virtual void __fastcall DoMenuMergeTop(HMENU Menu, unsigned IndexMenu, unsigned &CmdFirst, unsigned CmdLast, TShellContextMenuFlags Flags);
	virtual void __fastcall DoNewFolder(_di_IShellFolder ShellFolder, _di_IDataObject DataObject, Mpshelltypes::PDFMICS DFMICS, bool &DoDefault);
	virtual void __fastcall DoPaste(_di_IShellFolder ShellFolder, _di_IDataObject DataObject, Mpshelltypes::PDFMICS DFMICS, bool &DoDefault);
	virtual void __fastcall DoPasteLink(_di_IShellFolder ShellFolder, _di_IDataObject DataObject, Mpshelltypes::PDFMICS DFMICS, bool &DoDefault);
	virtual void __fastcall DoPasteShortCut(_di_IShellFolder ShellFolder, _di_IDataObject DataObject, Mpshelltypes::PDFMICS DFMICS, bool &DoDefault);
	virtual void __fastcall DoProperties(_di_IShellFolder ShellFolder, _di_IDataObject DataObject, Mpshelltypes::PDFMICS DFMICS, bool &DoDefault);
	virtual void __fastcall DoShow(void);
	HKEY __fastcall DuplicateKey(HKEY Key);
	bool __fastcall FindCommandId(unsigned CmdID, Vcl::Menus::TMenuItem* &MenuItem);
	void __stdcall HandleContextMenuMsg(int Msg, int wParam, int lParam, NativeInt &Result);
	bool __fastcall InternalShowContextMenu(Vcl::Controls::TWinControl* Owner, Winapi::Shlobj::PItemIDList ParentPIDL, Mpcommonobjects::TPIDLArray ChildPIDLs, System::WideString Verb, System::Types::PPoint Position = (System::Types::PPoint)(0x0), TExecuteVerbShift ShiftKeyState = (TExecuteVerbShift)(0x0));
	void __fastcall LoadMultiFolderPIDLArray(TNamespaceArray Namespaces, Mpcommonobjects::TPIDLArray &PIDLs);
	virtual void __fastcall LoadRegistryKeyStrings(TNamespace* Focused) = 0 ;
	void __fastcall WindowProcForContextMenu(Winapi::Messages::TMessage &Message);
	__property _di_IShellFolder ActiveFolder = {read=FActiveFolder, write=FActiveFolder};
	__property Mpcommonobjects::TCommonPIDLList* ActivePIDLs = {read=FActivePIDLs, write=FActivePIDLs};
	__property bool CopyValidated = {read=FCopyValidated, write=FCopyValidated, nodefault};
	__property Mpshelltypes::_di_IContextMenu2 CurrentContextMenu2 = {read=FCurrentContextMenu2, write=FCurrentContextMenu2};
	__property Mpshelltypes::_di_IContextMenu CurrentContextMenu = {read=FCurrentContextMenu, write=FCurrentContextMenu};
	__property bool CutValidated = {read=FCutValidated, write=FCutValidated, nodefault};
	__property Mpcommonobjects::TCommonShellContextMenuExtensions Extensions = {read=FExtensions, write=FExtensions, nodefault};
	__property bool FromDesktop = {read=FFromDesktop, write=FFromDesktop, nodefault};
	__property System::Classes::TStringList* KeyStrings = {read=FKeyStrings, write=FKeyStrings};
	__property TNamespace* LocalFocused = {read=FLocalFocused, write=FLocalFocused};
	__property TNamespaceArray LocalNamespaces = {read=FLocalNamespaces, write=FLocalNamespaces};
	__property TMenuItemMap* MenuMap = {read=FMenuMap, write=FMenuMap};
	__property Vcl::Controls::TWinControl* MsgWnd = {read=FMsgWnd, write=FMsgWnd};
	__property TCommonShellMenuEvent OnHide = {read=FOnHide, write=FOnHide};
	__property TCommonShellMenuInvokeEvent OnInvokeCommand = {read=FOnInvokeCommand, write=FOnInvokeCommand};
	__property TCommonShellMenuMergeEvent OnMenuMerge = {read=FOnMenuMerge, write=FOnMenuMerge};
	__property TCommonShellMenuMergeEvent OnMenuMergeBottom = {read=FOnMenuMergeBottom, write=FOnMenuMergeBottom};
	__property TCommonShellMenuMergeEvent OnMenuMergeTop = {read=FOnMenuMergeTop, write=FOnMenuMergeTop};
	__property TCommonShellMenuItemEvent OnShellMenuCopy = {read=FOnShellMenuCopy, write=FOnShellMenuCopy};
	__property TCommonShellMenuItemEvent OnShellMenuCreateShortCut = {read=FOnShellMenuCreateShortcut, write=FOnShellMenuCreateShortcut};
	__property TCommonShellMenuItemEvent OnShellMenuCut = {read=FOnShellMenuCut, write=FOnShellMenuCut};
	__property TCommonShellMenuItemEvent OnShellMenuDelete = {read=FOnShellMenuDelete, write=FOnShellMenuDelete};
	__property TCommonShellMenuItemEvent OnShellMenuNewFolder = {read=FOnShellMenuNewFolder, write=FOnShellMenuNewFolder};
	__property TCommonShellMenuItemEvent OnShellMenuPaste = {read=FOnShellMenuPaste, write=FOnShellMenuPaste};
	__property TCommonShellMenuItemEvent OnShellMenuPasteLink = {read=FOnShellMenuPasteLink, write=FOnShellMenuPasteLink};
	__property TCommonShellMenuItemEvent OnShellMenuPasteShortCut = {read=FOnShellMenuPasteShortCut, write=FOnShellMenuPasteShortCut};
	__property TCommonShellMenuItemEvent OnShellMenuProperites = {read=FOnShellMenuProperites, write=FOnShellMenuProperites};
	__property TCommonShellMenuEvent OnShow = {read=FOnShow, write=FOnShow};
	__property int RefCount = {read=FRefCount, write=FRefCount, nodefault};
	__property bool ShortCutMenuItem = {read=FShortCutMenuItem, write=FShortCutMenuItem, default=1};
	__property Mpcommonutilities::_di_ICallbackStub Stub = {read=FStub, write=FStub};
	__property bool RenameMenuItem = {read=FRenameMenuItem, write=FRenameMenuItem, default=1};
	__property bool PasteMenuItem = {read=FPasteMenuItem, write=FPasteMenuItem, default=1};
	__property _di_IDataObject UIObjectOfDataObject = {read=FUIObjectOfDataObject, write=FUIObjectOfDataObject};
	__property _di_IDropTarget UIObjectOfDropTarget = {read=FUIObjectOfDropTarget, write=FUIObjectOfDropTarget};
	
public:
	__fastcall virtual TCommonShellContextMenu(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCommonShellContextMenu(void);
	int __fastcall MergeMenuIntoContextMenu(Vcl::Menus::TPopupMenu* Menu, HMENU ContextMenu, int Index, unsigned idStart);
	void __fastcall ClearMenuMap(void);
	__property bool DeleteValidated = {read=FDeleteValidated, write=FDeleteValidated, nodefault};
	__property bool ReferenceCounted = {read=FReferenceCounted, write=FReferenceCounted, nodefault};
private:
	void *__IDropTarget;	// IDropTarget 
	void *__IShellFolder;	// IShellFolder 
	
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {000214E6-0000-0000-C000-000000000046}
	operator _di_IShellFolder()
	{
		_di_IShellFolder intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IShellFolder*(void) { return (IShellFolder*)&__IShellFolder; }
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
	operator System::IInterface*(void) { return (System::IInterface*)&__IDropTarget; }
	#endif
	
};


class PASCALIMPLEMENTATION TCommonShellBackgroundContextMenu : public TCommonShellContextMenu
{
	typedef TCommonShellContextMenu inherited;
	
private:
	bool FAutoDetectNewItem;
	Mpcommonobjects::TCommonPIDLList* FFinalItemList;
	Mpcommonobjects::TCommonPIDLList* FInitialItemList;
	TCommonShellMenuNewItemEvent FOnNewItem;
	Vcl::Menus::TMenuItem* FPaste;
	Vcl::Menus::TMenuItem* FPasteShortCut;
	Vcl::Menus::TPopupMenu* FPopupMenuProperties;
	Vcl::Menus::TPopupMenu* FPopupMenuPaste;
	Vcl::Menus::TPopupMenu* FPopupMenuPasteShortCut;
	Vcl::Menus::TMenuItem* FProperties;
	bool FShowPasteItem;
	bool FShowPasteShortCutItem;
	bool FShowPropertiesItem;
	
protected:
	void __fastcall ClickPaste(System::TObject* Sender);
	void __fastcall ClickPasteShortCut(System::TObject* Sender);
	void __fastcall ClickProperties(System::TObject* Sender);
	virtual void __fastcall DoHide(void);
	virtual void __fastcall DoMenuMerge(HMENU Menu, unsigned IndexMenu, unsigned &CmdFirst, unsigned CmdLast, TShellContextMenuFlags Flags);
	virtual void __fastcall DoMenuMergeBottom(HMENU Menu, unsigned IndexMenu, unsigned &CmdFirst, unsigned CmdLast, TShellContextMenuFlags Flags);
	virtual void __fastcall DoMenuMergeTop(HMENU Menu, unsigned IndexMenu, unsigned &CmdFirst, unsigned CmdLast, TShellContextMenuFlags Flags);
	virtual void __fastcall DoNewItem(TNamespace* NS);
	virtual void __fastcall DoShow(void);
	virtual void __fastcall LoadRegistryKeyStrings(TNamespace* Focused);
	__property Mpcommonobjects::TCommonPIDLList* FinalItemList = {read=FFinalItemList, write=FFinalItemList};
	__property Mpcommonobjects::TCommonPIDLList* InitialItemList = {read=FInitialItemList, write=FInitialItemList};
	__property Vcl::Menus::TMenuItem* Paste = {read=FPaste, write=FPaste};
	__property Vcl::Menus::TMenuItem* PasteShortCut = {read=FPasteShortCut, write=FPasteShortCut};
	__property Vcl::Menus::TPopupMenu* PopupMenuProperties = {read=FPopupMenuProperties, write=FPopupMenuProperties};
	__property Vcl::Menus::TPopupMenu* PopupMenuPaste = {read=FPopupMenuPaste, write=FPopupMenuPaste};
	__property Vcl::Menus::TPopupMenu* PopupMenuPasteShortCut = {read=FPopupMenuPasteShortCut, write=FPopupMenuPasteShortCut};
	__property Vcl::Menus::TMenuItem* Properties = {read=FProperties, write=FProperties};
	__property RenameMenuItem = {default=0};
	__property PasteMenuItem = {default=0};
	
public:
	__fastcall virtual TCommonShellBackgroundContextMenu(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCommonShellBackgroundContextMenu(void);
	bool __fastcall EnumCallback(HWND MessageWnd, Winapi::Shlobj::PItemIDList APIDL, TNamespace* AParent, void * Data, bool &Terminate);
	virtual bool __fastcall ShowContextMenu(Vcl::Controls::TWinControl* Owner, TNamespace* Root, System::Types::PPoint Position = (System::Types::PPoint)(0x0));
	
__published:
	__property bool AutoDetectNewItem = {read=FAutoDetectNewItem, write=FAutoDetectNewItem, nodefault};
	__property OnHide;
	__property OnInvokeCommand;
	__property OnMenuMerge;
	__property OnMenuMergeBottom;
	__property OnMenuMergeTop;
	__property TCommonShellMenuNewItemEvent OnNewItem = {read=FOnNewItem, write=FOnNewItem};
	__property OnShow;
	__property bool ShowPasteItem = {read=FShowPasteItem, write=FShowPasteItem, default=1};
	__property bool ShowPasteShortCutItem = {read=FShowPasteShortCutItem, write=FShowPasteShortCutItem, default=1};
	__property bool ShowPropertiesItem = {read=FShowPropertiesItem, write=FShowPropertiesItem, default=1};
};


class PASCALIMPLEMENTATION TCommonShellMultiParentContextMenu : public TCommonShellContextMenu
{
	typedef TCommonShellContextMenu inherited;
	
protected:
	virtual void __fastcall LoadRegistryKeyStrings(TNamespace* Focused);
	
public:
	virtual bool __fastcall ExecuteContextMenuVerb(Vcl::Controls::TWinControl* Owner, TNamespaceArray Namespaces, System::UnicodeString Verb, TExecuteVerbShift ShiftKeyState = (TExecuteVerbShift)(0x0));
	virtual bool __fastcall ShowContextMenu(Vcl::Controls::TWinControl* Owner, TNamespace* Focused, TNamespaceArray Namespaces, System::Types::PPoint Position = (System::Types::PPoint)(0x0));
	
__published:
	__property OnHide;
	__property OnShellMenuCopy;
	__property OnShellMenuCreateShortCut;
	__property OnShellMenuCut;
	__property OnShellMenuDelete;
	__property OnShellMenuNewFolder;
	__property OnShellMenuPaste;
	__property OnShellMenuPasteLink;
	__property OnShellMenuPasteShortCut;
	__property OnShellMenuProperites;
	__property ShortCutMenuItem = {default=1};
	__property RenameMenuItem = {default=1};
	__property PasteMenuItem = {default=1};
	__property OnShow;
public:
	/* TCommonShellContextMenu.Create */ inline __fastcall virtual TCommonShellMultiParentContextMenu(System::Classes::TComponent* AOwner) : TCommonShellContextMenu(AOwner) { }
	/* TCommonShellContextMenu.Destroy */ inline __fastcall virtual ~TCommonShellMultiParentContextMenu(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TExplorerThreadInstance : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FMaxRef;
	int FRefCount;
	
public:
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef(void);
	int __stdcall _Release(void);
	__property int MaxRef = {read=FMaxRef, nodefault};
	__property int RefCount = {read=FRefCount, write=FRefCount, nodefault};
public:
	/* TObject.Create */ inline __fastcall TExplorerThreadInstance(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TExplorerThreadInstance(void) { }
	
private:
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TVirtualExplorerTextColor : unsigned char { vetcEncrypted, vetcCompressed, vetcFile, vetcFolder };

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 VET_DEFAULT_COLUMN_ARRAY_WIDTH = System::Int8(0x25);
extern DELPHI_PACKAGE Mpshellutilities__1 COMMON_FOLDERTYPE_STRING;
#define ID_DEFAULT_FILESYSTEM_COLUMNS L"{C5A439E7-960A-495D-AE85-D7662508ACF2}"
#define ID_DEFAULT_MYCOMPUTER_COLUMNS L"{19748E93-57DA-4DDB-A80E-C797D178EDCE}"
#define ID_DEFAULT_NETWORK_COLUMNS L"{98990F23-9B5D-43A6-9840-40411462028B}"
#define ID_DEFAULT_CONTROLPANEL_COLUMNS L"{08312F91-C1B0-4DAA-89F4-CEB331C21010}"
extern DELPHI_PACKAGE GUID SCID_DEFAULT_FILESYSTEM_COLUMNS;
extern DELPHI_PACKAGE GUID SCID_DEFAULT_MYCOMPUTER_COLUMNS;
extern DELPHI_PACKAGE GUID SCID_DEFAULT_NETWORK_COLUMNS;
extern DELPHI_PACKAGE GUID SCID_DEFAULT_CONTROLPANEL_COLUMNS;
#define PATH_CONTROLPANEL L"::{26EE0668-A00A-44D7-9371-BEB064C98683}"
#define PATH_NETWORK L"::"
extern DELPHI_PACKAGE Mpshellutilities__2 ILLEGAL_FILENAME_CHARS;
static const System::WideChar STR_ILLEGAL_FILENAME_CHAR_REPLACEMENT_CHAR = (System::WideChar)(0x2d);
static const System::Int8 DefaultDetailColumns = System::Int8(0x5);
static const System::Int8 ID_TIMER_NOTIFY = System::Int8(0x64);
static const System::Int8 ID_TIMER_ENUMBKGND = System::Int8(0x65);
static const System::Int8 ID_TIMER_AUTOSCROLL = System::Int8(0x66);
static const System::Int8 ID_TIMER_SHELLNOTIFY = System::Int8(0x67);
static const System::Int8 SHORTCUT_ICON_INDEX = System::Int8(0x1d);
static const System::Int8 SHELL_NAMESPACE_ID = System::Int8(-1);
static const System::Word SHGDN_FOREDITING = System::Word(0x1000);
static const System::Word DEFAULTPIDLARRAYSIZE = System::Word(0x2000);
static const System::Int8 STREAM_VERSION_DEFAULT = System::Int8(-1);
#define STR_IMAGE_THREAD_EVENT L"jdkImageThreadEvent"
static const System::Byte VET_DEFAULT_COLUMNWIDTH = System::Byte(0xb4);
extern DELPHI_PACKAGE TColumnWidthArray VET_DEFAULT_COLUMNWIDTHS;
extern DELPHI_PACKAGE System::StaticArray<int, 4> VET_DEFAULT_DRIVES_COLUMNWIDTHS;
extern DELPHI_PACKAGE System::StaticArray<int, 2> VET_DEFAULT_CONTROLPANEL_COLUMNWIDTHS;
extern DELPHI_PACKAGE System::StaticArray<int, 1> VET_DEFAULT_CONTROLPANELEX_COLUMNWIDTHS;
extern DELPHI_PACKAGE System::StaticArray<int, 2> VET_DEFAULT_NETWORK_COLUMNWIDTHS;
#define MYCOMPUTER_NSE_PATH L"\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\"\
	L"MyComputer\\NameSpace\\"
static const System::Uitypes::TColor clExplorerCompressed = System::Uitypes::TColor(255);
static const System::Uitypes::TColor clExplorerEncrypted = System::Uitypes::TColor(32832);
static const int clExplorerFolder = int(-16777208);
static const int clExplorerFile = int(-16777208);
extern DELPHI_PACKAGE Mpcommonobjects::TCommonPIDLManager* PIDLMgr;
extern DELPHI_PACKAGE TNamespace* GamesFolder;
extern DELPHI_PACKAGE TNamespace* DesktopFolder;
extern DELPHI_PACKAGE TNamespace* RecycleBinFolder;
extern DELPHI_PACKAGE TNamespace* PhysicalDesktopFolder;
extern DELPHI_PACKAGE TNamespace* DrivesFolder;
extern DELPHI_PACKAGE TNamespace* HistoryFolder;
extern DELPHI_PACKAGE TNamespace* PrinterFolder;
extern DELPHI_PACKAGE TNamespace* ControlPanelFolder;
extern DELPHI_PACKAGE TNamespace* ControlPanelFolderEx;
extern DELPHI_PACKAGE TNamespace* NetworkNeighborHoodFolder;
extern DELPHI_PACKAGE TNamespace* TemplatesFolder;
extern DELPHI_PACKAGE TNamespace* MyDocumentsFolder;
extern DELPHI_PACKAGE TNamespace* FavoritesFolder;
extern DELPHI_PACKAGE TNamespace* ProgramFilesFolder;
extern DELPHI_PACKAGE TNamespace* UserDocumentsFolder;
extern DELPHI_PACKAGE TNamespace* UserLibraryFolder;
extern DELPHI_PACKAGE TSHLimitInputEdit SHLimitInputEdit;
extern DELPHI_PACKAGE TColumnWidthArray VET_ColumnWidths;
extern DELPHI_PACKAGE TSHShellFolderView_Message SHShellFolderView_Message;
extern DELPHI_PACKAGE TExplorerThreadInstance* ExplorerThreadInstance;
extern DELPHI_PACKAGE System::WordBool __stdcall (*AnimateWindow)(HWND Wnd, unsigned dwTime, unsigned dwFlags);
extern DELPHI_PACKAGE bool MP_UseModalDialogs;
extern DELPHI_PACKAGE bool MP_UseSpecialReparsePointOverlay;
extern DELPHI_PACKAGE bool MP_ThreadedShellExecute;
extern DELPHI_PACKAGE Mpshelltypes::TSHSetThreadRef MP_SHSetThreadRef;
extern DELPHI_PACKAGE Mpshelltypes::TSHGetThreadRef MP_SHGetThreadRef;
extern DELPHI_PACKAGE Mpshelltypes::TSHCreateThread MP_SHCreateThread;
extern DELPHI_PACKAGE Mpshelltypes::TSHCreateThreadRef MP_SHCreateThreadRef;
extern DELPHI_PACKAGE Mpshelltypes::TSHReleaseThreadRef MP_SHReleaseThreadRef;
extern DELPHI_PACKAGE Mpshelltypes::TSHSetInstanceExplorer MP_SHSetInstanceExplorer;
extern DELPHI_PACKAGE Mpshelltypes::TSHGetInstanceExplorer MP_SHGetInstanceExplorer;
extern DELPHI_PACKAGE Mpshelltypes::TWNetGetResourceInformationA MP_WNetGetResourceInformationA;
extern DELPHI_PACKAGE Mpshelltypes::TWNetGetResourceInformationW MP_WNetGetResourceInformationW;
extern DELPHI_PACKAGE HWND GlobalParentWnd;
extern DELPHI_PACKAGE void * __fastcall Wow64RedirectDisable(void);
extern DELPHI_PACKAGE void __fastcall Wow64RedirectRevert(void * OldWow64);
extern DELPHI_PACKAGE void __fastcall ValidateFileObjects(TFileObjects &FileObjects);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall ExplorerTextColor(TVirtualExplorerTextColor TextColor);
extern DELPHI_PACKAGE bool __fastcall DeleteFiles_MP(_di_IDataObject DataObject, HWND ParentWnd, bool AllowUndo, bool MultiFolderSource);
extern DELPHI_PACKAGE void __fastcall SaveDefaultColumnWidths(System::Classes::TStream* S);
extern DELPHI_PACKAGE void __fastcall LoadDefaultColumnWidths(System::Classes::TStream* S);
extern DELPHI_PACKAGE void __fastcall RestoreDefaultColumnWidths(void);
extern DELPHI_PACKAGE System::WideChar * __fastcall StringListToNullSeparatedDoubleNullEndedString(System::Classes::TStringList* StringList);
extern DELPHI_PACKAGE bool __fastcall PIDLIsFolder(Winapi::Shlobj::PItemIDList APIDL);
extern DELPHI_PACKAGE bool __fastcall SpecialVariableReplacePath(System::WideString &Path);
extern DELPHI_PACKAGE bool __fastcall IsSpecialVariable(System::WideString TestPath, TNamespace* &NS);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GUIDToInterfaceStr(const GUID &riid);
extern DELPHI_PACKAGE TShellContextMenuFlags __fastcall CFM_FlagsToShellContextMenuFlags(unsigned Flags);
extern DELPHI_PACKAGE bool __fastcall ClipboardContainsShellFormats(void);
extern DELPHI_PACKAGE bool __fastcall MapVerbToIntResource(Mpshelltypes::_di_IContextMenu ContextMenu, HMENU Menu, System::WideString Verb, System::WideChar * &IntResVerbW, char * &IntResVerbA);
extern DELPHI_PACKAGE bool __fastcall MPBrowseForFolder(System::WideString Title, Winapi::Shlobj::PItemIDList RootFolder, Winapi::Shlobj::PItemIDList InitialPath, TMPBrowseFlags BrowseFlags, Winapi::Shlobj::PItemIDList &SelectedPath)/* overload */;
extern DELPHI_PACKAGE bool __fastcall MPBrowseForFolder(System::WideString Title, System::WideString RootFolder, System::WideString InitialPath, TMPBrowseFlags BrowseFlags, System::WideString &SelectedPath)/* overload */;
extern DELPHI_PACKAGE int __fastcall MergeMenuIntoContextMenu(Vcl::Menus::TPopupMenu* Menu, HMENU ContextMenu, int Index, unsigned idStart);
extern DELPHI_PACKAGE Mpcommonobjects::TPIDLArray __fastcall NamespaceToRelativePIDLArray(TNamespaceArray Namespaces);
extern DELPHI_PACKAGE Mpcommonobjects::TCommonPIDLList* __fastcall NamespaceToAbsolutePIDLList(TNamespaceArray Namespaces);
extern DELPHI_PACKAGE System::Classes::TList* __fastcall NamespaceToNamespaceList(TNamespaceArray Namespaces);
extern DELPHI_PACKAGE Winapi::Shlobj::PItemIDList __fastcall FindBrowseableRootPIDL(TNamespace* NS);
extern DELPHI_PACKAGE bool __fastcall IsParentBrowseable(TNamespace* NS);
extern DELPHI_PACKAGE Mpcommonobjects::TPIDLArray __fastcall NamespaceToAbsolutePIDLArray(TNamespaceArray Namespaces);
extern DELPHI_PACKAGE Winapi::Shlobj::PItemIDList __fastcall PathToPIDL(System::WideString APath, HWND ParentWindowHandle = (HWND)(0x0), bool ForceApplicationToTop = false);
extern DELPHI_PACKAGE System::WideString __fastcall PIDLToPath(Winapi::Shlobj::PItemIDList APIDL);
extern DELPHI_PACKAGE bool __fastcall IENamespaceShown(bool PerUser);
extern DELPHI_PACKAGE bool __fastcall DirExistsVET(System::WideString APath, bool ShowSystemMessages)/* overload */;
extern DELPHI_PACKAGE bool __fastcall DirExistsVET(TNamespace* NS, bool ShowSystemMessages)/* overload */;
extern DELPHI_PACKAGE int __fastcall RectWidth(const System::Types::TRect &ARect);
extern DELPHI_PACKAGE int __fastcall RectHeight(const System::Types::TRect &ARect);
extern DELPHI_PACKAGE bool __fastcall PotentialMappedDrive(TNamespace* NS);
extern DELPHI_PACKAGE unsigned __fastcall FileObjectsToFlags(TFileObjects FileObjects);
extern DELPHI_PACKAGE System::WideString __fastcall FileObjectsToString(TFileObjects FileObjects);
extern DELPHI_PACKAGE bool __fastcall ConvertLocalStrToTFileTime(System::WideString LocalStr, _FILETIME &FileTime);
extern DELPHI_PACKAGE System::WideString __fastcall ConvertTFileTimeToLocalStr(const _FILETIME &AFileTime);
extern DELPHI_PACKAGE System::TDateTime __fastcall ConvertFileTimetoDateTime(const _FILETIME &AFileTime);
extern DELPHI_PACKAGE TNamespace* __fastcall CreateKnownFolderNamespace(const GUID &FolderID, bool ForceCreation = false, bool NoAlias = true);
extern DELPHI_PACKAGE TNamespace* __fastcall CreateSpecialNamespace(int FolderID);
extern DELPHI_PACKAGE int __fastcall DefaultSystemImageForFileExt(System::WideString FileExt);
extern DELPHI_PACKAGE int __fastcall DefaultSystemImageIndex(TDefaultFolderIcon FolderType);
extern DELPHI_PACKAGE System::LongBool __stdcall FileIconInit(System::LongBool FullInit);
extern DELPHI_PACKAGE bool __fastcall CreateShellLink(System::WideString ALnkFilePath, System::WideString ATargetFilePath, System::WideString AnArguments = System::WideString(), System::WideString AWorkingDir = System::WideString(), System::WideString ADescription = System::WideString(), TCmdShow AShowCmd = (TCmdShow)(0xa), System::Word AHotKey = (System::Word)(0x0), THotKeyModifiers AHotKeyModifier = THotKeyModifiers() , System::WideString AnIconLocation = System::WideString(), int AnIconIndex = 0x0);
extern DELPHI_PACKAGE System::WideString __fastcall HotKeyModifiersToStr(THotKeyModifiers HotKeyMod);
extern DELPHI_PACKAGE void __fastcall PIDLQuickSort(Mpcommonobjects::TPIDLArray PIDLList, const _di_IShellFolder ParentFolder, int L, int R);
extern DELPHI_PACKAGE void __fastcall PIDLListQuickSort(Mpcommonobjects::TCommonPIDLList* PIDLList, const _di_IShellFolder ParentFolder, int L, int R, int SortColumn = 0x0);
extern DELPHI_PACKAGE bool __fastcall GetDiskFreeSpaceMP(System::WideChar * Drive, unsigned &SectorsperCluster, unsigned &BytesperSector, unsigned &FreeClusters, unsigned &TotalClusters);
extern DELPHI_PACKAGE __int64 __fastcall DriveSize(System::WideChar * Drive)/* overload */;
extern DELPHI_PACKAGE System::WideString __fastcall DriveSize(System::WideChar * Drive, TBtyeSize ByteSize)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall DriveFreeSpace(System::WideChar * Drive)/* overload */;
extern DELPHI_PACKAGE System::WideString __fastcall DriveFreeSpace(System::WideChar * Drive, TBtyeSize ByteSize)/* overload */;
extern DELPHI_PACKAGE bool __fastcall LoadShell32Functions(void);
}	/* namespace Mpshellutilities */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_MPSHELLUTILITIES)
using namespace Mpshellutilities;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// MpshellutilitiesHPP
