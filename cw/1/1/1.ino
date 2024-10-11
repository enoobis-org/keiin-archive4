#define LED_PIN 9

void setup() {
  // set LED pin as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // set LED to 1/3 brightness (1.66V)
  analogWrite(LED_PIN, 85);
  // wait 250 ms
  delay(250);

  // set LED to 2/3 brightness (3.33V)
  analogWrite(LED_PIN, 170);
  // wait 250 ms
  delay(250);

  // set LED to full brightness (5V)
  analogWrite(LED_PIN, 255);
  // wait 250 ms
  delay(250);
}
