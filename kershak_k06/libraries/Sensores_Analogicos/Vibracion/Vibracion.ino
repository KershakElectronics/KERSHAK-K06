#define sensor PC14 


void setup() {
  pinMode(sensor,INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  digitalWrite(LED_BUILTIN,HIGH);
}

void loop() {
  if(digitalRead(sensor)==HIGH)
  {
   digitalWrite(LED_BUILTIN,LOW);
   delay(1000);
  }
  digitalWrite(LED_BUILTIN,HIGH);

}
