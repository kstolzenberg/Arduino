//read LED if PIR sensor triggered....how to controll sensitivity?
int pirPin = 7;
int val = 0;

void setup(){
  pinMode(pirPin,INPUT);
  Serial.begin(9600);
}

void loop(){

  val = digitalRead(pirPin);
  if(val == HIGH){
    Serial.println("inputing");
  } else{
    Serial.println("no input");
  }
}
