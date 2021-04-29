// Write arduino code to make LED ON based on Capacitive touch
sensor. Do interfacing & simulation with arduino on ISIS Proteus.

const int buttonPin = 2;
const int ledPin = 13;
int buttonState = 0;
void setup()
{
 pinMode(ledPin, OUTPUT);
 pinMode(buttonPin, INPUT);
}
void loop()
{
 buttonState = digitalRead(buttonPin);
 if (buttonState == HIGH)
 {
   digitalWrite(ledPin, HIGH);
 }
 else
 {
 digitalWrite(ledPin, LOW);
 }
}
 
 
