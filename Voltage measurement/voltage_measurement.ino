/*--------------------------------------------------------------
  Program:      volt_measure

  Description:  Reads value on analog input A2 and calculates
                the voltage assuming that a voltage divider
                network on the pin divides by 11.
  
  Hardware:     Arduino Uno with voltage divider on A2.
                
  Software:     Developed using Arduino 1.0.5 software
                Should be compatible with Arduino 1.0 +

  Date:         22 May 2013
 
  Author:       W.A. Smith, http://startingelectronics.org

    I have just edited the code for my circuit. The main code belongs to W.A.Smit
    vamsi krishna 
--------------------------------------------------------------*/
// number of analog samples to take per reading
#define NUM_SAMPLES 10

int sum = 0;                    // sum of samples taken
unsigned char sample_count = 0; // current sample number
float voltage = 0.0;            // calculated voltage

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    // take a number of analog samples and add them up
    while (sample_count < NUM_SAMPLES) {
        sum += analogRead(A0);
        sample_count++;
        delay(10);
    }
    // calculate the voltage
    // use 5.0 for a 5.0V ADC reference voltage
    voltage = ((float)sum / (float)NUM_SAMPLES * 5.01) / 1024.0;
    // voltage multiplied by 7.667 when using voltage divider that
    // I have used a 1mega ohm and 150k ohm resistor
    //hence, i'm multiplying it with 7.
    // value
    Serial.print(voltage * 7);
    Serial.println (" V");
    sample_count = 0;
    sum = 0;
}
