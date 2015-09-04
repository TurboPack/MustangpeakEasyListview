// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'MPDataObject.pas' rev: 30.00 (Windows)

#ifndef MpdataobjectHPP
#define MpdataobjectHPP

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
#include <Winapi.ActiveX.hpp>
#include <Winapi.ShlObj.hpp>
#include <Winapi.ShellAPI.hpp>
#include <MPShellTypes.hpp>
#include <MPCommonUtilities.hpp>
#include <MPCommonObjects.hpp>
#include <Vcl.AxCtrls.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mpdataobject
{
//-- forward type declarations -----------------------------------------------
struct TDataObjectInfo;
class DELPHICLASS TCommonEnumFormatEtc;
__interface ICommonDataObject;
typedef System::DelphiInterface<ICommonDataObject> _di_ICommonDataObject;
__interface ICommonDataObject2;
typedef System::DelphiInterface<ICommonDataObject2> _di_ICommonDataObject2;
class DELPHICLASS TCommonDataObject;
class DELPHICLASS TCommonClipboardFormat;
class DELPHICLASS TCommonStreamClipFormat;
class DELPHICLASS TFileGroupDescriptorA;
class DELPHICLASS TFileGroupDescriptorW;
class DELPHICLASS TCommonHDrop;
class DELPHICLASS TCommonShellIDList;
class DELPHICLASS TCommonLogicalPerformedDropEffect;
class DELPHICLASS TCommonPreferredDropEffect;
class DELPHICLASS TCommonInShellDragLoop;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TPerformedDropEffect : unsigned char { effectNone, effectCopy, effectMove, effectLink };

typedef TPerformedDropEffect *PPerformedDropEffect;

typedef System::DynamicArray<tagFORMATETC> TFormatEtcArray;

struct DECLSPEC_DRECORD TDataObjectInfo
{
public:
	tagFORMATETC FormatEtc;
	tagSTGMEDIUM StgMedium;
	bool OwnedByDataObject;
};


typedef System::DynamicArray<TDataObjectInfo> TDataObjectInfoArray;

typedef System::StaticArray<tagFORMATETC, 256> TeltArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonEnumFormatEtc : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	int FInternalIndex;
	TFormatEtcArray FFormats;
	
protected:
	HRESULT __stdcall Next(int celt, /* out */ void *elt, System::PLongInt pceltFetched);
	HRESULT __stdcall Skip(int celt);
	HRESULT __stdcall Reset(void);
	HRESULT __stdcall Clone(/* out */ _di_IEnumFORMATETC &Enum);
	__property int InternalIndex = {read=FInternalIndex, write=FInternalIndex, nodefault};
	
public:
	__fastcall TCommonEnumFormatEtc(void);
	__fastcall virtual ~TCommonEnumFormatEtc(void);
	void __fastcall SetFormatLength(int Size);
	__property TFormatEtcArray Formats = {read=FFormats, write=FFormats};
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

__interface  INTERFACE_UUID("{F8B3EE47-C6C1-4FE3-9D94-757AA35DC038}") ICommonDataObject  : public IDataObject 
{
	virtual bool __fastcall AssignDragImage(Vcl::Graphics::TBitmap* Image, const System::Types::TPoint &HotSpot, System::Uitypes::TColor TransparentColor) = 0 ;
	virtual bool __fastcall SaveGlobalBlock(System::Word Format, void * MemoryBlock, int MemoryBlockSize) = 0 ;
	virtual bool __fastcall LoadGlobalBlock(System::Word Format, void * &MemoryBlock) = 0 ;
};

__interface  INTERFACE_UUID("{1E707CE8-F2E7-4566-A87E-630859509F97}") ICommonDataObject2  : public ICommonDataObject 
{
	virtual bool __fastcall MultiFolder(void) = 0 ;
	virtual bool __fastcall MultiFolderVerified(void) = 0 ;
	virtual void __fastcall SetMultiFolder(bool IsSet) = 0 ;
	virtual void __fastcall SetMultiFolderVerified(bool IsVerified) = 0 ;
};

typedef void __fastcall (__closure *TGetDataEvent)(System::TObject* Sender, const tagFORMATETC &FormatEtcIn, tagSTGMEDIUM &Medium, bool &Handled);

typedef void __fastcall (__closure *TQueryGetDataEvent)(System::TObject* Sender, const tagFORMATETC &FormatEtcIn, bool &FormatAvailable, bool &Handled);

class PASCALIMPLEMENTATION TCommonDataObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FIsMultiFolderVerified;
	bool FIsMultiFolder;
	bool FNotifyThreadRef;
	int FRefCount;
	bool FReferenceCounted;
	
protected:
	_di_IDataAdviseHolder FAdviseHolder;
	TDataObjectInfoArray FFormats;
	TGetDataEvent FOnGetData;
	TQueryGetDataEvent FOnQueryGetData;
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef(void);
	int __stdcall _Release(void);
	System::_di_IInterface __fastcall CanonicalIUnknown(System::_di_IInterface TestUnknown);
	virtual HRESULT __stdcall DAdvise(const tagFORMATETC &formatetc, int advf, const _di_IAdviseSink advSink, /* out */ int &dwConnection);
	virtual HRESULT __stdcall DUnadvise(int dwConnection);
	virtual HRESULT __stdcall EnumDAdvise(/* out */ _di_IEnumSTATDATA &enumAdvise);
	virtual HRESULT __stdcall EnumFormatEtc(int dwDirection, /* out */ _di_IEnumFORMATETC &enumFormatEtc);
	bool __fastcall EqualFormatEtc(const tagFORMATETC &FormatEtc1, const tagFORMATETC &FormatEtc2);
	int __fastcall FindFormatEtc(const tagFORMATETC &TestFormatEtc);
	virtual HRESULT __stdcall GetCanonicalFormatEtc(const tagFORMATETC &formatetc, /* out */ tagFORMATETC &formatetcOut);
	virtual HRESULT __stdcall GetData(const tagFORMATETC &FormatEtcIn, /* out */ tagSTGMEDIUM &Medium);
	virtual HRESULT __stdcall GetDataHere(const tagFORMATETC &formatetc, /* out */ tagSTGMEDIUM &medium);
	NativeUInt __fastcall HGlobalClone(NativeUInt HGlobal);
	virtual HRESULT __stdcall QueryGetData(const tagFORMATETC &formatetc);
	virtual HRESULT __stdcall SetData(const tagFORMATETC &formatetc, tagSTGMEDIUM &medium, System::LongBool fRelease);
	virtual void __fastcall DoGetCustomFormats(int dwDirection, TFormatEtcArray &Formats);
	virtual void __fastcall DoOnGetData(const tagFORMATETC &FormatEtcIn, tagSTGMEDIUM &Medium, bool &Handled);
	virtual void __fastcall DoOnQueryGetData(const tagFORMATETC &FormatEtcIn, bool &FormatAvailable, bool &Handled);
	HRESULT __fastcall RetrieveOwnedStgMedium(const tagFORMATETC &Format, tagSTGMEDIUM &StgMedium);
	HRESULT __fastcall StgMediumIncRef(const tagSTGMEDIUM &InStgMedium, tagSTGMEDIUM &OutStgMedium, bool CopyInMedium);
	System::TObject* __fastcall GetObj(void);
	bool __fastcall MultiFolder(void);
	bool __fastcall MultiFolderVerified(void);
	void __fastcall SetMultiFolder(bool IsSet);
	void __fastcall SetMultiFolderVerified(bool IsVerified);
	__property _di_IDataAdviseHolder AdviseHolder = {read=FAdviseHolder};
	__property TDataObjectInfoArray Formats = {read=FFormats, write=FFormats};
	__property bool NotifyThreadRef = {read=FNotifyThreadRef, write=FNotifyThreadRef, nodefault};
	__property System::TObject* Obj = {read=GetObj};
	__property int RefCount = {read=FRefCount, nodefault};
	
public:
	__fastcall TCommonDataObject(bool IsReferenceCounted);
	__fastcall virtual ~TCommonDataObject(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall BeforeDestruction(void);
	__classmethod virtual System::TObject* __fastcall NewInstance();
	bool __fastcall AssignDragImage(Vcl::Graphics::TBitmap* Image, const System::Types::TPoint &HotSpot, System::Uitypes::TColor TransparentColor);
	virtual bool __fastcall GetUserData(const tagFORMATETC &Format, tagSTGMEDIUM &StgMedium);
	bool __fastcall LoadGlobalBlock(System::Word Format, void * &MemoryBlock);
	bool __fastcall SaveGlobalBlock(System::Word Format, void * MemoryBlock, int MemoryBlockSize);
	__property bool IsMultiFolderVerified = {read=FIsMultiFolderVerified, write=FIsMultiFolderVerified, nodefault};
	__property bool IsMultiFolder = {read=FIsMultiFolder, write=FIsMultiFolder, nodefault};
	__property bool ReferenceCounted = {read=FReferenceCounted, write=FReferenceCounted, nodefault};
	__property TGetDataEvent OnGetData = {read=FOnGetData, write=FOnGetData};
	__property TQueryGetDataEvent OnQueryGetData = {read=FOnQueryGetData, write=FOnQueryGetData};
private:
	void *__ICommonDataObject2;	// ICommonDataObject2 
	void *__ICommonExtractObj;	// Mpcommonobjects::ICommonExtractObj 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1E707CE8-F2E7-4566-A87E-630859509F97}
	operator _di_ICommonDataObject2()
	{
		_di_ICommonDataObject2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICommonDataObject2*(void) { return (ICommonDataObject2*)&__ICommonDataObject2; }
	#endif
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
	operator _di_ICommonDataObject()
	{
		_di_ICommonDataObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICommonDataObject*(void) { return (ICommonDataObject*)&__ICommonDataObject2; }
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
	operator IDataObject*(void) { return (IDataObject*)&__ICommonDataObject2; }
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
	operator System::IInterface*(void) { return (System::IInterface*)&__ICommonDataObject2; }
	#endif
	
};


typedef System::TMetaClass* TCommonDataObjectClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonClipboardFormat : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool __fastcall DataObjectContainsFormat(_di_IDataObject DataObject);
	virtual tagFORMATETC __fastcall GetFormatEtc(void);
	virtual bool __fastcall LoadFromClipboard(void);
	virtual bool __fastcall LoadFromDataObject(_di_IDataObject DataObject) = 0 ;
	virtual bool __fastcall SaveToClipboard(void);
	virtual bool __fastcall SaveToDataObject(_di_IDataObject DataObject) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TCommonClipboardFormat(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonClipboardFormat(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonStreamClipFormat : public TCommonClipboardFormat
{
	typedef TCommonClipboardFormat inherited;
	
public:
	virtual tagFORMATETC __fastcall GetFormatEtc(void);
	virtual bool __fastcall LoadFromClipboard(void);
	HIDESBASE bool __fastcall LoadFromDataObject(_di_IDataObject DataObject, Mpcommonobjects::TCommonStream* CoolStream);
	virtual bool __fastcall SaveToClipboard(void);
	HIDESBASE bool __fastcall SaveToDataObject(_di_IDataObject DataObject, Mpcommonobjects::TCommonStream* CoolStream);
public:
	/* TObject.Create */ inline __fastcall TCommonStreamClipFormat(void) : TCommonClipboardFormat() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonStreamClipFormat(void) { }
	
};

#pragma pack(pop)

typedef System::DynamicArray<_FILEDESCRIPTORA> TDescriptorAArray;

typedef System::DynamicArray<_FILEDESCRIPTORW> TDescriptorWArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFileGroupDescriptorA : public TCommonClipboardFormat
{
	typedef TCommonClipboardFormat inherited;
	
private:
	System::Classes::TStream* FStream;
	int __fastcall GetDescriptorCount(void);
	_FILEDESCRIPTORA __fastcall GetFileDescriptorA(int Index);
	void __fastcall SetFileDescriptor(int Index, const _FILEDESCRIPTORA &Value);
	
protected:
	TDescriptorAArray FFileDescriptors;
	__property System::Classes::TStream* Stream = {read=FStream, write=FStream};
	
public:
	__fastcall virtual ~TFileGroupDescriptorA(void);
	void __fastcall AddFileDescriptor(const _FILEDESCRIPTORA &FileDescriptor);
	void __fastcall DeleteFileDescriptor(int Index);
	virtual tagFORMATETC __fastcall GetFormatEtc(void);
	_FILEDESCRIPTORA __fastcall FillDescriptor(System::AnsiString FileName);
	System::Classes::TStream* __fastcall GetFileStream(const _di_IDataObject DataObject, int FileIndex);
	void __fastcall LoadFileGroupDestriptor(Winapi::Shlobj::PFileGroupDescriptorA FileGroupDiscriptor);
	virtual bool __fastcall LoadFromClipboard(void);
	virtual bool __fastcall LoadFromDataObject(_di_IDataObject DataObject);
	virtual bool __fastcall SaveToClipboard(void);
	virtual bool __fastcall SaveToDataObject(_di_IDataObject DataObject);
	__property int DescriptorCount = {read=GetDescriptorCount, nodefault};
	__property _FILEDESCRIPTORA FileDescriptor[int Index] = {read=GetFileDescriptorA, write=SetFileDescriptor};
public:
	/* TObject.Create */ inline __fastcall TFileGroupDescriptorA(void) : TCommonClipboardFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFileGroupDescriptorW : public TCommonClipboardFormat
{
	typedef TCommonClipboardFormat inherited;
	
private:
	System::Classes::TStream* FStream;
	int __fastcall GetDescriptorCount(void);
	_FILEDESCRIPTORW __fastcall GetFileDescriptorW(int Index);
	void __fastcall SetFileDescriptor(int Index, const _FILEDESCRIPTORW &Value);
	
protected:
	TDescriptorWArray FFileDescriptors;
	__property System::Classes::TStream* Stream = {read=FStream, write=FStream};
	
public:
	__fastcall virtual ~TFileGroupDescriptorW(void);
	void __fastcall AddFileDescriptor(const _FILEDESCRIPTORW &FileDescriptor);
	void __fastcall DeleteFileDescriptor(int Index);
	_FILEDESCRIPTORW __fastcall FillDescriptor(System::WideString FileName);
	System::Classes::TStream* __fastcall GetFileStream(const _di_IDataObject DataObject, int FileIndex);
	virtual tagFORMATETC __fastcall GetFormatEtc(void);
	void __fastcall LoadFileGroupDestriptor(Winapi::Shlobj::PFileGroupDescriptorW FileGroupDiscriptor);
	virtual bool __fastcall LoadFromClipboard(void);
	virtual bool __fastcall LoadFromDataObject(_di_IDataObject DataObject);
	virtual bool __fastcall SaveToClipboard(void);
	virtual bool __fastcall SaveToDataObject(_di_IDataObject DataObject);
	__property int DescriptorCount = {read=GetDescriptorCount, nodefault};
	__property _FILEDESCRIPTORW FileDescriptor[int Index] = {read=GetFileDescriptorW, write=SetFileDescriptor};
public:
	/* TObject.Create */ inline __fastcall TFileGroupDescriptorW(void) : TCommonClipboardFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonHDrop : public TCommonClipboardFormat
{
	typedef TCommonClipboardFormat inherited;
	
private:
	void __fastcall SetDropFiles(const Winapi::Shlobj::PDropFiles Value);
	NativeUInt __fastcall GetHDropStruct(void);
	
protected:
	_DROPFILES *FDropFiles;
	int FStructureSize;
	int FFileCount;
	void __fastcall AllocStructure(int Size);
	int __fastcall CalculateDropFileStructureSizeA(Winapi::Shlobj::PDropFiles Value);
	int __fastcall CalculateDropFileStructureSizeW(Winapi::Shlobj::PDropFiles Value);
	int __fastcall FileCountA(void);
	int __fastcall FileCountW(void);
	System::AnsiString __fastcall FileNameA(int Index);
	System::WideString __fastcall FileNameW(int Index);
	void __fastcall FreeStructure(void);
	
public:
	__fastcall virtual ~TCommonHDrop(void);
	bool __fastcall AssignFromClipboard(void);
	virtual bool __fastcall LoadFromClipboard(void);
	virtual bool __fastcall LoadFromDataObject(_di_IDataObject DataObject);
	int __fastcall FileCount(void);
	System::WideString __fastcall FileName(int Index);
	virtual tagFORMATETC __fastcall GetFormatEtc(void);
	void __fastcall AssignFilesA(System::Classes::TStringList* FileList);
	void __fastcall AssignFilesW(System::Classes::TStrings* FileList);
	void __fastcall FileNamesW(System::Classes::TStrings* FileList);
	void __fastcall FileNamesA(System::Classes::TStrings* FileList);
	__property NativeUInt HDropStruct = {read=GetHDropStruct, nodefault};
	virtual bool __fastcall SaveToClipboard(void);
	virtual bool __fastcall SaveToDataObject(_di_IDataObject DataObject);
	__property int StructureSize = {read=FStructureSize, nodefault};
	__property Winapi::Shlobj::PDropFiles DropFiles = {read=FDropFiles, write=SetDropFiles};
public:
	/* TObject.Create */ inline __fastcall TCommonHDrop(void) : TCommonClipboardFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonShellIDList : public TCommonClipboardFormat
{
	typedef TCommonClipboardFormat inherited;
	
private:
	_IDA *FCIDA;
	int __fastcall GetCIDASize(void);
	Winapi::Shlobj::PItemIDList __fastcall InternalChildPIDL(int Index);
	Winapi::Shlobj::PItemIDList __fastcall InternalParentPIDL(void);
	void __fastcall SetCIDA(const Winapi::Shlobj::PIDA Value);
	
public:
	Winapi::Shlobj::PItemIDList __fastcall AbsolutePIDL(int Index);
	void __fastcall AbsolutePIDLs(Mpcommonobjects::TCommonPIDLList* APIDLList);
	void __fastcall AssignPIDLs(Mpcommonobjects::TCommonPIDLList* APIDLList);
	__fastcall virtual ~TCommonShellIDList(void);
	virtual tagFORMATETC __fastcall GetFormatEtc(void);
	virtual bool __fastcall LoadFromClipboard(void);
	virtual bool __fastcall LoadFromDataObject(_di_IDataObject DataObject);
	Winapi::Shlobj::PItemIDList __fastcall ParentPIDL(void);
	int __fastcall PIDLCount(void);
	Winapi::Shlobj::PItemIDList __fastcall RelativePIDL(int Index);
	void __fastcall RelativePIDLs(Mpcommonobjects::TCommonPIDLList* APIDLList);
	virtual bool __fastcall SaveToClipboard(void);
	virtual bool __fastcall SaveToDataObject(_di_IDataObject DataObject);
	__property Winapi::Shlobj::PIDA CIDA = {read=FCIDA, write=SetCIDA};
	__property int CIDASize = {read=GetCIDASize, nodefault};
public:
	/* TObject.Create */ inline __fastcall TCommonShellIDList(void) : TCommonClipboardFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonLogicalPerformedDropEffect : public TCommonClipboardFormat
{
	typedef TCommonClipboardFormat inherited;
	
private:
	TPerformedDropEffect FAction;
	
public:
	virtual tagFORMATETC __fastcall GetFormatEtc(void);
	virtual bool __fastcall LoadFromDataObject(_di_IDataObject DataObject);
	virtual bool __fastcall SaveToDataObject(_di_IDataObject DataObject);
	__property TPerformedDropEffect Action = {read=FAction, write=FAction, nodefault};
public:
	/* TObject.Create */ inline __fastcall TCommonLogicalPerformedDropEffect(void) : TCommonClipboardFormat() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonLogicalPerformedDropEffect(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonPreferredDropEffect : public TCommonLogicalPerformedDropEffect
{
	typedef TCommonLogicalPerformedDropEffect inherited;
	
public:
	virtual tagFORMATETC __fastcall GetFormatEtc(void);
public:
	/* TObject.Create */ inline __fastcall TCommonPreferredDropEffect(void) : TCommonLogicalPerformedDropEffect() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonPreferredDropEffect(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonInShellDragLoop : public TCommonClipboardFormat
{
	typedef TCommonClipboardFormat inherited;
	
private:
	unsigned FData;
	
public:
	virtual tagFORMATETC __fastcall GetFormatEtc(void);
	virtual bool __fastcall LoadFromDataObject(_di_IDataObject DataObject);
	virtual bool __fastcall SaveToDataObject(_di_IDataObject DataObject);
	__property unsigned Data = {read=FData, write=FData, nodefault};
public:
	/* TObject.Create */ inline __fastcall TCommonInShellDragLoop(void) : TCommonClipboardFormat() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonInShellDragLoop(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define CFSTR_LOGICALPERFORMEDDROPEFFECT L"Logical Performed DropEffect"
#define CFSTR_PREFERREDDROPEFFECT L"Preferred DropEffect"
#define CFSTR_PERFORMEDDROPEFFECT L"Performed DropEffect"
#define CFSTR_PASTESUCCEEDED L"Paste Succeeded"
#define CFSTR_INDRAGLOOP L"InShellDragLoop"
#define CFSTR_SHELLIDLISTOFFSET L"Shell Object Offsets"
static const System::Int8 SIZE_SHELLDRAGLOOPDATA = System::Int8(0x4);
extern DELPHI_PACKAGE System::Word CF_SHELLIDLIST;
extern DELPHI_PACKAGE System::Word CF_PERFORMEDDROPEFFECT;
extern DELPHI_PACKAGE System::Word CF_PASTESUCCEEDED;
extern DELPHI_PACKAGE System::Word CF_INDRAGLOOP;
extern DELPHI_PACKAGE System::Word CF_SHELLIDLISTOFFSET;
extern DELPHI_PACKAGE System::Word CF_LOGICALPERFORMEDDROPEFFECT;
extern DELPHI_PACKAGE System::Word CF_PREFERREDDROPEFFECT;
extern DELPHI_PACKAGE System::Word CF_FILECONTENTS;
extern DELPHI_PACKAGE System::Word CF_FILEDESCRIPTORA;
extern DELPHI_PACKAGE System::Word CF_FILEDESCRIPTORW;
extern DELPHI_PACKAGE bool __fastcall DataObjectContainsPIDL(Winapi::Shlobj::PItemIDList APIDL, const _di_IDataObject DataObj);
extern DELPHI_PACKAGE bool __fastcall DataObjectSupportsShell(const _di_IDataObject DataObj);
extern DELPHI_PACKAGE tagFORMATETC __fastcall HDropFormat(void);
extern DELPHI_PACKAGE tagFORMATETC __fastcall ShellIDListFormat(void);
extern DELPHI_PACKAGE tagFORMATETC __fastcall FileDescriptorAFormat(void);
extern DELPHI_PACKAGE tagFORMATETC __fastcall FileDescriptorWFormat(void);
extern DELPHI_PACKAGE tagFORMATETC __fastcall FillFormatEtc(System::Word cfFormat, Winapi::Activex::PDVTargetDevice ptd = (Winapi::Activex::PDVTargetDevice)(0x0), int dwAspect = 0x1, int lindex = 0xffffffff, int tymed = 0x1);
}	/* namespace Mpdataobject */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_MPDATAOBJECT)
using namespace Mpdataobject;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// MpdataobjectHPP
