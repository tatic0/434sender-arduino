/*
  Example for different sending methods
  
  http://code.google.com/p/rc-switch/
  
*/

#include <RCSwitch.h>
RCSwitch mySwitch = RCSwitch();

long AON = 4212049;
long AOFF = 4212052;
long BON = 4215121;
long BOFF =4215124;

void setup() {

  Serial.begin(9600);
  Serial.println("Setup...");
  
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
  mySwitch.send(AON, 24);
	Serial.println("AON");
  delay(5000);  
  mySwitch.send(AOFF, 24);
	Serial.println("AOFF");
  delay(5000);  
  mySwitch.send(BON, 24);
	Serial.println("BON");
  delay(5000);  
  mySwitch.send(BOFF, 24);
	Serial.println("BOFF");
  delay(5000);


//  delay(20000);
}
