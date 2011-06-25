//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "EasyListview"
#pragma link "EasyLVCommonObjects"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
  /*TEasyItem *item=*/EasyListview1->Items->AddVirtual(NULL);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EasyListview1ItemGetCaption(
      TCustomEasyListview *Sender, TEasyItem *Item, int Column,
      WideString &Caption)
{
  Caption="Hello World";      
}
//---------------------------------------------------------------------------
