/********************************************/
/* LED library to simplify LED instructions */
/********************************************/

#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led { 
public:
	Led(int LedPin);
	bool getState();
	void on();
	void off();
	void blink(int time);
private:
	boolean state;
	int pin;
};

#endif