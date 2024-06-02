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
	while (i <= 10){
		Lst_Mostrar->Items->Add(i);
		i++;
	}

	/*
	int i=10;
	//Descendente
	while (i >= 1){
		Lst_Mostrar->Items->Add(i);
		i--;
	}   */
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_SalirClick(TObject *Sender)
{
	exit(0);
}
//---------------------------------------------------------------------------
