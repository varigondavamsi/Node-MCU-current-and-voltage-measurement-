/*
 * This code is used for the measurement of current using node mcu
 * An op-amp is used for the measurement of the current.
 * link for the DIY current sensor is given in Read.me file of this repo
 * vamsi krishna
 * orginal arduino code by  Utsav_25
 */

#include <SPI.h>
#include <Wire.h>
void setup() {
 Serial.begin(9600);
}

void loop() {
  
  double val=analogRead(A0); //connect output of op-amp to a0
  double amp=val*0.002666; //measure the current via multimeter, then divide the current by raw value to get the constant
  Serial.print("Raw Value: ");
  Serial.println(val);
  Serial.print("Current: ");
  Serial.print(amp);
  Serial.println("Amps");
  delay(1000);
}
