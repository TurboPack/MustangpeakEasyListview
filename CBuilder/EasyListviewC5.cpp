//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#pragma link "oleacc.lib" 
USERES("EasyListviewC5.res");
USEPACKAGE("vcl50.bpi");
USEPACKAGE("MPCommonLibC5.bpi");
USEUNIT("..\Source\EasyListview.pas");
USEUNIT("..\Source\EasyLVResources.pas");
USEUNIT("..\Source\EasyScrollFrame.pas");
USEUNIT("..\Source\EasyTaskPanelForm.pas");
USEUNIT("..\Source\EasyListviewAccessible.pas");
USEUNIT("..\Source\EasyMSAAIntf.pas");
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Package source.
//---------------------------------------------------------------------------

#pragma argsused
int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void*)
{
        return 1;
}
//---------------------------------------------------------------------------
