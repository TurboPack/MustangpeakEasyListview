// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'MPCommonWizardTemplates.pas' rev: 30.00 (Windows)

#ifndef MpcommonwizardtemplatesHPP
#define MpcommonwizardtemplatesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mpcommonwizardtemplates
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
#define FILE_FORM_TEMPLATE_DELPHI L"unit %ModuleIdent;                                        "\
	L"        \r\n                                              "\
	L"                    \r\ninterface                         "\
	L"                                \r\n                      "\
	L"                                            \r\n          "\
	L"                                                        \r"\
	L"\nuses                                                    "\
	L"          \r\n  %IncludeList                              "\
	L"                      \r\n                                "\
	L"                                  \r\ntype                "\
	L"                                              \r\n  T%Form"\
	L"Ident= class(T%AncestorIdent)                             "\
	L"\r\n  private                                             "\
	L"            \r\n    { Private declarations }              "\
	L"                        \r\n  public                      "\
	L"                                    \r\n    { Public decla"\
	L"rations }                                       \r\n  end;"\
	L"                                                          "\
	L"  \r\n                                                    "\
	L"              \r\nvar                                     "\
	L"                          \r\n  %FormIdent: T%FormIdent;  "\
	L"                                      \r\n                "\
	L"                                                  \r\nimpl"\
	L"ementation                                                "\
	L"    \r\n                                                  "\
	L"               \r\n{$R *.dfm}                             "\
	L"                           \r\n                           "\
	L"                                       \r\n               "\
	L"                                                   \r\nend"\
	L".                                                         "\
	L"     "
#define FILE_FORM_TEMPLATE_BCB L"//--------------------------------------------------------"\
	L"--------\r\n%IncludeList                                  "\
	L"                    \r\n#pragma hdrstop                   "\
	L"                                \r\n                      "\
	L"                                            \r\n#include \""\
	L"%ModuleIdent.h\"                                         \r"\
	L"\n//------------------------------------------------------"\
	L"----------\r\n#pragma package(smart_init)                 "\
	L"                      \r\n#pragma resource \"*.dfm\"      "\
	L"                                    \r\nT%FormIdent *%Form"\
	L"Ident;                                          \r\n//----"\
	L"----------------------------------------------------------"\
	L"--\r\n__fastcall T%FormIdent::T%FormIdent(TComponent* Owne"\
	L"r)            \r\n    : T%AncestorIdent(Owner)            "\
	L"                          \r\n{                           "\
	L"                                      \r\n}               "\
	L"                                                  \r\n//--"\
	L"----------------------------------------------------------"\
	L"----"
}	/* namespace Mpcommonwizardtemplates */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_MPCOMMONWIZARDTEMPLATES)
using namespace Mpcommonwizardtemplates;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// MpcommonwizardtemplatesHPP
