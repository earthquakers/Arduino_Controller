#include <Wire.h>
#include <stdint.h>

void scan() {
  char buff[8];

  for(uint8_t addr = 1; addr <= 128; addr++) {
    uint8_t ret = Wire.requestFrom(addr, 8);

    uint8_t pos = 0;
    
    while(Wire.available()) {
      buff[pos++] = Wire.read();
    }

    Serial.print("addr: ");
    Serial.print(addr);
    Serial.print(", ret: ");
    Serial.print(ret);
    Serial.print(", resp: '");
    
    for(uint8_t i = 0; i < 8; i++) {
      Serial.print(buff[i]);
    }
    
    Serial.println("'");
  }

  delay(10);
}

