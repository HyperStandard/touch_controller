extern "C" {
#include "adv_touch.h"
}

int past_cycle;
int counter;



elapsedMillis button_one;
elapsedMillis button_two;
elapsedMillis button_three;
elapsedMillis button_four;
elapsedMillis button_five;
elapsedMillis button_six;


void setup()
{
	Serial.begin(9600);
  /* add setup code here */

}

void loop()
{
	int current_cycle = _touchRead(A1, 3, 15, 2);
	if ((current_cycle - past_cycle) > 20) {
		if (button_one > 50) {
			Serial.println(current_cycle);
			button_one = 0;
		}
	}
	past_cycle = current_cycle;
	delay(10);
}
