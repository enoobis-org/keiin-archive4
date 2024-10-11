#define LED_PIN 13
#define LDR_PIN A0
#define POT_PIN A1

void setup() {
  // set LED pin as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // read light level from LDR
  int lightness = analogRead(LDR_PIN);

  // read threshold from potentiometer
  int threshold = analogRead(POT_PIN);

  // check if it's too dark (lightness < threshold)
  boolean tooDark = (lightness < threshold);

  // if too dark, turn on the LED
  if (tooDark) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    // otherwise, turn off the LED
    digitalWrite(LED_PIN, LOW);
  }
}
