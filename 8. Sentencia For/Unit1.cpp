//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_MostrarClick(TObject *Sender)
{
	//Ascendente
	for (int i = 1; i <= 10; i++) {
		Lst_Mostrar->Items->Add(i);
	}

    /*
	//Descendente
	for (int i = 10; i >= 1; i--) {
		Lst_Mostrar->Items->Add(i);
	}  */
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_SalirClick(TObject *Sender)
{
	exit(0);
}
//---------------------------------------------------------------------------
