# 🌱 IoT-Based Plant Monitoring System with Live Video Surveillance

<p align="center">
  <strong>Smart Gardening | Embedded Systems | Internet of Things (IoT)</strong>
</p>

<p align="center">
  An IoT-based system for monitoring plant environmental conditions and viewing live video through a mobile device over a local Wi-Fi network.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Platform-ESP32-blue?style=for-the-badge&logo=espressif" alt="ESP32"/>
  <img src="https://img.shields.io/badge/Camera-ESP32--CAM-green?style=for-the-badge" alt="ESP32-CAM"/>
  <img src="https://img.shields.io/badge/Sensor-DHT11-orange?style=for-the-badge" alt="DHT11"/>
  <img src="https://img.shields.io/badge/Network-Wi--Fi-lightgrey?style=for-the-badge&logo=wifi" alt="Wi-Fi"/>
</p>

---

## 📌 Table of Contents

- [About the Project](#-about-the-project)
- [Project Objectives](#-project-objectives)
- [Key Features](#-key-features)
- [System Architecture](#-system-architecture)
- [Hardware Components](#-hardware-components)
- [Software and Programming Languages](#-software-and-programming-languages)
- [Working Principle](#-working-principle)
- [Repository Structure](#-repository-structure)
- [Installation and Setup](#-installation-and-setup)
- [How to Use](#-how-to-use)
- [Applications](#-applications)
- [Advantages](#-advantages)
- [Limitations](#-limitations)
- [Future Improvements](#-future-improvements)
- [References and Documentation](#-references-and-documentation)
- [Author](#-author)
- [License](#-license)

---

## 🌿 About the Project

The **IoT-Based Plant Monitoring System with Live Video Surveillance** is an embedded systems project designed to make plant monitoring easier through wireless communication.

The system uses an **ESP32 development board** with a DHT11 temperature and humidity sensor to monitor environmental conditions around a plant. An **ESP32-CAM module** provides a camera feed so that the user can visually observe the plant using a mobile device.

Both monitoring functions are intended to be accessed through the same local Wi-Fi network, making it possible to check the plant without being physically present beside it.

This project combines embedded hardware, environmental sensing, Wi-Fi communication, and camera-based monitoring in a practical IoT application.

> **Project focus:** Local plant monitoring using environmental sensors and live video, without requiring a cloud service for basic local-network access.

## 🎯 Project Objectives

- Monitor the temperature surrounding a plant.
- Measure environmental humidity using the DHT11 sensor.
- Capture and view live video through the ESP32-CAM.
- Enable monitoring through a mobile device connected to the same Wi-Fi network.
- Explore practical applications of IoT and embedded systems.
- Develop a foundation for future smart gardening and automated plant care.

## ✨ Key Features

| Feature | Description |
|---|---|
| 🌡️ Temperature Monitoring | Measures environmental temperature using DHT11. |
| 💧 Humidity Monitoring | Measures relative humidity in the surrounding environment. |
| 📷 Live Video | Uses ESP32-CAM to provide a camera view of the plant. |
| 📱 Mobile Access | Supports monitoring through a mobile device using the implemented interface. |
| 📶 Local Wi-Fi | Designed for access over the same local network. |
| 🔌 Embedded Hardware | Integrates sensors, microcontrollers, and a camera module. |
| 🌱 Smart Gardening | Supports convenient observation of plants and their surroundings. |

## 🏗️ System Architecture

The system consists of two main hardware units.

```text
                 ┌─────────────────────┐
                 │    Plant / Garden   │
                 └──────────┬──────────┘
                            │
                 ┌──────────▼──────────┐
                 │   DHT11 Sensor      │
                 │ Temperature &       │
                 │ Humidity            │
                 └──────────┬──────────┘
                            │
                 ┌──────────▼──────────┐
                 │   ESP32 Board       │
                 │ Sensor Data         │
                 │ Processing          │
                 └──────────┬──────────┘
                            │
                      Local Wi-Fi
                            │
                 ┌──────────▼──────────┐
                 │  Mobile Device      │
                 │ Environmental Data  │
                 └─────────────────────┘


                 ┌─────────────────────┐
                 │    ESP32-CAM        │
                 │ Camera Capture      │
                 └──────────┬──────────┘
                            │
                      Local Wi-Fi
                            │
                 ┌──────────▼──────────┐
                 │  Mobile Device      │
                 │ Live Camera Feed    │
                 └─────────────────────┘
```

**Note:** The diagram illustrates the intended monitoring arrangement. The ESP32 and ESP32-CAM may operate as separate network devices. Their exact communication and mobile access methods depend on the implemented firmware.

## 🔩 Hardware Components

| Component | Quantity | Purpose |
|---|---:|---|
| ESP32 Development Board | 1 | Reads environmental sensor data and provides Wi-Fi connectivity. |
| ESP32-CAM Module | 1 | Captures images and provides a live camera feed. |
| DHT11 Sensor | 1 | Measures temperature and relative humidity. |
| Wi-Fi Router / Access Point | 1 | Connects the monitoring devices and mobile device to the same network. |
| Jumper Wires | As required | Connect the sensor to the ESP32. |
| USB Cable / Power Supply | As required | Powers and programs the hardware. |

*Quantities and connections should be adjusted to match the final physical implementation.*

## 💻 Software and Programming Languages

### Programming Language

**C/C++ for Arduino**

The firmware for ESP32 and ESP32-CAM is commonly developed using the Arduino framework, which uses C++ with Arduino-specific functions and libraries.

Official documentation:

- [Arduino Language Reference](https://docs.arduino.cc/language-reference/)
- [Arduino IDE Downloads](https://www.arduino.cc/en/software)
- [ESP32 Arduino Core — Official Documentation](https://docs.espressif.com/projects/arduino-esp32/en/latest/)
- [ESP32-CAM CameraWebServer Example](https://github.com/espressif/arduino-esp32/tree/master/libraries/ESP32/examples/Camera/CameraWebServer)

### Development Tools and Technologies

| Tool / Technology | Purpose |
|---|---|
| Arduino IDE | Writing, compiling, and uploading firmware. |
| ESP32 Arduino Core | Programming ESP32 boards using Arduino APIs. |
| Wi-Fi | Local wireless communication. |
| DHT Sensor Library | Reading DHT11 temperature and humidity values, if used by the firmware. |
| Camera Web Server Example | Reference implementation for ESP32-CAM camera streaming, if used. |
| Git and GitHub | Source-code version control and project hosting. |

**Important:** The table lists the tools relevant to this project. Verify the exact libraries and example code used in the source files before treating every item as a confirmed dependency.

## ⚙️ Working Principle

### 1. Environmental Data Collection

The DHT11 sensor measures temperature and relative humidity in the environment surrounding the plant. It sends its readings to the ESP32 through a digital data connection.

### 2. Sensor Data Processing

The ESP32 reads the sensor values and makes them available through the monitoring method implemented in the firmware.

### 3. Camera Monitoring

The ESP32-CAM captures video of the plant. Its firmware provides the camera interface or stream for viewing from a compatible device.

### 4. Local Network Communication

The ESP32 and ESP32-CAM connect to the configured Wi-Fi network. A mobile device connected to the same network can access the corresponding monitoring interfaces, provided that the firmware and network configuration support it.

### 5. Plant Observation

The user can review temperature and humidity readings and observe the plant through the camera feed. This helps with routine observation of the plant and its surrounding conditions.

**Note:** The DHT11 measures environmental conditions; it does not directly measure soil moisture or determine plant health.

## 📂 Repository Structure

```text
iot-plant-monitoring-system/
│
├── CameraWebServer/
│   ├── CameraWebServer.ino
│   ├── app_httpd.cpp
│   ├── camera_index.h
│   ├── camera_pins.h
│   ├── ci.json
│   └── partitions.csv
│
├── analogread/
│   └── analogread.ino
│
└── README.md
```

### File Descriptions

- **`CameraWebServer.ino`** — Main Arduino sketch for the camera web server.
- **`app_httpd.cpp`** — HTTP server and camera interface implementation.
- **`camera_index.h`** — Header file containing camera web interface resources.
- **`camera_pins.h`** — Camera pin definitions.
- **`ci.json`** — Configuration file included in the project.
- **`partitions.csv`** — ESP32 flash partition configuration.
- **`analogread.ino`** — Arduino sketch for analog input reading; verify its relationship to the DHT11 monitoring implementation.

## 🚀 Installation and Setup

### Requirements

Before starting, make sure you have:

- A computer with Windows, Linux, or macOS.
- Arduino IDE installed.
- ESP32 board support installed in Arduino IDE.
- An ESP32 development board.
- An ESP32-CAM module.
- A DHT11 sensor and suitable connecting wires.
- A Wi-Fi network accessible to your mobile device.

### Step 1: Clone the Repository

Open a terminal or Command Prompt and run:

```bash
git clone https://github.com/Shahbaz2277/iot-plant-monitoring-system.git
```

Open the project directory:

```bash
cd iot-plant-monitoring-system
```

### Step 2: Configure Arduino IDE

1. Install the Arduino IDE.
2. Install the ESP32 board package using the official Espressif instructions.
3. Select the correct ESP32 board and serial port.
4. Open the required `.ino` sketch from the appropriate project folder.

### Step 3: Configure Wi-Fi

Update the firmware with your own local Wi-Fi credentials if the code requires them.

Do not publish real Wi-Fi passwords, API keys, or other private credentials in your public repository.

For shared projects, use placeholder values in example configuration files.

### Step 4: Connect the Hardware

- Connect the DHT11 sensor to the ESP32 according to the sensor pinout and firmware configuration.
- Connect the ESP32-CAM to the appropriate power source.
- Ensure the camera module and development board are compatible with the selected firmware.
- Check all wiring before powering the circuit.

**Important:** Follow the pin definitions in your actual source code. Do not assume a particular GPIO connection without checking the sketch.

### Step 5: Upload the Firmware

1. Open the relevant Arduino sketch.
2. Select the correct board.
3. Select the correct serial port.
4. Compile the firmware.
5. Upload it to the target board.
6. Open Serial Monitor if the firmware uses it for status messages or network information.

Repeat the process for the second board if the project uses separate firmware for the ESP32 and ESP32-CAM.

### Step 6: Access the Monitoring Interface

1. Connect the ESP32, ESP32-CAM, and mobile device to the appropriate local Wi-Fi network.
2. Check the IP address or access URL printed by the firmware.
3. Open the configured monitoring interface on the mobile device.
4. Verify the sensor readings and camera feed independently.

The exact URL, port, and interface depend on the firmware installed on each device.

## 📱 Mobile Monitoring

The project is designed for local monitoring from a mobile device.

Depending on the implementation, the user may access:

- Temperature readings.
- Humidity readings.
- The ESP32-CAM camera interface.
- A live video stream.

The actual mobile application or interface name should be added here once confirmed. If the system uses a browser-based interface rather than a dedicated mobile app, describe it accordingly.

## 🌍 Applications

- Home gardening and indoor plant observation.
- Small greenhouse monitoring.
- Educational IoT demonstrations.
- Embedded systems learning.
- Local environmental monitoring.
- Prototyping smart agriculture solutions.

## ✅ Advantages

- Uses affordable, widely available embedded hardware.
- Combines environmental sensing with camera monitoring.
- Supports wireless access over a local network.
- Provides a foundation for expanding the system with additional sensors.
- Helps demonstrate practical IoT and embedded programming concepts.

## ⚠️ Limitations

- DHT11 provides basic environmental measurements and has limited accuracy compared with more advanced sensors.
- The system does not measure soil moisture unless an additional soil moisture sensor is installed.
- Local monitoring depends on Wi-Fi connectivity and network configuration.
- Live video quality depends on the camera configuration, power supply, and network conditions.
- The system does not automatically water plants unless a watering mechanism is added.
- Remote access outside the local network is not guaranteed.

## 🔮 Future Improvements

Possible improvements include:

- **Soil Moisture Sensor:** Measure moisture directly in the soil.
- **Automatic Irrigation:** Control a water pump based on soil moisture thresholds.
- **Mobile Notifications:** Alert the user when environmental readings cross defined thresholds.
- **Historical Data:** Store readings and visualize trends over time.
- **AI-Based Plant Analysis:** Explore image classification for plant disease or visible stress detection.
- **Advanced Sensors:** Use more accurate temperature, humidity, and soil sensors.
- **Cloud Integration:** Enable remote monitoring outside the local network with suitable security.
- **Power Optimization:** Reduce energy consumption for long-term monitoring.

These are proposed enhancements and are not claimed as existing features.

## 📚 References and Documentation

- [Espressif ESP32 Documentation](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/)
- [Arduino ESP32 Documentation](https://docs.espressif.com/projects/arduino-esp32/en/latest/)
- [Arduino IDE](https://www.arduino.cc/en/software)
- [Arduino Language Reference](https://docs.arduino.cc/language-reference/)
- [ESP32-CAM CameraWebServer Example](https://github.com/espressif/arduino-esp32/tree/master/libraries/ESP32/examples/Camera/CameraWebServer)
- [Git Documentation](https://git-scm.com/doc)
- [GitHub Documentation](https://docs.github.com/en)

## 👨‍💻 Author

**Shahbaz Ahmad**

Electronics Engineering Student  
The Islamia University of Bahawalpur, Pakistan

- **GitHub:** [@Shahbaz2277](https://github.com/Shahbaz2277)
- **Project Repository:** [iot-plant-monitoring-system](https://github.com/Shahbaz2277/iot-plant-monitoring-system)

## 🤝 Contributions

Suggestions and improvements are welcome. If you would like to contribute:

1. Fork this repository.
2. Create a new branch for your changes.
3. Commit your improvements.
4. Open a pull request with a clear description.

## 📄 License

No license has been specified yet. If you want others to reuse, modify, or redistribute your code, consider adding an appropriate open-source license, such as the MIT License, after confirming that you have the rights to license all included code.

---

<p align="center">
  <strong>Built with curiosity and embedded systems engineering 🌱</strong>
</p>
