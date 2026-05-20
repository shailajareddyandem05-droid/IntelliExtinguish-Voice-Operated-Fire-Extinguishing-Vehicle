VOICE OPERATED FIRE EXTINGUISHING VEHICLE
Project Introduction

The Voice Controlled Smart Fire Fighting Robot is an embedded systems and robotics project designed to assist in firefighting operations while minimizing human involvement in dangerous situations. The robot can be operated remotely through voice instructions given from a smartphone application.

Using wireless Bluetooth communication, the robot receives commands from the user and performs movements accordingly. The system is also capable of identifying fire-related conditions through sensors and activating a water spraying mechanism to control flames.

This project combines automation, embedded programming, wireless technology, and intelligent sensing to create a practical safety-oriented robotic system.
Aim of the Project
To design a robot capable of assisting in firefighting tasks
To provide wireless voice-based control for robot navigation
To detect smoke and temperature changes in fire-prone environments
To reduce direct human exposure during fire accidents
To develop an economical and efficient robotic safety solution
Main Features
🎙️ Smartphone voice-command operation
📡 Wireless communication using HC-05 Bluetooth module
🧠 Microcontroller-based processing using Arduino
⚙️ Motorized robotic vehicle movement
🚿 Automatic water pump activation through relay control
🌡️ Smoke and temperature sensing capability
🚧 IR sensor support for obstacle avoidance
📱 Android mobile application integration
System Architecture
🔹 Block Diagram

The block diagram explains the overall functional flow of the system. It illustrates the interaction between:

Mobile application
Bluetooth module
Arduino controller
Motor driver
Sensors
Water pump mechanism

This diagram helps in understanding the operational logic of the project.
Circuit / Schematic Diagram

The schematic diagram represents the electrical wiring connections between all hardware components such as:

Arduino UNO
HC-05 module
L298N motor driver
Relay module
Sensors
DC motors
Water pump

It is mainly used during hardware assembly and implementation.
Hardware Components
| Component              | Purpose                    |
| ---------------------- | -------------------------- |
| Arduino UNO            | Main processing unit       |
| HC-05 Bluetooth Module | Wireless communication     |
| L298N Motor Driver     | Controls motor operations  |
| DC Motors              | Robot movement             |
| Relay Module           | Switching control for pump |
| Water Pump             | Fire suppression           |
| Temperature Sensor     | Heat detection             |
| Smoke Sensor           | Smoke detection            |
| IR Sensors             | Obstacle sensing           |
| 12V Battery            | Power supply source        |
Software and Technologies Used
Embedded C Programming
Arduino IDE
Android Voice Control Application
Git and GitHub
Working Process
The user gives a voice instruction through an Android application.
The application converts the speech into command signals.
Commands are transferred wirelessly through the HC-05 Bluetooth module.
Arduino receives and interprets the commands.
The motor driver controls the robot’s direction and movement.
Temperature and smoke sensors continuously monitor fire conditions.
IR sensors detect nearby obstacles and assist navigation.
When fire is detected, the relay activates the water pump to spray water and suppress the flames.
Advantages
Improves safety during firefighting operations
Reduces human risk in hazardous areas
Easy and user-friendly voice operation
Low-cost embedded robotic solution
Suitable for industries, laboratories, and rescue applications
Applications
Industrial fire safety systems
Warehouses and factories
Chemical laboratories
Smart rescue operations
Hazardous environment monitoring
Future Scope
AI-based autonomous navigation
Live video streaming using camera modules
IoT-enabled fire alert system
Cloud storage for monitoring data
GPS-based tracking and control
Automatic fire detection without manual commands
Conclusion

The Voice Controlled Smart Fire Fighting Robot demonstrates the effective use of embedded systems and robotics in emergency safety applications. By integrating wireless communication, voice recognition, environmental sensing, and automated fire suppression, the system provides a reliable and modern approach to firefighting support. The project highlights how technology can help improve safety, efficiency, and response during emergency situations.
