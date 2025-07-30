#include <Arduino.h>
#include <WiFi.h>
#include <ArduinoJson.h>

// ESP32 DevKit onboard LED is on GPIO2 if not defined already:
#ifndef LED_BUILTIN
#define LED_BUILTIN 2
#endif
// Driver includes (to implement)
// #include "drivers/MPU6050Driver.h"
// #include "drivers/HMC5883Driver.h"
// #include "drivers/GPSDriver.h"
// #include "drivers/RadarDriver.h"

// Core includes
// #include "core/SensorManager.h"
// #include "core/Scheduler.h"
// #include "networking/MeshManager.h"

#define LOG(fmt, ...) Serial.printf("[%-6lu] " fmt "\r\n", millis(), ##__VA_ARGS__)

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);

  LOG("RoadSense V2V System Starting...");
  LOG("ESP32 Chip: %s", ESP.getChipModel());
  LOG("Free Heap: %d bytes", ESP.getFreeHeap());

  // TODO: Initialize drivers, mesh network, sensors
}

void loop() {
  // Blink LED
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
  delay(1000);

  LOG("System alive - Free heap: %d", ESP.getFreeHeap());
}
