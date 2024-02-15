const int pinX = A0;
const int pinY = A1;
const int pinGreen = 9;
const int pinRed = 10 ;
void setup() 
{
  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
  pinMode(pinGreen,OUTPUT);
  pinMode(pinRed,OUTPUT);
}

void loop() 
{
  freeMode();
}

void freeMode()
{
  int x = analogRead(pinX);
  int y = analogRead(pinY);
  int red = map(y,510,1023,0,255);
  int green = map(x,507,1023,0,255);
  analogWrite(pinRed,red);
  analogWrite(pinGreen,green);
}