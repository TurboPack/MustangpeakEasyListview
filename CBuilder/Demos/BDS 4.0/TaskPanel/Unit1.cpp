//$$---- Form CPP ----
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "EasyListview"
#pragma link "MPCommonObjects"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EasyTaskPanelBand1GetTaskPanel(
      TCustomEasyListview *Sender, TEasyGroup *Group,
      TEasyTaskPanelFormClass &TaskPanel)
{
	switch( Group->Index )
	{
		case 0:
			TaskPanel = __classid(TEasyTaskPanelForm2);
			break;
		case 1:
			TaskPanel = __classid(TEasyTaskPanelForm3);
			break;
	}
}
//---------------------------------------------------------------------------

