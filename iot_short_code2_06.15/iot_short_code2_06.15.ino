#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("YSK");
  pinMode(15, OUTPUT);
  
}

void loop()
{
  if(SerialBT.available()) {
    byte data = SerialBT.read();
    Serial.write(data);
    Serial.println();

    digitalWrite(15, data == 1 ? HIGH : LOW);
    Serial.println(data == 1 ? "LED ON" : "LED OFF");
    
  }
}
