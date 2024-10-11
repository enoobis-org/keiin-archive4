#define CONTROL_PIN 9

// global variable to store brightness level
int brightness = 0;

void setup() {
  // set control pin as output
  pinMode(CONTROL_PIN, OUTPUT);
}

void loop() {
  // increment brightness, wrapping around at 255
  brightness = (brightness + 1) % 256;

  // apply PWM signal to control pin
  analogWrite(CONTROL_PIN, brightness);

  // wait 10 ms before increasing brightness again
  delay(10);
}
