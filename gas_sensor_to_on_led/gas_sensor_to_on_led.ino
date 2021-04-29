// Write arduino code to make LED/Buzzer ON based on GAS sensor. Do
interfacing & simulation with arduino on ISIS Proteus.

int Gas = 2; // the number of the pushbutton pin
int ledPin = 13; // the number of the LED pin
int GasState = 0; // variable for reading the pushbutton status
void setup()
{
 pinMode(ledPin, OUTPUT);
 pinMode(Gas, INPUT_PULLUP);
}
void loop()
{
 GasState = digitalRead(Gas);
 if (GasState == HIGH)
 {
 digitalWrite(ledPin, HIGH);
 }
 else
 {
 digitalWrite(ledPin, LOW);
 }
}
