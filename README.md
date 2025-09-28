# 🚗 Parking Sensor using Arduino

## 📖 Abstract

This project presents an **Arduino-based Parking Sensor System** designed to assist drivers in avoiding collisions while reversing vehicles. The system integrates an **HC-SR04 ultrasonic sensor** to measure the distance between the vehicle and nearby obstacles. Based on the measured distance, a **buzzer** generates audio beeps and an **LED** provides visual alerts, both increasing in intensity as the vehicle approaches an obstacle. The solution is **low-cost, efficient, and easy to implement**, making it ideal for smart vehicle assistance and DIY embedded system applications.

---

## 📝 Description

The Parking Sensor System is built around an **Arduino microcontroller**, programmed in C/C++ to control the sensor and output devices. The **HC-SR04 ultrasonic sensor** continuously measures the distance to obstacles by emitting ultrasonic waves and detecting their echo. The measured distance is then processed by the Arduino, which activates:

* **LED indicators** that glow when the vehicle is within a critical range.
* **Buzzer alerts** that change frequency (slow → fast → continuous) based on proximity.

This simple yet effective system mimics commercial reverse parking sensors, enhancing **driver safety** and **vehicle protection**. It can be further extended with multiple sensors, LCD displays, or wireless modules for advanced features.

---

## 🛠️ Components Used
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- Buzzer
- LED
- Jumper Wires & Breadboard

---

## ⚡ Circuit Diagram
![Circuit Diagram](docs/Circuit_diagram)  
*(Upload your circuit image here if available)*

---

## 💻 Code
The Arduino code is available in [`Parking_Sensor.ino`](docs/Parking_Sensor.ino).

---

## 🚀 How It Works
1. Ultrasonic sensor measures the distance of obstacles.
2. If the obstacle is closer than **30 cm**:
   - Buzzer turns **ON**.
   - LED turns **ON**.
3. Otherwise:
   - Buzzer and LED remain **OFF**.

---

## 🎯 Skills Gained
- Sensor interfacing with Arduino.
- Microcontroller programming in C/C++.
- Embedded systems prototyping.

---

🔗 👨‍💻 Author
**M. Pavan Kumar**
