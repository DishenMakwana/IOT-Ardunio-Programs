void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("enter no.=");
}

 
void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0){
    int k= Serial.parseInt();
    Serial.println("you entered=");
    Serial.println(k);
    delay(500);
    Serial.println("enter no.=");
  }
}
