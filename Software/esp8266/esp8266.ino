
#define LED_D1 D7

void setup() {
  pinMode(LED_D1, OUTPUT);
}

void loop() {
  digitalWrite(LED_D1, HIGH); // LED encendido
  delay(1000);

  digitalWrite(LED_D1, LOW);  // LED apagado
  delay(1000);
}
