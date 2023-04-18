#define POT 18
#define LED 7

void setup() {
  Serial.begin(9600);
  pinMode(POT,INPUT);
  pinMode(LED,OUTPUT);
  
}

void loop() {
  
  int rate = analogRead(POT);
  digitalWrite(LED,HIGH);
  delay(rate);
  digitalWrite(LED,LOW);
  delay(rate);
}
