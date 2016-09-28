
  //exemplo Contador até 9 no disokay de 7 segmentos
  int a = 2;
  int b = 3;
  int c = 4;
  int d = 5;
  int e = 6;
  int f = 7;
  int g = 8;



void setup() {
 pinMode(a,OUTPUT);
 pinMode(b,OUTPUT);
 pinMode(c,OUTPUT);
 pinMode(d,OUTPUT);
 pinMode(e,OUTPUT);
 pinMode(f,OUTPUT);
 pinMode(g,OUTPUT);
      

}

void loop() {
/*
  setaZero();
  delay(3000);
  setaUm();
  delay(3000);
  setaDois();
  delay(3000);
  setaTres();
  delay(3000);
  setaQuatro();
  delay(3000);
  setaCinco();
  delay(3000);
  setaSeis();
  delay(3000);
  setaSete();
  delay(3000);
  setaOito();
  delay(3000);
  setaNove();
  delay(3000);
  */
  /*
  setaTres();
  delay(3000);
  setaDois();
  delay(3000);
  setaUm();
  delay(3000);
  setaZero();
  delay(3000);
  */
  
  
}

void setaZero(){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
  }
  
  void setaUm(){
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }

void setaDois(){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
  }  
void setaTres(){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
  }  
  void setaQuatro(){
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
  void setaCinco(){
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
  void setaSeis(){
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
  void setaSete(){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  void setaOito(){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
  void setaNove(){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
