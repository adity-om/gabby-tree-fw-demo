# Gabby-tree-fw-demo

Project Gab by Tree FW demo consists of ESP8266 nodes that beam real time data from the sensors and renders it on the Web App GUI, with Timestamp and FFT visualization in real-time. 

The project was designed as a demo for to show the working of the basic firmware architecture. 

## Parameters Measured

1. simple room temperature
2. humidity


## Application Architecture
The application consists of the following components:
    1. Firmware - hosted on the NodeMcu
    2. Web Server Client - hosted  on Raspberry Pi4
    3. Web App - AWS deployment
