void setup() {
  // put your setup code here, to run once:
  int i;
  for(i = 0; i < 8; i++) {
     pinMode(i, OUTPUT);  
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  PORTD = 0xff;
  delay(500);
  PORTD = 0x00;
  delay(500);
}
