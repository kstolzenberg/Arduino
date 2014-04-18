//initalize variable and set location
int ledPin = 12;
int i;

//setup - telling the board what the pin location will be used for
void setup()
{
  pinMode(ledPin, OUTPUT);
}

//turn off base program - LED on pin 13 on...HIGH = on, Low = off
void loop()
{
  for (i=0; i<5; i++){
  digitalWrite(ledPin, LOW);
  delay(100);
  digitalWrite(ledPin,HIGH);
  delay(500);
  } 
  
}
