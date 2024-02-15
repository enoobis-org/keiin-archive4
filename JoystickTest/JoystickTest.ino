const int pinRed = 9;
const int pinGreen = 10;
const int pinX = A0;
const int pinY = A1;
void setup() 
{ 
  pinMode(pinRed,OUTPUT);
  pinMode(pinGreen,OUTPUT);
  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
}

void loop() 
{
  freeMode();
}

void freeMode()

{
  int x = analogRead(pinX);
  int y = analogRead(pinY);
  int red  =  map(y,510,1023,0,255);
  int green = map(x,507,1023,0,255);
  analogWrite(pinRed,red);
  analogWrite(pinGreen,green);
}