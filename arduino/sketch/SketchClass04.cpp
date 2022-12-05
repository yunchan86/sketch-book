#include "SketchClass.h"
#include "Arduino.h"

class SkecthClass04 : public SkecthClass
{

  void setup() {
    robot.intNoOfLED=13;
    robot.Init(2,7,11);
  }

  void loop() {

  }

};