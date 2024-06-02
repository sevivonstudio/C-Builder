//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Frm_main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrm_Mensaje *Frm_Mensaje;
//---------------------------------------------------------------------------
__fastcall TFrm_Mensaje::TFrm_Mensaje(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrm_Mensaje::Btn_MensajeClick(TObject *Sender)
{
	//Se escribe un mensaje en el Tedit
	Txt_Mensaje->Text = "Hola Mundo de C++ Builder";
}
//---------------------------------------------------------------------------
void __fastcall TFrm_Mensaje::Btn_BoxClick(TObject *Sender)
{
	/*Muestra un cuadro
	  de dialogo */
	ShowMessage(Txt_Mensaje->Text);
}
//---------------------------------------------------------------------------
void __fastcall TFrm_Mensaje::Btn_CerrarClick(TObject *Sender)
{
	//Cerrar la aplicación
	Close();
}
//---------------------------------------------------------------------------
