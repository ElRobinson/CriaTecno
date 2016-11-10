//Locomoção por infravermelho
#include<Servo.h>
Servo servoDireito;
Servo servoEsquerdo;
int receptor = 7;
int led = 8;
int motorDireito = 6;
int motorEsquerdo = 9;
int nivelReceptor;
int nivelIR;
int frequencia = 38000;
int tempoDelay = 20;

void setup() {
  pinMode(receptor,INPUT);
  pinMode(led,OUTPUT);
  servoDireito.attach(motorDireito);
  servoEsquerdo.attach(motorEsquerdo);

}

void loop() {
   nivelReceptor = detectar(receptor,led);
  if(nivelReceptor == HIGH){
      servoDireito.write(180);
      servoEsquerdo.write(0);
      delay(tempoDelay);
  } else {
      servoDireito.write(90);
      servoEsquerdo.write(90);
      delay(tempoDelay);
  }

}

 int detectar(int receptorIR, int ledIR){
  tone(ledIR,frequencia,8);
  delay(1);
  nivelIR = digitalRead(receptorIR);
  delay(1);
  return nivelIR;
}
