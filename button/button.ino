void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
}

void loop() {
  int lightValue = analogRead(A0);

  if (digitalRead(2)==LOW) {
    onLED(3, (1024-lightValue)/4);
  } else if (digitalRead(4)==LOW) {
    onLED(5, (1024-lightValue)/4);
  } else if (digitalRead(2)==HIGH) {
    digitalWrite(3, LOW);
  } else if (digitalRead(4)==HIGH) {
    digitalWrite(5, LOW);
  }
}

void onLED(int pin, int light) {
  for(int i=0; i<light; i++) {
    analogWrite(pin, i);
    delay(10);
  }
}
