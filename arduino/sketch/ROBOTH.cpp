#include "ROBOTH.h"
#include "Arduino.h"

// Init Robot
void ROBOT::Init(int led, ...) {
  va_list args;
  InitLED(led,args);
}

// Init LED, if any
void ROBOT::InitLED(int led,va_list args) {
	if(led < 0) {
    for (int i = 1; i <= intNoOfLED; i++) {
      pinMode(aryLED[i - 1], OUTPUT);
    };
  }else {
    //va_list args;
    // Init LED, if any
    //va_start(args, led);
    for(int i=0;i<led;i++)
    {
      pinMode(aryLED[va_arg(args,int)], OUTPUT);
    }
    //InitLED(led,arg_ptr);
    //va_end(args);
  };
}


// LED Related functions

// LED On
void ROBOT::LEDOn(int intLedNo) {
	digitalWrite(aryLED[intLedNo-1], HIGH);
}

// LED Off
void ROBOT::LEDOff(int intLedNo) {
	digitalWrite(aryLED[intLedNo - 1], LOW);
}