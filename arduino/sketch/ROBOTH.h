// ROBOTH.h
// We declare all variables(properties) and functions(methods) of the ROBOT object inside this header file

#ifndef _ROBOTH_h
#define _ROBOTH_h

#include "Arduino.h"

class ROBOT
{
public:
	// Part A - Public vars

	// LED Related
	int intNoOfLED = 0;
	// Pin No. of the LEDs, a Maximum of 10 LED is allowed
	int aryLED[13];


	// Part B - Init
	void Init(int led, ...);


	// Part C - Functions


	// C1 - LED Related functions

	// Turn On an LED
	void LEDOn(int intLedNo);

	// Turn Off an LED
	void LEDOff(int intLedNo);


private:
	void InitLED(int led,va_list args);
};


#endif