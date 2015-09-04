// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'MPCommonObjects.pas' rev: 30.00 (Windows)

#ifndef MpcommonobjectsHPP
#define MpcommonobjectsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.ActiveX.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.RTLConsts.hpp>
#include <Vcl.Themes.hpp>
#include <Winapi.UxTheme.hpp>
#include <Winapi.ShlObj.hpp>
#include <Winapi.ShellAPI.hpp>
#include <Vcl.ImgList.hpp>
#include <System.TypInfo.hpp>
#include <MPShellTypes.hpp>
#include <MPResources.hpp>
#include <System.UITypes.hpp>
#include <System.ImageList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mpcommonobjects
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TStringListEx;
__interface ICommonExtractObj;
typedef System::DelphiInterface<ICommonExtractObj> _di_ICommonExtractObj;
class DELPHICLASS TCommonThemeManager;
class DELPHICLASS TCommonCanvasControl;
class DELPHICLASS TCommonDefaultCanvasState;
class DELPHICLASS TCommonPIDLList;
class DELPHICLASS TCommonPIDLManager;
class DELPHICLASS TCommonMemoryStreamHelper;
class DELPHICLASS TCommonStream;
class DELPHICLASS TCommonCheckBound;
class DELPHICLASS TCommonCheckBoundManager;
class DELPHICLASS TCommonSysImages;
//-- type declarations -------------------------------------------------------
typedef System::LongBool __stdcall (*TILIsParent)(Winapi::Shlobj::PItemIDList PIDL1, Winapi::Shlobj::PItemIDList PIDL2, System::LongBool ImmediateParent);

typedef System::LongBool __stdcall (*TILIsEqual)(Winapi::Shlobj::PItemIDList PIDL1, Winapi::Shlobj::PItemIDList PIDL2);

typedef int TCommonImageIndexInteger;

class PASCALIMPLEMENTATION TStringListEx : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
public:
	/* TStringList.Create */ inline __fastcall TStringListEx(void)/* overload */ : System::Classes::TStringList() { }
	/* TStringList.Create */ inline __fastcall TStringListEx(bool OwnsObjects)/* overload */ : System::Classes::TStringList(OwnsObjects) { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TStringListEx(void) { }
	
};


typedef System::DynamicArray<Winapi::Shlobj::PItemIDList> TPIDLArray;

typedef TPIDLArray TRelativePIDLArray;

typedef TPIDLArray TAbsolutePIDLArray;

typedef System::StaticArray<Winapi::Shlobj::PItemIDList, 1> TPIDLRawArray;

typedef TPIDLRawArray *PPIDLRawArray;

__interface  INTERFACE_UUID("{7F667930-E47B-4474-BA62-B100D7DBDA70}") ICommonExtractObj  : public System::IInterface 
{
	virtual System::TObject* __fastcall GetObj(void) = 0 ;
	__property System::TObject* Obj = {read=GetObj};
};

enum DECLSPEC_DENUM TCommonShellContextMenuAction : unsigned char { cmaCopy, cmaCut, cmaPaste, cmaDelete, cmaRename, cmaProperties, cmaShortCut };

typedef System::Set<TCommonShellContextMenuAction, TCommonShellContextMenuAction::cmaCopy, TCommonShellContextMenuAction::cmaShortCut> TCommonShellContextMenuActions;

enum DECLSPEC_DENUM TCommonShellContextMenuExtension : unsigned char { cmeAllFilesystemObjects, cmeDirectory, cmeDirBackground, cmeFolder, cmeAsterik, cmeShellDefault, cmePerceivedType };

typedef System::Set<TCommonShellContextMenuExtension, TCommonShellContextMenuExtension::cmeAllFilesystemObjects, TCommonShellContextMenuExtension::cmePerceivedType> TCommonShellContextMenuExtensions;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonThemeManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	NativeUInt FButtonTheme;
	NativeUInt FComboBoxTheme;
	NativeUInt FEditTheme;
	NativeUInt FExplorerBarTheme;
	NativeUInt FHeaderTheme;
	NativeUInt FListviewTheme;
	bool FLoaded;
	Vcl::Controls::TWinControl* FOwner;
	NativeUInt FProgressTheme;
	NativeUInt FRebarTheme;
	NativeUInt FScrollbarTheme;
	NativeUInt FTaskBandTheme;
	NativeUInt FTaskBarTheme;
	NativeUInt FTreeviewTheme;
	NativeUInt FWindowTheme;
	
public:
	__fastcall TCommonThemeManager(Vcl::Controls::TWinControl* AnOwner);
	__fastcall virtual ~TCommonThemeManager(void);
	DYNAMIC void __fastcall ThemesFree(void);
	DYNAMIC void __fastcall ThemesLoad(void);
	__property NativeUInt ButtonTheme = {read=FButtonTheme, write=FButtonTheme, nodefault};
	__property NativeUInt ComboBoxTheme = {read=FComboBoxTheme, write=FComboBoxTheme, nodefault};
	__property NativeUInt EditThemeTheme = {read=FEditTheme, write=FEditTheme, nodefault};
	__property NativeUInt ExplorerBarTheme = {read=FExplorerBarTheme, write=FExplorerBarTheme, nodefault};
	__property NativeUInt HeaderTheme = {read=FHeaderTheme, write=FHeaderTheme, nodefault};
	__property NativeUInt ListviewTheme = {read=FListviewTheme, write=FListviewTheme, nodefault};
	__property bool Loaded = {read=FLoaded, nodefault};
	__property Vcl::Controls::TWinControl* Owner = {read=FOwner};
	__property NativeUInt ProgressTheme = {read=FProgressTheme, write=FProgressTheme, nodefault};
	__property NativeUInt RebarTheme = {read=FRebarTheme, write=FRebarTheme, nodefault};
	__property NativeUInt ScrollbarTheme = {read=FScrollbarTheme, write=FScrollbarTheme, nodefault};
	__property NativeUInt TaskBandTheme = {read=FTaskBandTheme, write=FTaskBandTheme, nodefault};
	__property NativeUInt TaskBarTheme = {read=FTaskBarTheme, write=FTaskBarTheme, nodefault};
	__property NativeUInt TreeviewTheme = {read=FTreeviewTheme, write=FTreeviewTheme, nodefault};
	__property NativeUInt WindowTheme = {read=FWindowTheme, write=FWindowTheme, nodefault};
};

#pragma pack(pop)

typedef void __fastcall (__closure *TCommonMouseEnterEvent)(System::TObject* Sender, const System::Types::TPoint &MousePos);

class PASCALIMPLEMENTATION TCommonCanvasControl : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	Vcl::Graphics::TBitmap* FBackBits;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	bool FCacheDoubleBufferBits;
	Vcl::Controls::TControlCanvas* FCanvas;
	bool FForcePaint;
	Vcl::Controls::TImageList* FImagesExtraLarge;
	Vcl::Controls::TImageList* FImagesLarge;
	Vcl::Controls::TImageList* FImagesSmall;
	bool FMouseEnterExitNotifyEnabled;
	bool FMouseInWindow;
	Vcl::Extctrls::TTimer* FMouseTimer;
	Vcl::Graphics::TCanvas* FNCCanvas;
	System::Classes::TNotifyEvent FOnBeginUpdate;
	System::Classes::TNotifyEvent FOnEndUpdate;
	TCommonMouseEnterEvent FOnMouseEnter;
	System::Classes::TNotifyEvent FOnMouseExit;
	bool FShowThemedBorder;
	TCommonThemeManager* FThemes;
	Vcl::Controls::TControlCanvas* __fastcall GetCanvas(void);
	bool __fastcall GetThemed(void);
	void __fastcall SetBorderStyle(const Vcl::Forms::TBorderStyle Value);
	void __fastcall SetCacheDoubleBufferBits(const bool Value);
	void __fastcall SetShowThemedBorder(const bool Value);
	void __fastcall SetThemed(const bool Value);
	
protected:
	bool FThemed;
	int FUpdateCount;
	virtual void __fastcall AfterPaintRect(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ClipRect);
	virtual void __fastcall CalcThemedNCSize(System::Types::TRect &ContextRect);
	MESSAGE void __fastcall CMColorChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Winapi::Messages::TMessage &Message);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall DoBeginUpdate(void);
	void __fastcall DoEndUpdate(void);
	virtual void __fastcall DoMouseEnter(const System::Types::TPoint &MousePos);
	virtual void __fastcall DoMouseExit(void);
	virtual void __fastcall DoMouseTrack(const System::Types::TPoint &MousePos);
	virtual void __fastcall DoPaintRect(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ClipRect, bool SelectedOnly, bool ClipRectInViewPortCoords = false);
	virtual void __fastcall DoUpdate(void);
	void __fastcall KillMouseInWindowTimer(void);
	void __fastcall MouseTimerProc(System::TObject* Sender);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall PaintThemedNCBkgnd(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect);
	void __fastcall ResizeBackBits(int NewWidth, int NewHeight);
	void __fastcall ValidateBorder(void);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	MESSAGE void __fastcall WMThemeChanged(Winapi::Messages::TMessage &Message);
	__property Vcl::Graphics::TBitmap* BackBits = {read=FBackBits, write=FBackBits};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property bool CacheDoubleBufferBits = {read=FCacheDoubleBufferBits, write=SetCacheDoubleBufferBits, default=0};
	__property bool MouseInWindow = {read=FMouseInWindow, write=FMouseInWindow, nodefault};
	__property Vcl::Extctrls::TTimer* MouseTimer = {read=FMouseTimer, write=FMouseTimer};
	__property Vcl::Graphics::TCanvas* NCCanvas = {read=FNCCanvas, write=FNCCanvas};
	__property System::Classes::TNotifyEvent OnBeginUpdate = {read=FOnBeginUpdate, write=FOnBeginUpdate};
	__property System::Classes::TNotifyEvent OnEndUpdate = {read=FOnEndUpdate, write=FOnEndUpdate};
	__property TCommonMouseEnterEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseExit = {read=FOnMouseExit, write=FOnMouseExit};
	__property bool ShowThemedBorder = {read=FShowThemedBorder, write=SetShowThemedBorder, default=1};
	__property bool Themed = {read=GetThemed, write=SetThemed, default=1};
	
public:
	__fastcall virtual TCommonCanvasControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCommonCanvasControl(void);
	virtual void __fastcall BeginUpdate(void);
	bool __fastcall DrawWithThemes(void);
	virtual void __fastcall EndUpdate(bool Invalidate = true);
	virtual void __fastcall Loaded(void);
	void __fastcall PaintToRect(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect, bool ClipRectInViewPortCoords = true);
	void __fastcall SafeInvalidateRect(System::Types::PRect ARect, bool ImmediateUpdate);
	__property Vcl::Controls::TControlCanvas* Canvas = {read=GetCanvas, write=FCanvas};
	__property Color = {default=-16777211};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property bool ForcePaint = {read=FForcePaint, write=FForcePaint, nodefault};
	__property TCommonThemeManager* Themes = {read=FThemes};
	__property int UpdateCount = {read=FUpdateCount, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCommonCanvasControl(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonDefaultCanvasState : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	unsigned FBkMode;
	Vcl::Graphics::TFont* FFont;
	Vcl::Graphics::TBrush* FBrush;
	Vcl::Graphics::TPen* FPen;
	bool FCanvasStored;
	int FCopyMode;
	System::Types::TPoint FPenPos;
	int FTextFlags;
	Vcl::Graphics::TBrush* __fastcall GetBrush(void);
	Vcl::Graphics::TFont* __fastcall GetFont(void);
	Vcl::Graphics::TPen* __fastcall GetPen(void);
	
public:
	__fastcall virtual ~TCommonDefaultCanvasState(void);
	void __fastcall StoreCanvas(Vcl::Graphics::TCanvas* ACanvas);
	void __fastcall RestoreCanvas(Vcl::Graphics::TCanvas* ACanvas);
	__property unsigned BkMode = {read=FBkMode, nodefault};
	__property bool CanvasStored = {read=FCanvasStored, nodefault};
	__property int CopyMode = {read=FCopyMode, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=GetFont};
	__property Vcl::Graphics::TBrush* Brush = {read=GetBrush};
	__property Vcl::Graphics::TPen* Pen = {read=GetPen};
	__property System::Types::TPoint PenPos = {read=FPenPos};
	__property int TextFlags = {read=FTextFlags, nodefault};
public:
	/* TObject.Create */ inline __fastcall TCommonDefaultCanvasState(void) : System::TObject() { }
	
};

#pragma pack(pop)

typedef TCommonPIDLList* *PCommonPIDLList;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonPIDLList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
private:
	TCommonPIDLManager* FLocalPIDLMgr;
	System::WideString FName;
	bool FSharePIDLs;
	bool FDestroying;
	Winapi::Shlobj::PItemIDList __fastcall GetPIDL(int Index);
	
protected:
	__property bool Destroying = {read=FDestroying, nodefault};
	__property TCommonPIDLManager* LocalPIDLMgr = {read=FLocalPIDLMgr, write=FLocalPIDLMgr};
	
public:
	__fastcall TCommonPIDLList(void);
	__fastcall virtual ~TCommonPIDLList(void);
	virtual void __fastcall Clear(void);
	void __fastcall CloneList(TCommonPIDLList* PIDLList);
	int __fastcall CopyAdd(Winapi::Shlobj::PItemIDList PIDL);
	int __fastcall FindPIDL(Winapi::Shlobj::PItemIDList TestPIDL);
	virtual bool __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual bool __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall StripDesktopPIDLs(void);
	__property System::WideString Name = {read=FName, write=FName};
	__property bool SharePIDLs = {read=FSharePIDLs, write=FSharePIDLs, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonPIDLManager : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	_di_IMalloc FMalloc;
	
public:
	__fastcall TCommonPIDLManager(void);
	__fastcall virtual ~TCommonPIDLManager(void);
	System::PByte __fastcall AllocGlobalMem(int Size);
	System::WideChar * __fastcall AllocStrGlobal(System::WideString SourceStr);
	Winapi::Shlobj::PItemIDList __fastcall AppendPIDL(Winapi::Shlobj::PItemIDList DestPIDL, Winapi::Shlobj::PItemIDList SrcPIDL);
	bool __fastcall BindToParent(Winapi::Shlobj::PItemIDList AbsolutePIDL, _di_IShellFolder &Folder);
	Winapi::Shlobj::PItemIDList __fastcall CopyPIDL(Winapi::Shlobj::PItemIDList APIDL);
	bool __fastcall EqualPIDL(Winapi::Shlobj::PItemIDList PIDL1, Winapi::Shlobj::PItemIDList PIDL2);
	void __fastcall FreeAndNilPIDL(Winapi::Shlobj::PItemIDList &PIDL);
	void __fastcall FreeOLEStr(System::WideChar * OLEStr);
	void __fastcall FreePIDL(Winapi::Shlobj::PItemIDList PIDL);
	Winapi::Shlobj::PItemIDList __fastcall CopyLastID(Winapi::Shlobj::PItemIDList IDList);
	Winapi::Shlobj::PItemIDList __fastcall GetPointerToLastID(Winapi::Shlobj::PItemIDList IDList);
	int __fastcall IDCount(Winapi::Shlobj::PItemIDList APIDL);
	bool __fastcall IsDesktopFolder(Winapi::Shlobj::PItemIDList APIDL);
	bool __fastcall IsEmptyPIDL(Winapi::Shlobj::PItemIDList APIDL);
	bool __fastcall IsSubPIDL(Winapi::Shlobj::PItemIDList FullPIDL, Winapi::Shlobj::PItemIDList SubPIDL);
	Winapi::Shlobj::PItemIDList __fastcall NextID(Winapi::Shlobj::PItemIDList APIDL);
	int __fastcall PIDLSize(Winapi::Shlobj::PItemIDList APIDL);
	Winapi::Shlobj::PItemIDList __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall ParsePIDL(Winapi::Shlobj::PItemIDList AbsolutePIDL, TCommonPIDLList* &PIDLList, bool AllAbsolutePIDLs);
	void __fastcall ParsePIDLArray(PPIDLRawArray PIDLArray, TCommonPIDLList* &PIDLList, int Count, bool Relative, bool CopyPIDLs);
	Winapi::Shlobj::PItemIDList __fastcall StringToPIDL(System::AnsiString PIDLStr);
	Winapi::Shlobj::PItemIDList __fastcall StripLastID(Winapi::Shlobj::PItemIDList IDList)/* overload */;
	Winapi::Shlobj::PItemIDList __fastcall StripLastID(Winapi::Shlobj::PItemIDList IDList, System::Word &Last_CB, Winapi::Shlobj::PItemIDList &LastID)/* overload */;
	void __fastcall SaveToStream(System::Classes::TStream* Stream, Winapi::Shlobj::PItemIDList PIDL);
	__property _di_IMalloc Malloc = {read=FMalloc};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonMemoryStreamHelper : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool __fastcall ReadBoolean(System::Classes::TStream* S);
	System::Uitypes::TColor __fastcall ReadColor(System::Classes::TStream* S);
	__int64 __fastcall ReadInt64(System::Classes::TStream* S);
	int __fastcall ReadInteger(System::Classes::TStream* S);
	System::AnsiString __fastcall ReadString(System::Classes::TStream* S);
	System::WideString __fastcall ReadWideString(System::Classes::TStream* S);
	System::Extended __fastcall ReadExtended(System::Classes::TStream* S);
	void __fastcall ReadStream(System::Classes::TStream* SourceStream, System::Classes::TStream* TargetStream);
	void __fastcall WriteBoolean(System::Classes::TStream* S, bool Value);
	void __fastcall WriteColor(System::Classes::TStream* S, System::Uitypes::TColor Value);
	void __fastcall WriteExtended(System::Classes::TStream* S, System::Extended Value);
	void __fastcall WriteInt64(System::Classes::TStream* S, __int64 Value);
	void __fastcall WriteInteger(System::Classes::TStream* S, int Value);
	void __fastcall WriteStream(System::Classes::TStream* SourceStream, System::Classes::TStream* TargetStream);
	void __fastcall WriteString(System::Classes::TStream* S, System::AnsiString Value);
	void __fastcall WriteWideString(System::Classes::TStream* S, System::WideString Value);
public:
	/* TObject.Create */ inline __fastcall TCommonMemoryStreamHelper(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonMemoryStreamHelper(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonStream : public System::Classes::TMemoryStream
{
	typedef System::Classes::TMemoryStream inherited;
	
public:
	bool __fastcall ReadBoolean(void);
	System::Byte __fastcall ReadByte(void);
	int __fastcall ReadInteger(void);
	System::AnsiString __fastcall ReadString(void);
	System::Classes::TStringList* __fastcall ReadStringList(void);
	System::WideString __fastcall ReadWideString(void);
	void __fastcall WriteBoolean(bool Value);
	void __fastcall WriteByte(System::Byte Value);
	void __fastcall WriteInteger(int Value);
	void __fastcall WriteString(const System::AnsiString Value);
	void __fastcall WriteStringList(System::Classes::TStringList* Value);
	void __fastcall WriteWideString(const System::WideString Value);
public:
	/* TMemoryStream.Destroy */ inline __fastcall virtual ~TCommonStream(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TCommonStream(void) : System::Classes::TMemoryStream() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonCheckBound : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FBounds;
	int FSize;
	
public:
	__property int Size = {read=FSize, write=FSize, nodefault};
	__property System::Types::TRect Bounds = {read=FBounds, write=FBounds};
public:
	/* TObject.Create */ inline __fastcall TCommonCheckBound(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonCheckBound(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonCheckBoundManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* FList;
	System::Types::TRect __fastcall GetBound(int Size);
	TCommonCheckBound* __fastcall GetCheckBound(int Index);
	
protected:
	void __fastcall Clear(void);
	TCommonCheckBound* __fastcall Find(int Size);
	__property System::Classes::TList* List = {read=FList, write=FList};
	__property TCommonCheckBound* CheckBound[int Index] = {read=GetCheckBound};
	
public:
	__fastcall TCommonCheckBoundManager(void);
	__fastcall virtual ~TCommonCheckBoundManager(void);
	__property System::Types::TRect Bound[int Size] = {read=GetBound};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TSysImageListSize : unsigned char { sisSmall, sisLarge, sisExtraLarge, sisJumbo };

class PASCALIMPLEMENTATION TCommonSysImages : public Vcl::Controls::TImageList
{
	typedef Vcl::Controls::TImageList inherited;
	
private:
	TSysImageListSize FImageSize;
	Mpshelltypes::_di_IImageList FJumboImages;
	void __fastcall SetImageSize(const TSysImageListSize Value);
	
protected:
	void __fastcall RecreateHandle(void);
	void __fastcall Flush(void);
	__property Mpshelltypes::_di_IImageList JumboImages = {read=FJumboImages};
	
public:
	__fastcall virtual TCommonSysImages(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCommonSysImages(void);
	__property TSysImageListSize ImageSize = {read=FImageSize, write=SetImageSize, nodefault};
public:
	/* TCustomImageList.CreateSize */ inline __fastcall TCommonSysImages(int AWidth, int AHeight) : Vcl::Controls::TImageList(AWidth, AHeight) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define IID_ICommonExtractObj L"{7F667930-E47B-4474-BA62-B100D7DBDA70}"
extern DELPHI_PACKAGE TCommonMemoryStreamHelper* StreamHelper;
extern DELPHI_PACKAGE TCommonCheckBoundManager* Checks;
extern DELPHI_PACKAGE Vcl::Graphics::TFont* MarlettFont;
extern DELPHI_PACKAGE System::LongBool __fastcall ILIsParent(Winapi::Shlobj::PItemIDList PIDL1, Winapi::Shlobj::PItemIDList PIDL2, System::LongBool ImmediateParent);
extern DELPHI_PACKAGE System::LongBool __fastcall ILIsEqual(Winapi::Shlobj::PItemIDList PIDL1, Winapi::Shlobj::PItemIDList PIDL2);
extern DELPHI_PACKAGE void __fastcall FlushImageLists(void);
extern DELPHI_PACKAGE TCommonSysImages* __fastcall JumboSysImages(void);
extern DELPHI_PACKAGE TCommonSysImages* __fastcall ExtraLargeSysImages(void);
extern DELPHI_PACKAGE TCommonSysImages* __fastcall LargeSysImages(void);
extern DELPHI_PACKAGE TCommonSysImages* __fastcall SmallSysImages(void);
extern DELPHI_PACKAGE void __fastcall StripDuplicatesAndDesktops(System::Classes::TList* NamespaceList);
extern DELPHI_PACKAGE void __fastcall CreateFullyQualifiedShellDataObject(System::Classes::TList* NamespaceList, bool DragDropObject, _di_IDataObject &ADataObject);
}	/* namespace Mpcommonobjects */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_MPCOMMONOBJECTS)
using namespace Mpcommonobjects;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// MpcommonobjectsHPP
