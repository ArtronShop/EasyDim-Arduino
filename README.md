# EasyDim

ไลบารี่สำหรับ EasyDim โมดูลควบคุมความสว่างหลอดไส้ 220V ใช้ควบคุมความสว่างของหลอดไส้ไม่เกิน 500W เชื่อมต่อกับไมโครคอนโทรลเลอร์ผ่าน I2C ใช้งานได้กับบอร์ด KidBright, ESP8266, ESP32 และบอร์ด Arduino ทุกรุ่น

> สั่งซื้อ EasyDim ได้ที่ https://www.artronshop.co.th/p/212

## โค้ดโปรแกรมตัวอย่าง

โค้ดโปรแกรมสั่งให้หลอดไส้สว่าง 0%, 25%, 50%, 75% และ 100% ตามลำดับ

**สำหรับบอร์ด ESP32 / ESP8266 / Arduino**

````c++
#include<EasyDim.h>

void setup() {
  EasyDim.begin(0x10); // สำหรับบอร์ด ESP32 / ESP8266 / Arduino
}

void loop() {
  EasyDim.write(0);
  delay(500);
  EasyDim.write(25);
  delay(500);
  EasyDim.write(50);
  delay(500);
  EasyDim.write(75);
  delay(500);
  EasyDim.write(100);
  delay(500);
}
````

**สำหรับบอร์ด KidBright**

````c++
#include<EasyDim.h>

void setup() {
  EasyDim.begin(0x10, &Wire, 4, 5); // สำหรับบอร์ด KidBright
}

void loop() {
  EasyDim.write(0);
  delay(500);
  EasyDim.write(25);
  delay(500);
  EasyDim.write(50);
  delay(500);
  EasyDim.write(75);
  delay(500);
  EasyDim.write(100);
  delay(500);
}
````

