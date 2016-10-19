//Sensor Infravermelhor
// 0 - encontrou objetos
// 1 - sem objetos
int receptor = 7;
int led = 8;
int nivelReceptor;

void setup() {
  // put your setup code here, to run once:
  pinMode(receptor,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone (led, 38000,8);
  delay(1);
  nivelReceptor = digitalRead(receptor);
  delay(1);
  Serial.print("Receptor = ");
  Serial.println(nivelReceptor);
  
  delay(100);
}
