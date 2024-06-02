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
void __fastcall TForm1::Btn_VerificarClick(TObject *Sender)
{
    //Creamos una variable entera y le asignamos el contenido de la caja de texto
	int edad = StrToInt(Txt_Edad->Text);

	//Verificamos si es mayor o menor de edad
	if (edad >= 18) {
		if (edad < 60) {
			ShowMessage("Eres un adulto");
		}
		else{
			ShowMessage("Eres un adulto mayor");
		}
	}
	else{
		if (edad <= 10) {
			ShowMessage("Eres un niño");
		}
		else{
			ShowMessage("Eres un adolescente");
		}
	}
}
//---------------------------------------------------------------------------
