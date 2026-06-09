<img width="623" height="510" alt="image" src="https://github.com/user-attachments/assets/01154c95-f83f-48e0-babf-ba2136a6d02c" />

An elegant synergy of hardware interfaces is captured in this embedded systems configuration, where an Arduino Uno micro-controller serves as the central processing unit bridging a 4x4 matrix keypad and a single-digit, 7-segment LED display. The primary objective of this system is interactive feedback: it scans user keystrokes from the input matrix and translates those alphanumeric presses into specific visual configurations on the LED array. This application illustrates fundamental concepts of digital input scanning, pin multiplexing, data mapping via look-up tables, and direct GPIO (General Purpose Input/Output) manipulation.
The 4x4 Keypad Matrix
Interfacing 16 distinct tactile switches using individual pins would consume too much of the microcontroller's limited I/O. Instead, the system utilizes a matrix scheme requiring only 8 pins.
Rows: Connected to digital pins 9, 8, 7, and 6.
Columns: Connected to digital pins 5, 4, 3, and 2.
The Keypad.h library manages this configuration through an algorithmic scanning process. It sequentially sets one row low while holding the others high and reads the logic levels of the columns. When a button is pressed, it bridges a specific row and column line, allowing the library to isolate the exact coordinate of the key and return its assigned character value.
The 7-Segment Display
The display is a standard component comprised of seven individual LEDs arranged in a numerical figure-eight configuration, typically labeled segments a through g. To drive this display, seven Arduino pins are reserved: A0, A1, A2, A3, A4, A5, and digital pin 10.
The use of analog pins A0–A5 as digital outputs highlights a versatile feature of the ATmega328P microcontroller, where analog pins can be reassigned to act as standard digital high or low channels when numerical outputs run short.
