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
	int i = 1;
	//Ascendente
	do {
		Lst_Mostrar->Items->Add(i);
		i++;
	}while(i <= 10);

	/*//Descendente
	int i = 10;
	do {
		Lst_Mostrar->Items->Add(i);
		i--;
	}while(i >= 1);

	*/
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_SalirClick(TObject *Sender)
{
	exit(0);
}
//---------------------------------------------------------------------------
