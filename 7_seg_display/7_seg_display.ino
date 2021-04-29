void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < 10; i++) {
    pinMode(i, OUTPUT);  
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  char num [] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
  for(int i = 0; i < 10; i++) {
    PORTD = num[i];
    delay(1000);
  }
}
