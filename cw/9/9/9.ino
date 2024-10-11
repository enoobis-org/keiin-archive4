#define BUTTON_PIN 3
#define LED_PIN 13

boolean buttonWasUp = true; // was the button up?
boolean ledEnabled = false; // is the led on?

void setup() {
  // set LED and button pins
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // check if the button is up now
  boolean buttonIsUp = digitalRead(BUTTON_PIN);

  // if button was up and now is pressed
  if (buttonWasUp && !buttonIsUp) {
    // debounce the button
    delay(10);
    buttonIsUp = digitalRead(BUTTON_PIN);

    // if still pressed, it's a click
    if (!buttonIsUp) {
      // toggle LED state
      ledEnabled = !ledEnabled;
      digitalWrite(LED_PIN, ledEnabled);
    }
  }

  // save button state for next iteration
  buttonWasUp = buttonIsUp;
}
