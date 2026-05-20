#ifndef FIRE_EXTINGUISHER_H
#define FIRE_EXTINGUISHER_H

// Motor pins
#define MOTOR1 2
#define MOTOR2 3
#define MOTOR3 4
#define MOTOR4 5

// Relay pin
#define RELAY_PIN 6

// Function declarations
void moveForward(void);
void moveBackward(void);
void turnLeft(void);
void turnRight(void);
void stopRobot(void);
void pumpOn(void);
void pumpOff(void);

#endif
