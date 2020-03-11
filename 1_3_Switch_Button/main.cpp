#include "mbed.h"

DigitalIn sw(SW3);
DigitalOut redLED(LED1);
DigitalOut greenLED(LED2);

int main() {
	while(true) {
		if(sw == 1) {
			greenLED = 0;
			redLED = 1;
		} else {
			redLED = 0;
			greenLED = 1;
		}
	}
}