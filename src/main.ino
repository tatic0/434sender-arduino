/*
  Example for different sending methods
  
  http://code.google.com/p/rc-switch/
  
*/

#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {

  Serial.begin(9600);
  
  // Transmitter is connected to Arduino Pin #10  
  mySwitch.enableTransmit(10);

  // Optional set pulse length.
  // mySwitch.setPulseLength(320);
  
  // Optional set protocol (default is 1, will work for most outlets)
  // mySwitch.setProtocol(2);
  
  // Optional set number of transmission repetitions.
   mySwitch.setRepeatTransmit(5);
  
}

void loop() {


  /* Same switch as above, but using decimal code */
  mySwitch.send(4212049, 24);
  delay(5000);  
  mySwitch.send(4212052, 24);
  delay(5000);  
  mySwitch.send(4215121, 24);
  delay(5000);  
  mySwitch.send(4215124, 24);
  delay(5000);  


//  delay(20000);
}