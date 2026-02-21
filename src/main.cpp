/**
* @file main.cpp
 * @brief MG995 Closed-Loop Axis Control System
 * @author Riddhima Rajput
 * @date 2026-02-20
 *
 * @details
 * This program implements PWM-based control of MG995 servo motor.
 * The system accepts angle input via Serial Monitor and moves
 * the servo after validating input range (0–180 degrees).
 */
#include <Arduino.h>
#include <Servo.h>
Servo myServo;
void setup() {
 Serial.begin(9600);
 myServo.attach(10);
 Serial.println("Servo initiate");




}