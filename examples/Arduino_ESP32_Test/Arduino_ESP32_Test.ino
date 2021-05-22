#include<EasyDim.h>

void setup() {
  EasyDim.begin(0x10); // สำหรับบอร์ด ESP32 / ESP8266 / Arduino
}

void loop() {
  EasyDim.write(0); // กำหนดความสว่าง 0%
  delay(500);
  EasyDim.write(25); // กำหนดความสว่าง 25%
  delay(500);
  EasyDim.write(50); // กำหนดความสว่าง 50%
  delay(500);
  EasyDim.write(75); // กำหนดความสว่าง 75%
  delay(500);
  EasyDim.write(100); // กำหนดความสว่าง 100%
  delay(500);
}