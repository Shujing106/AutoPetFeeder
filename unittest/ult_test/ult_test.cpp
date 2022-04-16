#include "ult.h"

int main(void)
{
    float dis;

    if(wiringPiSetup() == -1){ //when initialize wiring failed,print message to screen
        printf("setup wiringPi failed !\n");
        return -1;
    }

    ult::ultraInit();

    while(1){
        dis = ult::disMeasure();
        printf("Distance = %0.2f cm\n",dis);
        delay(1000);

    }

    return 0;
}
