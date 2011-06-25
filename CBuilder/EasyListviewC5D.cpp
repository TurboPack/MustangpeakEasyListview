//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("EasyListviewC5D.res");
USEPACKAGE("vcl50.bpi");
USEPACKAGE("dsnide50.bpi");
USEPACKAGE("EasyListviewC5.bpi");
USEPACKAGE("MPCommonLIbC5D.bpi");
USEUNIT("..\Design\EasyListviewReg.pas");
USERES("..\Design\EasyListviewReg.dcr");
USEFORMNS("..\Design\EasyCollectionEditor.pas", Easycollectioneditor, FormEasyCollectionEditor);
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
