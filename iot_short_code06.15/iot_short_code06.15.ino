#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
#define R 12
#define G 13
#define B 14

void setup() {
  Serial.begin(115200);
  SerialBT.begin("YSK");

  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
}

void loop() {
  if (SerialBT.available()) {
    char data = SerialBT.read();
    Serial.write(data);
    Serial.println();

    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);

    switch (data) {
      case '1':
        digitalWrite(R, HIGH);
        Serial.println("STOP");
        break;
      case '2':
        digitalWrite(B, HIGH);
        Serial.println("WAIT");
        break;
      case '3':
        digitalWrite(G, HIGH);
        break;
    }
  }
}
