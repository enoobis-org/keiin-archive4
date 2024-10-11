#define BUZZER_PIN 13
#define FIRST_KEY_PIN 7
#define KEY_COUNT 3

void setup() {
  // set buzzer pin as output
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // loop through all keys
  for (int i = 0; i < KEY_COUNT; ++i) {
    // get key pin number
    int keyPin = i + FIRST_KEY_PIN;

    // read key state (true if released, false if pressed)
    boolean keyUp = digitalRead(keyPin);

    // if key is pressed
    if (!keyUp) {
      // calculate frequency (3500, 4000, 4500 Hz)
      int frequency = 3500 + i * 500;

      // play sound for 20 ms
      tone(BUZZER_PIN, frequency, 20);
    }
  }
}
