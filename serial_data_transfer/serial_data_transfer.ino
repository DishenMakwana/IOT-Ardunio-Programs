//Write arduino code to transmit and receive data serially.

void setup()
{
 Serial.begin(9600);
 Serial.println("Enter a Number:=");
}
void loop()
{
 while (Serial.available() > 0)
 {
 int k = Serial.parseInt();
 Serial.println("You have Entered:=");
 Serial.println(k);
 delay(500);
 Serial.println("Enter a Number:-");
 }
}
