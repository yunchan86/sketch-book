
#include "ROBOTH.h"

// Declare the ROBOT rbt1
ROBOT rbt1;

void setup2() {
	// Set the no. of LED in this robot, if any
	rbt1.intNoOfLED = 2;
	// Set the PIN numbers of those LEDs, if any
	rbt1.aryLED[0] = 1;
	rbt1.aryLED[1] = 2;

	// Init Robot
	rbt1.Init(-1);
}

// the loop function runs over and over again until power down or reset
void loop2() {
	// 
	for (int i = 1; i <= rbt1.intNoOfLED; i++) {
		rbt1.LEDOn(i);
	};
	delay(1000);
	for (int i = 1; i <= rbt1.intNoOfLED; i++) {
		rbt1.LEDOff(i);
	};
	delay(1000);
}