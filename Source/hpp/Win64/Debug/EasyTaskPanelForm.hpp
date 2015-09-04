// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EasyTaskPanelForm.pas' rev: 30.00 (Windows)

#ifndef EasytaskpanelformHPP
#define EasytaskpanelformHPP

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
#include <System.Variants.hpp>
#include <Vcl.Themes.hpp>
#include <Winapi.UxTheme.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <MPCommonObjects.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Easytaskpanelform
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEasyTaskPanelForm;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TEasyTaskPanelForm : public Vcl::Forms::TCustomForm
{
	typedef Vcl::Forms::TCustomForm inherited;
	
private:
	bool FThemed;
	Mpcommonobjects::TCommonThemeManager* FThemes;
	bool __fastcall GetThemed(void);
	void __fastcall SetThemed(const bool Value);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall DestroyWnd(void);
	DYNAMIC void __fastcall DoShow(void);
	void __fastcall InvalidateChildren(Vcl::Controls::TWinControl* ARoot);
	virtual void __fastcall Loaded(void);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	MESSAGE void __fastcall WMThemeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Msg);
	__property Mpcommonobjects::TCommonThemeManager* Themes = {read=FThemes, write=FThemes};
	
public:
	__fastcall virtual TEasyTaskPanelForm(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEasyTaskPanelForm(void);
	
__published:
	__property ActiveControl;
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property BorderWidth = {default=0};
	__property Caption = {stored=true, default=0};
	__property Color;
	__property Constraints;
	__property Font;
	__property Height = {stored=true};
	__property HorzScrollBar;
	__property KeyPreview = {default=0};
	__property OldCreateOrder;
	__property PixelsPerInch;
	__property PopupMenu;
	__property PrintScale = {default=1};
	__property Scaled = {default=1};
	__property ShowHint;
	__property bool Themed = {read=GetThemed, write=SetThemed, default=1};
	__property VertScrollBar;
	__property Width = {stored=true};
	__property OnActivate;
	__property OnClick;
	__property OnClose;
	__property OnCloseQuery;
	__property OnCreate;
	__property OnDblClick;
	__property OnDestroy;
	__property OnDeactivate;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnGetSiteInfo;
	__property OnHide;
	__property OnHelp;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnPaint;
	__property OnResize;
	__property OnShortCut;
	__property OnShow;
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TEasyTaskPanelForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TCustomForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEasyTaskPanelForm(HWND ParentWindow) : Vcl::Forms::TCustomForm(ParentWindow) { }
	
};


_DECLARE_METACLASS(System::TMetaClass, TEasyTaskPanelFormClass);

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Easytaskpanelform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EASYTASKPANELFORM)
using namespace Easytaskpanelform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EasytaskpanelformHPP
