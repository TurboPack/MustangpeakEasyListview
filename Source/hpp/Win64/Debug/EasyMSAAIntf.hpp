// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EasyMSAAIntf.pas' rev: 30.00 (Windows)

#ifndef EasymsaaintfHPP
#define EasymsaaintfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>

//-- user supplied -----------------------------------------------------------
#include <oleacc.h>
typedef DelphiInterface<IAccessible> _di_IAccessible;
#pragma link "oleacc.lib"

namespace Easymsaaintf
{
//-- forward type declarations -----------------------------------------------
struct __MIDL_IWinTypes_0009;
struct _RemotableHandle;
//-- type declarations -------------------------------------------------------
typedef System::Byte *PByte1;

typedef GUID *PUserType1;

struct DECLSPEC_DRECORD __MIDL_IWinTypes_0009
{
	
public:
	union
	{
		struct 
		{
			int hRemote;
		};
		struct 
		{
			int hInproc;
		};
		
	};
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD _RemotableHandle
{
public:
	int fContext;
	__MIDL_IWinTypes_0009 u;
};
#pragma pack(pop)


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 AccessibilityMajorVersion = System::Int8(0x1);
static const System::Int8 AccessibilityMinorVersion = System::Int8(0x1);
}	/* namespace Easymsaaintf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EASYMSAAINTF)
using namespace Easymsaaintf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EasymsaaintfHPP
