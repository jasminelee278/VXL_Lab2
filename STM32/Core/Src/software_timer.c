
#include "software_timer.h"

#define TIMER_CYCLE_2 1

int timer_counter[2] = {0};
int timer_flag[2] = {0};
#define TIMER_CYCLE 10
#define MAX_PARAM  	2


//void setTimer0(int duration){
//    timer0_counter = duration / TIMER_CYCLE;
//    timer0_flag = 0;
//}
//void timer_run(){
//    if(timer0_counter > 0){
//        timer0_counter--;
//        if (timer0_counter == 0) timer0_flag = 1;
//    }
//}

void setTimer7seg(int duration){
    timer_counter[0] = duration / TIMER_CYCLE;
    timer_flag[0] = 0;
}
void setTimerDot(int duration){
    timer_counter[1] = duration / TIMER_CYCLE;
    timer_flag[1] = 0;
}
void timer_run(){
    for (int i = 0; i < MAX_PARAM; i++){
        if(timer_counter[i] > 0){
            timer_counter[i]--;
            if (timer_counter[i] == 0) timer_flag[i] = 1;
        }
    }
}
