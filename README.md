<p align="center">
    <a href="https://www.arduino.cc/">
        <img src="https://image.makewebeasy.net/makeweb/m_1920x0/Yrhd97Z9N/DATA/Arduino_logo1.png" alt="Arduino logo" width="281" height="191">
    </a>
</p>


# Arduino Microprocessor Project

![Arduino Board](./images/arduino_board.png)

This repository contains the source code and documentation for a microprocessor project based on the **Arduino** platform. The project demonstrates basic microcontroller functionalities, including reading sensor data, controlling actuators, and implementing simple algorithms. It is designed for educational purposes to help students and hobbyists get started with **Arduino** programming and microcontroller development.

## Table of Contents
1. [Overview](#overview)
2. [Features](#features)
3. [Hardware Requirements](#hardware-requirements)
4. [System Architecture](#system-architecture)
5. [Getting Started](#getting-started)
6. [Project Structure](#project-structure)
7. [Installation](#installation)
8. [Usage](#usage)
9. [Contributing](#contributing)
10. [License](#license)
11. [Contact](#contact)

## Overview

The Arduino Microprocessor project focuses on implementing basic input/output (I/O) operations, sensor reading, and controlling peripherals such as LEDs, motors, and displays using an **Arduino** board. This project aims to provide a fundamental understanding of microcontroller programming and hardware interaction.

### Key Objectives:
- **Microcontroller Simulation**: Control devices and perform tasks using the Arduino platform.
- **Sensor Data Processing**: Read and process data from sensors.
- **Actuator Control**: Control actuators like motors and LEDs based on input conditions.
- **Modular Code Design**: Write reusable and maintainable code.

## Features

- **Support for Multiple Sensors**: Includes examples for reading data from temperature sensors, light sensors, and other common devices.
- **Real-Time Data Processing**: Allows for real-time monitoring and data handling.
- **Basic Actuator Control**: Examples include controlling LEDs, servos, and motors based on input data.
- **Serial Communication**: Provides methods for communicating with a computer or other devices through the serial interface.

![Arduino Circuit Example](./images/arduino_circuit.png)

## Hardware Requirements

To successfully run this project, you will need the following components:

- **Arduino Board (e.g., Arduino Uno, Mega, or Nano)**
- **Breadboard and Jumper Wires**
- **Sensors (e.g., temperature sensor, photoresistor)**
- **Actuators (e.g., LEDs, motors, or a display)**
- **Power Supply (e.g., USB cable for Arduino)**

### Example Setup:

Hereâ€™s a basic setup for controlling an LED with an Arduino board:
- **LED**: Connected to digital pin 13.
- **Sensor**: A temperature sensor connected to analog pin A0.
  
![Arduino Setup Example](https://example.com/arduino_setup.png)

## System Architecture

The project is based on a simple architecture where the Arduino board acts as the central controller. Input devices (sensors) and output devices (actuators) are connected to the board, and the microcontroller handles the processing and control logic.

![System Architecture](https://example.com/system_architecture.png)

## Getting Started

To get started, follow these steps to set up the hardware and run the software:

### Prerequisites
- **Arduino IDE**: Download and install the [Arduino IDE](https://www.arduino.cc/en/software).
- **Basic Electronics**: Understanding of basic electronics, including how to connect components to the Arduino board.
  
## Project Structure

```
├── .github
    └── workflows
    │   └── c-cpp.yml
├── Blink
    ├── Board connection method (schematic_map).png
    ├── README.md
    ├── Schematic_board_map.png
    └── blink
    │   └── blink.ino
├── CHECK_TEMP_ANALOG
    ├── CHECK_TEMP_ANALOG.ino
    └── Library
    │   └── LiquidCrystal
    │       ├── README.adoc
    │       ├── examples
    │           ├── Autoscroll
    │           │   └── Autoscroll.ino
    │           ├── Blink
    │           │   └── Blink.ino
    │           ├── Cursor
    │           │   └── Cursor.ino
    │           ├── CustomCharacter
    │           │   └── CustomCharacter.ino
    │           ├── Display
    │           │   └── Display.ino
    │           ├── HelloWorld
    │           │   └── HelloWorld.ino
    │           ├── Scroll
    │           │   └── Scroll.ino
    │           ├── SerialDisplay
    │           │   └── SerialDisplay.ino
    │           ├── TextDirection
    │           │   └── TextDirection.ino
    │           └── setCursor
    │           │   └── setCursor.ino
    │       ├── keywords.txt
    │       ├── library.properties
    │       └── src
    │           ├── LiquidCrystal.cpp
    │           └── LiquidCrystal.h
├── CHECK_TEMP_DIGITAL
    ├── Arduino DHT11 Sensor and Show on LCD ( Schematic ).jpg
    ├── Arduino DHT11 Sensor and Show on LCD .jpg
    ├── CHECK_TEMP_DIGITAL.ino
    └── Librarry
    │   ├── Adafruit_Unified_Sensor
    │       ├── Adafruit_Sensor.cpp
    │       ├── Adafruit_Sensor.h
    │       ├── LICENSE.txt
    │       ├── README.md
    │       ├── examples
    │       │   └── sensortest
    │       │   │   └── sensortest.ino
    │       └── library.properties
    │   ├── DFRobot_DHT11
    │       ├── DFRobot_DHT11.cpp
    │       ├── DFRobot_DHT11.h
    │       ├── LICENSE
    │       ├── README.md
    │       ├── README_CN.md
    │       ├── examples
    │       │   └── readDHT11
    │       │   │   └── readDHT11.ino
    │       ├── keywords.txt
    │       ├── library.properties
    │       └── resources
    │       │   └── images
    │       │       └── DFR0067.png
    │   ├── DHT11
    │       ├── CODE_OF_CONDUCT.md
    │       ├── CONTRIBUTING.md
    │       ├── LICENSE
    │       ├── README.md
    │       ├── assets
    │       │   └── communication.png
    │       ├── examples
    │       │   ├── ReadHumidity
    │       │   │   └── ReadHumidity.ino
    │       │   ├── ReadPlot
    │       │   │   └── ReadPlot.ino
    │       │   ├── ReadTempAndHumidity
    │       │   │   └── ReadTempAndHumidity.ino
    │       │   └── ReadTemperature
    │       │   │   └── ReadTemperature.ino
    │       ├── library.properties
    │       └── src
    │       │   ├── DHT11.cpp
    │       │   └── DHT11.h
    │   ├── DHT_sensor_library
    │       ├── CONTRIBUTING.md
    │       ├── DHT.cpp
    │       ├── DHT.h
    │       ├── DHT_U.cpp
    │       ├── DHT_U.h
    │       ├── README.md
    │       ├── code-of-conduct.md
    │       ├── examples
    │       │   ├── DHT_Unified_Sensor
    │       │   │   └── DHT_Unified_Sensor.ino
    │       │   └── DHTtester
    │       │   │   └── DHTtester.ino
    │       ├── keywords.txt
    │       ├── library.properties
    │       └── license.txt
    │   └── LiquidCrystal
    │       ├── README.adoc
    │       ├── examples
    │           ├── Autoscroll
    │           │   └── Autoscroll.ino
    │           ├── Blink
    │           │   └── Blink.ino
    │           ├── Cursor
    │           │   └── Cursor.ino
    │           ├── CustomCharacter
    │           │   └── CustomCharacter.ino
    │           ├── Display
    │           │   └── Display.ino
    │           ├── HelloWorld
    │           │   └── HelloWorld.ino
    │           ├── Scroll
    │           │   └── Scroll.ino
    │           ├── SerialDisplay
    │           │   └── SerialDisplay.ino
    │           ├── TextDirection
    │           │   └── TextDirection.ino
    │           └── setCursor
    │           │   └── setCursor.ino
    │       ├── keywords.txt
    │       ├── library.properties
    │       └── src
    │           ├── LiquidCrystal.cpp
    │           └── LiquidCrystal.h
├── Calculator
    ├── Calculator.ino
    └── index.zip
├── Final-Project
    ├── Board & module Picture
    │   ├── 280x280.jpg
    │   ├── Fan-5V-0.16A-3x3-1.webp
    │   ├── Uno-R3-CH340G-ATmega328p-Development-Board-Compatible-with-Arduino2.webp
    │   ├── VH9UQ.png
    │   ├── buzzer-بازر-یکپارچه-12-ولت.jpg
    │   ├── mq9-gas-sensor-arduino-fritzing.jpg
    │   ├── mq9-gas-sensor-module-lpg-co.webp
    │   ├── tutorial-for-controlling-ac-devices-with-relay-module-and-arduino-min.webp
    │   └── wiring-relay-module-with-arduino.webp
    ├── Document
    │   ├── Project_Documentation_EN.docx.docx
    │   └── Project_Documentation_FA.docx.docx
    ├── Final-Project.ino
    ├── IoT_Uni.pptx
    ├── Picture_for_project
    │   ├── Fan-5V-0.16A-3x3-1.webp
    │   └── relay_5V.webp
    └── Readme.md
├── Get a number and print it twice on the output
    └── Get a number and print it twice on the output.ino
├── Get character and show on the serial monitor
    └── Get character and show on the serial monitor.ino
├── Get name( firstname & lastname ) and show on the serial monitor
    └── Get name( firstname & lastname ) and show on the serial monitor.ino
├── Infrared
    └── Infrared.ino
├── Keypad-LEDonORoff
    ├── Keypad-LEDonORoff.ino
    ├── LED is off.jpg
    └── LED is on.jpg
├── Keypad-tutorial
    ├── CustomKeypad
    │   └── CustomKeypad.ino
    ├── How can Keypad connent to Arduino(Schematic).jpg
    ├── How can Keypad connent to Arduino.jpg
    └── index.zip
├── Keypad-validkey
    ├── LED is off .jpg
    ├── LED is on .jpg
    ├── index.zip
    └── keypad-with-validkey.ino
├── LCD
    ├── LCD.ino
    └── Library
    │   └── LiquidCrystal
    │       ├── README.adoc
    │       ├── examples
    │           ├── Autoscroll
    │           │   └── Autoscroll.ino
    │           ├── Blink
    │           │   └── Blink.ino
    │           ├── Cursor
    │           │   └── Cursor.ino
    │           ├── CustomCharacter
    │           │   └── CustomCharacter.ino
    │           ├── Display
    │           │   └── Display.ino
    │           ├── HelloWorld
    │           │   └── HelloWorld.ino
    │           ├── Scroll
    │           │   └── Scroll.ino
    │           ├── SerialDisplay
    │           │   └── SerialDisplay.ino
    │           ├── TextDirection
    │           │   └── TextDirection.ino
    │           └── setCursor
    │           │   └── setCursor.ino
    │       ├── keywords.txt
    │       ├── library.properties
    │       └── src
    │           ├── LiquidCrystal.cpp
    │           └── LiquidCrystal.h
├── LCD_With_POT
    ├── LCD_With_POT.ino
    ├── Library.rar
    ├── Library
    │   └── LiquidCrystal
    │   │   ├── README.adoc
    │   │   ├── examples
    │   │       ├── Autoscroll
    │   │       │   └── Autoscroll.ino
    │   │       ├── Blink
    │   │       │   └── Blink.ino
    │   │       ├── Cursor
    │   │       │   └── Cursor.ino
    │   │       ├── CustomCharacter
    │   │       │   └── CustomCharacter.ino
    │   │       ├── Display
    │   │       │   └── Display.ino
    │   │       ├── HelloWorld
    │   │       │   └── HelloWorld.ino
    │   │       ├── Scroll
    │   │       │   └── Scroll.ino
    │   │       ├── SerialDisplay
    │   │       │   └── SerialDisplay.ino
    │   │       ├── TextDirection
    │   │       │   └── TextDirection.ino
    │   │       └── setCursor
    │   │       │   └── setCursor.ino
    │   │   ├── keywords.txt
    │   │   ├── library.properties
    │   │   └── src
    │   │       ├── LiquidCrystal.cpp
    │   │       └── LiquidCrystal.h
    └── Untitled.jpg
├── LED_DancingLight
    ├── LED_DancingLight.ino
    ├── README.md
    └── gif.gif
├── MQ-9_Module
    └── MQ-9_Module.ino
├── Master-Code
    └── Master-Code.ino
├── README.md
├── SevSeg_Counter
    ├── Arduino-7-Segment-Display-Circuit-Diagram-1024x550.png
    └── SevSeg_Counter.ino
├── SevSeg_Counter_with_microswitch
    ├── Arduino-7-Segment-Display-with-Push-Button-Circuit-Diagram.png
    ├── README.md
    ├── SevSeg_Counter_with_microswitch.ino
    └── ezgif.com-video-to-gif.gif
├── Show of HC-SR04 by LCD & potentiometer & LED
    ├── Arduino-ultrasonic-sensor-and-the-LDC-circuit-diagram.webp
    ├── Library
    │   └── LiquidCrystal
    │   │   ├── README.adoc
    │   │   ├── examples
    │   │       ├── Autoscroll
    │   │       │   └── Autoscroll.ino
    │   │       ├── Blink
    │   │       │   └── Blink.ino
    │   │       ├── Cursor
    │   │       │   └── Cursor.ino
    │   │       ├── CustomCharacter
    │   │       │   └── CustomCharacter.ino
    │   │       ├── Display
    │   │       │   └── Display.ino
    │   │       ├── HelloWorld
    │   │       │   └── HelloWorld.ino
    │   │       ├── Scroll
    │   │       │   └── Scroll.ino
    │   │       ├── SerialDisplay
    │   │       │   └── SerialDisplay.ino
    │   │       ├── TextDirection
    │   │       │   └── TextDirection.ino
    │   │       └── setCursor
    │   │       │   └── setCursor.ino
    │   │   ├── keywords.txt
    │   │   ├── library.properties
    │   │   └── src
    │   │       ├── LiquidCrystal.cpp
    │   │       └── LiquidCrystal.h
    ├── README.md
    └── Show.ino
├── Show of HC-SR04 by LCD & potentiometer
    ├── Library
    │   └── LiquidCrystal
    │   │   ├── README.adoc
    │   │   ├── examples
    │   │       ├── Autoscroll
    │   │       │   └── Autoscroll.ino
    │   │       ├── Blink
    │   │       │   └── Blink.ino
    │   │       ├── Cursor
    │   │       │   └── Cursor.ino
    │   │       ├── CustomCharacter
    │   │       │   └── CustomCharacter.ino
    │   │       ├── Display
    │   │       │   └── Display.ino
    │   │       ├── HelloWorld
    │   │       │   └── HelloWorld.ino
    │   │       ├── Scroll
    │   │       │   └── Scroll.ino
    │   │       ├── SerialDisplay
    │   │       │   └── SerialDisplay.ino
    │   │       ├── TextDirection
    │   │       │   └── TextDirection.ino
    │   │       └── setCursor
    │   │       │   └── setCursor.ino
    │   │   ├── keywords.txt
    │   │   ├── library.properties
    │   │   └── src
    │   │       ├── LiquidCrystal.cpp
    │   │       └── LiquidCrystal.h
    ├── README.md
    ├── Show of HC-SR04 by LCD & potentiometer ( image ).jpg
    ├── Show of HC-SR04 by LCD & potentiometer( Schema ).jpg
    └── Ultrasonic.ino
├── Show-time-on-LCD
    ├── How to connect LCD & potentiometer in Arduino.jpg
    ├── Library.rar
    └── Show-time-on-LCD.ino
└── Slave-Code
    └── Slave-Code.ino
```

## Installation

1. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/Rdabbaghi/University---Microprocessor.git
    cd University---Microprocessor
    ```

2. Open the Arduino IDE and load the example sketches located in the `examples/` directory. To open a sketch, go to **File > Open** and select the `.ino` file you want to use.

## Usage

Once the project is loaded in the Arduino IDE, follow these steps to upload and run the code:

1. Connect your Arduino board to your computer using a USB cable.
2. Open the desired `.ino` file in the Arduino IDE.
3. Select the appropriate board from **Tools > Board > Arduino Uno (or your specific board)**.
4. Choose the correct serial port from **Tools > Port**.
5. Click **Upload** to upload the code to your Arduino board.
6. Once uploaded, the Arduino will start executing the code, and you can monitor its behavior using the serial monitor.

### Example Sketch:

Hereâ€™s an example sketch for reading a temperature sensor and controlling an LED:

```cpp
int ledPin = 13;
int sensorPin = A0;
float temperature;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  temperature = analogRead(sensorPin) * (5.0 / 1023.0 * 100);
  Serial.println(temperature);

  if (temperature > 30.0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}
```

This sketch reads temperature data from a sensor and turns on an LED if the temperature exceeds 30Â°C.

![Temperature Control Example](./images/temp_control_example.png)

## Contributing

Contributions to the project are welcome! If you have ideas for new features, improvements, or bug fixes, feel free to submit a pull request.

### Guidelines:

1. Ensure your code is well-structured and follows the projectâ€™s style guide.
2. Include comments in your code for clarity.
3. Test your code before submitting a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for more details.

## Contact

For any questions or issues, you can reach out to:

- **Reza Dabbaghi**
- GitHub: [Rdabbaghi](https://github.com/Rdabbaghi)
