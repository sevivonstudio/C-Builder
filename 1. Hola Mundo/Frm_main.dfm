object Frm_Mensaje: TFrm_Mensaje
  Left = 544
  Top = 266
  Caption = 'Hola Mundo'
  ClientHeight = 147
  ClientWidth = 245
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Position = poDesigned
  TextHeight = 13
  object Txt_Mensaje: TEdit
    Left = 32
    Top = 24
    Width = 179
    Height = 21
    TabOrder = 0
  end
  object Btn_Mensaje: TButton
    Left = 32
    Top = 64
    Width = 75
    Height = 25
    Caption = 'Mensaje'
    TabOrder = 1
    OnClick = Btn_MensajeClick
  end
  object Btn_Box: TButton
    Left = 136
    Top = 64
    Width = 75
    Height = 25
    Caption = '?'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = Btn_BoxClick
  end
  object Btn_Cerrar: TButton
    Left = 88
    Top = 104
    Width = 75
    Height = 25
    Caption = 'Cerrar'
    TabOrder = 3
    OnClick = Btn_CerrarClick
  end
end
