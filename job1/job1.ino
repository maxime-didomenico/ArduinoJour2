#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Tension :");
}

void loop() {
  int tension = analogRead(0);
  float tension_en_volts = (tension * 5.0) / 1023.0;

  lcd.setCursor(0, 1);
  lcd.print(tension_en_volts, 2);
  lcd.print(" V");
  delay(500);
}