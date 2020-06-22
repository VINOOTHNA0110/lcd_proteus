#include<LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2); // sets the interfacing pins

void setup() {
// put your setup code here, to run once:
lcd.begin(16, 2);
}

void loop() {
lcd.setCursor(0,0);
lcd.print("hello hi");// Displays HELLO WORLD on LCD
delay(2000);
lcd.setCursor(0,1);
lcd.print("How are you?");//Displays the string from second line.
delay(2000);
}
