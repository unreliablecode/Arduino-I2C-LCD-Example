# Arduino I2C LCD Example

![Arduino I2C LCD](https://unreliablecode.github.io/Arduino-I2C-LCD-Example/arduino.png)

This Arduino sketch demonstrates how to use an I2C-enabled LCD display with an Arduino board. The LiquidCrystal_I2C library is used to control the LCD, and the sketch also includes a function to automatically detect the I2C address of the connected LCD module.

## Getting Started

### Prerequisites

- Arduino IDE installed on your computer.
- An Arduino board (e.g., Arduino Uno) and appropriate USB cable.
- An I2C-enabled LCD module.
- Wiring connections between the Arduino and the LCD module.

### Wiring Instructions

1. Connect the SDA (Serial Data) pin of the LCD module to the SDA pin on the Arduino.
2. Connect the SCL (Serial Clock) pin of the LCD module to the SCL pin on the Arduino.
3. Make sure to connect the power (VCC) and ground (GND) pins appropriately.
4. Double-check the wiring and connections to ensure they are correct.

### Installation

1. Clone or download this repository to your local machine.
2. Open the Arduino IDE and load the `I2C_LCD_Example.ino` sketch from the repository.
3. Upload the sketch to your Arduino board.

### Usage

1. After uploading the sketch, open the Arduino Serial Monitor (Tools > Serial Monitor).
2. The sketch will automatically detect the I2C address of the connected LCD module and initialize it.
3. You should see text scrolling on the LCD screen with the message "For My Love," "Diah Nurhasna," "I Gave You," and "All Of My Heart."
4. The text will display for 5 seconds before clearing and repeating.

## Troubleshooting

If you encounter any issues, make sure to double-check your wiring connections and the I2C address of your LCD module.

## Author

- [Your Name]

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
