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
		Txt_Respuesta->Text = "El día es Domingo";
		break;

	case 2:
		Txt_Respuesta->Text = "El día es Lunes";
		break;

	case 3:
		Txt_Respuesta->Text = "El día es Martes";
		break;

	case 4:
		Txt_Respuesta->Text = "El día es Miercoles";
		break;

	case 5:
		Txt_Respuesta->Text = "El día es Jueves";
		break;

	case 6:
		Txt_Respuesta->Text = "El día es Viernes";
		break;

	case 7:
		Txt_Respuesta->Text = "El día es Sábado";
		break;

	default:
        Txt_Respuesta->Text = "No corresponde a ningún día";
        ;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_SalirClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
