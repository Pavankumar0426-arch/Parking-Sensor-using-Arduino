# 🚗 Parking Sensor using Arduino

This project implements a **Parking Sensor System** using Arduino to help drivers detect obstacles while reversing vehicles.  
The system uses an **HC-SR04 Ultrasonic Sensor** for distance measurement, a **Buzzer** for audio alerts, and an **LED** for visual warnings.  

## 📌 Features
- Real-time obstacle detection while reversing vehicles.
- Ultrasonic sensor (HC-SR04) for accurate distance measurement.
- Buzzer and LED alerts for proximity warnings.
- Developed with Arduino (C/C++) for microcontroller control.

## 🛠️ Components Used
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- Buzzer
- LED
- Jumper Wires & Breadboard

## ⚡ Circuit Diagram
![Circuit Diagram](circuit_diagram.png)  
*(Upload your circuit image here if available)*

## 💻 Code
The Arduino code is available in [`Parking_Sensor.ino`](docs/Parking_Sensor.ino).

## 🚀 How It Works
1. Ultrasonic sensor measures the distance of obstacles.
2. If the obstacle is closer than **30 cm**:
   - Buzzer turns **ON**.
   - LED turns **ON**.
3. Otherwise:
   - Buzzer and LED remain **OFF**.

## 🎯 Skills Gained
- Sensor interfacing with Arduino.
- Microcontroller programming in C/C++.
- Embedded systems prototyping.

---

🔗 Author: **M. Pavan Kumar**
