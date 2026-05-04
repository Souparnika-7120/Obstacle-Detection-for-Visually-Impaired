# Project Report

## Title

Obstacle Detection System for Visually Impaired Person

## Objective

To develop a system that helps visually impaired individuals detect obstacles using an ultrasonic sensor and buzzer alert.

## Components Used

* ESP32 Development Board
* Ultrasonic Sensor (HC-SR04)
* Buzzer
* Power Supply

## Working Principle

The ultrasonic sensor continuously measures distance.
If an obstacle is detected within 20 cm, the ESP32 activates the buzzer to alert the user.

## Circuit Description

* Trigger → GPIO 32
* Echo → GPIO 33
* Buzzer → GPIO 27

## Result

The system successfully detects obstacles and alerts the user using sound.

## Conclusion

This project improves safety and mobility for visually impaired individuals using a simple and low-cost solution.
