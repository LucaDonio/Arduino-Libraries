#include <Button.h> 

Button::Button(int ButtonPin){
    this->pin = ButtonPin;
    this->state = LOW;
    pinMode(pin, INPUT); 
}

bool Button::getState(int debounceTime){
	this->state = digitalRead(pin);
	if(state == HIGH){
		delay(debounceTime);
		this->state = digitalRead(pin);
		if(state == HIGH){
			return HIGH;
    }		else return LOW;
  }	else return LOW;
}
