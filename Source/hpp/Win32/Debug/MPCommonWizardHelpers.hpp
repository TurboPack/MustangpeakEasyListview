// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'MPCommonWizardHelpers.pas' rev: 30.00 (Windows)

#ifndef MpcommonwizardhelpersHPP
#define MpcommonwizardhelpersHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ImgList.hpp>
#include <ToolsAPI.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Menus.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <TreeIntf.hpp>
#include <VCLEditors.hpp>
#include <System.TypInfo.hpp>
#include <Vcl.Graphics.hpp>
#include <PlatformAPI.hpp>
#include <System.Classes.hpp>
#include <MPCommonWizardTemplates.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mpcommonwizardhelpers
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCommonOTAFile;
class DELPHICLASS TCommonOTAFileForm;
class DELPHICLASS TCommonWizardModuleCreator;
class DELPHICLASS TCommonWizardEmptyUnitCreator;
class DELPHICLASS TCommonWizardEmptyFormCreator;
class DELPHICLASS TCommonWizardEmptyTextCreator;
class DELPHICLASS TCommonWizardNotifierObject;
class DELPHICLASS TCommonWizardModuleCreate;
class DELPHICLASS TCommonWizardDelphiForm;
class DELPHICLASS TCommonWizardBuilderForm;
class DELPHICLASS TPersistentHack;
class DELPHICLASS TCommonImageIndexProperty;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::UnicodeString, 8> Mpcommonwizardhelpers__1;

typedef System::StaticArray<System::UnicodeString, 1> Mpcommonwizardhelpers__2;

class PASCALIMPLEMENTATION TCommonOTAFile : public Toolsapi::TOTAFile
{
	typedef Toolsapi::TOTAFile inherited;
	
private:
	System::UnicodeString FAncestorIdent;
	System::UnicodeString FFormIdent;
	System::UnicodeString FModuleIdent;
	System::Classes::TStringList* FUsesIdent;
	
public:
	__property System::UnicodeString AncestorIdent = {read=FAncestorIdent, write=FAncestorIdent};
	__property System::UnicodeString FormIdent = {read=FFormIdent, write=FFormIdent};
	__property System::UnicodeString ModuleIdent = {read=FModuleIdent, write=FModuleIdent};
	__property System::Classes::TStringList* IncludeIdent = {read=FUsesIdent, write=FUsesIdent};
public:
	/* TOTAFile.Create */ inline __fastcall TCommonOTAFile(const System::UnicodeString StringCode, const System::TDateTime Age) : Toolsapi::TOTAFile(StringCode, Age) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonOTAFile(void) { }
	
private:
	void *__IOTAFile;	// Toolsapi::IOTAFile 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6E2AD9B0-F7F0-11D1-AB26-00C04FB16FB3}
	operator Toolsapi::_di_IOTAFile()
	{
		Toolsapi::_di_IOTAFile intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAFile*(void) { return (Toolsapi::IOTAFile*)&__IOTAFile; }
	#endif
	
};


class PASCALIMPLEMENTATION TCommonOTAFileForm : public TCommonOTAFile
{
	typedef TCommonOTAFile inherited;
	
public:
	virtual System::UnicodeString __fastcall GetSource(void);
public:
	/* TOTAFile.Create */ inline __fastcall TCommonOTAFileForm(const System::UnicodeString StringCode, const System::TDateTime Age) : TCommonOTAFile(StringCode, Age) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonOTAFileForm(void) { }
	
private:
	void *__IOTAFile;	// Toolsapi::IOTAFile 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6E2AD9B0-F7F0-11D1-AB26-00C04FB16FB3}
	operator Toolsapi::_di_IOTAFile()
	{
		Toolsapi::_di_IOTAFile intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAFile*(void) { return (Toolsapi::IOTAFile*)&__IOTAFile; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonWizardModuleCreator : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::UnicodeString FAncestorName;
	System::UnicodeString FFormName;
	bool FMainForm;
	bool FShowForm;
	bool FShowSource;
	System::Classes::TStringList* FUsesIdent;
	bool __fastcall GetIsDelphi(void);
	
public:
	__fastcall virtual TCommonWizardModuleCreator(void);
	__fastcall virtual ~TCommonWizardModuleCreator(void);
	virtual void __fastcall InitializeCreator(void);
	virtual System::UnicodeString __fastcall GetCreatorType(void);
	virtual bool __fastcall GetExisting(void);
	virtual System::UnicodeString __fastcall GetFileSystem(void);
	virtual Toolsapi::_di_IOTAModule __fastcall GetOwner(void);
	virtual bool __fastcall GetUnnamed(void);
	virtual System::UnicodeString __fastcall GetAncestorName(void);
	virtual System::UnicodeString __fastcall GetImplFileName(void);
	virtual System::UnicodeString __fastcall GetIntfFileName(void);
	virtual System::UnicodeString __fastcall GetFormName(void);
	virtual bool __fastcall GetMainForm(void);
	virtual bool __fastcall GetShowForm(void);
	virtual bool __fastcall GetShowSource(void);
	virtual Toolsapi::_di_IOTAFile __fastcall NewFormFile(const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
	virtual Toolsapi::_di_IOTAFile __fastcall NewImplSource(const System::UnicodeString ModuleIdent, const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
	virtual Toolsapi::_di_IOTAFile __fastcall NewIntfSource(const System::UnicodeString ModuleIdent, const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
	virtual void __fastcall FormCreated(const Toolsapi::_di_IOTAFormEditor FormEditor);
	void __fastcall LoadDefaultBuilderIncludeStrings(bool ClearFirst);
	void __fastcall LoadDefaultDelphiUsesStrings(bool ClearFirst);
	__property System::UnicodeString CreatorType = {read=GetCreatorType};
	__property bool Existing = {read=GetExisting, nodefault};
	__property System::UnicodeString FileSystem = {read=GetFileSystem};
	__property Toolsapi::_di_IOTAModule Owner = {read=GetOwner};
	__property bool Unnamed = {read=GetUnnamed, nodefault};
	__property System::UnicodeString AncestorName = {read=GetAncestorName, write=FAncestorName};
	__property System::UnicodeString FormName = {read=GetFormName, write=FFormName};
	__property System::UnicodeString ImplFileName = {read=GetImplFileName};
	__property System::UnicodeString IntfFileName = {read=GetIntfFileName};
	__property bool IsDelphi = {read=GetIsDelphi, nodefault};
	__property bool MainForm = {read=GetMainForm, write=FMainForm, nodefault};
	__property bool ShowForm = {read=GetShowForm, write=FShowForm, nodefault};
	__property bool ShowSource = {read=GetShowSource, write=FShowSource, nodefault};
	__property System::Classes::TStringList* IncludeIdent = {read=FUsesIdent, write=FUsesIdent};
private:
	void *__IOTAModuleCreator;	// Toolsapi::IOTAModuleCreator 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6EDB9B9A-F57A-11D1-AB23-00C04FB16FB3}
	operator Toolsapi::_di_IOTAModuleCreator()
	{
		Toolsapi::_di_IOTAModuleCreator intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAModuleCreator*(void) { return (Toolsapi::IOTAModuleCreator*)&__IOTAModuleCreator; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6EDB9B9E-F57A-11D1-AB23-00C04FB16FB3}
	operator Toolsapi::_di_IOTACreator()
	{
		Toolsapi::_di_IOTACreator intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTACreator*(void) { return (Toolsapi::IOTACreator*)&__IOTAModuleCreator; }
	#endif
	
};

#pragma pack(pop)

typedef System::TMetaClass* TCommonWizardModuleCreatorClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonWizardEmptyUnitCreator : public TCommonWizardModuleCreator
{
	typedef TCommonWizardModuleCreator inherited;
	
public:
	virtual System::UnicodeString __fastcall GetCreatorType(void);
public:
	/* TCommonWizardModuleCreator.Create */ inline __fastcall virtual TCommonWizardEmptyUnitCreator(void) : TCommonWizardModuleCreator() { }
	/* TCommonWizardModuleCreator.Destroy */ inline __fastcall virtual ~TCommonWizardEmptyUnitCreator(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonWizardEmptyFormCreator : public TCommonWizardModuleCreator
{
	typedef TCommonWizardModuleCreator inherited;
	
public:
	virtual System::UnicodeString __fastcall GetCreatorType(void);
	virtual Toolsapi::_di_IOTAFile __fastcall NewImplSource(const System::UnicodeString ModuleIdent, const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
public:
	/* TCommonWizardModuleCreator.Create */ inline __fastcall virtual TCommonWizardEmptyFormCreator(void) : TCommonWizardModuleCreator() { }
	/* TCommonWizardModuleCreator.Destroy */ inline __fastcall virtual ~TCommonWizardEmptyFormCreator(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonWizardEmptyTextCreator : public TCommonWizardModuleCreator
{
	typedef TCommonWizardModuleCreator inherited;
	
public:
	virtual System::UnicodeString __fastcall GetCreatorType(void);
public:
	/* TCommonWizardModuleCreator.Create */ inline __fastcall virtual TCommonWizardEmptyTextCreator(void) : TCommonWizardModuleCreator() { }
	/* TCommonWizardModuleCreator.Destroy */ inline __fastcall virtual ~TCommonWizardEmptyTextCreator(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonWizardNotifierObject : public Toolsapi::TNotifierObject
{
	typedef Toolsapi::TNotifierObject inherited;
	
private:
	System::UnicodeString FAuthor;
	System::UnicodeString FCaption;
	System::UnicodeString FComment;
	System::UnicodeString FGlyphResourceID;
	System::UnicodeString FPage;
	Toolsapi::TWizardState FState;
	System::UnicodeString FUniqueID;
	Toolsapi::_di_IOTAGalleryCategory FGalleryCategory;
	
protected:
	virtual System::UnicodeString __fastcall GetGlpyhResourceID(void);
	
public:
	__fastcall TCommonWizardNotifierObject(void);
	virtual void __fastcall InitializeWizard(void);
	virtual System::UnicodeString __fastcall GetIDString(void);
	virtual System::UnicodeString __fastcall GetName(void);
	Toolsapi::TWizardState __fastcall GetState(void);
	virtual void __fastcall Execute(void);
	System::UnicodeString __fastcall GetAuthor(void);
	virtual System::UnicodeString __fastcall GetComment(void);
	virtual System::UnicodeString __fastcall GetPage(void);
	unsigned __fastcall GetGlyph(void);
	System::UnicodeString __fastcall GetDesigner(void);
	virtual Toolsapi::_di_IOTAGalleryCategory __fastcall GetGalleryCategory(void);
	virtual System::UnicodeString __fastcall GetPersonality(void) = 0 ;
	System::DynamicArray<System::UnicodeString> __fastcall GetFrameworkTypes(void);
	System::DynamicArray<System::UnicodeString> __fastcall GetPlatforms(void);
	__property System::UnicodeString Designer = {read=GetDesigner};
	__property System::UnicodeString Personality = {read=GetPersonality};
	__property System::UnicodeString Author = {read=GetAuthor, write=FAuthor};
	__property System::UnicodeString Caption = {read=GetName, write=FCaption};
	__property System::UnicodeString Comment = {read=GetComment, write=FComment};
	__property Toolsapi::_di_IOTAGalleryCategory GalleryCategory = {read=GetGalleryCategory, write=FGalleryCategory};
	__property System::UnicodeString GlyphResourceID = {read=GetIDString, write=FGlyphResourceID};
	__property System::UnicodeString Page = {read=GetPage, write=FPage};
	__property Toolsapi::TWizardState State = {read=GetState, write=FState, nodefault};
	__property System::UnicodeString UniqueID = {read=GetIDString, write=FUniqueID};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonWizardNotifierObject(void) { }
	
private:
	void *__IOTAProjectWizard;	// Toolsapi::IOTAProjectWizard 
	void *__IOTARepositoryWizard160;	// Toolsapi::IOTARepositoryWizard160 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {36C8BF36-EFFE-11D1-AB1D-00C04FB16FB3}
	operator Toolsapi::_di_IOTAProjectWizard()
	{
		Toolsapi::_di_IOTAProjectWizard intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAProjectWizard*(void) { return (Toolsapi::IOTAProjectWizard*)&__IOTAProjectWizard; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B75C0CE0-EEA6-11D1-9504-00608CCBF153}
	operator Toolsapi::_di_IOTAWizard()
	{
		Toolsapi::_di_IOTAWizard intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAWizard*(void) { return (Toolsapi::IOTAWizard*)&__IOTAProjectWizard; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {034C3976-A0CB-4376-A296-F3C286891573}
	operator Toolsapi::_di_IOTARepositoryWizard160()
	{
		Toolsapi::_di_IOTARepositoryWizard160 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard160*(void) { return (Toolsapi::IOTARepositoryWizard160*)&__IOTARepositoryWizard160; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D7714D41-BC4A-445E-B695-25A65C2F561E}
	operator Toolsapi::_di_IOTARepositoryWizard80()
	{
		Toolsapi::_di_IOTARepositoryWizard80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard80*(void) { return (Toolsapi::IOTARepositoryWizard80*)&__IOTARepositoryWizard160; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {08FCCD88-3A21-4281-ADC9-62FC034CDD12}
	operator Toolsapi::_di_IOTARepositoryWizard60()
	{
		Toolsapi::_di_IOTARepositoryWizard60 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard60*(void) { return (Toolsapi::IOTARepositoryWizard60*)&__IOTARepositoryWizard160; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B75C0CE1-EEA6-11D1-9504-00608CCBF153}
	operator Toolsapi::_di_IOTARepositoryWizard()
	{
		Toolsapi::_di_IOTARepositoryWizard intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard*(void) { return (Toolsapi::IOTARepositoryWizard*)&__IOTAProjectWizard; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonWizardModuleCreate : public TCommonWizardNotifierObject
{
	typedef TCommonWizardNotifierObject inherited;
	
private:
	TCommonWizardModuleCreatorClass FCreatorClass;
	
public:
	virtual void __fastcall Execute(void);
	__property TCommonWizardModuleCreatorClass CreatorClass = {read=FCreatorClass, write=FCreatorClass};
public:
	/* TCommonWizardNotifierObject.Create */ inline __fastcall TCommonWizardModuleCreate(void) : TCommonWizardNotifierObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonWizardModuleCreate(void) { }
	
private:
	void *__IOTAProjectWizard;	// Toolsapi::IOTAProjectWizard 
	void *__IOTARepositoryWizard160;	// Toolsapi::IOTARepositoryWizard160 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {36C8BF36-EFFE-11D1-AB1D-00C04FB16FB3}
	operator Toolsapi::_di_IOTAProjectWizard()
	{
		Toolsapi::_di_IOTAProjectWizard intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAProjectWizard*(void) { return (Toolsapi::IOTAProjectWizard*)&__IOTAProjectWizard; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B75C0CE0-EEA6-11D1-9504-00608CCBF153}
	operator Toolsapi::_di_IOTAWizard()
	{
		Toolsapi::_di_IOTAWizard intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAWizard*(void) { return (Toolsapi::IOTAWizard*)&__IOTAProjectWizard; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {034C3976-A0CB-4376-A296-F3C286891573}
	operator Toolsapi::_di_IOTARepositoryWizard160()
	{
		Toolsapi::_di_IOTARepositoryWizard160 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard160*(void) { return (Toolsapi::IOTARepositoryWizard160*)&__IOTARepositoryWizard160; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D7714D41-BC4A-445E-B695-25A65C2F561E}
	operator Toolsapi::_di_IOTARepositoryWizard80()
	{
		Toolsapi::_di_IOTARepositoryWizard80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard80*(void) { return (Toolsapi::IOTARepositoryWizard80*)&__IOTARepositoryWizard160; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {08FCCD88-3A21-4281-ADC9-62FC034CDD12}
	operator Toolsapi::_di_IOTARepositoryWizard60()
	{
		Toolsapi::_di_IOTARepositoryWizard60 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard60*(void) { return (Toolsapi::IOTARepositoryWizard60*)&__IOTARepositoryWizard160; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B75C0CE1-EEA6-11D1-9504-00608CCBF153}
	operator Toolsapi::_di_IOTARepositoryWizard()
	{
		Toolsapi::_di_IOTARepositoryWizard intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard*(void) { return (Toolsapi::IOTARepositoryWizard*)&__IOTAProjectWizard; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonWizardDelphiForm : public TCommonWizardModuleCreate
{
	typedef TCommonWizardModuleCreate inherited;
	
public:
	virtual System::UnicodeString __fastcall GetPersonality(void);
public:
	/* TCommonWizardNotifierObject.Create */ inline __fastcall TCommonWizardDelphiForm(void) : TCommonWizardModuleCreate() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonWizardDelphiForm(void) { }
	
private:
	void *__IOTAProjectWizard;	// Toolsapi::IOTAProjectWizard 
	void *__IOTARepositoryWizard160;	// Toolsapi::IOTARepositoryWizard160 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {36C8BF36-EFFE-11D1-AB1D-00C04FB16FB3}
	operator Toolsapi::_di_IOTAProjectWizard()
	{
		Toolsapi::_di_IOTAProjectWizard intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAProjectWizard*(void) { return (Toolsapi::IOTAProjectWizard*)&__IOTAProjectWizard; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B75C0CE0-EEA6-11D1-9504-00608CCBF153}
	operator Toolsapi::_di_IOTAWizard()
	{
		Toolsapi::_di_IOTAWizard intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAWizard*(void) { return (Toolsapi::IOTAWizard*)&__IOTAProjectWizard; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {034C3976-A0CB-4376-A296-F3C286891573}
	operator Toolsapi::_di_IOTARepositoryWizard160()
	{
		Toolsapi::_di_IOTARepositoryWizard160 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard160*(void) { return (Toolsapi::IOTARepositoryWizard160*)&__IOTARepositoryWizard160; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D7714D41-BC4A-445E-B695-25A65C2F561E}
	operator Toolsapi::_di_IOTARepositoryWizard80()
	{
		Toolsapi::_di_IOTARepositoryWizard80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard80*(void) { return (Toolsapi::IOTARepositoryWizard80*)&__IOTARepositoryWizard160; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {08FCCD88-3A21-4281-ADC9-62FC034CDD12}
	operator Toolsapi::_di_IOTARepositoryWizard60()
	{
		Toolsapi::_di_IOTARepositoryWizard60 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard60*(void) { return (Toolsapi::IOTARepositoryWizard60*)&__IOTARepositoryWizard160; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B75C0CE1-EEA6-11D1-9504-00608CCBF153}
	operator Toolsapi::_di_IOTARepositoryWizard()
	{
		Toolsapi::_di_IOTARepositoryWizard intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard*(void) { return (Toolsapi::IOTARepositoryWizard*)&__IOTAProjectWizard; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonWizardBuilderForm : public TCommonWizardDelphiForm
{
	typedef TCommonWizardDelphiForm inherited;
	
public:
	virtual System::UnicodeString __fastcall GetPersonality(void);
public:
	/* TCommonWizardNotifierObject.Create */ inline __fastcall TCommonWizardBuilderForm(void) : TCommonWizardDelphiForm() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCommonWizardBuilderForm(void) { }
	
private:
	void *__IOTAProjectWizard;	// Toolsapi::IOTAProjectWizard 
	void *__IOTARepositoryWizard160;	// Toolsapi::IOTARepositoryWizard160 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {36C8BF36-EFFE-11D1-AB1D-00C04FB16FB3}
	operator Toolsapi::_di_IOTAProjectWizard()
	{
		Toolsapi::_di_IOTAProjectWizard intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAProjectWizard*(void) { return (Toolsapi::IOTAProjectWizard*)&__IOTAProjectWizard; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B75C0CE0-EEA6-11D1-9504-00608CCBF153}
	operator Toolsapi::_di_IOTAWizard()
	{
		Toolsapi::_di_IOTAWizard intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAWizard*(void) { return (Toolsapi::IOTAWizard*)&__IOTAProjectWizard; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {034C3976-A0CB-4376-A296-F3C286891573}
	operator Toolsapi::_di_IOTARepositoryWizard160()
	{
		Toolsapi::_di_IOTARepositoryWizard160 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard160*(void) { return (Toolsapi::IOTARepositoryWizard160*)&__IOTARepositoryWizard160; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D7714D41-BC4A-445E-B695-25A65C2F561E}
	operator Toolsapi::_di_IOTARepositoryWizard80()
	{
		Toolsapi::_di_IOTARepositoryWizard80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard80*(void) { return (Toolsapi::IOTARepositoryWizard80*)&__IOTARepositoryWizard160; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {08FCCD88-3A21-4281-ADC9-62FC034CDD12}
	operator Toolsapi::_di_IOTARepositoryWizard60()
	{
		Toolsapi::_di_IOTARepositoryWizard60 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard60*(void) { return (Toolsapi::IOTARepositoryWizard60*)&__IOTARepositoryWizard160; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B75C0CE1-EEA6-11D1-9504-00608CCBF153}
	operator Toolsapi::_di_IOTARepositoryWizard()
	{
		Toolsapi::_di_IOTARepositoryWizard intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard*(void) { return (Toolsapi::IOTARepositoryWizard*)&__IOTAProjectWizard; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPersistentHack : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPersistentHack(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TPersistentHack(void) : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommonImageIndexProperty : public Designeditors::TIntegerProperty
{
	typedef Designeditors::TIntegerProperty inherited;
	
private:
	Vcl::Imglist::TCustomImageList* __fastcall GetImageList(void);
	Vcl::Imglist::TCustomImageList* __fastcall GetImageListAt(int ComponentIndex);
	
protected:
	virtual bool __fastcall ExtractImageList(System::Classes::TPersistent* Inst, /* out */ Vcl::Imglist::TCustomImageList* &ImageList);
	__property Vcl::Imglist::TCustomImageList* ImageList = {read=GetImageList};
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual System::UnicodeString __fastcall GetValue(void);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
	void __fastcall ListMeasureWidth(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AWidth);
	void __fastcall ListMeasureHeight(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AHeight);
	void __fastcall ListDrawValue(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawName(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawValue(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TCommonImageIndexProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TIntegerProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TCommonImageIndexProperty(void) { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
private:
	void *__ICustomPropertyListDrawing;	// Vcleditors::ICustomPropertyListDrawing 
	void *__ICustomPropertyDrawing;	// Vcleditors::ICustomPropertyDrawing 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BE2B8CF7-DDCA-4D4B-BE26-2396B969F8E0}
	operator Vcleditors::_di_ICustomPropertyListDrawing()
	{
		Vcleditors::_di_ICustomPropertyListDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Vcleditors::ICustomPropertyListDrawing*(void) { return (Vcleditors::ICustomPropertyListDrawing*)&__ICustomPropertyListDrawing; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E1A50419-1288-4B26-9EFA-6608A35F0824}
	operator Vcleditors::_di_ICustomPropertyDrawing()
	{
		Vcleditors::_di_ICustomPropertyDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Vcleditors::ICustomPropertyDrawing*(void) { return (Vcleditors::ICustomPropertyDrawing*)&__ICustomPropertyDrawing; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Mpcommonwizardhelpers__1 DELPHI_USES_UNITS;
extern DELPHI_PACKAGE Mpcommonwizardhelpers__2 BUIDLER_INCLUDE;
extern DELPHI_PACKAGE Toolsapi::_di_IOTAProjectGroup __fastcall GetCurrentProjectGroup(void);
extern DELPHI_PACKAGE Toolsapi::_di_IOTAProject __fastcall GetCurrentProject(void);
extern DELPHI_PACKAGE Toolsapi::_di_IOTAGalleryCategory __fastcall AddDelphiCategory(System::UnicodeString CategoryID, System::UnicodeString CategoryCaption);
extern DELPHI_PACKAGE Toolsapi::_di_IOTAGalleryCategory __fastcall AddBuilderCategory(System::UnicodeString CategoryID, System::UnicodeString CategoryCaption);
extern DELPHI_PACKAGE void __fastcall RemoveCategory(Toolsapi::_di_IOTAGalleryCategory Category);
extern DELPHI_PACKAGE bool __fastcall IsDelphiPersonality(void);
}	/* namespace Mpcommonwizardhelpers */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_MPCOMMONWIZARDHELPERS)
using namespace Mpcommonwizardhelpers;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// MpcommonwizardhelpersHPP
