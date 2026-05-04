# Obstacle-Detection-for-Visually-Impaired
# Obstacle Detection System for Visually Impaired Person using ESP32

## 📌 Overview

This project is an assistive system designed to help visually impaired individuals detect obstacles in their path. It uses an ultrasonic sensor to measure distance and alerts the user using a buzzer when an object is nearby.

---

## 🎯 Objective

To develop a simple, low-cost, and reliable obstacle detection system that enhances the safety and mobility of visually impaired people.

---

## 🚀 Features

* Real-time obstacle detection
* Audio alert using buzzer
* Compact and portable design
* Low-cost implementation
* Custom PCB designed using EAGLE

---

## 🛠️ Components Used

* ESP32 Development Board
* Ultrasonic Sensor (HC-SR04)
* Buzzer
* Power Supply (5V)
* Custom PCB

---

## ⚙️ Working Principle

The ultrasonic sensor sends ultrasonic waves and receives the reflected signal to calculate distance.

* If distance > 20 cm → No alert
* If distance ≤ 20 cm → Buzzer turns ON

This helps the user identify nearby obstacles.

---

## 🔌 Circuit Connections

| Component | ESP32 Pin |
| --------- | --------- |
| Trigger   | GPIO 32   |
| Echo      | GPIO 33   |
| Buzzer    | GPIO 27   |
| VCC       | 5V (VIN)  |
| GND       | GND       |

---

## 💻 Code

The Arduino code for this project is available in the `code/` folder.

---

## 🧩 PCB Design

* Designed using Autodesk EAGLE
* Includes schematic and PCB layout
* Gerber files provided for fabrication
* Ground plane implemented for better performance

---

## 📂 Project Structure

```
Obstacle-Detection-for-Visually-Impaired/
│
├── code/              # Arduino code
├── pcb_design/        # PCB files (EAGLE + Gerber)
├── images/            # Project images
├── docs/              # Report/documentation
└── README.md
```

---

## 📷 Project Images

The images of the project is there under the imagr folder 

[PCB Layout](images/pcb_layout.png)

---

## 🧪 Results

The system successfully detects obstacles within a predefined range and alerts the user using a buzzer.

---

## 🔮 Future Enhancements

* Add vibration motor for silent alerts
* Integrate GPS tracking system
* Add GSM module for emergency alerts
* AI-based object detection

---

## 👩‍💻 Author

S SOUPARNIKA
B.Tech ECE (AI & Cybernetics)

---


