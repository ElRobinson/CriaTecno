// medindo intensidade da luz
int fotoresistor = 0;
int valorFotoresistor;
int intensidadeLuz;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorFotoresistor = analogRead(fotoresistor);
  intensidadeLuz = map(valorFotoresistor,0,1023,1,1000);
  Serial.print("Intensidade da luz = " );
  Serial.println(intensidadeLuz);
  delay(100);
}
