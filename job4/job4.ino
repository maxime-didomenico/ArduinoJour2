#include <LiquidCrystal.h>
#include <Time.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();

  int heures = hour();
  int minutes = minute();
  int secondes = second();

  lcd.setCursor(0, 0);
  if (heures < 10) {
    lcd.print("0");
  }
  lcd.print(heures);
  lcd.print(":");
  if (minutes < 10) {
    lcd.print("0");
  }
  lcd.print(minutes);
  lcd.print(":");
  if (secondes < 10) {
    lcd.print("0");
  }
  lcd.print(secondes);

  delay(1000);
}
