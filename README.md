# Object Detection Radar 🔍📡

A simple and interactive **Object Detection Radar System** built using  
**Arduino + Ultrasonic Sensor (HC-SR04) + Servo Motor + LEDs + Buzzer + Processing Visualization**.

This project scans the environment in a 180° arc and visually displays real-time object detection on a radar screen using the Processing IDE.  
It also uses **LED indicators** and a **buzzer alarm** when an object is detected within a defined distance.

---

## 🚀 Features
- 180° servo-based scanning.
- Real-time **distance measurement** using HC-SR04.
- Interactive **radar UI** made in Processing.
- **LED lights up** when object is near.
- **Buzzer alarm** for close-range alerts.
- Serial communication between Arduino & Processing.
- Smooth radar sweep animation.

---

## 🛠 Components Used
- Arduino UNO / Nano  
- Ultrasonic Sensor HC-SR04  
- SG90 Servo Motor  
- LED + 220Ω Resistor  
- Buzzer  
- Jumper wires  
- USB cable  
- Processing IDE (for radar interface)

---

## 🔧 How It Works
1. Servo rotates from 15° → 165° and back.  
2. Ultrasonic sensor measures distance at every degree.  
3. Arduino sends `angle,distance.` via serial port.  
4. Processing reads the data and displays a live radar.  
5. If object is within threshold distance:  
   - LED turns ON  
   - Buzzer beeps  
   - UI shows detected object  

---

## 📂 Files in This Repository
- `Arduino.ino` – Arduino code  
- `Processing.pde` – Radar visualization  
- `README.md` – Documentation  

---

## ▶️ Usage
1. Upload Arduino code.  
2. Open Processing sketch → set correct COM port.  
3. Run Processing and watch the radar scan.  

---

## 👨‍💻 Author
Created by *Aryan Shakya*  
Object Detection Radar Project
