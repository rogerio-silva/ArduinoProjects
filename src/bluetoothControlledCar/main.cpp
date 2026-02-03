#include <Arduino.h>

// Projeto: bluetoothControlledCar
// Dica: adapte os pinos de motor/ponte H e o protocolo do módulo Bluetooth (HC-05/HC-06)

void setup() {
  // Inicialização de serial para Bluetooth (se usar SoftwareSerial, inclua e configure)
  Serial.begin(9600);
  // Configuração de pinos de motor/LED conforme seu hardware
}

void loop() {
  // Exemplo básico: ecoa bytes recebidos (ajuste para controles de movimento)
  if (Serial.available()) {
    int b = Serial.read();
    Serial.write(b);
    // Interprete comandos e acione motores aqui
  }
}
