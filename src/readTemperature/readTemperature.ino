/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/
#define LOOPCOUNT 40
#define LEDPIN 13
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  analogReadResolution(12);
  pinMode(LEDPIN, OUTPUT);           // set pin to input
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  //int sensorValue = analogRead(A1);
  // print out the value you read:
  float avg;
  for(int i = 0; i < LOOPCOUNT; i++) {

    avg+=analogRead(A1);
    delay(100);
    
  }
  avg = avg/LOOPCOUNT;
  //Serial.print(-450*(avg*3.3/4096)+240.7,5);
  //Serial.print(-491.2*(avg*3.3/4096)+262.6,5);
  Serial.print(-363.7*(avg*3.3/4096)+202.8,5);
  Serial.println(" °C");
  float voltage = avg*3.3/4096;
  Serial.print(voltage, 5);
  Serial.println(" V");
  Serial.print((voltage*1100)/(3.3-voltage),5);  
  Serial.println(" Ohm");
  avg = 0;
  //delay(500);        // delay in between reads for stability
}
