// Write arduino code to send SMS using GSM module and do simulation
using ISIS proteus.

int buttonPin = 2;
#define led 13
void setup()
{
 pinMode(buttonPin, INPUT_PULLUP);
 pinMode(led, OUTPUT);
 Serial.begin(9600); // Setting the baud rate of Serial Monitor (Arduino)
 delay(100);
 Serial.println("AT+CMGF=1"); //Sets the GSM Module in Text Mode Attention Command
 delay(100);
 Serial.println("AT+CNMI=2,2,0,0,0"); // AT Command to receive a live SMS-New message
Indication-(mode-empty-BM-DS-Buffer)
 delay(1000);
 digitalWrite(led, HIGH);
}
void loop()
{
 int buttonState = digitalRead(buttonPin);
 if (buttonState == LOW)
 {
 sendmessage();
 digitalWrite(led, HIGH);
 }
}
void sendmessage()
{
 Serial.println("AT+CMGS=\"+91 8758516876\"\r"); // Message Send
 delay(1000);
 Serial.println("Hello.....! from Dishen.........!"); // The SMS text you want to send
 delay(100);
 Serial.println((char)26); // ctrl+z to terminate message
 delay(1000);
}
