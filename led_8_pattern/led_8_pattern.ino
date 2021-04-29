void setup() {
  int i;
  for(i = 0; i < 8; i++) {
    pinMode(i, OUTPUT);   
  }
}

void loop() {
    int x = 0x80;
    int i;
    for(i = 0; i < 8; i++) {
        PORTD = x;
        x = x<<1;
    }
}
