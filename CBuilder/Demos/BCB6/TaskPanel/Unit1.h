//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "EasyListview.hpp"
#include "MPCommonObjects.hpp"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TEasyTaskPanelBand *EasyTaskPanelBand1;
        TSplitter *Splitter1;
        void __fastcall EasyTaskPanelBand1GetTaskPanel(
          TCustomEasyListview *Sender, TEasyGroup *Group,
          TEasyTaskPanelFormClass &TaskPanel);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
