/*******************************************************/
/* Automatically debounce button to get the true state */
/*******************************************************/

#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class Button { 
public:
	Button(int ButtonPin);
	bool getState(int debounceTime);
private:
	bool state;
	int pin;
};

#endif