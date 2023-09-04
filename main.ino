#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 20, 4); // Initialize with a default I2C address, 20 columns, and 4 rows

void setup() {
  Wire.begin();
  Serial.begin(9600);
  
  // Find the I2C address of the LCD module
  byte lcdAddress = findI2CAddress();

  if (lcdAddress == 0) {
    Serial.println("LCD not found. Please check the connections.");
    while (true); // Halt the program if the LCD is not found
  } else {
    lcd = LiquidCrystal_I2C(lcdAddress, 20, 4); // Initialize with the found I2C address, 20 columns, and 4 rows
    lcd.init(); // Initialize the LCD
    lcd.backlight(); // Turn on the backlight
    lcd.clear(); // Clear the LCD screen
  }
}

void loop() {
  lcd.setCursor(0, 0); // Set cursor to the first column, first row
  lcd.print("For My Love");

  lcd.setCursor(0, 1); // Set cursor to the first column, second row
  lcd.print("Diah Nurhasna");

  lcd.setCursor(0, 2); // Set cursor to the first column, third row
  lcd.print("I Gave You");

  lcd.setCursor(0, 3); // Set cursor to the first column, fourth row
  lcd.print("All Of My Heart");

  delay(5000);    // Display the text for 5 seconds
  lcd.clear();    // Clear the LCD screen
  delay(1000);    // Wait for 1 second before displaying again
}

byte findI2CAddress() {
  byte error, address;
  int nDevices;

  Serial.println("Scanning...");

  nDevices = 0;
  for (address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0) {
      Serial.print("I2C device found at address 0x");
      if (address < 16) Serial.print("0");
      Serial.println(address, HEX);
      nDevices++;
      return address; // Return the first found address
    }
    else if (error == 4) {
      Serial.print("Unknown error at address 0x");
      if (address < 16) Serial.print("0");
      Serial.println(address, HEX);
    }
  }

  if (nDevices == 0) {
    Serial.println("No I2C devices found");
  }

  return 0;
}
