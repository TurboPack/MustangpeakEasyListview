// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EasyListviewReg.pas' rev: 32.00 (Windows)

#ifndef EasylistviewregHPP
#define EasylistviewregHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <ToolsAPI.hpp>
#include <System.Classes.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <PropertyCategories.hpp>
#include <Vcl.Forms.hpp>
#include <ColnEdit.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <EasyListview.hpp>
#include <EasyScrollFrame.hpp>
#include <MPCommonWizardHelpers.hpp>
#include <MPCommonObjects.hpp>
#include <EasyTaskPanelForm.hpp>

//-- user supplied -----------------------------------------------------------

namespace Easylistviewreg
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEasyListviewEditor;
class DELPHICLASS TEasyDelphiTaskFormWizard;
class DELPHICLASS TEasyBuilderTaskFormWizard;
class DELPHICLASS TEasyTaskPanelCreator;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyListviewEditor : public Designeditors::TDefaultEditor
{
	typedef Designeditors::TDefaultEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TEasyListviewEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEasyListviewEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyDelphiTaskFormWizard : public Mpcommonwizardhelpers::TCommonWizardDelphiForm
{
	typedef Mpcommonwizardhelpers::TCommonWizardDelphiForm inherited;
	
public:
	virtual void __fastcall InitializeWizard(void);
public:
	/* TCommonWizardNotifierObject.Create */ inline __fastcall TEasyDelphiTaskFormWizard(void) : Mpcommonwizardhelpers::TCommonWizardDelphiForm() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEasyDelphiTaskFormWizard(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyBuilderTaskFormWizard : public Mpcommonwizardhelpers::TCommonWizardBuilderForm
{
	typedef Mpcommonwizardhelpers::TCommonWizardBuilderForm inherited;
	
public:
	virtual void __fastcall InitializeWizard(void);
public:
	/* TCommonWizardNotifierObject.Create */ inline __fastcall TEasyBuilderTaskFormWizard(void) : Mpcommonwizardhelpers::TCommonWizardBuilderForm() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEasyBuilderTaskFormWizard(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyTaskPanelCreator : public Mpcommonwizardhelpers::TCommonWizardEmptyFormCreator
{
	typedef Mpcommonwizardhelpers::TCommonWizardEmptyFormCreator inherited;
	
public:
	virtual void __fastcall InitializeCreator(void);
public:
	/* TCommonWizardModuleCreator.Create */ inline __fastcall virtual TEasyTaskPanelCreator(void) : Mpcommonwizardhelpers::TCommonWizardEmptyFormCreator() { }
	/* TCommonWizardModuleCreator.Destroy */ inline __fastcall virtual ~TEasyTaskPanelCreator(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define NEW_PAGE L"New"
#define sELVColumnCategory L"Column Objects"
#define sELVItemCategory L"Item Objects"
#define sELVGroupCategory L"Group Objects"
#define sELVIncrementalCategory L"Incremental Search"
#define sELVMouseCategory L"Mouse"
#define sELVHintCategory L"Hint"
#define sELVOLECategory L"OLE Drag Drop"
#define sImageListCategory L"ImageLists"
#define sPaintInfoCategory L"Paint Information"
#define sELVClipboardCategory L"Clipboard"
#define sELVHeaderCategory L"Header"
#define sELVPaintCategory L"Paint and Drawing"
#define sAutoCategory L"Auto"
#define sELVViewCategory L"View"
#define sELVContextMenuCategory L"ContextMenu"
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Easylistviewreg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EASYLISTVIEWREG)
using namespace Easylistviewreg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EasylistviewregHPP
