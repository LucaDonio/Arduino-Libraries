#include <Led.h> 

Led::Led(int LedPin){
    this->pin = LedPin;
    this->state = LOW;
    pinMode(pin, OUTPUT); 
}

bool Led::getState(){
	return state;
}

void Led::on(){
	digitalWrite(pin,HIGH); 
	this->state = HIGH;
}

void Led::off(){
	digitalWrite(pin,LOW); 
	this->state = LOW;
}

void Led::blink(int time){
	on(); 			
	delay(time/2);  
	off();			
	delay(time/2);  
}