// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EasyCollectionEditor.pas' rev: 31.00 (Windows)

#ifndef EasycollectioneditorHPP
#define EasycollectioneditorHPP

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
#include <Vcl.Graphics.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <DesignWindows.hpp>
#include <TreeIntf.hpp>
#include <VCLEditors.hpp>
#include <System.TypInfo.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <EasyListview.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Menus.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Easycollectioneditor
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFormEasyCollectionEditor;
struct TFormRegRec;
class DELPHICLASS TEditorList;
class DELPHICLASS TEasyCollectionEditor;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFormEasyCollectionEditor : public Designwindows::TDesignWindow
{
	typedef Designwindows::TDesignWindow inherited;
	
__published:
	Vcl::Comctrls::TListView* ListView1;
	Vcl::Comctrls::TToolBar* ToolBar1;
	Vcl::Comctrls::TToolButton* ToolButton1;
	Vcl::Comctrls::TToolButton* ToolButton2;
	Vcl::Comctrls::TToolButton* ToolButton3;
	Vcl::Comctrls::TToolButton* ToolButton4;
	Vcl::Controls::TImageList* ImageList1;
	Vcl::Comctrls::TToolButton* ToolButton5;
	Vcl::Actnlist::TActionList* ActionList1;
	Vcl::Actnlist::TAction* ActionNewItem;
	Vcl::Actnlist::TAction* ActionDeleteItem;
	Vcl::Actnlist::TAction* ActionUpItem;
	Vcl::Actnlist::TAction* ActionDownItem;
	Vcl::Comctrls::TToolButton* ToolButton6;
	Vcl::Menus::TPopupMenu* PopupMenu1;
	Vcl::Menus::TMenuItem* Add1;
	Vcl::Menus::TMenuItem* Delete1;
	Vcl::Menus::TMenuItem* MoveUp1;
	Vcl::Menus::TMenuItem* MoveDown1;
	Vcl::Menus::TMenuItem* N1;
	Vcl::Comctrls::TStatusBar* StatusBar1;
	void __fastcall FormClose(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	void __fastcall ActionNewItemExecute(System::TObject* Sender);
	void __fastcall ActionDeleteItemExecute(System::TObject* Sender);
	void __fastcall ActionUpItemExecute(System::TObject* Sender);
	void __fastcall ActionDownItemExecute(System::TObject* Sender);
	void __fastcall ListView1Resize(System::TObject* Sender);
	void __fastcall ListView1Change(System::TObject* Sender, Vcl::Comctrls::TListItem* Item, Vcl::Comctrls::TItemChange Change);
	void __fastcall ListView1KeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall ListView1KeyPress(System::TObject* Sender, System::WideChar &Key);
	
private:
	Easylistview::TEasyCollection* FCollection;
	Easylistview::TCustomEasyListview* FListview;
	bool FRebuilding;
	
protected:
	DYNAMIC void __fastcall DoShow(void);
	void __fastcall Rebuild(void);
	HIDESBASE void __fastcall Refresh(void);
	void __fastcall HandleDelete(void);
	
public:
	virtual void __fastcall DesignerClosed(const Designintf::_di_IDesigner Designer, bool AGoingDormant);
	virtual void __fastcall ItemDeleted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* Item);
	virtual void __fastcall ItemsModified(const Designintf::_di_IDesigner Designer);
	__property Easylistview::TEasyCollection* Collection = {read=FCollection, write=FCollection};
	__property Easylistview::TCustomEasyListview* Listview = {read=FListview, write=FListview};
	__property bool Rebuilding = {read=FRebuilding, write=FRebuilding, nodefault};
public:
	/* TDesignWindow.Create */ inline __fastcall virtual TFormEasyCollectionEditor(System::Classes::TComponent* AOwner) : Designwindows::TDesignWindow(AOwner) { }
	/* TDesignWindow.Destroy */ inline __fastcall virtual ~TFormEasyCollectionEditor(void) { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFormEasyCollectionEditor(System::Classes::TComponent* AOwner, int Dummy) : Designwindows::TDesignWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFormEasyCollectionEditor(HWND ParentWindow) : Designwindows::TDesignWindow(ParentWindow) { }
	
};


typedef TFormRegRec *PFormRegRec;

struct DECLSPEC_DRECORD TFormRegRec
{
public:
	Vcl::Forms::TForm* Form;
	Easylistview::TEasyCollection* Collection;
	Easylistview::TCustomEasyListview* Listview;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TEditorList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TThreadList* FFormList;
	
protected:
	__property System::Classes::TThreadList* FormList = {read=FFormList, write=FFormList};
	
public:
	__fastcall TEditorList(void);
	__fastcall virtual ~TEditorList(void);
	bool __fastcall CollectionRegistered(Easylistview::TEasyCollection* Collection, Vcl::Forms::TForm* &Form);
	void __fastcall ListviewDestroying(Easylistview::TCustomEasyListview* Listview, bool DestroyAll = false);
	void __fastcall RegisterEditor(Vcl::Forms::TForm* Form, Easylistview::TEasyCollection* Collection, Easylistview::TCustomEasyListview* Listview);
	void __fastcall UnRegister(Vcl::Forms::TForm* Form, Easylistview::TEasyCollection* Collection);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEasyCollectionEditor : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TEasyCollectionEditor(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TEasyCollectionEditor(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TEditorList* EditorList;
extern DELPHI_PACKAGE void __fastcall ShowEasyCollectionEditor(Designintf::_di_IDesigner ADesigner, Easylistview::TEasyCollection* ACollection);
}	/* namespace Easycollectioneditor */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EASYCOLLECTIONEDITOR)
using namespace Easycollectioneditor;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EasycollectioneditorHPP
