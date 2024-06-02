//---------------------------------------------------------------------------

#ifndef Frm_mainH
#define Frm_mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFrm_Mensaje : public TForm
{
__published:	// IDE-managed Components
	TEdit *Txt_Mensaje;
	TButton *Btn_Mensaje;
	TButton *Btn_Box;
	TButton *Btn_Cerrar;
	void __fastcall Btn_MensajeClick(TObject *Sender);
	void __fastcall Btn_BoxClick(TObject *Sender);
	void __fastcall Btn_CerrarClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrm_Mensaje(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrm_Mensaje *Frm_Mensaje;
//---------------------------------------------------------------------------
#endif
