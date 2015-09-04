// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'MPCommonUtilities.pas' rev: 30.00 (Windows)

#ifndef MpcommonutilitiesHPP
#define MpcommonutilitiesHPP

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
#include <System.Math.hpp>
#include <Winapi.ActiveX.hpp>
#include <Winapi.ShlObj.hpp>
#include <System.Variants.hpp>
#include <System.RTLConsts.hpp>
#include <Winapi.ShellAPI.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.Win.ComObj.hpp>
#include <System.Types.hpp>
#include <Winapi.CommCtrl.hpp>
#include <MPShellTypes.hpp>
#include <MPResources.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mpcommonutilities
{
//-- forward type declarations -----------------------------------------------
struct TCommonRGB;
struct TCommonHLS;
__interface ICallbackStub;
typedef System::DelphiInterface<ICallbackStub> _di_ICallbackStub;
class DELPHICLASS TCallbackStub;
//-- type declarations -------------------------------------------------------
typedef System::DynamicArray<System::WideChar> TCommonWideCharArray;

typedef System::DynamicArray<System::WideChar *> TCommonPWideCharArray;

typedef System::DynamicArray<System::WideString> TCommonWideStringDynArray;

typedef System::DynamicArray<int> TCommonIntegerDynArray;

enum DECLSPEC_DENUM TCommonDropEffect : unsigned char { cdeNone, cdeCopy, cdeMove, cdeLink, cdeScroll };

typedef System::Set<TCommonDropEffect, TCommonDropEffect::cdeNone, TCommonDropEffect::cdeScroll> TCommonDropEffects;

enum DECLSPEC_DENUM TCommonOLEDragResult : unsigned char { cdrDrop, cdrCancel, cdrError };

enum DECLSPEC_DENUM TCommonKeyState : unsigned char { cksControl, cksLButton, cksMButton, cksRButton, cksShift, cksAlt, cksButton };

typedef System::Set<TCommonKeyState, TCommonKeyState::cksControl, TCommonKeyState::cksButton> TCommonKeyStates;

enum DECLSPEC_DENUM TCommonMouseButton : unsigned char { cmbNone, cmbLeft, cmbRight, cmbMiddle };

enum DECLSPEC_DENUM TCommonVAlignment : unsigned char { cvaTop, cvaBottom, cvaCenter };

enum DECLSPEC_DENUM TCommonDrawTextWFlag : unsigned char { dtSingleLine, dtLeft, dtRight, dtCenter, dtTop, dtBottom, dtVCenter, dtCalcRect, dtCalcRectAdjR, dtCalcRectAlign, dtEndEllipsis, dtWordBreak, dtUserBreakChars, dtRTLReading, dtNoClip };

typedef System::Set<TCommonDrawTextWFlag, TCommonDrawTextWFlag::dtSingleLine, TCommonDrawTextWFlag::dtNoClip> TCommonDrawTextWFlags;

enum DECLSPEC_DENUM TCommonBlendMode : unsigned char { cbmConstantAlpha, cbmPerPixelAlpha, cbmMasterAlpha, cbmConstantAlphaAndColor };

enum DECLSPEC_DENUM TShortenStringEllipsis : unsigned char { sseEnd, sseFront, sseMiddle, sseFilePathMiddle };

struct DECLSPEC_DRECORD TCommonRGB
{
public:
	double R;
	double G;
	double B;
};


struct DECLSPEC_DRECORD TCommonHLS
{
public:
	double H;
	double L;
	double S;
};


enum DECLSPEC_DENUM TDrawWindowButtonType : unsigned char { dwbtMinimize, dwbtMaximize, dwbtRestore, dwbtClose };

enum DECLSPEC_DENUM TValidateDelimiterExt : unsigned char { vdeColon, vdeSemiColon, vdeComma, vdePipe };

enum DECLSPEC_DENUM TValidateDelimiterWildCard : unsigned char { vdwcAsterisk, vdwcPeriod };

typedef System::Set<TValidateDelimiterWildCard, TValidateDelimiterWildCard::vdwcAsterisk, TValidateDelimiterWildCard::vdwcPeriod> TValidateDelimiterWildCardSet;

__interface ICallbackStub  : public System::IInterface 
{
	virtual void * __fastcall GetStubPointer(void) = 0 ;
	__property void * StubPointer = {read=GetStubPointer};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCallbackStub : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	void *fStubPointer;
	int fCodeSize;
	void * __fastcall GetStubPointer(void);
	
public:
	__fastcall TCallbackStub(System::TObject* Obj, void * MethodPtr, int NumArgs);
	__fastcall virtual ~TCallbackStub(void);
private:
	void *__ICallbackStub;	// ICallbackStub 
	
public:
	operator ICallbackStub*(void) { return (ICallbackStub*)&__ICallbackStub; }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM Mpcommonutilities__2 : unsigned char { enseMsgShowErrors, enseMsgRegSvr };

typedef System::Set<Mpcommonutilities__2, Mpcommonutilities__2::enseMsgShowErrors, Mpcommonutilities__2::enseMsgRegSvr> TEasyNSERegMessages;

//-- var, const, procedure ---------------------------------------------------
static const System::WideChar WideNull = (System::WideChar)(0x0);
static const System::WideChar WideCR = (System::WideChar)(0xd);
static const System::WideChar WideLF = (System::WideChar)(0xa);
static const System::WideChar WideLineSeparator = (System::WideChar)(0x7ec);
static const System::WideChar WideSpace = (System::WideChar)(0x20);
static const System::WideChar WidePeriod = (System::WideChar)(0x2e);
#define Shlwapi L"shlwapi.dll"
#define Mpr L"Mpr.dll"
extern DELPHI_PACKAGE bool Wow64Enabled;
extern DELPHI_PACKAGE System::WideString SEasyNSEMsg_Caption;
extern DELPHI_PACKAGE System::WideString SEasyNSEMsg_CannotRegister;
extern DELPHI_PACKAGE System::WideString SEasyNSEMsg_CannotUnRegister;
extern DELPHI_PACKAGE System::WideString SEasyNSEMsg_CannotFindRegSvr;
extern DELPHI_PACKAGE System::WideString SEasyNSEMsg_CannotFindDLL;
extern DELPHI_PACKAGE unsigned __stdcall (*GetDriveTypeW_MP)(System::WideChar * lpRootPathName);
extern DELPHI_PACKAGE int __stdcall (*DrawTextW_MP)(HDC hDC, System::WideChar * lpString, int nCount, System::Types::TRect &lpRect, unsigned uFormat);
extern DELPHI_PACKAGE unsigned __stdcall (*SHGetFileInfoW_MP)(System::WideChar * pszPath, unsigned dwFileAttributes, _SHFILEINFOW &psfi, unsigned cbFileInfo, unsigned uFlags);
extern DELPHI_PACKAGE NativeUInt __stdcall (*CreateFileW_MP)(System::WideChar * lpFileName, unsigned dwDesiredAccess, unsigned dwShareMode, Winapi::Windows::PSecurityAttributes lpSecurityAttributes, unsigned dwCreationDisposition, unsigned dwFlagsAndAttributes, NativeUInt hTemplateFile);
extern DELPHI_PACKAGE HRESULT __stdcall (*SHGetDataFromIDListW_MP)(_di_IShellFolder psf, Winapi::Shlobj::PItemIDList pidl, int nFormat, void * ptr, int cb);
extern DELPHI_PACKAGE NativeUInt __stdcall (*FindFirstFileW_MP)(System::WideChar * lpFileName, _WIN32_FIND_DATAW &lpFindFileData);
extern DELPHI_PACKAGE System::LongBool __stdcall (*FindNextFileW_MP)(NativeUInt hFindFile, _WIN32_FIND_DATAW &lpFindFileData);
extern DELPHI_PACKAGE System::LongBool __stdcall (*GetDiskFreeSpaceW_MP)(System::WideChar * lpRootPathName, unsigned &lpSectorsPerCluster, unsigned &lpBytesPerSector, unsigned &lpNumberOfFreeClusters, unsigned &lpTotalNumberOfClusters);
extern DELPHI_PACKAGE unsigned __stdcall (*GetCurrentDirectoryW_MP)(unsigned nBufferLength, System::WideChar * lpBuffer);
extern DELPHI_PACKAGE unsigned __stdcall (*GetTempPathW_MP)(unsigned nBufferLength, System::WideChar * lpBuffer);
extern DELPHI_PACKAGE System::LongBool __stdcall (*AllowSetForegroundWindow_MP)(unsigned dwProcessID);
extern DELPHI_PACKAGE int __stdcall (*lstrcmpiW_MP)(System::WideChar * lpString1, System::WideChar * lpString2);
extern DELPHI_PACKAGE int __stdcall (*lstrcmpW_MP)(System::WideChar * lpString1, System::WideChar * lpString2);
extern DELPHI_PACKAGE System::WideChar * __stdcall (*lstrcpynW_MP)(System::WideChar * lpString1, System::WideChar * lpString2, int iMaxLength);
extern DELPHI_PACKAGE System::WideChar * __stdcall (*lstrcpyW_MP)(System::WideChar * lpString1, System::WideChar * lpString2);
extern DELPHI_PACKAGE unsigned __stdcall (*CharLowerBuffW_MP)(System::WideChar * lpsz, unsigned cchLength);
extern DELPHI_PACKAGE unsigned __stdcall (*CharUpperBuffW_MP)(System::WideChar * lpsz, unsigned cchLength);
extern DELPHI_PACKAGE System::LongBool __stdcall (*CreateDirectoryW_MP)(System::WideChar * lpPathName, Winapi::Windows::PSecurityAttributes lpSecurityAttributes);
extern DELPHI_PACKAGE unsigned __stdcall (*GetFullPathNameW_MP)(System::WideChar * lpFileName, unsigned nBufferLength, System::WideChar * lpBuffer, System::WideChar * &lpFilePart);
extern DELPHI_PACKAGE System::LongBool __stdcall (*ShellExecuteExW_MP)(Winapi::Shellapi::PShellExecuteInfoW lpExecInfo);
extern DELPHI_PACKAGE unsigned __stdcall (*GetModuleFileNameW_MP)(NativeUInt hModule, System::WideChar * lpFilename, unsigned nSize);
extern DELPHI_PACKAGE NativeUInt __stdcall (*ShellExecuteW_MP)(HWND hWnd, System::WideChar * Operation, System::WideChar * FileName, System::WideChar * Parameters, System::WideChar * Directory, int ShowCmd);
extern DELPHI_PACKAGE NativeUInt __stdcall (*FindFirstChangeNotificationW_MP)(System::WideChar * lpPathName, System::LongBool bWatchSubtree, unsigned dwNotifyFilter);
extern DELPHI_PACKAGE System::LongBool __stdcall (*GetCharABCWidthsW_MP)(HDC DC, unsigned FirstChar, unsigned LastChar, const void *ABCStructs);
extern DELPHI_PACKAGE unsigned __stdcall (*GetFileAttributesW_MP)(System::WideChar * lpFileName);
extern DELPHI_PACKAGE unsigned __stdcall (*GetShortPathNameW_MP)(System::WideChar * lpszLongPath, System::WideChar * lpszShortPath, unsigned cchBuffer);
extern DELPHI_PACKAGE unsigned __stdcall (*GetSystemDirectoryW_MP)(System::WideChar * lpBuffer, unsigned uSize);
extern DELPHI_PACKAGE unsigned __stdcall (*GetWindowsDirectoryW_MP)(System::WideChar * lpBuffer, unsigned uSize);
extern DELPHI_PACKAGE System::LongBool __stdcall (*SetWindowTextW_MP)(HWND hWnd, System::WideChar * lpString);
extern DELPHI_PACKAGE HRESULT __stdcall (*SHMultiFileProperties_MP)(_di_IDataObject pdtobj, unsigned dwFlags);
extern DELPHI_PACKAGE HRESULT __stdcall (*SHDoDragDrop_MP)(HWND wnd, _di_IDataObject dtObj, _di_IDropSource dsrc, unsigned OKEffect, int &Effect);
extern DELPHI_PACKAGE System::LongBool __stdcall (*GetDiskFreeSpaceExA_MP)(char * lpDirectoryName, void *lpFreeBytesAvailableToCaller, void *lpTotalNumberOfBytes, Winapi::Windows::PLargeInteger lpTotalNumberOfFreeBytes);
extern DELPHI_PACKAGE System::LongBool __stdcall (*GetDiskFreeSpaceExW_MP)(System::WideChar * lpDirectoryName, void *lpFreeBytesAvailableToCaller, void *lpTotalNumberOfBytes, Winapi::Windows::PLargeInteger lpTotalNumberOfFreeBytes);
extern DELPHI_PACKAGE int __stdcall (*GetNumberFormatW_MP)(unsigned Locale, unsigned dwFlags, System::WideChar * lpValue, Winapi::Windows::PNumberFmtW lpFormat, System::WideChar * lpNumberStr, int cchNumber);
extern DELPHI_PACKAGE HRESULT __stdcall (*CDefFolderMenu_Create2_MP)(Winapi::Shlobj::PItemIDList pidlFolder, HWND wnd, unsigned cidl, Winapi::Shlobj::PItemIDList &apidl, _di_IShellFolder psf, Mpshelltypes::TFNDFMCallback lpfn, unsigned nKeys, Winapi::Windows::PHKEY ahkeyClsKeys, Mpshelltypes::_di_IContextMenu &ppcm);
extern DELPHI_PACKAGE HRESULT __stdcall (*CDefFolderMenu_Create_MP)(Winapi::Shlobj::PItemIDList pidlFolder);
extern DELPHI_PACKAGE int __stdcall (*RegOpenKeyW_MP)(HKEY hKey, System::WideChar * lpSubKey, HKEY &phkResult);
extern DELPHI_PACKAGE int __stdcall (*RegOpenKeyExW_MP)(HKEY hKey, System::WideChar * lpSubKey, unsigned ulOptions, unsigned samDesired, HKEY &phkResult);
extern DELPHI_PACKAGE int __stdcall (*RegQueryValueW_MP)(HKEY hKey, System::WideChar * lpSubKey, System::WideChar * lpValue, int &lpcbValue);
extern DELPHI_PACKAGE System::LongBool __stdcall (*WritePrivateProfileStringW_MP)(System::WideChar * lpAppName, System::WideChar * lpKeyName, System::WideChar * lpString, System::WideChar * lpFileName);
extern DELPHI_PACKAGE unsigned __stdcall (*GetPrivateProfileStringW_MP)(System::WideChar * lpAppName, System::WideChar * lpKeyName, System::WideChar * lpDefault, System::WideChar * lpReturnedString, unsigned nSize, System::WideChar * lpFileName);
extern DELPHI_PACKAGE System::LongBool __stdcall (*WritePrivateProfileStructW_MP)(System::WideChar * lpszSection, System::WideChar * lpszKey, void * lpStruct, unsigned uSizeStruct, System::WideChar * szFile);
extern DELPHI_PACKAGE System::LongBool __stdcall (*GetPrivateProfileStructW_MP)(System::WideChar * lpszSection, System::WideChar * lpszKey, void * lpStruct, unsigned uSizeStruct, System::WideChar * szFile);
extern DELPHI_PACKAGE System::LongBool __stdcall (*TryEnterCriticalSection_MP)(_RTL_CRITICAL_SECTION &lpCriticalSection);
extern DELPHI_PACKAGE HFONT __stdcall (*CreateFontIndirectW_MP)(const tagLOGFONTW &p1);
extern DELPHI_PACKAGE NativeInt __stdcall (*SendMessageW_MP)(HWND hWnd, unsigned Msg, NativeUInt wParam, NativeInt lParam);
extern DELPHI_PACKAGE System::LongBool __stdcall (*InsertMenuItemW_MP)(HMENU p1, unsigned p2, System::LongBool p3, const tagMENUITEMINFOW &p4);
extern DELPHI_PACKAGE System::LongBool __stdcall (*SetFileAttributesW_MP)(System::WideChar * lpFileName, unsigned dwFileAttributes);
extern DELPHI_PACKAGE System::LongBool __stdcall (*SystemParametersInfoW_MP)(unsigned uiAction, unsigned uiParam, void * pvParam, unsigned fWinIni);
extern DELPHI_PACKAGE Winapi::Shlobj::PItemIDList __stdcall (*SHBrowseForFolderW_MP)(_browseinfoW &lpbi);
extern DELPHI_PACKAGE System::LongBool __stdcall (*SHGetPathFromIDListW_MP)(Winapi::Shlobj::PItemIDList pidl, System::WideChar * pszPath);
extern DELPHI_PACKAGE int __stdcall (*SHFileOperationW_MP)(const _SHFILEOPSTRUCTW &lpFileOp);
extern DELPHI_PACKAGE System::LongBool __stdcall (*PathMatchSpecA_MP)(const char * pszFileParam, const char * pszSpec);
extern DELPHI_PACKAGE System::LongBool __stdcall (*PathMatchSpecW_MP)(const System::WideChar * pszFileParam, const System::WideChar * pszSpec);
extern DELPHI_PACKAGE System::LongBool __stdcall (*CreateProcessW_MP)(System::WideChar * lpApplicationName, System::WideChar * lpCommandLine, Winapi::Windows::PSecurityAttributes lpProcessAttributes, Winapi::Windows::PSecurityAttributes lpThreadAttributes, System::LongBool bInheritHandles, unsigned dwCreationFlags, void * lpEnvironment, System::WideChar * lpCurrentDirectory, const Winapi::Windows::_STARTUPINFOW &lpStartupInfo, _PROCESS_INFORMATION &lpProcessInformation);
extern DELPHI_PACKAGE System::LongBool __stdcall (*DeleteVolumeMountPoint_MP)(char * lpszVolumeMountPoint);
extern DELPHI_PACKAGE System::LongBool __stdcall (*GetVolumeNameForVolumeMountPoint_MP)(char * lpszVolumeMountPoint, char * lpszVolumeName, unsigned cchBufferLength);
extern DELPHI_PACKAGE System::LongBool __stdcall (*GetVolumePathName_MP)(char * lpszFileName, System::WideChar * lpszVolumePathName, unsigned cchBufferLength);
extern DELPHI_PACKAGE System::LongBool __stdcall (*SetVolumeMountPoint_MP)(char * lpszVolumeMountPoint, char * lpszVolumeName);
extern DELPHI_PACKAGE NativeUInt __stdcall (*FindFirstVolume_MP)(System::WideChar * lpszVolumeName, unsigned cchBufferLength);
extern DELPHI_PACKAGE System::LongBool __stdcall (*FindNextVolume_MP)(NativeUInt hFindVolume, System::WideChar * lpszVolumeName, unsigned cchBufferLength);
extern DELPHI_PACKAGE System::LongBool __stdcall (*FindVolumeClose_MP)(NativeUInt hFindVolume);
extern DELPHI_PACKAGE NativeUInt __stdcall (*FindFirstVolumeMountPoint_MP)(System::WideChar * lpszRootPathName, System::WideChar * lpszVolumeMountPoint, unsigned cchBufferLength);
extern DELPHI_PACKAGE System::LongBool __stdcall (*FindNextVolumeMountPoint_MP)(NativeUInt hFindVolumeMountPoint, System::WideChar * lpszVolumeMountPoint, unsigned cchBufferLength);
extern DELPHI_PACKAGE System::LongBool __stdcall (*FindVolumeMountPointClose_MP)(NativeUInt hFindVolumeMountPoint);
extern DELPHI_PACKAGE HRESULT __stdcall (*SHGetKnownFolderPath_MP)(const GUID &rfid, unsigned dwFlags, NativeUInt hToken, /* out */ System::WideChar * &ppszPath);
extern DELPHI_PACKAGE HRESULT __stdcall (*SHGetKnownFolderIDList_MP)(const GUID &rfid, unsigned dwFlags, int hToken, /* out */ Winapi::Shlobj::PItemIDList &ppidl);
extern DELPHI_PACKAGE NativeUInt __stdcall (*FindFirstFileExW_MP)(System::WideChar * lpFileName, unsigned fInfoLevelId, _WIN32_FIND_DATAW &lpFindFileData, unsigned fSearchOp, void * lpSearchFilter, unsigned dwAdditionalFlags);
extern DELPHI_PACKAGE NativeUInt __stdcall (*FindFirstFileExA_MP)(char * lpFileName, unsigned fInfoLevelId, _WIN32_FIND_DATAA &lpFindFileData, unsigned fSearchOp, void * lpSearchFilter, unsigned dwAdditionalFlags);
extern DELPHI_PACKAGE unsigned __stdcall (*ExpandEnvironmentStringsW_MP)(System::WideChar * lpSrc, System::WideChar * lpDst, unsigned nSize);
extern DELPHI_PACKAGE System::LongBool __stdcall (*ExpandEnvironmentStringsForUserW_MP)(NativeUInt hToken, System::WideChar * lpSrc, System::WideChar * lpDst, unsigned nSize);
extern DELPHI_PACKAGE System::LongBool __stdcall (*ExpandEnvironmentStringsForUserA_MP)(NativeUInt hToken, char * lpSrc, char * lpDst, unsigned nSize);
extern DELPHI_PACKAGE System::LongBool __stdcall (*TrackMouseEvent_MP)(tagTRACKMOUSEEVENT &EventTrack);
extern DELPHI_PACKAGE System::LongBool __stdcall (*CopyFileW_MP)(System::WideChar * lpExistingFileName, System::WideChar * lpNewFileName, System::LongBool bFailIfExists);
extern DELPHI_PACKAGE System::LongBool __stdcall (*Wow64RevertWow64FsRedirection_MP)(void * OldValue);
extern DELPHI_PACKAGE System::LongBool __stdcall (*Wow64DisableWow64FsRedirection_MP)(void * &OldValue);
extern DELPHI_PACKAGE bool __stdcall (*Wow64EnableWow64FsRedirection_MP)(bool Wow64FsEnableDirection);
extern DELPHI_PACKAGE unsigned __stdcall (*NetShareEnumW_MP)(System::WideChar * ServerName, unsigned Level, void * Bufptr, unsigned Prefmaxlen, unsigned* EntriesRead, unsigned* TotalEntries, unsigned* resume_handle);
extern DELPHI_PACKAGE HRESULT __stdcall (*SetCurrentProcessExplicitAppUserModelID_MP)(System::WideChar * AppID);
extern DELPHI_PACKAGE HRESULT __stdcall (*SHGetPropertyStoreForWindow_MP)(HWND hwnd, const GUID &riid, /* out */ Mpshelltypes::_di_IPropertyStore &ppv);
extern DELPHI_PACKAGE unsigned __stdcall (*NetShareEnum_MP)(char * pszServer, unsigned sLevel, char * pbBuffer, unsigned cbBuffer, void * pcEntriesRead, void * pcTotalAvail);
extern DELPHI_PACKAGE HRESULT __stdcall (*NetApiBufferFree_MP)(void * Bufptr);
extern DELPHI_PACKAGE bool SumFolderAbort;
extern DELPHI_PACKAGE bool WideFunctionsLoaded;
extern DELPHI_PACKAGE void __fastcall ValidateMenuSeparators(HMENU Menu);
extern DELPHI_PACKAGE unsigned __fastcall ShiftStateToKeys(System::Classes::TShiftState Keys);
extern DELPHI_PACKAGE System::WideString __fastcall ShiftStateToStr(System::Classes::TShiftState Keys);
extern DELPHI_PACKAGE bool __fastcall ExecShellEx(const System::WideString Cmd, const System::WideString Params, const System::WideString Dir, int ShowCmd, bool DoWait, bool WaitForDDE = false, bool WaitForIdleInput = false);
extern DELPHI_PACKAGE bool __fastcall RegUnregNSE(const System::WideString AFileName, bool DoRegister, TEasyNSERegMessages AMessages = (TEasyNSERegMessages() << Mpcommonutilities__2::enseMsgShowErrors ));
extern DELPHI_PACKAGE bool __fastcall RegisterNSE(const System::WideString AFileName, TEasyNSERegMessages AMessages = (TEasyNSERegMessages() << Mpcommonutilities__2::enseMsgShowErrors ));
extern DELPHI_PACKAGE bool __fastcall UnregisterNSE(const System::WideString AFileName, TEasyNSERegMessages AMessages = (TEasyNSERegMessages() << Mpcommonutilities__2::enseMsgShowErrors ));
extern DELPHI_PACKAGE void __fastcall MakeFindDataW(const _WIN32_FIND_DATAA &FindFileDataA, _WIN32_FIND_DATAW &FindFileDataW);
extern DELPHI_PACKAGE bool __fastcall WideDirectoryExists(const System::WideString Name);
extern DELPHI_PACKAGE bool __fastcall WideDeleteDirEx(const System::WideString DirName);
extern DELPHI_PACKAGE bool __fastcall WideCreateDir(System::WideString Path);
extern DELPHI_PACKAGE System::WideString __fastcall WideExcludeTrailingBackslash(System::WideString Path);
extern DELPHI_PACKAGE System::WideString __fastcall WideExpandEnviromentString(System::WideString EnviromentString);
extern DELPHI_PACKAGE System::WideString __fastcall WideExpandEnviromentStringForUser(System::WideString EnviromentString);
extern DELPHI_PACKAGE System::WideString __fastcall WideExtractFilePath(System::WideString Path);
extern DELPHI_PACKAGE System::WideString __fastcall WideExtractFileName(System::WideString Path, bool BaseNameOnly = false);
extern DELPHI_PACKAGE bool __fastcall WideFileExists(System::WideString Path);
extern DELPHI_PACKAGE System::WideString __fastcall WideExtractFileDir(System::WideString Path);
extern DELPHI_PACKAGE System::WideString __fastcall WideExtractFileDrive(System::WideString Path, bool DriveLetterOnly = false);
extern DELPHI_PACKAGE System::WideString __fastcall WideExtractFileExt(System::WideString Path, bool StripExtPeriod = false);
extern DELPHI_PACKAGE NativeUInt __fastcall WideFindFirstFileEx(System::WideString FileName, _WIN32_FIND_DATAW &lpFindFileData, System::WideString Mask, bool CaseSensitive);
extern DELPHI_PACKAGE bool __fastcall WideFindFirstFileExExists(void);
extern DELPHI_PACKAGE void __fastcall FixFormFont(Vcl::Graphics::TFont* AFont);
extern DELPHI_PACKAGE bool __fastcall WideForceDirectories(const System::WideString FileName);
extern DELPHI_PACKAGE void __fastcall FillGradient(int X1, int Y1, int X2, int Y2, System::Uitypes::TColor fStartColor, System::Uitypes::TColor fStopColor, int StartPoint, int EndPoint, Vcl::Graphics::TCanvas* fDrawCanvas);
extern DELPHI_PACKAGE System::WideString __fastcall DropEffectToStr(unsigned DropEffect);
extern DELPHI_PACKAGE bool __fastcall EqualWndMethod(System::Classes::TWndMethod A, System::Classes::TWndMethod B);
extern DELPHI_PACKAGE System::WideChar * __fastcall FindRootToken(const System::WideString Path);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall FlipReverseCopyRect(const bool Flip, const bool Reverse, Vcl::Graphics::TBitmap* const Bitmap)/* overload */;
extern DELPHI_PACKAGE void __fastcall FlipReverseCopyRect(const bool Flip, const bool Reverse, const System::Types::TRect &R, Vcl::Graphics::TCanvas* const Canvas)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FileExistsW(const System::WideString FileName);
extern DELPHI_PACKAGE bool __fastcall IsMappedDrivePath(const System::WideString Path);
extern DELPHI_PACKAGE unsigned __fastcall FindUniqueMenuID(HMENU AMenu);
extern DELPHI_PACKAGE int __fastcall AddContextMenuItem(HMENU Menu, System::WideString ACaption, int Index, unsigned MenuID = (unsigned)(0xffff), unsigned hSubMenu = (unsigned)(0x0), bool Enabled = true, bool Checked = false, bool Default = false);
extern DELPHI_PACKAGE void __fastcall ShadowBlendBits(Vcl::Graphics::TBitmap* Bits, System::Uitypes::TColor BackGndColor);
extern DELPHI_PACKAGE System::WideChar * __fastcall WideStrMove(System::WideChar * Dest, System::WideChar * Source, unsigned Count);
extern DELPHI_PACKAGE System::WideChar * __fastcall WideStrRScan(System::WideChar * Str, System::WideChar Chr);
extern DELPHI_PACKAGE System::WideChar * __fastcall WideStrScan(System::WideChar * Str, System::WideChar Chr);
extern DELPHI_PACKAGE System::WideString __fastcall WideUpperCase(const System::WideString S);
extern DELPHI_PACKAGE System::WideString __fastcall WideValidateDelimitedExtList(System::WideString DelimitedText, TValidateDelimiterWildCardSet Prefix, TValidateDelimiterExt Delimiter);
extern DELPHI_PACKAGE NativeUInt __fastcall CommonLoadLibrary(System::AnsiString LibraryName);
extern DELPHI_PACKAGE bool __fastcall CommonUnloadLibrary(System::AnsiString LibraryName);
extern DELPHI_PACKAGE void __fastcall CommonUnloadAllLibraries(void);
extern DELPHI_PACKAGE void __fastcall DrawWindowButton(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &Pos, int Size, TDrawWindowButtonType ButtonType);
extern DELPHI_PACKAGE void __fastcall DrawRadioButton(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &Pos, int Size, System::Uitypes::TColor clBackground, System::Uitypes::TColor clHotBkGnd, System::Uitypes::TColor clLeftOuter, System::Uitypes::TColor clRightOuter, System::Uitypes::TColor clLeftInner, System::Uitypes::TColor clRightInner, bool Checked, bool Enabled, bool Hot);
extern DELPHI_PACKAGE void __fastcall DrawCheckBox(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &Pos, int Size, System::Uitypes::TColor clBackground, System::Uitypes::TColor clHotBkGnd, System::Uitypes::TColor clLeftOuter, System::Uitypes::TColor clRightOuter, System::Uitypes::TColor clLeftInner, System::Uitypes::TColor clRightInner, bool Checked, bool Enabled, bool Hot);
extern DELPHI_PACKAGE System::Types::TRect __fastcall CheckBounds(int Size, System::WideChar Character = (System::WideChar)(0x67));
extern DELPHI_PACKAGE bool __fastcall HasMMX(void);
extern DELPHI_PACKAGE void __fastcall ConvertBitmapEx(Vcl::Graphics::TBitmap* Image32, Vcl::Graphics::TBitmap* &OutImage, const System::Uitypes::TColor BackGndColor);
extern DELPHI_PACKAGE void __fastcall AlphaBlend(HDC Source, HDC Destination, const System::Types::TRect &R, const System::Types::TPoint &Target, TCommonBlendMode Mode, int ConstantAlpha, int Bias);
extern DELPHI_PACKAGE int __fastcall DrawTextWEx(HDC DC, System::WideString Text, System::Types::TRect &lpRect, TCommonDrawTextWFlags Flags, int MaxLineCount);
extern DELPHI_PACKAGE void __fastcall CreateProcessMP(System::WideString ExeFile, System::WideString Parameters, System::WideString InitalDir);
extern DELPHI_PACKAGE System::Types::TRect __fastcall DiffRectHorz(const System::Types::TRect &Rect1, const System::Types::TRect &Rect2);
extern DELPHI_PACKAGE System::Types::TRect __fastcall DiffRectVert(const System::Types::TRect &Rect1, const System::Types::TRect &Rect2);
extern DELPHI_PACKAGE System::Types::TRect __fastcall AbsRect(const System::Types::TRect &ARect);
extern DELPHI_PACKAGE System::Types::TRect __fastcall CenterRectInRect(const System::Types::TRect &OuterRect, const System::Types::TRect &InnerRect);
extern DELPHI_PACKAGE System::Types::TRect __fastcall CenterRectHorz(const System::Types::TRect &OuterRect, const System::Types::TRect &InnerRect);
extern DELPHI_PACKAGE System::Types::TRect __fastcall CenterRectVert(const System::Types::TRect &OuterRect, const System::Types::TRect &InnerRect);
extern DELPHI_PACKAGE bool __fastcall CommonSupports(const System::_di_IInterface Instance, const GUID &IID, /* out */ void *Intf)/* overload */;
extern DELPHI_PACKAGE bool __fastcall CommonSupports(System::TObject* const Instance, const GUID &IID, /* out */ void *Intf)/* overload */;
extern DELPHI_PACKAGE bool __fastcall CommonSupports(const System::_di_IInterface Instance, const GUID &IID)/* overload */;
extern DELPHI_PACKAGE bool __fastcall CommonSupports(System::TObject* const Instance, const GUID &IID)/* overload */;
extern DELPHI_PACKAGE void __fastcall CopyToNullBufferA(System::WideString S, char * Buffer, unsigned CharCount);
extern DELPHI_PACKAGE void __fastcall CopyToNullBufferW(System::WideString S, System::WideChar * Buffer, unsigned CharCount);
extern DELPHI_PACKAGE void __fastcall MinMax(int &A, int &B);
extern DELPHI_PACKAGE bool __fastcall IsRectProper(const System::Types::TRect &Rect);
extern DELPHI_PACKAGE System::WideString __fastcall AddCommas(System::WideString NumberString);
extern DELPHI_PACKAGE bool __fastcall AsyncLeftButtonDown(void);
extern DELPHI_PACKAGE bool __fastcall AsyncRightButtonDown(void);
extern DELPHI_PACKAGE bool __fastcall AsyncMiddleButtonDown(void);
extern DELPHI_PACKAGE bool __fastcall AsyncControlDown(void);
extern DELPHI_PACKAGE bool __fastcall AsyncAltDown(void);
extern DELPHI_PACKAGE bool __fastcall AsyncShiftDown(void);
extern DELPHI_PACKAGE __int64 __fastcall CalcuateFolderSize(System::WideString FolderPath, bool Recurse);
extern DELPHI_PACKAGE Winapi::Shlobj::PItemIDList __fastcall GetMyDocumentsVirtualFolder(void);
extern DELPHI_PACKAGE void __fastcall WideInsert(System::WideString Source, System::WideString &S, int Index);
extern DELPHI_PACKAGE System::WideString __fastcall WideGetCurrentDir(void);
extern DELPHI_PACKAGE System::WideString __fastcall WideGetTempDir(void);
extern DELPHI_PACKAGE System::WideString __fastcall WideIncludeTrailingBackslash(System::WideString Path);
extern DELPHI_PACKAGE int __fastcall WideIncrementalSearch(System::WideString CompareStr, System::WideString Mask);
extern DELPHI_PACKAGE System::WideString __fastcall WideIntToStr(int Value);
extern DELPHI_PACKAGE bool __fastcall WideIsDrive(System::WideString Drive);
extern DELPHI_PACKAGE bool __fastcall WideIsFloppy(System::WideString FileFolder);
extern DELPHI_PACKAGE bool __fastcall IsAnyMouseButtonDown(void);
extern DELPHI_PACKAGE bool __fastcall IsFTPPath(System::WideString Path);
extern DELPHI_PACKAGE System::WideString __fastcall WideNewFolderName(System::WideString ParentFolder, System::WideString SuggestedFolderName = System::WideString());
extern DELPHI_PACKAGE bool __fastcall WidePathMatchSpec(System::WideString Path, System::WideString Mask);
extern DELPHI_PACKAGE bool __fastcall WidePathMatchSpecExists(void);
extern DELPHI_PACKAGE bool __fastcall WideIsPathDelimiter(const System::WideString S, int Index);
extern DELPHI_PACKAGE bool __fastcall IsTextTrueType(HDC DC)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsTextTrueType(Vcl::Graphics::TCanvas* Canvas)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsUNCPath(const System::WideString Path);
extern DELPHI_PACKAGE bool __fastcall IsUNCPathSyntax(const System::WideString Path);
extern DELPHI_PACKAGE System::WideString __fastcall StrRetToStr(const _STRRET &StrRet, Winapi::Shlobj::PItemIDList APIDL);
extern DELPHI_PACKAGE System::WideString __fastcall SystemDirectory(void);
extern DELPHI_PACKAGE HFONT __fastcall SysMenuFont(void);
extern DELPHI_PACKAGE int __fastcall SysMenuHeight(void);
extern DELPHI_PACKAGE System::Types::TSize __fastcall TextExtentW(System::WideString Text, Vcl::Graphics::TFont* Font)/* overload */;
extern DELPHI_PACKAGE System::Types::TSize __fastcall TextExtentW(System::WideString Text, Vcl::Graphics::TCanvas* Canvas)/* overload */;
extern DELPHI_PACKAGE System::Types::TSize __fastcall TextExtentW(System::WideChar * Text, Vcl::Graphics::TCanvas* Canvas)/* overload */;
extern DELPHI_PACKAGE System::Types::TSize __fastcall TextExtentW(System::WideChar * Text, HDC DC)/* overload */;
extern DELPHI_PACKAGE System::Types::TSize __fastcall TextTrueExtentsW(System::WideString Text, HDC DC);
extern DELPHI_PACKAGE System::WideString __fastcall UniqueFileName(const System::WideString AFilePath);
extern DELPHI_PACKAGE System::WideString __fastcall UniqueDirName(const System::WideString ADirPath);
extern DELPHI_PACKAGE System::WideString __fastcall WideStripExt(System::WideString AFile);
extern DELPHI_PACKAGE System::WideString __fastcall WideStripRemoteComputer(const System::WideString UNCPath);
extern DELPHI_PACKAGE System::WideString __fastcall WideStripTrailingBackslash(const System::WideString S, bool Force = false);
extern DELPHI_PACKAGE System::WideString __fastcall WideStripLeadingBackslash(const System::WideString S);
extern DELPHI_PACKAGE System::WideString __fastcall WideStringReplace(const System::WideString S, const System::WideString OldPattern, const System::WideString NewPattern, System::Sysutils::TReplaceFlags Flags, bool WholeWord = false);
extern DELPHI_PACKAGE NativeUInt __fastcall WideShellExecute(HWND hWnd, System::WideString Operation, System::WideString FileName, System::WideString Parameters, System::WideString Directory, int ShowCmd = 0x1);
extern DELPHI_PACKAGE void __fastcall WideShowMessage(HWND Window, System::WideString ACaption, System::WideString AMessage);
extern DELPHI_PACKAGE System::WideString __fastcall WideLowerCase(const System::WideString Str);
extern DELPHI_PACKAGE int __fastcall WideMessageBox(HWND Window, const System::WideString ACaption, const System::WideString AMessage, int uType);
extern DELPHI_PACKAGE System::WideString __fastcall IncludeTrailingBackslashW(const System::WideString S);
extern DELPHI_PACKAGE bool __fastcall DiskInDrive(char C);
extern DELPHI_PACKAGE int __fastcall WideStrIComp(System::WideChar * Str1, System::WideChar * Str2);
extern DELPHI_PACKAGE System::WideChar * __fastcall StrRScanW(System::WideChar * Str, System::WideChar Chr);
extern DELPHI_PACKAGE int __fastcall WideStrComp(System::WideChar * Str1, System::WideChar * Str2);
extern DELPHI_PACKAGE System::WideChar * __fastcall WideStrLower(System::WideChar * Str);
extern DELPHI_PACKAGE void __fastcall WideStrLCopy(System::WideChar * Str1, System::WideChar * Str2, int Count);
extern DELPHI_PACKAGE System::WideString __fastcall ShortenStringEx(HDC DC, const System::WideString S, int Width, bool RTL, TShortenStringEllipsis EllipsisPlacement);
extern DELPHI_PACKAGE System::WideString __fastcall WindowsDirectory(void);
extern DELPHI_PACKAGE System::WideString __fastcall ModuleFileName(bool PathOnly = true);
extern DELPHI_PACKAGE System::WideString __fastcall PIDLToPath(Winapi::Shlobj::PItemIDList PIDL);
extern DELPHI_PACKAGE System::WideString __fastcall ShortFileName(const System::WideString FileName);
extern DELPHI_PACKAGE System::WideString __fastcall ShortPath(const System::WideString Path);
extern DELPHI_PACKAGE void __fastcall LoadWideString(System::Classes::TStream* S, System::WideString &Str);
extern DELPHI_PACKAGE bool __fastcall UsesAlphaChannel(Vcl::Graphics::TBitmap* Image32);
extern DELPHI_PACKAGE void __fastcall SaveWideString(System::Classes::TStream* S, System::WideString Str);
extern DELPHI_PACKAGE System::WideChar * __fastcall WideStrPos(System::WideChar * Str, System::WideChar * SubStr);
extern DELPHI_PACKAGE System::Types::TRect __fastcall ProperRect(const System::Types::TRect &Rect);
extern DELPHI_PACKAGE bool __fastcall DragDetectPlus(HWND Handle, const System::Types::TPoint &Pt);
extern DELPHI_PACKAGE void __fastcall FillWideChar(void *Dest, int count, System::WideChar Value);
extern DELPHI_PACKAGE void __fastcall FreeMemAndNil(void * &P);
extern DELPHI_PACKAGE bool __fastcall IsRectNull(const System::Types::TRect &ARect);
extern DELPHI_PACKAGE bool __fastcall IsUnicode(void);
extern DELPHI_PACKAGE bool __fastcall IsWinNT(void);
extern DELPHI_PACKAGE bool __fastcall IsWin95_SR1(void);
extern DELPHI_PACKAGE bool __fastcall IsWinME(void);
extern DELPHI_PACKAGE bool __fastcall IsWinNT4(void);
extern DELPHI_PACKAGE bool __fastcall IsWin2000(void);
extern DELPHI_PACKAGE bool __fastcall IsWinXP(void);
extern DELPHI_PACKAGE bool __fastcall IsWinVista(void);
extern DELPHI_PACKAGE bool __fastcall IsWin7(void);
extern DELPHI_PACKAGE int __fastcall RectHeight(const System::Types::TRect &R);
extern DELPHI_PACKAGE System::UnicodeString __fastcall RectToStr(const System::Types::TRect &R);
extern DELPHI_PACKAGE System::Types::TRect __fastcall RectToSquare(const System::Types::TRect &R);
extern DELPHI_PACKAGE int __fastcall RectWidth(const System::Types::TRect &R);
extern DELPHI_PACKAGE bool __fastcall ContainsRect(const System::Types::TRect &OuterRect, const System::Types::TRect &InnerRect);
extern DELPHI_PACKAGE System::Classes::TShiftState __fastcall KeyDataToShiftState(int KeyData);
extern DELPHI_PACKAGE System::Classes::TShiftState __fastcall KeyDataAsyncToShiftState(void);
extern DELPHI_PACKAGE TCommonDropEffect __fastcall DropEffectToDropEffectState(int Effect);
extern DELPHI_PACKAGE int __fastcall DropEffectStateToDropEffect(TCommonDropEffect Effect);
extern DELPHI_PACKAGE TCommonDropEffects __fastcall DropEffectToDropEffectStates(int Effect);
extern DELPHI_PACKAGE int __fastcall DropEffectStatesToDropEffect(TCommonDropEffects Effect);
extern DELPHI_PACKAGE TCommonKeyStates __fastcall KeyToKeyStates(System::Word Keys);
extern DELPHI_PACKAGE TCommonMouseButton __fastcall KeyStatesToMouseButton(System::Word Keys);
extern DELPHI_PACKAGE unsigned __fastcall KeyStatesToKey(TCommonKeyStates Keys);
extern DELPHI_PACKAGE TCommonDropEffect __fastcall KeyStateToDropEffect(TCommonKeyStates Keys);
extern DELPHI_PACKAGE TCommonMouseButton __fastcall KeyStateToMouseButton(TCommonKeyStates KeyState);
extern DELPHI_PACKAGE System::LongBool __stdcall FileIconInit(System::LongBool FullInit);
extern DELPHI_PACKAGE HRESULT __stdcall SHGetImageList(int iImageList, const GUID &RefID, /* out */ void *ppvOut);
extern DELPHI_PACKAGE System::Types::TSize __fastcall Size(int cx, int cy);
extern DELPHI_PACKAGE System::WideString __fastcall ShortenTextW(HDC DC, System::WideString TextToShorten, int MaxSize);
extern DELPHI_PACKAGE int __fastcall SplitTextW(HDC DC, System::WideString TextToSplit, int MaxWidth, TCommonWideCharArray &Buffer, int MaxSplits);
extern DELPHI_PACKAGE System::WideString __fastcall VariantToCaption(const System::Variant &V);
extern DELPHI_PACKAGE System::WideChar * __fastcall StrCopyW(System::WideChar * Dest, System::WideChar * Source);
extern DELPHI_PACKAGE TCommonRGB __fastcall BrightenColor(const TCommonRGB &RGB, double Amount);
extern DELPHI_PACKAGE TCommonRGB __fastcall DarkenColor(const TCommonRGB &RGB, double Amount);
extern DELPHI_PACKAGE TCommonHLS __fastcall RGBToHLS(const TCommonRGB &RGB);
extern DELPHI_PACKAGE TCommonRGB __fastcall HLSToRGB(const TCommonHLS &HLS);
extern DELPHI_PACKAGE TCommonRGB __fastcall MakeTRBG(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall MakeTColor(const TCommonRGB &RGB);
extern DELPHI_PACKAGE unsigned __fastcall MakeColorRef(const TCommonRGB &RGB, double Gamma = 1.000000E+00);
extern DELPHI_PACKAGE void __fastcall GammaCorrection(TCommonRGB &RGB, double Gamma);
extern DELPHI_PACKAGE bool __fastcall MakeSafeColor(TCommonRGB &RGB);
extern DELPHI_PACKAGE bool __fastcall UpsideDownDIB(Vcl::Graphics::TBitmap* Bits);
extern DELPHI_PACKAGE void __fastcall ActivateTopLevelWindow(HWND Child);
extern DELPHI_PACKAGE bool __fastcall IsVScrollVisible(HWND Wnd);
extern DELPHI_PACKAGE bool __fastcall IsHScrollVisible(HWND Wnd);
extern DELPHI_PACKAGE int __fastcall HScrollbarHeightRuntime(HWND Wnd);
extern DELPHI_PACKAGE int __fastcall VScrollbarWidthRuntime(HWND Wnd);
extern DELPHI_PACKAGE int __fastcall HScrollbarHeight(void);
extern DELPHI_PACKAGE int __fastcall VScrollbarWidth(void);
extern DELPHI_PACKAGE void __fastcall LoadWideFunctions(void);
}	/* namespace Mpcommonutilities */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_MPCOMMONUTILITIES)
using namespace Mpcommonutilities;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// MpcommonutilitiesHPP
