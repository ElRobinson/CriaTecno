// controlando um servo(motor)
#include <Servo.h>
Servo servomotor;
int motor = 8;

void setup() {
  servomotor.attach(motor);

}

void loop() {
  // antihorário
  //servomotor.writeMicroseconds(900);
  //parado 
  //servomotor.writeMicroseconds(1500);
  //horário
  //servomotor.writeMicroseconds(900);  
  
  servomotor.writeMicroseconds(2100); 
  delay(5000);
  servomotor.writeMicroseconds(1500);
  delay(5000);
  servomotor.writeMicroseconds(900);
  delay(5000);
  

}
