# Arduino Learning Journey

This repository documents my learning journey with Arduino. 
It includes my initial experiments, the challenges I faced, and the progress made while understanding embedded systems concepts. 
Each project contains code, circuit details, and notes to help reflect on what I learned.

---

## Project 1: Blink LED

**Components Used:**  
- Arduino Uno  
- 1 x LED  
- 220Ω Resistor  
- Jumper Wires

**Description:**  
This was the first step in learning Arduino. The LED is programmed to turn ON and OFF with a 1-second delay.  
This project helped me understand basic digital pin control and timing using the `delay()` function.

**Skills Learned:**  
- Writing basic Arduino code  
- Using digital output pins (`pinMode`, `digitalWrite`)  
- Implementing simple delays  

**Circuit Screenshot:**  
![Circuit Screenshot](./blin_led.png)


**Code:**  
See: [blink_led.ino](./blink_LED.ino)

---


## Project: LED Blink with Push Button Control

**Components Used:**  
- Arduino Uno  
- 1 x LED  
- 220Ω Resistor  
- 1 x Push Button  
- Jumper Wires

**Description:**  
In this project, the LED only blinks when the push button is pressed.  
The button acts as a digital input signal, and the microcontroller checks its state to control the LED blinking.  
This project helped me understand input pin reading, debouncing basics, and conditional control of digital outputs.

**Skills Learned:**  
- Reading digital input using `digitalRead()`  
- Using conditional statements (`if` statements)  
- Controlling LED state based on user input  
- Understanding pull-up/pull-down behavior

**Circuit Screenshot:**  
![Circuit Screenshot](./LED Blink with Push Button Control.png)

**Code:**  
See: `LED Blink with Push Button Control.ino`

More projects will be added as I continue learning and building.
