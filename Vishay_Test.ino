

// include the library code:
#include "LiquidCrystal.h"
#include <Encoder.h>

uint8_t nRows = 2;      //number of rows on LCD
uint8_t nColumns =16; 

// Teensy pin #'s vs LCD interface pin
const int RS = 28;        // Data or Instruction
const int RW = 29;        // Read or Write
const int ENABLE = 14;    // Chip enable (basically the clock)
const int D0 = 36;
const int D1 = 24;
const int D2 = 35;
const int D3 = 25;
const int D4 = 34;
const int D5 = 26;
const int D6 = 33;
const int D7 = 27;
LiquidCrystal lcd(RS, RW, ENABLE,
                  D0, D1, D2, D3, D4,D5, D6, D7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  //lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Raspberry PI!");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("Blackbox!");
    delay(100);
  lcd.scrollDisplayRight();
    delay(100);
  lcd.scrollDisplayRight();
    delay(100);
  lcd.scrollDisplayRight();
    delay(100);
  lcd.clear();
    delay(100);
  lcd.home();
  delay(100);
  
  lcd.setCursor((nColumns>>1)-4,0);
  lcd.print("Bonzai!!");

  //mark the corners
  lcd.setCursor(0,0);
  lcd.print('1');
  lcd.setCursor(nColumns-1,nRows-1);
  lcd.print('4');
  lcd.setCursor(nColumns-1,0);
  lcd.print('2');
  lcd.setCursor(0,nRows-1);
  lcd.print('3');
  lcd.setCursor((nColumns>>1)-3,0);

}

void loop() {
  lcd.setCursor(6, 1);
  lcd.print(millis() / 1000);  // print the number of seconds since reset:
}

