#include <LiquidCrystal.h> 
LiquidCrystal lcd(12,11, 5, 4, 3, 2);
void setup() {
     lcd.begin(16, 2);
}
void loop()
{
    lcd.setCursor(0, 0);
    lcd.print("Numbers:");
    for (int i = 0; i <= 9; i++)
    {
        lcd.setCursor(9, 0);
        lcd.blink();
        delay(500);
        lcd.print(i);
        delay(1000);
    }
}
