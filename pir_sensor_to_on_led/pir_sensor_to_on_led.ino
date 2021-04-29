// Write arduino code to make LED/Buzzer ON based on PIR sensor. Do
interfacing & simulation with arduino on ISIS Proteus.

int PIR = 2; // the number of the pushbutton pin
int ledPin = 13; // the number of the LED pin
int PIRState = 0; // variable for reading the pushbutton status
void setup()
{
 pinMode(ledPin, OUTPUT);
 pinMode(PIR, INPUT_PULLUP);
}
void loop()
{
 PIRState = digitalRead(PIR);
 if (PIRState == HIGH)
 {
 digitalWrite(ledPin, HIGH);
 }
 else
 {
 digitalWrite(ledPin, LOW);
 }
}
