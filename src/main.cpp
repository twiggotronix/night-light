#include <Arduino.h>
#include <ESP8266WiFi.h> 
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>

#include "NightLight.cpp"

NightLight nightlight = NightLight(60, D1);

void setup() {
  Serial.begin(115200);
  Serial.println("configuring wifi!");
  WiFiManager wifiManager;
  wifiManager.autoConnect("night-light-wifi");
  Serial.println("connected...yeey :)");

  Serial.println("Setup done!");
  nightlight.setColor(0,255,0,50);
}

void loop() {
}