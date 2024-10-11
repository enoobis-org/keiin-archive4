#define LED_PIN 11
#define POT_PIN A0

void setup() {
  // set LED pin as output
  pinMode(LED_PIN, OUTPUT);
  // set potentiometer pin as input
  pinMode(POT_PIN, INPUT);
}

void loop() {
  // declare variables for rotation and brightness
  int rotation, brightness;

  // read value from potentiometer (0 to 1023)
  rotation = analogRead(POT_PIN);

  // calculate brightness (0 to 255)
  brightness = rotation / 4;

  // set LED brightness
  analogWrite(LED_PIN, brightness);
}
