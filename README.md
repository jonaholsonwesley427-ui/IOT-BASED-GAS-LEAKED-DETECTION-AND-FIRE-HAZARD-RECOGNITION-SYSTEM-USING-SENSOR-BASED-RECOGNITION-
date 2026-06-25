# 🔥 IoT-Based Gas Leak Detection and Fire Hazard Recognition System Using Sensor-Based Processing for Household Safety Enhancement

## 📖 Overview

This project is an IoT-based safety system that detects **gas leakage** and **fire hazards** using an **ESP32**, **MQ-2 Gas Sensor**, and **Flame Sensor**. When a hazard is detected, the ESP32 activates a **buzzer** and **LED** for local alerts while simultaneously sending a **real-time notification** to the user's smartphone through the **Blynk IoT platform**.

---

## ✨ Features

* ⛽ Gas leakage detection using MQ-2 sensor
* 🔥 Fire detection using Flame Sensor
* 🚨 Local alert using Buzzer and Red LED
* 📱 Instant Blynk mobile notifications
* 🌐 Wi-Fi connectivity using ESP32
* ⚡ Real-time monitoring
* 🏠 Designed for household safety

---

# 🖼️ Project Images

## System Architecture

![System Architecture](images/arch.png)

---

## Device Operation (State Diagram)

![State Diagram](images/35a147f2-d5fc-406d-b443-18bb5a88b746.png)

---

## Project Architecture

![Project Architecture](images/arch2.png)

---

## 🔥 Flame Detection Demonstration

![Flame Detection](images/WhatsApp%20Image%202026-06-11%20at%2012.19.29%20PM%20\(1\).jpeg)

---

## ⛽ Gas Detection Demonstration

![Gas Detection](images/WhatsApp%20Image%202026-06-11%20at%2012.19.30%20PM.jpeg)

---

# ⚙️ Hardware Components

* ESP32 Development Board
* MQ-2 Gas Sensor
* Flame Sensor
* Active Buzzer
* Red LED
* 220Ω Resistor
* Breadboard
* Jumper Wires
* USB Cable

---

# 💻 Software Requirements

* Arduino IDE 2.x
* ESP32 Board Package
* Embedded C++
* Blynk IoT Platform
* Blynk Mobile App
* CP210x USB Driver
* Windows 10/11

---

# 🔄 Working Principle

1. MQ-2 sensor continuously detects combustible gases.
2. Flame sensor continuously monitors for fire.
3. ESP32 processes the sensor readings.
4. If gas leakage or fire is detected:

   * Red LED turns ON.
   * Buzzer sounds.
   * Notification is sent to the Blynk Cloud.
5. The user immediately receives a notification on the Blynk mobile application.

---

# 📂 Repository Structure

```text
IoT-Gas-Fire-Alert-System/
│
├── README.md
├── Gas_Flame_Alert.ino
└── images/
    ├── 35a147f2-d5fc-406d-b443-18bb5a88b746.png
    ├── arch.png
    ├── arch2.png
    ├── WhatsApp Image 2026-06-11 at 12.19.29 PM (1).jpeg
    └── WhatsApp Image 2026-06-11 at 12.19.30 PM.jpeg
```

---

# 🚀 Future Scope

* Integrate smoke and temperature sensors for enhanced detection.
* Automate safety mechanisms such as gas shut-off valves and exhaust fans.
* Store sensor data for cloud-based monitoring and analysis.
* Add AI-based prediction for early hazard detection.

---

# 🛠️ Technologies Used

* ESP32
* Arduino IDE
* Embedded C++
* Wi-Fi
* MQ-2 Gas Sensor
* Flame Sensor
* Blynk IoT
* IoT

---

# 👨‍💻 Author

**Jonah Olson Wesley**

Mini Project

**IoT-Based Gas Leak Detection and Fire Hazard Recognition System Using Sensor-Based Processing for Household Safety Enhancement**

---

⭐ **If you found this project useful, please consider giving it a star!**
