// Assign pin numbers for individual LEDs
#define FIRST_LED_PIN 4
#define LAST_LED_PIN 13

void setup() {
  // Set all LED pins as outputs using a for loop
  for (int pin = FIRST_LED_PIN; pin <= LAST_LED_PIN; ++pin) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // Get time in milliseconds since the microcontroller started
  unsigned int ms = millis();

  // Calculate which LED should be on based on time
  int activePin = FIRST_LED_PIN + (ms / 120) % (LAST_LED_PIN - FIRST_LED_PIN + 1);

  // Turn off all LEDs first
  for (int pin = FIRST_LED_PIN; pin <= LAST_LED_PIN; ++pin) {
    digitalWrite(pin, LOW);
  }

  // Turn on the active LED
  digitalWrite(activePin, HIGH);

  // Small delay before the next iteration
  delay(10);
}
