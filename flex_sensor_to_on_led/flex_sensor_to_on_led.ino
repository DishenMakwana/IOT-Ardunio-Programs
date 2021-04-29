// Write arduino code to make LED/Buzzer ON based on Flex sensor. Do
interfacing & simulation with arduino on ISIS Proteus.

int flex = 2; // the number of the pushbutton pin
int ledPin = 13; // the number of the LED pin
int flexState = 0; // variable for reading the pushbutton status
void setup()
{
 pinMode(ledPin, OUTPUT);
 pinMode(flex, INPUT_PULLUP);
}
void loop()
{
 flexState = digitalRead(flex);
 if (flexState == HIGH)
 {
 digitalWrite(ledPin, HIGH);
 }
 else
 {
 digitalWrite(ledPin, LOW);
 }
}
