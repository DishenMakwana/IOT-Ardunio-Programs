// Write arduino code to blink LED based on User’s choice using
Bluetooth communication and do simulation on ISIS Proteus.

void setup()
{
  for (int i = 2; i < 6; i++)
 {
 pinMode(i, OUTPUT);
 }
 Serial.begin(9600);
 Serial.println("Enter number between 1 to 4==");
}
void loop()
{
 while (Serial.available() > 0)
 {
 int k = Serial.parseInt();
 Serial.println(k);
 if (k >= 1 && k <= 4)
 {
 digitalWrite(k + 1, HIGH);
 delay(2000);
 digitalWrite(k + 1, LOW);
 }
 }
}
