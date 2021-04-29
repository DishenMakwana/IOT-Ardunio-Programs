//Write arduino code to receive data serially from user and display LED based on users input ( from 1 to 4 ).(Example:- if user enter 4 , LED 4 should blink.)

void setup() {
  // put your setup code here, to run once:
  for(int i = 2; i <= 5; i++) {
    pinMode(i, OUTPUT);  
  }
  Serial.begin(9600);
  Serial.println("Enter the LED no. to turn on the LED : ");
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available() > 0) {
    int k = Serial.parseInt();
    Serial.println(k);

    if(k >= 1 && k <=4) {
      digitalWrite(k + 1, HIGH); 
      delay(2000);
      digitalWrite(k + 1, LOW); 
      delay(2000); 
    }
  } 
}
