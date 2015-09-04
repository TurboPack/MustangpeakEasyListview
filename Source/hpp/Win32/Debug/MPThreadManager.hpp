// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'MPThreadManager.pas' rev: 30.00 (Windows)

#ifndef MpthreadmanagerHPP
#define MpthreadmanagerHPP

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
#include <Vcl.Controls.hpp>
#include <Winapi.ShlObj.hpp>
#include <Winapi.ShellAPI.hpp>
#include <Winapi.ActiveX.hpp>
#include <MPShellTypes.hpp>
#include <MPCommonObjects.hpp>
#include <MPCommonUtilities.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mpthreadmanager
{
//-- forward type declarations -----------------------------------------------
struct TWMThreadRequest;
struct TThreadNameInfoA;
class DELPHICLASS TCommonThreadRequest;
class DELPHICLASS TPIDLThreadRequest;
class DELPHICLASS TShellIconThreadRequest;
class DELPHICLASS TPIDLCallbackThreadRequest;
class DELPHICLASS TCommonThread;
class DELPHICLASS TCommonEventThread;
class DELPHICLASS TCommonShellExecuteThread;
class DELPHICLASS TCommonCallbackEventThread;
class DELPHICLASS TCommonThreadManager;
class DELPHICLASS TCallbackThreadManager;
//-- type declarations -------------------------------------------------------
typedef System::Int8 TCommonThreadPriority;

typedef void __fastcall (__closure *TNamespaceCallbackProc)(TPIDLCallbackThreadRequest* Request);

#pragma pack(push,1)
struct DECLSPEC_DRECORD TWMThreadRequest
{
public:
	unsigned Msg;
	NativeUInt RequestID;
	TCommonThreadRequest* Request;
	NativeInt Result;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TCommonThreadDirection : unsigned char { etdFirstInFirstOut, etdFirstInLastOut };

struct DECLSPEC_DRECORD TThreadNameInfoA
{
public:
	unsigned FType;
	char *FName;
	unsigned FThreadID;
	unsigned FFlags;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonThreadRequest : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	NativeUInt FID;
	TCommonThreadPriority FPriority;
	int FRefCount;
	int FTag;
	TCommonThread* FThread;
	Vcl::Controls::TWinControl* FWindow;
	void *FItem;
	int FRemainingRequests;
	unsigned FCallbackWndMessage;
	
protected:
	__property int RefCount = {read=FRefCount, write=FRefCount, nodefault};
	
public:
	__fastcall virtual TCommonThreadRequest(void);
	__fastcall virtual ~TCommonThreadRequest(void);
	virtual bool __fastcall HandleRequest(void) = 0 ;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall Prioritize(System::Classes::TList* RequestList);
	void __fastcall Release(void);
	__property unsigned CallbackWndMessage = {read=FCallbackWndMessage, write=FCallbackWndMessage, nodefault};
	__property void * Item = {read=FItem, write=FItem};
	__property NativeUInt ID = {read=FID, write=FID, nodefault};
	__property TCommonThreadPriority Priority = {read=FPriority, write=FPriority, default=50};
	__property int RemainingRequests = {read=FRemainingRequests, write=FRemainingRequests, nodefault};
	__property int Tag = {read=FTag, write=FTag, nodefault};
	__property TCommonThread* Thread = {read=FThread};
	__property Vcl::Controls::TWinControl* Window = {read=FWindow, write=FWindow};
};

#pragma pack(pop)

typedef System::TMetaClass* TCommonThreadRequestClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPIDLThreadRequest : public TCommonThreadRequest
{
	typedef TCommonThreadRequest inherited;
	
private:
	_ITEMIDLIST *FPIDL;
	
public:
	__fastcall virtual ~TPIDLThreadRequest(void);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property Winapi::Shlobj::PItemIDList PIDL = {read=FPIDL, write=FPIDL};
public:
	/* TCommonThreadRequest.Create */ inline __fastcall virtual TPIDLThreadRequest(void) : TCommonThreadRequest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShellIconThreadRequest : public TPIDLThreadRequest
{
	typedef TPIDLThreadRequest inherited;
	
private:
	int FImageIndex;
	bool FLarge;
	bool FOpen;
	int FOverlayIndex;
	
public:
	virtual bool __fastcall HandleRequest(void);
	__property int ImageIndex = {read=FImageIndex, nodefault};
	__property bool Large = {read=FLarge, write=FLarge, nodefault};
	__property bool Open = {read=FOpen, write=FOpen, nodefault};
	__property int OverlayIndex = {read=FOverlayIndex, write=FOverlayIndex, nodefault};
public:
	/* TPIDLThreadRequest.Destroy */ inline __fastcall virtual ~TShellIconThreadRequest(void) { }
	
public:
	/* TCommonThreadRequest.Create */ inline __fastcall virtual TShellIconThreadRequest(void) : TPIDLThreadRequest() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TPIDLCallbackThreadRequest : public TPIDLThreadRequest
{
	typedef TPIDLThreadRequest inherited;
	
private:
	TNamespaceCallbackProc FCallbackProc;
	System::TObject* FTargetObject;
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TNamespaceCallbackProc CallbackProc = {read=FCallbackProc, write=FCallbackProc};
	__property System::TObject* TargetObject = {read=FTargetObject, write=FTargetObject};
public:
	/* TPIDLThreadRequest.Destroy */ inline __fastcall virtual ~TPIDLCallbackThreadRequest(void) { }
	
public:
	/* TCommonThreadRequest.Create */ inline __fastcall virtual TPIDLCallbackThreadRequest(void) : TPIDLThreadRequest() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonThread : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FFreeOnTerminate;
	NativeUInt FHandle;
	bool FOLEInitialized;
	HWND FTargetWnd;
	unsigned FThreadID;
	Mpcommonutilities::_di_ICallbackStub FStub;
	bool FTerminated;
	bool FSuspended;
	NativeUInt FEvent;
	bool FCriticalSectionInitialized;
	_RTL_CRITICAL_SECTION FCriticalSection;
	int FRefCount;
	System::Classes::TThreadList* FRequestList;
	TCommonThreadDirection FDirection;
	bool FRunning;
	bool FRequestListLocked;
	System::Classes::TList* FTempListLock;
	System::Classes::TThreadPriority __fastcall GetPriority(void);
	void __fastcall SetPriority(const System::Classes::TThreadPriority Value);
	void __fastcall SetSuspended(const bool Value);
	void __stdcall ExecuteStub(void);
	_RTL_CRITICAL_SECTION __fastcall GetLock(void);
	NativeUInt __fastcall GetEvent(void);
	void __fastcall SetDirection(const TCommonThreadDirection Value);
	void __fastcall SetRequestListLocked(const bool Value);
	
protected:
	bool FFinished;
	void __fastcall AddRequest(TCommonThreadRequest* Request, bool DoSetEvent);
	virtual void __fastcall Execute(void) = 0 ;
	virtual void __fastcall FinalizeThread(void);
	virtual void __fastcall InitializeThread(void);
	__property bool CriticalSectionInitialized = {read=FCriticalSectionInitialized, write=FCriticalSectionInitialized, nodefault};
	__property NativeUInt Event = {read=GetEvent, nodefault};
	__property bool RequestListLocked = {read=FRequestListLocked, write=SetRequestListLocked, nodefault};
	__property Mpcommonutilities::_di_ICallbackStub Stub = {read=FStub, write=FStub};
	__property bool Terminated = {read=FTerminated, nodefault};
	
public:
	__fastcall virtual TCommonThread(bool CreateSuspended);
	__fastcall virtual ~TCommonThread(void);
	void __fastcall AddRef(void);
	void __fastcall FlushRequestList(void);
	void __fastcall ForceTerminate(void);
	void __fastcall LockThread(void);
	void __fastcall Release(void);
	void __fastcall Resume(void);
	virtual void __fastcall Terminate(void);
	void __fastcall TriggerEvent(void);
	void __fastcall UnlockThread(void);
	__property TCommonThreadDirection Direction = {read=FDirection, write=SetDirection, nodefault};
	__property bool Finished = {read=FFinished, nodefault};
	__property bool FreeOnTerminate = {read=FFreeOnTerminate, write=FFreeOnTerminate, nodefault};
	__property NativeUInt Handle = {read=FHandle, nodefault};
	__property _RTL_CRITICAL_SECTION Lock = {read=GetLock};
	__property bool OLEInitialized = {read=FOLEInitialized, nodefault};
	__property System::Classes::TThreadPriority Priority = {read=GetPriority, write=SetPriority, default=3};
	__property int RefCount = {read=FRefCount, write=FRefCount, nodefault};
	__property System::Classes::TThreadList* RequestList = {read=FRequestList, write=FRequestList};
	__property bool Running = {read=FRunning, nodefault};
	__property bool Suspended = {read=FSuspended, write=SetSuspended, nodefault};
	__property HWND TargetWnd = {read=FTargetWnd, write=FTargetWnd, nodefault};
	__property unsigned ThreadID = {read=FThreadID, nodefault};
};

#pragma pack(pop)

typedef System::TMetaClass* TCommonBaseThreadClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonEventThread : public TCommonThread
{
	typedef TCommonThread inherited;
	
private:
	unsigned FTargetWndNotifyMsg;
	
protected:
	virtual void __fastcall Execute(void);
	
public:
	__fastcall virtual TCommonEventThread(bool CreateSuspended);
	__fastcall virtual ~TCommonEventThread(void);
	__property unsigned TargetWndNotifyMsg = {read=FTargetWndNotifyMsg, write=FTargetWndNotifyMsg, nodefault};
};

#pragma pack(pop)

typedef System::TMetaClass* TCommonEventThreadClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonShellExecuteThread : public TCommonThread
{
	typedef TCommonThread inherited;
	
private:
	System::WideString FlpClass;
	System::WideString FlpDirectory;
	System::WideString FlpFile;
	System::WideString FlpParameters;
	System::WideString FlpVerb;
	_ITEMIDLIST *FPIDL;
	
protected:
	virtual void __fastcall Execute(void);
	
public:
	_SHELLEXECUTEINFOA ShellExecuteInfoA;
	_SHELLEXECUTEINFOW ShellExecuteInfoW;
	__fastcall virtual TCommonShellExecuteThread(bool CreateSuspended);
	__fastcall virtual ~TCommonShellExecuteThread(void);
	__property System::WideString lpClass = {read=FlpClass, write=FlpClass};
	__property System::WideString lpDirectory = {read=FlpDirectory, write=FlpDirectory};
	__property System::WideString lpFile = {read=FlpFile, write=FlpFile};
	__property System::WideString lpParameters = {read=FlpParameters, write=FlpParameters};
	__property System::WideString lpVerb = {read=FlpVerb, write=FlpVerb};
	__property Winapi::Shlobj::PItemIDList PIDL = {read=FPIDL, write=FPIDL};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonCallbackEventThread : public TCommonEventThread
{
	typedef TCommonEventThread inherited;
	
protected:
	virtual void __fastcall Execute(void);
public:
	/* TCommonEventThread.Create */ inline __fastcall virtual TCommonCallbackEventThread(bool CreateSuspended) : TCommonEventThread(CreateSuspended) { }
	/* TCommonEventThread.Destroy */ inline __fastcall virtual ~TCommonCallbackEventThread(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCommonThreadManager : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::AnsiString FAClassName;
	System::Classes::TThreadList* FControlList;
	Mpcommonutilities::_di_ICallbackStub FStub;
	HWND FFilterWindow;
	bool FEnabled;
	TCommonThread* __fastcall GetThread(void);
	HWND __fastcall GetFilterWindow(void);
	int __fastcall GetRequestCount(void);
	void __fastcall SetEnabled(const bool Value);
	
protected:
	TCommonThread* FThread;
	NativeInt __stdcall FilterWndProc(HWND Wnd, unsigned uMsg, NativeUInt wParam, NativeInt lParam);
	virtual void __fastcall CreateThreadObject(void);
	int __fastcall FindControl(Vcl::Controls::TWinControl* Window, System::Classes::TList* LockedList);
	virtual void __fastcall DispatchRequest(NativeInt lParam, NativeUInt wParam);
	void __fastcall FreeThread(void);
	void __fastcall InternalUnRegisterControl(Vcl::Controls::TWinControl* Window, System::Classes::TList* LockedControlList);
	void __fastcall RegisterFilterWindow(void);
	__property System::AnsiString AClassName = {read=FAClassName, write=FAClassName};
	__property System::Classes::TThreadList* ControlList = {read=FControlList, write=FControlList};
	__property HWND FilterWindow = {read=GetFilterWindow, write=FFilterWindow, nodefault};
	
public:
	__fastcall virtual TCommonThreadManager(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCommonThreadManager(void);
	void __fastcall AddRequest(TCommonThreadRequest* Request, bool DoSetEvent);
	void __fastcall FlushAllMessageCache(Vcl::Controls::TWinControl* Window, void * Item = (void *)(0x0));
	void __fastcall FlushMessageCache(Vcl::Controls::TWinControl* Window, NativeUInt RequestID, void * Item = (void *)(0x0));
	bool __fastcall RegisterControl(Vcl::Controls::TWinControl* Window);
	void __fastcall UnRegisterAll(void);
	void __fastcall UnRegisterControl(Vcl::Controls::TWinControl* Window);
	__property int RequestCount = {read=GetRequestCount, nodefault};
	__property TCommonThread* Thread = {read=GetThread};
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
};


class PASCALIMPLEMENTATION TCallbackThreadManager : public TCommonThreadManager
{
	typedef TCommonThreadManager inherited;
	
protected:
	virtual void __fastcall CreateThreadObject(void);
	virtual void __fastcall DispatchRequest(NativeInt lParam, NativeUInt wParam);
	
public:
	HIDESBASE void __fastcall AddRequest(TPIDLCallbackThreadRequest* Request, bool DoSetEvent);
	void __fastcall FlushObjectCache(System::TObject* AnObject);
public:
	/* TCommonThreadManager.Create */ inline __fastcall virtual TCallbackThreadManager(System::Classes::TComponent* AOwner) : TCommonThreadManager(AOwner) { }
	/* TCommonThreadManager.Destroy */ inline __fastcall virtual ~TCallbackThreadManager(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define COMMONTHREADFILTERWNDCLASS L"clsEasyThreadFilter"
static const System::Byte COMMONTHREADSAFETYVALVE = System::Byte(0xc8);
static const System::Word WM_COMMONTHREADCALLBACK = System::Word(0x8164);
static const System::Word WM_COMMONTHREADNOTIFIER = System::Word(0x8163);
static const NativeUInt TID_START = NativeUInt(0x0);
static const System::Int8 FORCE_KILL_THREAD_COUNT = System::Int8(0xa);
static const System::Byte THREAD_SHUTDOWN_WAIT_DELAY = System::Byte(0xc8);
extern DELPHI_PACKAGE TCommonThreadManager* __fastcall GlobalThreadManager(void);
extern DELPHI_PACKAGE TCallbackThreadManager* __fastcall GlobalCallbackThreadManager(void);
}	/* namespace Mpthreadmanager */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_MPTHREADMANAGER)
using namespace Mpthreadmanager;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// MpthreadmanagerHPP
