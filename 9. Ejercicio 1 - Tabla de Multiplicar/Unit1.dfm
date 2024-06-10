object Form1: TForm1
  Left = 573
  Top = 192
  Caption = 'Tabla de Multiplicar'
  ClientHeight = 266
  ClientWidth = 285
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Position = poDesigned
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 265
    Height = 249
    Caption = 'Tabla de Multiplicar'
    TabOrder = 0
    object Label1: TLabel
      Left = 19
      Top = 29
      Width = 41
      Height = 13
      Caption = 'N'#250'mero:'
    end
    object Txt_Numero: TEdit
      Left = 66
      Top = 26
      Width = 74
      Height = 21
      TabOrder = 0
      OnKeyPress = Txt_NumeroKeyPress
    end
    object Lst_Resultado: TListBox
      Left = 19
      Top = 80
      Width = 121
      Height = 153
      ItemHeight = 13
      TabOrder = 1
    end
    object Btn_Calcular: TButton
      Left = 168
      Top = 24
      Width = 75
      Height = 25
      Caption = 'Calcular'
      TabOrder = 2
      OnClick = Btn_CalcularClick
    end
    object Btn_Borrar: TButton
      Left = 168
      Top = 55
      Width = 75
      Height = 25
      Caption = 'Borrar'
      TabOrder = 3
      OnClick = Btn_BorrarClick
    end
    object Btn_Salir: TButton
      Left = 168
      Top = 208
      Width = 75
      Height = 25
      Caption = 'Salir'
      TabOrder = 4
      OnClick = Btn_SalirClick
    end
  end
end
