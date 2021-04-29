//Write arduino code to transmit “Good morning” serially if switch is
pressed and transmit “Bad Morning” if switch is open , do simulation
using proteus.

const int buttonPin = 2;
int buttonState = 0;
void setup()
{
 Serial.begin(9600);
 pinMode(buttonPin, INPUT);
}
void loop()
{
 buttonState = digitalRead(buttonPin);
 if (buttonState == HIGH)
 {
 Serial.println("Good Morning");
 }
 else
 {
 Serial.println("Bad Morning");
 }
 delay(500);
}
