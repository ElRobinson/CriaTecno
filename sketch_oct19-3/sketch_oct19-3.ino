// controlando ações via entrada analógica
int potenciometro = 0;
int led = 8;
int valorPotenciometro;
int intervalo;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorPotenciometro = analogRead(potenciometro);
  intervalo = map(valorPotenciometro,0,1023,500,5);
  digitalWrite(led,HIGH);
  delay(intervalo);
  digitalWrite(led,LOW);
  delay(intervalo);
}
