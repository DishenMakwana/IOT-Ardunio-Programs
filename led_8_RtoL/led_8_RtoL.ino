void setup() {
  // put your setup code here, to run once:
  int x;
  for(x = 0; x < 8; x++) {
    pinMode(x, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int y = 128;
  int i;
  
  for(i = 0; i < 8; i++) {
    PORTD = y;
    y = y >> 1;
    delay(100);   
  }
}
