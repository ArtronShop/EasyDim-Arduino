#ifndef __EASY_DIM_H__
#define __EASY_DIM_H__

#include <Wire.h>

#define EASYDIM_DEFAULT_I2C_ADDR 0x10

class EasyDimClass {
  public:
    EasyDimClass() ;
#if defined(ESP8266) || defined(ESP32)
    void begin(uint8_t addr = EASYDIM_DEFAULT_I2C_ADDR, TwoWire *i2c = &Wire, int sda=-1, int scl=-1, uint32_t frequency=0) ;
#else
    void begin(uint8_t addr = EASYDIM_DEFAULT_I2C_ADDR) ;
#endif
    int write(uint8_t value) ;

  private:
    uint8_t _addr;
#if defined(ESP8266) || defined(ESP32)
    TwoWire *_i2c;
#endif

};

extern EasyDimClass EasyDim;

#endif
