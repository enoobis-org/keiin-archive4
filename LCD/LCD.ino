#include <LiquidCrystal.h>

LiquidCrystal lcd(11, 9, 6, 5, 4, 3);

void setup() {
    pinMode(10, OUTPUT); 
    pinMode(12, OUTPUT); 
    pinMode(1, OUTPUT);  

    lcd.begin(16, 2);
}

void loop() {
    delay(100);
}
