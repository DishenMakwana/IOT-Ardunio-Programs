#define BUTTON 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON) == 0) {
    Serial.println("Button is pressed!");  
  }
  else {
    Serial.println("Button is released!");  
  }
  delay(500);
}
