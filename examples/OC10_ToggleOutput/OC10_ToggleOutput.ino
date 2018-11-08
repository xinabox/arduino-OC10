/*************************************************************
	This is an examples for the OC10
	Mechanical Relay
	
	You can buy one on our store!
	-----> https://xinabox.cc/products/OC10/
	
	This example in structs the OC10 to turn its output
	on and off
	
	The sensor communicates over the I2C Bus.
	
*************************************************************/

/********************* Library Includes *********************/
#include <arduino-OC10.h> // https://github.com/xinabox/arduino-OC10
#include <xCore.h> 

/****************** Global sensor objects *******************/
xOC10 OC10;

/********************* SYSTEM VARIABLES *********************/
const int DELAY_TIME = 2000;

/*********************** Sketch Code ************************/
void setup() {
	// Start the Serial Monitor
	Serial.begin(115200);

	#ifdef ESP8266
		Wire.pins(2,14);
	#endif
		
	// Start the I2C Communication
	Wire.begin();
	
	// Start the OC10 port expander
	OC10.begin();

	Serial.println("OC10 Test");
}

void loop() {
	// Switch OUT on
	OC10.digitalWrite(HIGH);
	delay(DELAY_TIME);
	
	// Switch OUT off
	OC10.digitalWrite(LOW);
	delay(DELAY_TIME);
}