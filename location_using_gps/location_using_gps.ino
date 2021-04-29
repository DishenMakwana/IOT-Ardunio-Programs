// Write arduino code to print current location using GPS. Do interfacing
& simulation with arduino on ISIS Proteus.

#include <TinyGPS.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
TinyGPS gps;
void setup()
{
 Serial.begin(9600);
 Serial.print("Welcome to Demonstrate GPS");
 lcd.begin(16, 2);
}
void loop()
{
 while (Serial.available())
 {
 char c = Serial.read();
 if (gps.encode(c))
 {
 float la, lo;
 unsigned long age;
 gps.f_get_position(&la, &lo, &age);
 Serial.print("Latitude=");
 Serial.print(la, 6);
 Serial.print("Longitude=");
 Serial.print(lo, 6);
 Serial.print("Age=");
 Serial.print(age, 6);
 Serial.println();
 lcd.setCursor(1, 0);
 lcd.print("LAT:");
 lcd.setCursor(5, 0);
 lcd.print(la);
 lcd.setCursor(0, 1);
 lcd.print(",LON:");
 lcd.setCursor(5, 1);
 lcd.print(lo);
 }
 }
}
