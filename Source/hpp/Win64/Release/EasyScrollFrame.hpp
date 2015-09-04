// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EasyScrollFrame.pas' rev: 30.00 (Windows)

#ifndef EasyscrollframeHPP
#define EasyscrollframeHPP

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
#include <Vcl.Themes.hpp>
#include <Winapi.UxTheme.hpp>
#include <Vcl.Controls.hpp>
#include <MPCommonObjects.hpp>
#include <MPCommonUtilities.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Easyscrollframe
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomEasyScrollButton;
class DELPHICLASS TEasyScrollButton;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TEasyScrollButtonState : unsigned char { sbsHovering, sbsDown, sbsAutoClick, sbsAutoScrollTimerRunning };

typedef System::Set<TEasyScrollButtonState, TEasyScrollButtonState::sbsHovering, TEasyScrollButtonState::sbsAutoScrollTimerRunning> TEasyScrollButtonStates;

enum DECLSPEC_DENUM TEasyScrollButtonDir : unsigned char { sbdLeft, sbdUp, sbdDown, sbdRight };

enum DECLSPEC_DENUM TEasyTimerType : unsigned char { ettAutoScrollDelay, ettAutoScroll };

class PASCALIMPLEMENTATION TCustomEasyScrollButton : public Mpcommonobjects::TCommonCanvasControl
{
	typedef Mpcommonobjects::TCommonCanvasControl inherited;
	
private:
	int FArrowSize;
	bool FAutoScroll;
	int FAutoScrollTime;
	int FAutoScrollTimeOut;
	TEasyScrollButtonDir FDirection;
	bool FFlat;
	System::Classes::TNotifyEvent FOnClick;
	TEasyScrollButtonStates FState;
	NativeUInt FTimerID;
	Mpcommonutilities::_di_ICallbackStub FTimerStub;
	void __fastcall SetDirection(const TEasyScrollButtonDir Value);
	void __fastcall SetFlat(const bool Value);
	
protected:
	virtual void __fastcall DoClick(void);
	HIDESBASE virtual void __fastcall DoPaintRect(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &WindowClipRect, bool SelectedOnly);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall SetEnabled(bool Value);
	void __fastcall StartAutoScrollTimer(TEasyTimerType TimerType);
	void __fastcall StopAutoScrollTimer(bool FreeStub);
	void __stdcall TimerProc(HWND Window, unsigned uMsg, unsigned idEvent, unsigned dwTime);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	__property int ArrowSize = {read=FArrowSize, write=FArrowSize, default=12};
	__property bool AutoScroll = {read=FAutoScroll, write=FAutoScroll, default=0};
	__property int AutoScrollDelay = {read=FAutoScrollTimeOut, write=FAutoScrollTimeOut, default=1000};
	__property int AutoScrollTime = {read=FAutoScrollTime, write=FAutoScrollTime, default=100};
	__property TEasyScrollButtonDir Direction = {read=FDirection, write=SetDirection, default=0};
	__property bool Flat = {read=FFlat, write=SetFlat, default=0};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property TEasyScrollButtonStates State = {read=FState, write=FState, nodefault};
	__property NativeUInt TimerID = {read=FTimerID, write=FTimerID};
	__property Mpcommonutilities::_di_ICallbackStub TimerStub = {read=FTimerStub, write=FTimerStub};
	
public:
	__fastcall virtual TCustomEasyScrollButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomEasyScrollButton(void);
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomEasyScrollButton(HWND ParentWindow) : Mpcommonobjects::TCommonCanvasControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEasyScrollButton : public TCustomEasyScrollButton
{
	typedef TCustomEasyScrollButton inherited;
	
public:
	__property State;
	
__published:
	__property Action;
	__property ActionLink;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property ArrowSize = {default=12};
	__property AutoScroll = {default=0};
	__property AutoScrollDelay = {default=1000};
	__property AutoScrollTime = {default=100};
	__property AutoSize = {default=0};
	__property BorderWidth = {default=0};
	__property Constraints;
	__property Direction = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Flat = {default=0};
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Themed = {default=1};
	__property Visible = {default=1};
public:
	/* TCustomEasyScrollButton.Create */ inline __fastcall virtual TEasyScrollButton(System::Classes::TComponent* AOwner) : TCustomEasyScrollButton(AOwner) { }
	/* TCustomEasyScrollButton.Destroy */ inline __fastcall virtual ~TEasyScrollButton(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEasyScrollButton(HWND ParentWindow) : TCustomEasyScrollButton(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word TIMER_AUTOSCROLLDELAY = System::Word(0x3eb);
static const System::Word TIMER_AUTOSCROLL = System::Word(0x3ec);
}	/* namespace Easyscrollframe */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EASYSCROLLFRAME)
using namespace Easyscrollframe;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EasyscrollframeHPP
