#include <Wire.h>
#include <stdint.h>

void setup() {
  Serial.begin(9600);
  Wire.begin();  
}

void loop() {
  uint8_t buff[0x75];

  memset(buff, 0, 0x75);

  buff[0x44] = 1;
  buff[0x56] = 128;
  buff[0x57] = 0b0000000;

  Wire.beginTransmission(8);
  Wire.write(buff, 0x75);
  Wire.endTransmission();
  
  delay(100);
}
