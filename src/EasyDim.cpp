#include "EasyDim.h"

EasyDimClass::EasyDimClass() { }

#if defined(ESP8266) || defined(ESP32)
void EasyDimClass::begin(uint8_t addr, TwoWire *i2c, int sda, int scl, uint32_t frequency) {
#else
void EasyDimClass::begin(uint8_t addr) {
#endif
#if defined(ESP8266) || defined(ESP32)
  _i2c = i2c;
  _i2c->begin(sda, scl, frequency);
#else
  Wire.begin();
#endif
  _addr = addr;
}

int EasyDimClass::write(uint8_t value) {
#if defined(ESP8266) || defined(ESP32)
  _i2c->beginTransmission(_addr);
  _i2c->write(value);
  return _i2c->endTransmission();
#else
  Wire.beginTransmission(_addr);
  Wire.write(value);
  return Wire.endTransmission();
#endif
}

EasyDimClass EasyDim;
