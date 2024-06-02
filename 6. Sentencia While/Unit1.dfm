object Form1: TForm1
  Left = 673
  Top = 207
  Caption = 'Sentencia While'
  ClientHeight = 199
  ClientWidth = 256
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Position = poDesigned
  TextHeight = 13
  object Lst_Mostrar: TListBox
    Left = 16
    Top = 11
    Width = 121
    Height = 169
    ItemHeight = 13
    TabOrder = 0
  end
  object Btn_Mostrar: TButton
    Left = 168
    Top = 11
    Width = 75
    Height = 25
    Caption = 'Mostrar'
    TabOrder = 1
    OnClick = Btn_MostrarClick
  end
  object Btn_Salir: TButton
    Left = 168
    Top = 155
    Width = 75
    Height = 25
    Caption = 'Salir'
    TabOrder = 2
    OnClick = Btn_SalirClick
  end
end
