object Form1: TForm1
  Left = 487
  Top = 162
  Caption = 'Sentencia Switch'
  ClientHeight = 102
  ClientWidth = 414
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Position = poDesigned
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 73
    Height = 13
    Caption = 'N'#250'mero de d'#237'a:'
  end
  object Label2: TLabel
    Left = 136
    Top = 16
    Width = 100
    Height = 13
    Caption = 'D'#237'a correspondiente:'
  end
  object Txt_Dia: TEdit
    Left = 95
    Top = 13
    Width = 32
    Height = 21
    TabOrder = 0
  end
  object Txt_Respuesta: TEdit
    Left = 242
    Top = 13
    Width = 157
    Height = 21
    TabOrder = 1
  end
  object Btn_Verificar: TButton
    Left = 104
    Top = 56
    Width = 75
    Height = 25
    Caption = 'Verificar'
    TabOrder = 2
    OnClick = Btn_VerificarClick
  end
  object Btn_Salir: TButton
    Left = 232
    Top = 56
    Width = 75
    Height = 25
    Caption = 'Salir'
    TabOrder = 3
    OnClick = Btn_SalirClick
  end
end
