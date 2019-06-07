// Include header file
#include <wiringPi.h>
#include <stdlib.h>

// GPIO
#define GPIO18 18 // BLUE Button
#define GPIO25 25 // RED Button

// Main function
int main(void) {
	wiringPiSetupGpio();
	pinMode(GPIO18, INPUT);
	pinMode(GPIO25, INPUT);
        pullUpDnControl(GPIO18, PUD_UP);
        pullUpDnControl(GPIO25, PUD_UP);

	while(1){
		if(digitalRead(GPIO18) == 0) {
			system("omxplayer player-1.mp3");
		}
		if(digitalRead(GPIO25) == 0) {
			system("omxplayer player-2.mp3");
		}
	};
}
