#include<LiquidCrystal.h>
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);
void setup() {
  lcd.begin(20,4);
  lcd.print("hello world!");
}

void loop() {
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
  lcd.setCursor(0,2);
  lcd.print("--------------------");
  lcd.setCursor(0,3);
  lcd.print("Team Lock Hacker");
}
