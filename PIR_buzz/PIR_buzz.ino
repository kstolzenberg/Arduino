//buzzes a buzzer with movement

int ledPin = 13;
int inputPin = 2;
int pirState = LOW;
int val = 0;
int pinSpeaker = 10;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
  pinMode(pinSpeaker, OUTPUT);
  Serial.begin(9600); 
}

void loop(){
  val = digitalRead(inputPin);
  if(val == HIGH){
    digitalWrite(ledPin, HIGH);
    playTone(50,800);
    delay(50);
    if (pirState == LOW){
      Serial.println("Motion Detected!");
      pirState = HIGH;
    }
  } else{
    digitalWrite(ledPin, LOW);
    playTone(0,0);
    delay(50);
    if (pirState == HIGH){
      Serial.println("Motion Ended!");
      pirState = LOW;
    }
  }
}

//duration in milliseconds, frequency in hertz
void playTone(long duration, int freq){
  duration *= 500;
  int period = (1.0 / freq) * 1000000;
  long elasped_time = 0;
  while (elasped_time < duration){
    digitalWrite(pinSpeaker,HIGH);
    delayMicroseconds(period / 2);
    digitalWrite(pinSpeaker, LOW);
    delayMicroseconds(period / 2);
    elasped_time += (period);
  }
}
