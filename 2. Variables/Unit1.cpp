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
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	int n1;
	float f1;
	double d1;
	char ch1;
	bool b1;

	n1 = -2589;
	f1 = 123.4567;
	d1 = 123.456789012345;
	//ch1 = 'E';
	//ch1 = 122;          Caracter 'z'
	ch1 = 64;           //Caracter '@'
	b1 = true;

	Memo1->Lines->Append(n1);
	Memo1->Lines->Append(f1);
	Memo1->Lines->Append(d1);
	Memo1->Lines->Append(ch1);
	Memo1->Lines->Append(b1);

	n1 = sizeof(int);
	f1 = sizeof(float);
	d1 = sizeof(double);
	ch1 = sizeof(char);
	b1 = sizeof(bool);

	Memo1->Lines->Append("");
	Memo1->Lines->Append("Número de Bytes");
	Memo1->Lines->Append("---------------------");
	Memo1->Lines->Append("Entero: " + IntToStr(n1) + " Bytes");
	Memo1->Lines->Append("Flotante: " + FloatToStr(f1) + " Bytes");
	Memo1->Lines->Append("Doble: " + FloatToStr(d1) + " Bytes");
	Memo1->Lines->Append("Caracter: " + IntToStr(ch1) + " Bytes");
	Memo1->Lines->Append("Booleana: " + IntToStr(b1) + " Bytes");
}
//---------------------------------------------------------------------------
