
#include "config.h"

extern int ledpin_11;
extern int inpin_7;
extern int val;

void setup_03()
{
  pinMode(ledpin_11, OUTPUT);
  pinMode(inpin_7,INPUT);
}

void loop_03()
{
  digitalWrite(ledpin_11, LOW);
  delay(1000);
  digitalWrite(ledpin_11, HIGH);
  delay(1000);
  Serial.println("test value is !");
  val=digitalRead(inpin_7);
  if(val==LOW)
  {
    digitalWrite(ledpin_11, LOW);
    Serial.println("LOW!");
  }
  else
  {
    digitalWrite(ledpin_11, HIGH);
    Serial.println("HIGH!");
  }
  delay(1000);
}