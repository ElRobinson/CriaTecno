// Fazendo trilhas com o robo.
#include<Servo.h>
Servo servoDireito;
Servo servoEsquerdo;
int motorDireito = 8;
int motorEsquerdo = 7;
int tempoFrente = 500; //2 centimetros a cada 50;
int tempoDireito = 1100;
int tempoEsquerdo = 1100;
int largura;
boolean mover = true;

void setup() {
  servoDireito.attach(motorDireito);
  servoEsquerdo.attach(motorEsquerdo);
}

void loop() {

    
 
 
 
 moveReto(2*tempoFrente);
 
}

 void moveReto(int tempo){
   servoDireito.writeMicroseconds(1730);
   servoEsquerdo.writeMicroseconds(900);
   delay(tempo);
   para();
 }
 
 void moveDireita(int tempo){
   servoDireito.writeMicroseconds(2100);
   servoEsquerdo.writeMicroseconds(900); 
   delay(tempo);
   para();
 }
 void moveEsquerda(int tempo){
   servoDireito.writeMicroseconds(1730);
   servoEsquerdo.writeMicroseconds(900);
 }
 
  void para(){
   servoDireito.writeMicroseconds(1500);
   servoEsquerdo.writeMicroseconds(1500);
   delay(10000);
 }
