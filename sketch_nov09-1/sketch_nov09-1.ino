//Navegação táctil do robo
#include<Servo.h>
Servo servoDireito;
Servo servoEsquerdo;
int chaveDireita = 7;
int chaveEsquerda = 8;
int motorDireito = 6;
int motorEsquerdo = 9;
int nivelChaveDireita;
int nivelChaveEsquerda;
int contador;
int numeroPulsoTras = 30;
int numeroPulsoDireita = 20;
int numeroPulsoEsquerda = 20;
// default its 180
int moviment = 400;
void setup() {
  pinMode(chaveDireita,INPUT);
  pinMode(chaveEsquerda,INPUT);
  servoDireito.attach(motorDireito);
  servoEsquerdo.attach(motorEsquerdo);
}

void loop() {
  nivelChaveDireita = digitalRead(chaveDireita);
  nivelChaveEsquerda = digitalRead(chaveEsquerda);
  if (nivelChaveDireita == LOW && nivelChaveEsquerda == LOW){
    for(contador = 0;contador < numeroPulsoTras;contador++){
      servoDireito.write(0);
      servoEsquerdo.write(moviment);
      delay(20);
    }
    for(contador = 0;contador < numeroPulsoDireita;contador++){
      servoDireito.write(0);
      servoEsquerdo.write(0);
      delay(20);
    }
  }
  
  if (nivelChaveDireita == LOW && nivelChaveEsquerda == HIGH){
    for(contador = 0;contador < numeroPulsoTras;contador++){
      servoDireito.write(0);
      servoEsquerdo.write(moviment);
      delay(20);
    }
    for(contador = 0;contador < numeroPulsoEsquerda;contador++){
      servoDireito.write(moviment);
      servoEsquerdo.write(moviment);
      delay(20);
    }    
  }
  
  if (nivelChaveDireita == HIGH && nivelChaveEsquerda == LOW){
    for(contador = 0;contador < numeroPulsoTras;contador++){
      servoDireito.write(0);
      servoEsquerdo.write(moviment);
      delay(20);
    }
    for(contador = 0;contador < numeroPulsoDireita;contador++){
      servoDireito.write(0);
      servoEsquerdo.write(0);
      delay(20);
    }    
  }
  
  if (nivelChaveDireita == HIGH && nivelChaveEsquerda == HIGH){
      servoDireito.write(moviment);
      servoEsquerdo.write(0);
      delay(20);
  }
  
  
  
  

}
