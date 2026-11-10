# Arduino Rain Sensor 🌧️

A simple Arduino UNO project that detects rainfall using an FC-37 / YL-83 rain sensor module.

## 📌 Project Overview

This project uses a rain sensor module to detect the presence of water on its detection plate. The Arduino reads analog values from the sensor and determines whether rain is detected.

The built-in LED on the Arduino UNO turns on when rain is detected.

## 🛠️ Components

- Arduino UNO
- FC-37 / YL-83 Rain Sensor
- Jumper wires
- USB cable

## 🔌 Wiring

| Rain Sensor | Arduino UNO |
|---|---|
| VCC | 5V |
| GND | GND |
| AO | A0 |

## ⚙️ Features

- Analog rain detection
- Real-time sensor readings
- Rain status monitoring through Serial Monitor
- Built-in LED indicator
- Adjustable detection threshold

## 💻 Installation

1. Clone or download this repository.
2. Open `Arduino_Rain_Sensor.ino` using Arduino IDE.
3. Connect your Arduino UNO.
4. Select the correct board and COM port.
5. Upload the sketch.
6. Open Serial Monitor at 9600 baud.

## 📊 How It Works

The sensor sends analog readings ranging from 0 to 1023.

- Lower readings generally indicate more water.
- Higher readings generally indicate a drier sensor.

The detection threshold can be adjusted in the source code.

## 📁 Project Structure

```text
Arduino-Rain-Sensor/
├── Arduino_Rain_Sensor.ino
├── README.md
├── LICENSE
└── images/
```

## 🚀 Future Improvements

- Add an LCD display.
- Add a buzzer alarm.
- Implement automatic window control.
- Send rain notifications using an IoT platform.

## 📜 License

This project is open-source and available under the MIT License.
