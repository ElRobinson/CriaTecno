//exemplo de sonorização piezo
int som = 8;
int time = 500;
void setup() {


}

void loop() {
  tone(som,330,time);  
  // para por 1 segundo
  
  delay(time);
  noTone(som);
  delay(time);

}
