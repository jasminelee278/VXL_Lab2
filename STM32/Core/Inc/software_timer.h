#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"

int timer_counter[2];
int timer_flag[2];
int TIMER_CYCLE;
int MAX_PARAM;

void setTimer7seg(int duration);
void setTimerDot(int duration);
void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */
