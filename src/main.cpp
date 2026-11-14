#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);

  // Turn off RGB LEDs initially (active-low)
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_GREEN, HIGH);
  digitalWrite(LED_BLUE, HIGH);
}

void loop() {
  Serial.println("Nano ESP32 running!");
  
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(LED_RED, LOW);   // Red ON
  delay(500);

  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(LED_RED, HIGH);  // Red OFF
  delay(500);
}