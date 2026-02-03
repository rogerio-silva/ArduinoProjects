#include <Arduino.h>

// Projeto: bluetoothLEDs
// Dica: leia comandos via Serial/Bluetooth e mude o estado de LEDs

const int LED_PIN = 13; // ajuste conforme sua placa

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char c = (char)Serial.read();
    if (c == '1') digitalWrite(LED_PIN, HIGH);
    if (c == '0') digitalWrite(LED_PIN, LOW);
  }
}
