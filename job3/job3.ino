#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int counter = 0;
bool isRunning = true;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("MnM's");
  pinMode(6, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(6) == LOW) {
    isRunning = !isRunning;
    delay(200);
  }

  if (isRunning) { // Si le compteur est en marche
    lcd.setCursor(0, 1);
    lcd.print("Time : ");
    lcd.print(counter);
    lcd.print("s");
    delay(1000);
    counter++;
  }
}