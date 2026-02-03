#include <Arduino.h>

// Projeto: simpleLEDs
// Dica: pisca LED básico

const int LED_PIN_1 = 2;
const int LED_PIN_2 = 3;
const int LED_PIN_3 = 4;

void setup() {
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN_1, HIGH);
  digitalWrite(LED_PIN_2, HIGH);
  digitalWrite(LED_PIN_3, HIGH);
  delay(500);
  digitalWrite(LED_PIN_1, LOW);
  digitalWrite(LED_PIN_2, LOW);
  digitalWrite(LED_PIN_3, LOW);
  delay(500);
}
