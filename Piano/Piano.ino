
const int buzzerPin = 3;
const int button1Pin = 7;
const int button2Pin = 8;
const int button3Pin = 12;
const int noteC = 261;
const int noteD = 294;
const int noteE = 329;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(button1Pin) == LOW) {
    playNote(noteC);
  }
  else if (digitalRead(button2Pin) == LOW) {
    playNote(noteD);
  }
  else if (digitalRead(button3Pin) == LOW) {
    playNote(noteE);
  }
}

void playNote(int note) {
  tone(buzzerPin, note);
  delay(500); 
  noTone(buzzerPin);
}
