#include <Arduino.h>

// Projeto: bluetoothEnvironment
// Dica: leia sensores (ex.: DHT11/22, LDR, etc.) e envie por Serial/Bluetooth

void setup() {
  Serial.begin(9600);
  // Inicialize sensores aqui
}

void loop() {
  // Leia sensores e envie valores no formato desejado
  // Exemplo fictício:
  int dummy = analogRead(A0);
  Serial.print("ENV:");
  Serial.println(dummy);
  delay(500);
}
