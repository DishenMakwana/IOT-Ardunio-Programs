//Write arduino code to transmit “Hello World – Code to demonstrate BT
Communication” string on serial monitor using Bluetooth. Do simulation on
ISIS Proteus.

void setup()
{
 Serial.begin(9600);
 }
void loop()
{
 Serial.println("Hello from Dishen");
 Serial.println("Bluetooth is connected");
 delay(1000); 
}
