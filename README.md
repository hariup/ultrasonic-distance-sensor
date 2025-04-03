# 🦾 Ultrasonic Distance Sensor with Arduino

This is a simple Arduino project that uses an **HC-SR04 ultrasonic sensor** to measure how far away an object is—like a bat or dolphin using echo!

## 📏 What It Does

- Sends out a tiny sound wave
- Waits for it to bounce off something
- Measures how long it takes to come back
- Calculates the **distance in centimeters**
- You can **start** and **stop** the measurements using the Serial Monitor by typing:
  - `start` to begin measuring
  - `stop` to pause measurements

## 💡 Perfect For:
- Science fair projects 🧪
- Learning about sound waves
- Getting started with Arduino
- Practicing real programming as a beginner

## 🛠️ What You Need

- Arduino Uno board
- HC-SR04 Ultrasonic sensor
- Jumper wires
- Breadboard
- USB cable to connect Arduino to your computer
- Arduino IDE installed

## 🔌 Circuit Diagram

| Arduino Pin | Sensor Pin |
|-------------|------------|
| 5V          | VCC        |
| GND         | GND        |
| 9           | Trig       |
| 10          | Echo       |

> Tip: You can also draw this wiring using tools like [Tinkercad Circuits](https://www.tinkercad.com/circuits)

## 📄 Code File

The main code is in this file:  
📁 `ultrasonic_sensor.ino`

It runs in a loop and prints distance every second when measuring is enabled.

## 📬 How to Use

1. Open the `.ino` file in the Arduino IDE
2. Upload it to your Arduino board
3. Open the **Serial Monitor** (top-right in the IDE)
4. Set the baud rate to **9600**
5. Type `start` or `stop` to control the measuring

## 🎉 Credits

Built by a **AdyH** learning how to use Arduino! 💥  
Thanks to the Arduino and maker communities for all the support.
