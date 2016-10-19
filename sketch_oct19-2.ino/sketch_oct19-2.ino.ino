// potenciomêtro
int potenciometro = 0;
int valorOriginal;
int valorTransformacao;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valorOriginal = analogRead(potenciometro);
  // map faz a regra de 3.
  valorTransformacao = map(valorOriginal,0,1023,0,100);
  Serial.print("valor original = ");
  Serial.print(valorOriginal);
  Serial.print("\t valor transformado = ");
  Serial.println(valorTransformacao);
  delay(100);
}
