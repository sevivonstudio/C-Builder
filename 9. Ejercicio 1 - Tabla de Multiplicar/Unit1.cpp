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
void __fastcall TForm1::Btn_CalcularClick(TObject *Sender)
{
	//Se ingresa el número a multiplicar
	int numero = StrToInt(Txt_Numero->Text);
	Lst_Resultado->Items->Clear();

	for (int i = 1; i <= 10; i++) {
		Lst_Resultado->Items->Add(IntToStr(numero) + " * " + i + " = " + IntToStr(numero*i));
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_SalirClick(TObject *Sender)
{
	exit(0);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_BorrarClick(TObject *Sender)
{
	//Se limpian el TListBox y TEdit
	Txt_Numero->Text = "";
	Lst_Resultado->Items->Clear();

	Txt_Numero->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Txt_NumeroKeyPress(TObject *Sender, System::WideChar &Key)
{
	//La tecla pulsada debe estar dentro del rango de 0 a 9 o tecla backspace(retroceso)
	if (!((Key >= '0' && Key <= '9') || Key == '\b')) {
		Key = 0;
	}
}
//---------------------------------------------------------------------------

