//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TEdit *Txt_Numero;
	TListBox *Lst_Resultado;
	TButton *Btn_Calcular;
	TButton *Btn_Borrar;
	TButton *Btn_Salir;
	void __fastcall Btn_CalcularClick(TObject *Sender);
	void __fastcall Btn_SalirClick(TObject *Sender);
	void __fastcall Btn_BorrarClick(TObject *Sender);
	void __fastcall Txt_NumeroKeyPress(TObject *Sender, System::WideChar &Key);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
