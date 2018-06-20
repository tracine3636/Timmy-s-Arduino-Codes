void setup() {
  // put your setup code here, to run once:
  #include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup()
{
  lcd.begin(16, 2);

  
}

void loop()
{
  lcd.print("Some text");
  delay(500);
  lcd.clear();
  delay(500);
}

}

void loop() {
  // put your main code here, to run repeatedly:

}
