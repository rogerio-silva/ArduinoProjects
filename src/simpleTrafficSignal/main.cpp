#include <Arduino.h>

// Projeto: simpleTrafficSignal
// Dica: simule semáforo com 3 LEDs

const int LED_RED = 8;
const int LED_YEL = 9;
const int LED_GRN = 10;

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YEL, OUTPUT);
  pinMode(LED_GRN, OUTPUT);
}

void loop() {
  // Verde
  digitalWrite(LED_GRN, HIGH);
  digitalWrite(LED_YEL, LOW);
  digitalWrite(LED_RED, LOW);
  delay(3000);

  // Amarelo
  digitalWrite(LED_GRN, LOW);
  digitalWrite(LED_YEL, HIGH);
  digitalWrite(LED_RED, LOW);
  delay(1000);

  // Vermelho
  digitalWrite(LED_GRN, LOW);
  digitalWrite(LED_YEL, LOW);
  digitalWrite(LED_RED, HIGH);
  delay(3000);
}
