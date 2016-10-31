// Realizando manobras
#include <Servo.h>
Servo servoDireito;
Servo servoEsquerdo;
int motorDireito = 7;
int motorEsquerdo = 8;
int tempoFrente = 500; // 2cm a cada 50
int tempoDireita = 1100;
int tempoEsquerda = 1100;


void setup() {
  servoDireito.attach(motorDireito);
  servoEsquerdo.attach(motorEsquerdo);

}

void loop() {
  andarReto();
  curvaEsquerda();
  andarReto();
  curvaEsquerda();
  andarReto();
  curvaDireita();
  andarReto();
  curvaDireita();
  andarReto();
  ficarParado();
}

void andarReto(){
  servoDireito.writeMicroseconds(2100);
  servoEsquerdo.writeMicroseconds(900);  
  delay(tempoFrente);
}


void curvaDireita(){
  servoDireito.writeMicroseconds(1500);
  servoEsquerdo.writeMicroseconds(900);  
  delay(tempoDireita);
}

void curvaEsquerda(){
  servoDireito.writeMicroseconds(2100);
  servoEsquerdo.writeMicroseconds(1500);  
  delay(tempoEsquerda);
}
void ficarParado(){
  while(1){
    servoDireito.writeMicroseconds(1500);
    servoEsquerdo.writeMicroseconds(1500);  
  }
}
