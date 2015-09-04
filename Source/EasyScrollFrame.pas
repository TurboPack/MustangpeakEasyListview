unit EasyScrollFrame;

// Version 2.1.0
//
// The contents of this file are subject to the Mozilla Public License
// Version 1.1 (the "License"); you may not use this file except in compliance
// with the License. You may obtain a copy of the License at http://www.mozilla.org/MPL/
//
// Alternatively, you may redistribute this library, use and/or modify it under the terms of the
// GNU Lesser General Public License as published by the Free Software Foundation;
// either version 2.1 of the License, or (at your option) any later version.
// You may obtain a copy of the LGPL at http://www.gnu.org/copyleft/.
//
// Software distributed under the License is distributed on an "AS IS" basis,
// WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License for the
// specific language governing rights and limitations under the License.
//
// The initial developer of this code is Jim Kueneman <jimdk@mindspring.com>
//
// Special thanks to the following in no particular order for their help/support/code
//    Danijel Malik, Robert Lee, Werner Lehmann, Alexey Torgashin, Milan Vandrovec
//----------------------------------------------------------------------------

interface

{$I Options.inc}
{$I ..\Include\Addins.inc}

uses
  Windows,
  Messages,
  SysUtils,
  Classes,
  Graphics,
  Themes,
  UxTheme,
  Controls,
  MPCommonObjects,
  MPCommonUtilities;

const
  TIMER_AUTOSCROLLDELAY = 1003;
  TIMER_AUTOSCROLL = 1004;

type
  TEasyScrollButtonState = (
    sbsHovering,       // The mouse is hovering over the button
    sbsDown,           // The button is down
    sbsAutoClick,      // The button is down for a predetermined time and is autoscrolling at some time interval
    sbsAutoScrollTimerRunning // Timer is running for AutoClick
  );
  TEasyScrollButtonStates = set of TEasyScrollButtonState;

  TEasyScrollButtonDir = (
    sbdLeft,   // Arrow points Left
    sbdUp,     // Arrow points Up
    sbdDown,   // Arrow points Down
    sbdRight   // Arrow points right
  );

  TEasyTimerType = (
    ettAutoScrollDelay,
    ettAutoScroll
  );

  TCustomEasyScrollButton = class(TCommonCanvasControl)
  private
    FArrowSize: Integer;
    FAutoScroll: Boolean;
    FAutoScrollTime: Integer;
    FAutoScrollTimeOut: Integer;
    FDirection: TEasyScrollButtonDir;
    FFlat: Boolean;
    FOnClick: TNotifyEvent;
    FState: TEasyScrollButtonStates;
    FTimerID: THandle;
    FTimerStub: ICallBackStub;
    procedure SetDirection(const Value: TEasyScrollButtonDir);
    procedure SetFlat(const Value: Boolean);
  protected
    procedure DoClick; virtual;
    procedure DoPaintRect(ACanvas: TCanvas; WindowClipRect: TRect; SelectedOnly: Boolean); reintroduce; virtual;
    procedure MouseDown(Button: TMouseButton; Shift: TShiftState; X: Integer; Y: Integer); override;
    procedure MouseMove(Shift: TShiftState; X: Integer; Y: Integer); override;
    procedure MouseUp(Button: TMouseButton; Shift: TShiftState; X: Integer; Y: Integer); override;
    procedure SetEnabled(Value: Boolean); override;
    procedure StartAutoScrollTimer(TimerType: TEasyTimerType);
    procedure StopAutoScrollTimer(FreeStub: Boolean);
    procedure TimerProc(Window: HWnd; uMsg: UINT; idEvent: UINT; dwTime: DWORD); stdcall;
    procedure WMPaint(var Msg: TWMPaint); message WM_PAINT;
    property ArrowSize: Integer read FArrowSize write FArrowSize default 12;
    property AutoScroll: Boolean read FAutoScroll write FAutoScroll default False;
    property AutoScrollDelay: Integer read FAutoScrollTimeOut write FAutoScrollTimeOut default 1000;
    property AutoScrollTime: Integer read FAutoScrollTime write FAutoScrollTime default 100;
    property Direction: TEasyScrollButtonDir read FDirection write SetDirection default sbdLeft;
    property Flat: Boolean read FFlat write SetFlat default False;
    property OnClick: TNotifyEvent read FOnClick write FOnClick;
    property State: TEasyScrollButtonStates read FState write FState;
    property TimerID: THandle read FTimerID write FTimerID;
    property TimerStub: ICallBackStub read FTimerStub write FTimerStub;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
  published
  end;

  {$IF CompilerVersion >= 23}
  [ComponentPlatformsAttribute(pidWin32 or pidWin64)]
  {$IFEND}
  TEasyScrollButton = class(TCustomEasyScrollButton)
  public
    property State;
  published
    property Action;
    property ActionLink;
    property Align;
    property Anchors;
    property ArrowSize;
    property AutoScroll;
    property AutoScrollDelay;
    property AutoScrollTime;
    property AutoSize;
    property BorderWidth;
    property Constraints;
    property Direction;
    property DragCursor;
    property DragKind;
    property DragMode;
    property Enabled;
    property Flat;
    property OnCanResize;
    property OnClick;
    property OnConstrainedResize;
    property OnContextPopup;
    property OnDblClick;
    property OnDockDrop;
    property OnDockOver;
    property OnDragDrop;
    property OnDragOver;
    property OnEndDock;
    property OnEndDrag;
    property OnEnter;
    property OnExit;
    property OnKeyDown;
    property OnKeyPress;
    property OnKeyUp;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
    property OnMouseWheel;
    property OnMouseWheelDown;
    property OnMouseWheelUp;
    property OnResize;
    property OnStartDock;
    property OnStartDrag;
    property OnUnDock;
    property ParentShowHint;
    property PopupMenu;
    property ShowHint;
    property TabOrder;
    property TabStop;
    property Themed;
    property Visible;
  end;

implementation

{ TEasyScrollButton }
constructor TCustomEasyScrollButton.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  AutoScrollDelay := 1000;
  AutoScrollTime := 100;
  Width := GetSystemMetrics(SM_CXHSCROLL);
  Height := GetSystemMetrics(SM_CYHSCROLL);
  ArrowSize := 12
end;

destructor TCustomEasyScrollButton.Destroy;
begin
  inherited Destroy;
end;

procedure TCustomEasyScrollButton.DoClick;
begin
  if Assigned(OnClick) then
    OnClick(Self)
end;

procedure TCustomEasyScrollButton.DoPaintRect(ACanvas: TCanvas; WindowClipRect: TRect; SelectedOnly: Boolean);

    procedure DrawWithoutThemes;
    var
      uState: Cardinal;
    begin
      uState := 0;
      if (sbsHovering in State) and not (sbsDown in State) then
      begin
        case Direction of
          sbdLeft: uState := DFCS_SCROLLLEFT;
          sbdUp: uState := DFCS_SCROLLUP	;
          sbdDown: uState := DFCS_SCROLLDOWN;
          sbdRight: uState := DFCS_SCROLLRIGHT;
        end
      end else
      if (sbsDown in State) and (sbsHovering in State) then
      begin
        case Direction of
          sbdLeft: uState := DFCS_SCROLLLEFT or DFCS_PUSHED;
          sbdUp: uState := DFCS_SCROLLUP or DFCS_PUSHED;
          sbdDown: uState := DFCS_SCROLLDOWN or DFCS_PUSHED;
          sbdRight: uState := DFCS_SCROLLRIGHT or DFCS_PUSHED;
        end
      end else
      begin
        case Direction of
          sbdLeft: uState := DFCS_SCROLLLEFT;
          sbdUp: uState := DFCS_SCROLLUP;
          sbdDown: uState := DFCS_SCROLLDOWN;
          sbdRight: uState := DFCS_SCROLLRIGHT;
        end
      end;

      if Flat then
        uState := uState or DFCS_FLAT;
      if not Enabled then
        uState := uState or DFCS_INACTIVE;

      DrawFrameControl(ACanvas.Handle, ClientRect, DFC_SCROLL, uState);
    end;

{$IFDEF USETHEMES}
var
  Part, uState: Longword;
  {$ENDIF}
begin
  {$IFDEF USETHEMES}
    if DrawWithThemes then
    begin
      uState := 0;
      Part := SBP_ARROWBTN;
      if Enabled then
      begin
        if (sbsHovering in State) and not (sbsDown in State) then
        begin
          case Direction of
            sbdLeft: uState := ABS_LEFTHOT;
            sbdUp: uState := ABS_UPHOT;
            sbdDown: uState := ABS_DOWNHOT;
            sbdRight: uState := ABS_RIGHTHOT;
          end
        end else
        if (sbsDown in State) and (sbsHovering in State) then
        begin
          case Direction of
            sbdLeft: uState := ABS_LEFTPRESSED;
            sbdUp: uState := ABS_UPPRESSED;
            sbdDown: uState := ABS_DOWNPRESSED;
            sbdRight: uState := ABS_RIGHTPRESSED;
          end
        end else
        begin
          case Direction of
            sbdLeft: uState := ABS_LEFTNORMAL;
            sbdUp: uState := ABS_UPNORMAL;
            sbdDown: uState := ABS_DOWNNORMAL;
            sbdRight: uState := ABS_RIGHTNORMAL;
          end
        end;
      end else
      begin
        case Direction of
          sbdLeft: uState := ABS_LEFTDISABLED;
          sbdUp: uState := ABS_UPDISABLED;
          sbdDown: uState := ABS_DOWNDISABLED;
          sbdRight: uState := ABS_RIGHTDISABLED;
        end
      end;

      DrawThemeBackground(Themes.ScrollbarTheme, ACanvas.Handle,
        Part, uState, ClientRect, @WindowClipRect);
    end else
      DrawWithOutThemes;
  {$ELSE}
    DrawWithoutThemes;
  {$ENDIF}
end;

procedure TCustomEasyScrollButton.MouseDown(Button: TMouseButton; Shift: TShiftState; X: Integer; Y: Integer);
begin
  inherited MouseDown(Button, Shift, X, Y);
  if not (sbsDown in State) then
  begin
    Include(FState, sbsDown);
    StartAutoScrollTimer(ettAutoScrollDelay);
    Invalidate
  end
end;

procedure TCustomEasyScrollButton.MouseMove(Shift: TShiftState; X: Integer; Y: Integer);
begin
  inherited MouseMove(Shift, X, Y);
  if PtInRect(ClientRect, Point(X, Y)) then
  begin
    if not (sbsHovering in State) then
    begin
      Include(FState, sbsHovering);
      Invalidate
    end;
    Mouse.Capture := Handle
  end else
  begin
    if sbsHovering in State then
    begin
      Exclude(FState, sbsHovering);
      StopAutoScrollTimer(True);
      Invalidate
    end;
    if [sbsDown, sbsHovering] * State = [] then
    begin
      if Mouse.Capture = Handle then
        Mouse.Capture := 0
    end
  end
end;

procedure TCustomEasyScrollButton.MouseUp(Button: TMouseButton; Shift: TShiftState; X: Integer; Y: Integer);
begin
  inherited MouseUp(Button, Shift, X, Y);
  if PtInRect(ClientRect, Point(X, Y)) and (sbsDown in State) then
    DoClick;
  if sbsDown in State then
  begin
    StopAutoScrollTimer(True);
    Exclude(FState, sbsDown);
    Invalidate
  end
end;

procedure TCustomEasyScrollButton.SetDirection(const Value: TEasyScrollButtonDir);
begin
  if FDirection <> Value then
  begin
    FDirection := Value;
    Invalidate
  end
end;

procedure TCustomEasyScrollButton.SetEnabled(Value: Boolean);
begin
  inherited;
  Invalidate
end;

procedure TCustomEasyScrollButton.SetFlat(const Value: Boolean);
begin
  if FFlat <> Value then
  begin
    FFlat := Value;
    Invalidate
  end
end;

procedure TCustomEasyScrollButton.StartAutoScrollTimer(TimerType: TEasyTimerType);
begin
  if AutoScroll then
  begin
    if not Assigned(TimerStub) then
      TimerStub := TCallbackStub.Create(Self, @TCustomEasyScrollButton.TimerProc, 4);
    if TimerType = ettAutoScrollDelay then
      TimerID := SetTimer(Handle, TIMER_AUTOSCROLLDELAY, AutoScrollDelay, TimerStub.StubPointer)
    else
      TimerID := SetTimer(Handle, TIMER_AUTOSCROLL, AutoScrollTime, TimerStub.StubPointer);
    Include(FState, sbsAutoScrollTimerRunning);
  end
end;

procedure TCustomEasyScrollButton.StopAutoScrollTimer(FreeStub: Boolean);
begin
  if sbsAutoScrollTimerRunning in State then
  begin
    if KillTimer(Handle, TimerID) then
    begin
      TimerID := 0;
      Exclude(FState, sbsAutoScrollTimerRunning);
      if FreeStub then
      begin
        TimerStub := nil;
      end
    end else
      Exception.Create('Can not Destroy Scroll Button Timer');
  end
end;

procedure TCustomEasyScrollButton.TimerProc(Window: HWnd; uMsg: UINT; idEvent: UINT; dwTime: DWORD);
begin
  case idEvent of
    TIMER_AUTOSCROLLDELAY:
      begin
        StopAutoScrollTimer(False);
        StartAutoScrollTimer(ettAutoScroll);
      end;
    TIMER_AUTOSCROLL:
      begin
        DoClick
      end;
  end
end;

procedure TCustomEasyScrollButton.WMPaint(var Msg: TWMPaint);
var
  PaintInfo: TPaintStruct;
begin
  if UpdateCount = 0 then
  begin
    BeginPaint(Handle, PaintInfo);
    try
      if not IsRectEmpty(PaintInfo.rcPaint) then
      begin
        // Paint the rectangle that is needed
        Canvas.Handle := Msg.DC;
        DoPaintRect(Canvas, PaintInfo.rcPaint, False);
      end
    finally
      // Release the Handle from the canvas so that EndPaint may dispose of the DC as it sees fit
      EndPaint(Handle, PaintInfo);
    end
  end
end;

end.
