// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EasyListviewAccessible.pas' rev: 31.00 (Windows)

#ifndef EasylistviewaccessibleHPP
#define EasylistviewaccessibleHPP

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
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.oleacc.hpp>
#include <System.Classes.hpp>
#include <Winapi.ActiveX.hpp>
#include <EasyListview.hpp>
#include <MPCommonObjects.hpp>

//-- user supplied -----------------------------------------------------------

namespace Easylistviewaccessible
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEasyListviewHack;
class DELPHICLASS TEasyGroupsHack;
class DELPHICLASS TEasyItemsHack;
class DELPHICLASS TEasyColumnsHack;
class DELPHICLASS TEasyGroupHack;
class DELPHICLASS TEasyItemHack;
class DELPHICLASS TEasyColumnHack;
class DELPHICLASS TEasyHeaderHack;
__interface IEasyAccessible;
typedef System::DelphiInterface<IEasyAccessible> _di_IEasyAccessible;
class DELPHICLASS TEasyAccessibleManager;
class DELPHICLASS TEasyGroupAccessibleManager;
class DELPHICLASS TEasyItemAccessibleManager;
class DELPHICLASS TEasyHeaderAccessibleManager;
class DELPHICLASS TEasyColumnAccessibleManager;
class DELPHICLASS TEasyAccessibleEnumVariantArray;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TEasyListviewHack : public Easylistview::TCustomEasyListview
{
	typedef Easylistview::TCustomEasyListview inherited;
	
public:
	/* TCustomEasyListview.Create */ inline __fastcall virtual TEasyListviewHack(System::Classes::TComponent* AOwner) : Easylistview::TCustomEasyListview(AOwner) { }
	/* TCustomEasyListview.Destroy */ inline __fastcall virtual ~TEasyListviewHack(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEasyListviewHack(HWND ParentWindow) : Easylistview::TCustomEasyListview(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEasyGroupsHack : public Easylistview::TEasyGroups
{
	typedef Easylistview::TEasyGroups inherited;
	
public:
	/* TEasyGroups.Create */ inline __fastcall virtual TEasyGroupsHack(Easylistview::TCustomEasyListview* AnOwner) : Easylistview::TEasyGroups(AnOwner) { }
	/* TEasyGroups.Destroy */ inline __fastcall virtual ~TEasyGroupsHack(void) { }
	
};


class PASCALIMPLEMENTATION TEasyItemsHack : public Easylistview::TEasyItems
{
	typedef Easylistview::TEasyItems inherited;
	
public:
	/* TEasyItems.Create */ inline __fastcall virtual TEasyItemsHack(Easylistview::TCustomEasyListview* AnOwner, Easylistview::TEasyGroup* AnOwnerGroup) : Easylistview::TEasyItems(AnOwner, AnOwnerGroup) { }
	/* TEasyItems.Destroy */ inline __fastcall virtual ~TEasyItemsHack(void) { }
	
};


class PASCALIMPLEMENTATION TEasyColumnsHack : public Easylistview::TEasyColumns
{
	typedef Easylistview::TEasyColumns inherited;
	
public:
	/* TEasyColumns.Create */ inline __fastcall virtual TEasyColumnsHack(Easylistview::TCustomEasyListview* AnOwner) : Easylistview::TEasyColumns(AnOwner) { }
	/* TEasyColumns.Destroy */ inline __fastcall virtual ~TEasyColumnsHack(void) { }
	
};


class PASCALIMPLEMENTATION TEasyGroupHack : public Easylistview::TEasyGroup
{
	typedef Easylistview::TEasyGroup inherited;
	
public:
	/* TEasyGroup.Create */ inline __fastcall virtual TEasyGroupHack(Easylistview::TEasyCollection* ACollection) : Easylistview::TEasyGroup(ACollection) { }
	/* TEasyGroup.Destroy */ inline __fastcall virtual ~TEasyGroupHack(void) { }
	
};


class PASCALIMPLEMENTATION TEasyItemHack : public Easylistview::TEasyItem
{
	typedef Easylistview::TEasyItem inherited;
	
public:
	/* TEasyItem.Create */ inline __fastcall virtual TEasyItemHack(Easylistview::TEasyCollection* ACollection) : Easylistview::TEasyItem(ACollection) { }
	/* TEasyItem.Destroy */ inline __fastcall virtual ~TEasyItemHack(void) { }
	
};


class PASCALIMPLEMENTATION TEasyColumnHack : public Easylistview::TEasyColumn
{
	typedef Easylistview::TEasyColumn inherited;
	
public:
	/* TEasyColumn.Create */ inline __fastcall virtual TEasyColumnHack(Easylistview::TEasyCollection* ACollection) : Easylistview::TEasyColumn(ACollection) { }
	/* TEasyColumn.Destroy */ inline __fastcall virtual ~TEasyColumnHack(void) { }
	
};


class PASCALIMPLEMENTATION TEasyHeaderHack : public Easylistview::TEasyHeader
{
	typedef Easylistview::TEasyHeader inherited;
	
public:
	/* TEasyHeader.Create */ inline __fastcall virtual TEasyHeaderHack(Easylistview::TCustomEasyListview* AnOwner) : Easylistview::TEasyHeader(AnOwner) { }
	/* TEasyHeader.Destroy */ inline __fastcall virtual ~TEasyHeaderHack(void) { }
	
};


__interface  INTERFACE_UUID("{D1F3F352-A96E-47F6-A731-AF688A6B74BE}") IEasyAccessible  : public System::IInterface 
{
	virtual void __stdcall DisconnectFromObject(void) = 0 ;
};

typedef System::DynamicArray<int> TIntegerArray;

class PASCALIMPLEMENTATION TEasyAccessibleManager : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::TObject* FEasyObject;
	int FEnumIndex;
	TEasyListviewHack* __fastcall GetEasyListview(void);
	
protected:
	HRESULT __fastcall FillHeaderState(System::OleVariant &pvarState, Easylistview::TEasyHeader* Header);
	HRESULT __fastcall FillItemState(/* out */ System::OleVariant &pvarState, Easylistview::TEasyItem* Item);
	HRESULT __fastcall FillGroupState(/* out */ System::OleVariant &pvarState, Easylistview::TEasyGroup* Group);
	HRESULT __fastcall GetFocusedItem(Easylistview::TCustomEasyListview* TargetListview, /* out */ System::OleVariant &pvarChild);
	HRESULT __fastcall GetObjName(Easylistview::TEasyCollectionItem* Obj, /* out */ System::WideString &pszName);
	Easylistview::TEasyGroup* __fastcall GroupFromIndex(const System::OleVariant &varChild);
	HRESULT __fastcall CreateSelectionInterface(Easylistview::TCustomEasyListview* TargetListview, /* out */ System::OleVariant &pvarChildren);
	virtual void __fastcall ValidateParameter(void);
	__property System::TObject* EasyObject = {read=FEasyObject, write=FEasyObject};
	__property int EnumIndex = {read=FEnumIndex, write=FEnumIndex, nodefault};
	
public:
	__fastcall virtual TEasyAccessibleManager(System::TObject* AnEasyObject);
	__fastcall virtual ~TEasyAccessibleManager(void);
	HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	virtual HRESULT __stdcall Get_accParent(/* out */ _di_IDispatch &ppdispParent);
	virtual HRESULT __stdcall Get_accChildCount(/* out */ int &pcountChildren);
	virtual HRESULT __stdcall Get_accChild(const System::OleVariant &varChild, /* out */ _di_IDispatch &ppdispChild);
	virtual HRESULT __stdcall Get_accName(const System::OleVariant &varChild, /* out */ System::WideString &pszName);
	virtual HRESULT __stdcall Get_accValue(const System::OleVariant &varChild, /* out */ System::WideString &pszValue);
	virtual HRESULT __stdcall Get_accDescription(const System::OleVariant &varChild, /* out */ System::WideString &pszDescription);
	virtual HRESULT __stdcall Get_accRole(const System::OleVariant &varChild, /* out */ System::OleVariant &pvarRole);
	virtual HRESULT __stdcall Get_accState(const System::OleVariant &varChild, /* out */ System::OleVariant &pvarState);
	virtual HRESULT __stdcall Get_accHelp(const System::OleVariant &varChild, /* out */ System::WideString &pszHelp);
	virtual HRESULT __stdcall Get_accHelpTopic(/* out */ System::WideString &pszHelpFile, const System::OleVariant &varChild, /* out */ int &pidTopic);
	HRESULT __stdcall Get_accKeyboardShortcut(const System::OleVariant &varChild, /* out */ System::WideString &pszKeyboardShortcut);
	virtual HRESULT __stdcall Get_accFocus(/* out */ System::OleVariant &pvarChild);
	virtual HRESULT __stdcall Get_accSelection(/* out */ System::OleVariant &pvarChildren);
	virtual HRESULT __stdcall Get_accDefaultAction(const System::OleVariant &varChild, /* out */ System::WideString &pszDefaultAction);
	virtual HRESULT __stdcall accSelect(int flagsSelect, const System::OleVariant &varChild);
	virtual HRESULT __stdcall accLocation(/* out */ int &pxLeft, /* out */ int &pyTop, /* out */ int &pcxWidth, /* out */ int &pcyHeight, const System::OleVariant &varChild);
	virtual HRESULT __stdcall accNavigate(int navDir, const System::OleVariant &varStart, /* out */ System::OleVariant &pvarEndUpAt);
	virtual HRESULT __stdcall accHitTest(int xLeft, int yTop, /* out */ System::OleVariant &pvarChild);
	virtual HRESULT __stdcall accDoDefaultAction(const System::OleVariant &varChild);
	virtual HRESULT __stdcall Set_accName(const System::OleVariant &varChild, const System::WideString pszName);
	virtual HRESULT __stdcall Set_accValue(const System::OleVariant &varChild, const System::WideString pszValue);
	virtual void __stdcall DisconnectFromObject(void);
	virtual HRESULT __stdcall Next(unsigned celt, System::OleVariant &rgvar, /* out */ unsigned &pceltFetched);
	virtual HRESULT __stdcall Skip(unsigned celt);
	virtual HRESULT __stdcall Reset(void);
	virtual HRESULT __stdcall Clone(/* out */ _di_IEnumVARIANT &Enum);
	__property TEasyListviewHack* EasyListview = {read=GetEasyListview};
private:
	void *__IEnumVARIANT;	// IEnumVARIANT 
	void *__IEasyAccessible;	// IEasyAccessible 
	void *__IAccessible;	// IAccessible 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020404-0000-0000-C000-000000000046}
	operator _di_IEnumVARIANT()
	{
		_di_IEnumVARIANT intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IEnumVARIANT*(void) { return (IEnumVARIANT*)&__IEnumVARIANT; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D1F3F352-A96E-47F6-A731-AF688A6B74BE}
	operator _di_IEasyAccessible()
	{
		_di_IEasyAccessible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IEasyAccessible*(void) { return (IEasyAccessible*)&__IEasyAccessible; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {618736E0-3C3D-11CF-810C-00AA00389B71}
	operator _di_IAccessible()
	{
		_di_IAccessible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAccessible*(void) { return (IAccessible*)&__IAccessible; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IAccessible; }
	#endif
	
};


class PASCALIMPLEMENTATION TEasyGroupAccessibleManager : public TEasyAccessibleManager
{
	typedef TEasyAccessibleManager inherited;
	
private:
	Easylistview::TEasyGroup* __fastcall GetEasyGroup(void);
	
protected:
	Easylistview::TEasyItem* __fastcall ItemFromIndex(Easylistview::TEasyGroup* Group, const System::OleVariant &varChild);
	virtual void __fastcall ValidateParameter(void);
	
public:
	virtual HRESULT __stdcall Get_accChild(const System::OleVariant &varChild, /* out */ _di_IDispatch &ppdispChild);
	virtual HRESULT __stdcall Get_accFocus(/* out */ System::OleVariant &pvarChild);
	virtual HRESULT __stdcall Get_accName(const System::OleVariant &varChild, /* out */ System::WideString &pszName);
	virtual HRESULT __stdcall Get_accParent(/* out */ _di_IDispatch &ppdispParent);
	virtual HRESULT __stdcall Get_accChildCount(/* out */ int &pcountChildren);
	virtual HRESULT __stdcall Get_accRole(const System::OleVariant &varChild, /* out */ System::OleVariant &pvarRole);
	virtual HRESULT __stdcall Get_accSelection(/* out */ System::OleVariant &pvarChildren);
	virtual HRESULT __stdcall Get_accState(const System::OleVariant &varChild, /* out */ System::OleVariant &pvarState);
	virtual HRESULT __stdcall accLocation(/* out */ int &pxLeft, /* out */ int &pyTop, /* out */ int &pcxWidth, /* out */ int &pcyHeight, const System::OleVariant &varChild);
	virtual HRESULT __stdcall accHitTest(int xLeft, int yTop, /* out */ System::OleVariant &pvarChild);
	virtual HRESULT __stdcall Next(unsigned celt, System::OleVariant &rgvar, /* out */ unsigned &pceltFetched);
	__property Easylistview::TEasyGroup* EasyGroup = {read=GetEasyGroup};
public:
	/* TEasyAccessibleManager.Create */ inline __fastcall virtual TEasyGroupAccessibleManager(System::TObject* AnEasyObject) : TEasyAccessibleManager(AnEasyObject) { }
	/* TEasyAccessibleManager.Destroy */ inline __fastcall virtual ~TEasyGroupAccessibleManager(void) { }
	
private:
	void *__IAccessible;	// IAccessible 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {618736E0-3C3D-11CF-810C-00AA00389B71}
	operator _di_IAccessible()
	{
		_di_IAccessible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAccessible*(void) { return (IAccessible*)&__IAccessible; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IAccessible; }
	#endif
	
};


class PASCALIMPLEMENTATION TEasyItemAccessibleManager : public TEasyAccessibleManager
{
	typedef TEasyAccessibleManager inherited;
	
private:
	Easylistview::TEasyItem* __fastcall GetEasyItem(void);
	
protected:
	virtual void __fastcall ValidateParameter(void);
	
public:
	virtual HRESULT __stdcall Get_accChild(const System::OleVariant &varChild, /* out */ _di_IDispatch &ppdispChild);
	virtual HRESULT __stdcall accDoDefaultAction(const System::OleVariant &varChild);
	virtual HRESULT __stdcall Get_accFocus(/* out */ System::OleVariant &pvarChild);
	virtual HRESULT __stdcall Get_accName(const System::OleVariant &varChild, /* out */ System::WideString &pszName);
	virtual HRESULT __stdcall Get_accParent(/* out */ _di_IDispatch &ppdispParent);
	virtual HRESULT __stdcall Get_accChildCount(/* out */ int &pcountChildren);
	virtual HRESULT __stdcall Get_accRole(const System::OleVariant &varChild, /* out */ System::OleVariant &pvarRole);
	virtual HRESULT __stdcall Get_accSelection(/* out */ System::OleVariant &pvarChildren);
	virtual HRESULT __stdcall Get_accState(const System::OleVariant &varChild, /* out */ System::OleVariant &pvarState);
	virtual HRESULT __stdcall accLocation(/* out */ int &pxLeft, /* out */ int &pyTop, /* out */ int &pcxWidth, /* out */ int &pcyHeight, const System::OleVariant &varChild);
	virtual HRESULT __stdcall accHitTest(int xLeft, int yTop, /* out */ System::OleVariant &pvarChild);
	virtual HRESULT __stdcall Set_accName(const System::OleVariant &varChild, const System::WideString pszName);
	virtual HRESULT __stdcall Clone(/* out */ _di_IEnumVARIANT &Enum);
	virtual HRESULT __stdcall Next(unsigned celt, System::OleVariant &rgvar, /* out */ unsigned &pceltFetched);
	virtual HRESULT __stdcall Reset(void);
	virtual HRESULT __stdcall Skip(unsigned celt);
	__property Easylistview::TEasyItem* EasyItem = {read=GetEasyItem};
public:
	/* TEasyAccessibleManager.Create */ inline __fastcall virtual TEasyItemAccessibleManager(System::TObject* AnEasyObject) : TEasyAccessibleManager(AnEasyObject) { }
	/* TEasyAccessibleManager.Destroy */ inline __fastcall virtual ~TEasyItemAccessibleManager(void) { }
	
private:
	void *__IAccessible;	// IAccessible 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {618736E0-3C3D-11CF-810C-00AA00389B71}
	operator _di_IAccessible()
	{
		_di_IAccessible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAccessible*(void) { return (IAccessible*)&__IAccessible; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IAccessible; }
	#endif
	
};


class PASCALIMPLEMENTATION TEasyHeaderAccessibleManager : public TEasyAccessibleManager
{
	typedef TEasyAccessibleManager inherited;
	
private:
	Easylistview::TEasyHeader* __fastcall GetEasyHeader(void);
	
protected:
	Easylistview::TEasyColumn* __fastcall ColumnFromIndex(const System::OleVariant &varChild);
	HRESULT __fastcall FillColumnState(/* out */ System::OleVariant &pvarState, Easylistview::TEasyColumn* Column);
	virtual void __fastcall ValidateParameter(void);
	
public:
	virtual HRESULT __stdcall Get_accFocus(/* out */ System::OleVariant &pvarChild);
	virtual HRESULT __stdcall Get_accName(const System::OleVariant &varChild, /* out */ System::WideString &pszName);
	virtual HRESULT __stdcall Get_accParent(/* out */ _di_IDispatch &ppdispParent);
	virtual HRESULT __stdcall Get_accChildCount(/* out */ int &pcountChildren);
	virtual HRESULT __stdcall Get_accRole(const System::OleVariant &varChild, /* out */ System::OleVariant &pvarRole);
	virtual HRESULT __stdcall Get_accState(const System::OleVariant &varChild, /* out */ System::OleVariant &pvarState);
	virtual HRESULT __stdcall accLocation(/* out */ int &pxLeft, /* out */ int &pyTop, /* out */ int &pcxWidth, /* out */ int &pcyHeight, const System::OleVariant &varChild);
	virtual HRESULT __stdcall accHitTest(int xLeft, int yTop, /* out */ System::OleVariant &pvarChild);
	virtual HRESULT __stdcall Get_accSelection(/* out */ System::OleVariant &pvarChildren);
	virtual HRESULT __stdcall Next(unsigned celt, System::OleVariant &rgvar, /* out */ unsigned &pceltFetched);
	__property Easylistview::TEasyHeader* EasyHeader = {read=GetEasyHeader};
public:
	/* TEasyAccessibleManager.Create */ inline __fastcall virtual TEasyHeaderAccessibleManager(System::TObject* AnEasyObject) : TEasyAccessibleManager(AnEasyObject) { }
	/* TEasyAccessibleManager.Destroy */ inline __fastcall virtual ~TEasyHeaderAccessibleManager(void) { }
	
private:
	void *__IAccessible;	// IAccessible 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {618736E0-3C3D-11CF-810C-00AA00389B71}
	operator _di_IAccessible()
	{
		_di_IAccessible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAccessible*(void) { return (IAccessible*)&__IAccessible; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IAccessible; }
	#endif
	
};


class PASCALIMPLEMENTATION TEasyColumnAccessibleManager : public TEasyHeaderAccessibleManager
{
	typedef TEasyHeaderAccessibleManager inherited;
	
private:
	Easylistview::TEasyColumn* __fastcall GetEasyColumn(void);
	
protected:
	virtual void __fastcall ValidateParameter(void);
	
public:
	virtual HRESULT __stdcall Get_accFocus(/* out */ System::OleVariant &pvarChild);
	virtual HRESULT __stdcall Get_accChild(const System::OleVariant &varChild, /* out */ _di_IDispatch &ppdispChild);
	virtual HRESULT __stdcall Get_accChildCount(/* out */ int &pcountChildren);
	virtual HRESULT __stdcall Get_accName(const System::OleVariant &varChild, /* out */ System::WideString &pszName);
	virtual HRESULT __stdcall Get_accParent(/* out */ _di_IDispatch &ppdispParent);
	virtual HRESULT __stdcall Get_accRole(const System::OleVariant &varChild, /* out */ System::OleVariant &pvarRole);
	virtual HRESULT __stdcall Get_accState(const System::OleVariant &varChild, /* out */ System::OleVariant &pvarState);
	virtual HRESULT __stdcall accLocation(/* out */ int &pxLeft, /* out */ int &pyTop, /* out */ int &pcxWidth, /* out */ int &pcyHeight, const System::OleVariant &varChild);
	virtual HRESULT __stdcall accHitTest(int xLeft, int yTop, /* out */ System::OleVariant &pvarChild);
	virtual HRESULT __stdcall Get_accSelection(/* out */ System::OleVariant &pvarChildren);
	virtual HRESULT __stdcall Clone(/* out */ _di_IEnumVARIANT &Enum);
	virtual HRESULT __stdcall Next(unsigned celt, System::OleVariant &rgvar, /* out */ unsigned &pceltFetched);
	virtual HRESULT __stdcall Reset(void);
	virtual HRESULT __stdcall Skip(unsigned celt);
	__property Easylistview::TEasyColumn* EasyColumn = {read=GetEasyColumn};
public:
	/* TEasyAccessibleManager.Create */ inline __fastcall virtual TEasyColumnAccessibleManager(System::TObject* AnEasyObject) : TEasyHeaderAccessibleManager(AnEasyObject) { }
	/* TEasyAccessibleManager.Destroy */ inline __fastcall virtual ~TEasyColumnAccessibleManager(void) { }
	
private:
	void *__IAccessible;	// IAccessible 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {618736E0-3C3D-11CF-810C-00AA00389B71}
	operator _di_IAccessible()
	{
		_di_IAccessible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAccessible*(void) { return (IAccessible*)&__IAccessible; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IAccessible; }
	#endif
	
};


class PASCALIMPLEMENTATION TEasyAccessibleEnumVariantArray : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	unsigned FEnumCount;
	Easylistview::TEasyItemArray FSelection;
	
public:
	HRESULT __stdcall Next(unsigned celt, System::OleVariant &rgvar, /* out */ unsigned &pceltFetched);
	HRESULT __stdcall Skip(unsigned celt);
	HRESULT __stdcall Reset(void);
	HRESULT __stdcall Clone(/* out */ _di_IEnumVARIANT &Enum);
	__property unsigned EnumCount = {read=FEnumCount, write=FEnumCount, nodefault};
	__property Easylistview::TEasyItemArray Selection = {read=FSelection, write=FSelection};
public:
	/* TObject.Create */ inline __fastcall TEasyAccessibleEnumVariantArray(void) : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TEasyAccessibleEnumVariantArray(void) { }
	
private:
	void *__IEnumVARIANT;	// IEnumVARIANT 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020404-0000-0000-C000-000000000046}
	operator _di_IEnumVARIANT()
	{
		_di_IEnumVARIANT intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IEnumVARIANT*(void) { return (IEnumVARIANT*)&__IEnumVARIANT; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Easylistviewaccessible */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EASYLISTVIEWACCESSIBLE)
using namespace Easylistviewaccessible;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EasylistviewaccessibleHPP
