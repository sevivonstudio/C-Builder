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
	int dia = StrToInt(Txt_Dia->Text);

	switch (dia) {

	case 1:
		Txt_Respuesta->Text = "El d�a es Domingo";
		break;

	case 2:
		Txt_Respuesta->Text = "El d�a es Lunes";
		break;

	case 3:
		Txt_Respuesta->Text = "El d�a es Martes";
		break;

	case 4:
		Txt_Respuesta->Text = "El d�a es Miercoles";
		break;

	case 5:
		Txt_Respuesta->Text = "El d�a es Jueves";
		break;

	case 6:
		Txt_Respuesta->Text = "El d�a es Viernes";
		break;

	case 7:
		Txt_Respuesta->Text = "El d�a es S�bado";
		break;

	default:
        Txt_Respuesta->Text = "No corresponde a ning�n d�a";
        ;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_SalirClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
