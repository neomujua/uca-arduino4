void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(13)==HIGH){
    Serial.println("1");
  } else if (digitalRead(13)==LOW) {
    Serial.println("0");
  }
}
