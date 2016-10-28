// iniciando o robo
#include<Servo.h>
Servo servoDireito;
Servo servoEsquerdo;
int motorDireito = 8;
int motorEsquerdo = 7;
int tempo = 500; //2 centimetros a cada 50;
int largura;
boolean mover = true;
void setup() {
  servoDireito.attach(motorDireito);
  servoEsquerdo.attach(motorEsquerdo);
}

void loop() {
  // suavização
  if (mover == true){
    for(largura = 0; largura <= 600 ; largura = largura + 5){
      servoDireito.writeMicroseconds(1730 + largura);
      servoEsquerdo.writeMicroseconds(900 - largura);
      delay(20);
    }
    delay(tempo);
    for(largura = 0; largura <= 600 ; largura = largura + 5){
      servoDireito.writeMicroseconds(2100 - largura);
      servoEsquerdo.writeMicroseconds(900 + largura);
      delay(20);
    }    
    mover = false;
    
  // move a 90º
  /*
  if (mover == true){
    servoDireito.writeMicroseconds(1500);
    servoEsquerdo.writeMicroseconds(900);
    delay(1100);
    mover = false;
  }  
  */
  } else {
    // para os dois motores
    servoDireito.writeMicroseconds(1500);
    servoEsquerdo.writeMicroseconds(1500);
  }

}
