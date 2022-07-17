void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i=0; i<256; i++) {
    analogWrite(3, i);
    delay(10);
  }

  for(int i=255; i>0; i--) {
    analogWrite(3,i);
    delay(10);
  }
  
}
