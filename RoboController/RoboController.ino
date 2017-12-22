/**
 * https://github.com/blasterbug/Matbotics/archive/master.zip
 * http://dsscircuits.com/images/code/I2C_Rev5.zip
 */

#include <I2C.h>
#include <Matbotics.h>

MTController m;

void setup() {
	m.timeout(0);
	m.motorOneMode(MTBS_MTR_MODE_FLOAT);
}

void loop() {
  
  for(int i = -100; i <= 100; i++) {
		m.motorOneSpeed(i);
		m.motorThreeSpeed(i);
		m.motorTwoSpeed(i);
		m.motorFourSpeed(i);
		delay(10);
	}

	for(int i = -100; i <= 100; i++) {
		m.motorOneSpeed(-i);
		m.motorThreeSpeed(-i);
		m.motorTwoSpeed(-i);
		m.motorFourSpeed(-i);
		delay(10);
  }
}