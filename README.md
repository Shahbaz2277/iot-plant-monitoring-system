# 🌱 IoT-Based Plant Monitoring System with Live Video Surveillance

An IoT-based plant monitoring project that uses an ESP32, DHT11 temperature and humidity sensor, and ESP32-CAM to monitor environmental conditions and view plants remotely over a local Wi-Fi network.

## 📸 Project Gallery

<p align="center">
  <img src="https://github.com/Shahbaz2277/iot-plant-monitoring-system/raw/main/Images/PlantMonitoring.png" alt="Complete IoT-Based Plant Monitoring System with ESP32, DHT11, and ESP32-CAM" width="800"/>
</p>

<p align="center">
  <em>Complete project overview: ESP32, DHT11 temperature and humidity sensor, and ESP32-CAM for plant monitoring and live video surveillance.</em>
</p>

## 📌 Project Overview

Plants need suitable environmental conditions for healthy growth. Regularly checking temperature and humidity can help users understand the environment around their plants.

This project combines sensor-based monitoring with live video surveillance. The DHT11 sensor measures temperature and humidity, while the ESP32-CAM provides a live view of the plant area. The system uses Wi-Fi to make monitoring possible on a connected device.

## 🎯 Objectives

- Monitor temperature and humidity around plants.
- Provide live video monitoring through an ESP32-CAM.
- Use Wi-Fi connectivity for remote viewing on the local network.
- Develop a low-cost and practical IoT-based monitoring solution.
- Explore the integration of embedded systems, sensors, cameras, and IoT.

## ✨ Key Features

- 🌡️ Temperature and humidity sensing using DHT11.
- 📷 Live video monitoring using ESP32-CAM.
- 📡 Wi-Fi-based connectivity.
- 🌱 Plant environment observation.
- 🔌 Low-cost embedded hardware.
- 🛠️ Separate code folders for camera and sensor-related functionality.

## 🧰 Hardware Components

| Component | Purpose |
|---|---|
| ESP32 development board | Main controller for the monitoring setup |
| DHT11 sensor | Measures temperature and humidity |
| ESP32-CAM | Captures live video of the plant area |
| USB power supply | Powers the development board during testing |
| Connecting wires | Connect hardware components |
| Wi-Fi router or access point | Provides network connectivity |

*The exact wiring and power requirements depend on your hardware setup.*

## 💻 Software and Technologies

- Arduino IDE
- Embedded C/C++ for Arduino
- ESP32 development platform
- ESP32-CAM camera web server
- Wi-Fi networking
- DHT11 sensor interface

## ⚙️ How It Works

1. **Sensor measurement:** The DHT11 measures the surrounding temperature and humidity.
2. **Embedded processing:** The controller reads sensor data according to the implemented code.
3. **Camera operation:** The ESP32-CAM captures video of the plant area.
4. **Wi-Fi connection:** The devices connect to the configured wireless network.
5. **Monitoring:** The user views the available sensor readings and camera feed using the configured interface.

## 🔌 System Architecture

```text
       DHT11 Sensor
     (Temperature &
       Humidity)
            |
            v
      ESP32 Board
            |
        Wi-Fi Network
            |
     Monitoring Device


       ESP32-CAM
            |
        Wi-Fi Network
            |
     Live Camera View
```

*This diagram represents the overall concept. The exact communication between the controller, camera, and monitoring interface depends on your implementation.*

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
├── Images/
│   ├── PlantMonitoring.jpg
│   ├── LiveCamera.png
│   ├── SensorReadings.png
│   └── MobileMonitoring.png
│
└── README.md
```

The `Images/` folder is for your project photos and screenshots. Create it in the repository if it does not exist.

## 🚀 Getting Started

### Requirements

- ESP32 development board
- ESP32-CAM module
- DHT11 temperature and humidity sensor
- Arduino IDE
- USB cables and suitable power supplies
- Wi-Fi network for testing

### Installation and Setup

1. Clone or download this repository:

   ```bash
   git clone https://github.com/Shahbaz2277/iot-plant-monitoring-system.git
   ```

2. Open the project folder in Arduino IDE.

3. Install the ESP32 board support package and any libraries required by your sketches.

4. Open the relevant `.ino` file from `CameraWebServer/` or `analogread/`, depending on the hardware you are configuring.

5. Select the correct ESP32 board and communication port.

6. Configure the Wi-Fi credentials if they are required by the code.

7. Connect the hardware according to your actual circuit and upload the code.

8. Open the Serial Monitor and follow the messages displayed by the firmware to check the device status and camera connection.

9. Connect a monitoring device to the appropriate network and open the camera interface or sensor-monitoring interface configured in your project.

> **Important:** Verify the sensor wiring, board selection, Wi-Fi settings, and required libraries before uploading. The setup steps may need adjustment for your particular ESP32 and ESP32-CAM modules.

## 📊 Applications

- Home gardening
- Small indoor gardens
- Greenhouse observation
- Plant growth monitoring
- Educational IoT and embedded-systems projects

## 🔮 Future Improvements

- Add automatic plant watering using a soil-moisture sensor and water pump.
- Store temperature and humidity readings for historical analysis.
- Add alerts when environmental readings exceed configured limits.
- Develop a dedicated mobile application.
- Add cloud connectivity for monitoring outside the local network.
- Use additional sensors to monitor soil moisture, light intensity, and other plant conditions.

## ⚠️ Limitations

- The DHT11 provides basic temperature and humidity measurements; it does not directly measure soil moisture.
- Live camera access and sensor monitoring depend on the implemented firmware and network configuration.
- Monitoring through a local Wi-Fi network does not automatically provide access over the internet.
- Automated watering and cloud-based data storage require additional hardware or software.

## 👨‍💻 Author

**Shahbaz Ahmad**

Electronics Engineering Student  
The Islamia University of Bahawalpur, Pakistan

- **GitHub:** [Shahbaz2277](https://github.com/Shahbaz2277)
- **Project Repository:** [IoT-Based Plant Monitoring System](https://github.com/Shahbaz2277/iot-plant-monitoring-system)

## 📄 License

This project is intended for educational and learning purposes. Add a suitable open-source license if you want others to reuse, modify, or distribute your code.

---

⭐ If you find this project useful, consider giving the repository a star on GitHub.
