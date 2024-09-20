#include <DHT.h>

#define DHTPIN 2          
#define DHTTYPE DHT11    
#define BLUE_LED 12      
#define RED_LED 13      

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(BLUE_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  float temperature = dht.readTemperature(); 
  if (isnan(temperature)) {
    Serial.println("Ошибка чтения с DHT11!");
    return;
  }

  Serial.print("Температура: ");
  Serial.println(temperature);

  if (temperature < 20) {
    digitalWrite(BLUE_LED, HIGH);  
    digitalWrite(RED_LED, LOW);   
  } else {
    digitalWrite(BLUE_LED, LOW);
    digitalWrite(RED_LED, HIGH);  
  }

  delay(2000);
}
