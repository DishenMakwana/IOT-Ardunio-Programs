// Create arduino based IOT project for smart street light.

#include <LiquidCrystal.h>
int a, b, c;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
 lcd.clear();
 lcd.begin(16, 2);
 lcd.setCursor(1, 0);
 lcd.print("Street Light");
 lcd.setCursor(1, 1);
 lcd.print("Project");
 delay(1000);
 lcd.clear();
}
void loop()
{
 a = analogRead(A0);
 b = map(a, 0, 1023, 0, 255);
 if (b > 110)
 {
 lcd.setCursor(1, 0);
 lcd.print("NORMAL LIGHT");
 digitalWrite(8, LOW);
 digitalWrite(9, LOW);
 digitalWrite(10, LOW);
 }
 if (b < 110)
 {
 lcd.setCursor(1, 0);
 lcd.print("LOW LIGHT");
 digitalWrite(8, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 }
}
