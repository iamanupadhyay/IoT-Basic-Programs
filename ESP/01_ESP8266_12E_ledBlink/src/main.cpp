#include <Arduino.h>
// #define LED 2
#define LED D0


int toggle(int, int);

void setup() {
  pinMode(LED, OUTPUT);
Serial.begin(115200);
}

void loop() {
  toggle(LED, 1000);
}

int toggle(int pin,int delayTime=1000){
  bool toggleTo=!digitalRead(pin);
  Serial.print("LED toggeling to ");
  Serial.println(toggleTo);
  digitalWrite(pin, toggleTo);
  delay(delayTime);
  return 0;
}

