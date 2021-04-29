//Write arduino code to blink LED using Bluetooth communication and
do simulation on ISIS Proteus.

void setup()
{
 Serial.begin(9600);
 pinMode(13, OUTPUT);
 Serial.println("Enter 1 for ON or enter 0 for OFF");
}
void loop()
{
 if (Serial.available())
 {
  int k = Serial.parseInt();
 Serial.println(k);
 if (k == 1)
 {
 digitalWrite(13, HIGH);
 Serial.println("Command executed-LED ON");
 delay(500);
 }
 else
 {
 digitalWrite(13, LOW);
 Serial.println("Command executed-LED OFF");
 delay(500);
 }
 }
}
