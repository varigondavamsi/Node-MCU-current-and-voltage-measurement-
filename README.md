# Node-MCU-current-and-voltage-measurement-
In this project, we'll see how to measure current and voltage using node MCU
For the current measurement:
A simple DIY sensor using op-amp is given by utsav_25
Link for the built: https://www.instructables.com/id/DIY-Current-Sensor-for-Arduino/
I have made a similar circuit. The schematic can be found in the repo

For voltage measurement:
 W.A. Smith has given an excellent explanation about the voltage measurement.
 Link: https://startingelectronics.org/articles/arduino/measuring-voltage-with-arduino/
 I've just changed the calibration factor according to my resistor. The measurement of the calibration factor is given in the above link
 
 Combination of both:
 As node MCU has only one analog pin, we have to use separate code to measure both at a single time.
