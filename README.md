# MQ-7 Carbon Monoxide Monitoring with ESP8266 and KiwisIoT

An IoT-based carbon monoxide (CO) monitoring prototype using the MQ-7 gas sensor, NodeMCU ESP8266, and KiwisIoT cloud platform.

## Overview

This project monitors carbon monoxide-related sensor responses using the MQ-7 gas sensor. The NodeMCU ESP8266 collects sensor readings and transmits them through Wi-Fi to the KiwisIoT dashboard for remote monitoring.

## Features

- Carbon monoxide sensing using MQ-7
- Real-time sensor data monitoring
- Wireless communication using ESP8266
- Cloud-based dashboard integration
- Remote sensor reading visualization

## Hardware Components

- NodeMCU ESP8266
- MQ-7 Carbon Monoxide Sensor
- Jumper Wires
- Suitable Power Supply

## Circuit Connections

| MQ-7 Sensor | NodeMCU ESP8266 |
|---|---|
| VCC | Suitable sensor supply |
| GND | GND |
| AO | A0 (with suitable voltage scaling if required) |

**Note:** Verify the sensor module's power requirements and the NodeMCU A0 input voltage limit before connecting.

## KiwisIoT Dashboard

| Channel | Parameter |
|---|---|
| Channel 1 | Raw CO Sensor Reading |

The dashboard displays the sensor readings received from the ESP8266.

## Working Principle

1. The MQ-7 sensor responds to carbon monoxide in the surrounding air.
2. The NodeMCU reads the sensor output.
3. ESP8266 connects to Wi-Fi.
4. Sensor readings are transmitted to KiwisIoT.
5. The dashboard displays the incoming readings remotely.

## Applications

- Carbon monoxide monitoring experiments
- IoT-based environmental monitoring
- Smart-home monitoring prototypes
- Industrial monitoring demonstrations
- Embedded systems learning projects

## Libraries and Resources

- **KiwisIoT Platform:** https://www.kiwisiot.in/
- **Arduino Library:** https://github.com/Kiwistron/KiwisIoT
- **Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

## Project Tutorial

[MQ-7 Carbon Monoxide Monitoring with ESP8266 and KiwisIoT – Hackster.io](https://www.hackster.io/kirusokumar/mq-7-carbon-monoxide-monitoring-with-esp8266-and-kiwisiot-780645)

## Author

**Kirusokumar**

## License

This project is intended for educational and experimental purposes. Please credit the original author when modifying or redistributing it.