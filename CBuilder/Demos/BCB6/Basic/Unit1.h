//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "EasyListview.hpp"
#include "EasyLVCommonObjects.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TEasyListview *EasyListview1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall EasyListview1ItemGetCaption(
          TCustomEasyListview *Sender, TEasyItem *Item, int Column,
          WideString &Caption);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
