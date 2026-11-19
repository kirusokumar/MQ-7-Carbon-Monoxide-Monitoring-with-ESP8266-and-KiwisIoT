#include <ESP8266WiFi.h>
#include <KiwisIoT.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_KIWISIOT_TOPIC_ID";

#define MQ7_PIN A0

KiwisIoT kiwisiot(ssid, pass, topic);

unsigned long lastSend = 0;

void setup() {
  Serial.begin(115200);

  Serial.println("MQ-7 CO Monitoring");

  kiwisiot.begin();
}

void loop() {
  kiwisiot.run();

  if (millis() - lastSend >= 2000) {
    lastSend = millis();

    int sensorValue = analogRead(MQ7_PIN);

    Serial.print("MQ-7 Raw Value: ");
    Serial.println(sensorValue);

    // Send raw ADC reading to KiwisIoT Channel 0
    kiwisiot.send("0", String(sensorValue));
  }

  delay(1000);
}