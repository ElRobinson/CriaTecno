int _ABVAR_1_a = 0 ;
int _ABVAR_2_b = 0 ;
int _ABVAR_3_c = 0 ;
int _ABVAR_4_d = 0 ;
int _ABVAR_5_e = 0 ;
int _ABVAR_6_f = 0 ;
int _ABVAR_7_g = 0 ;
void __ardublockDigitalWrite(int pinNumber, boolean status)
{
  pinMode(pinNumber, OUTPUT);
  digitalWrite(pinNumber, status);
}


void setup()
{
  _ABVAR_1_a = 2 ;

  _ABVAR_2_b = 3 ;

  _ABVAR_3_c = 4 ;

  _ABVAR_4_d = 5 ;

  _ABVAR_5_e = 6 ;

  _ABVAR_6_f = 7 ;

  _ABVAR_7_g = 8 ;

}

void loop()
{
  __ardublockDigitalWrite(_ABVAR_1_a, LOW);
  __ardublockDigitalWrite(_ABVAR_2_b, LOW);
  __ardublockDigitalWrite(_ABVAR_3_c, LOW);
  __ardublockDigitalWrite(_ABVAR_4_d, LOW);
  __ardublockDigitalWrite(_ABVAR_5_e, LOW);
  __ardublockDigitalWrite(_ABVAR_6_f, LOW);
  __ardublockDigitalWrite(_ABVAR_7_g, LOW);
}


