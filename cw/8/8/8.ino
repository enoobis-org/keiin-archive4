#define MOTOR_PIN 9
#define FIRST_BUTTON_PIN 5
#define BUTTON_COUNT 3
#define SPEED_STEP (255 / (BUTTON_COUNT - 1))

void setup() {
  // set motor pin as output
  pinMode(MOTOR_PIN, OUTPUT);
  // set button pins as input with pull-up
  for (int i = 0; i < BUTTON_COUNT; ++i)
    pinMode(i + FIRST_BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // check each button
  for (int i = 0; i < BUTTON_COUNT; ++i) {
    int keyPin = i + FIRST_BUTTON_PIN;
    boolean keyUp = digitalRead(keyPin);
    
    // if button is pressed
    if (!keyUp) {
      // set motor speed
      int speed = i * SPEED_STEP;
      analogWrite(MOTOR_PIN, speed);
    }
  }
}
