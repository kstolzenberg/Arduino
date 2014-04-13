//initalize variable and set location
int ledPin = 13;

//setup - telling the board what the pin location will be used for
void setup()
{
  pinMode(ledPin, OUTPUT);
}

//turn off base program - LED on pin 13 on...HIGH = on, Low = off
void loop()
{
  digitalWrite(ledPin, LOW);
}
