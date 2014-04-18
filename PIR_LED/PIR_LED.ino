//read LED if PIR sensor triggered....how to controll sensitivity?
int ledPin = 12;
int pirPin = 7;
int pirState = LOW;
int val = 0;

void setup(){
  pinMode(ledPin,OUTPUT);
  pinMode(pirPin,INPUT);
  Serial.begin(9600);
}

void loop(){
  val = digitalRead(pirPin);
  if (val == HIGH){
    digitalWrite(ledPin, HIGH);
      if (pirState == LOW){
      Serial.println("Motion Detected!");
      pirState = HIGH;
      } 
  }else{
      digitalWrite(ledPin, LOW);
      if(pirState == HIGH){
        Serial.println("Motion Ended!");
        pirState = LOW;
    }
  }
}
