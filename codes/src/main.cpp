#include <stdio.h>
#include <wiringPi.h>
#include <pthread.h>
#include "../lib/motor.h"
#include "../lib/weight.h"
#include "../lib/distance.h"
#include <unistd.h>

#define DISTANCE 50
#define WEIGHT_LOW  880
#define WEIGHT_HIGH 920


distance * dis;
weight   *wei;
motor    *mot;

//current time
int hour=4;
int add_times=0;
//time thread
pthread_t time_thread;

//add food
void add_food(void){
    int weii=wei->loop();

    printf("Weight：%d\r\n",weii);
    if(weii<WEIGHT_LOW){
        printf("Adding some food\r\n");

        mot->forward(2,100);
        while (wei->loop()<WEIGHT_HIGH)
        {
            printf("Keep adding food\r\n");
            delay(100);
        }
        printf("Finish adding\r\n");
        mot->backward(2,100);
        add_times++;
        //refresh the time
        hour=0;

    }else{
        printf("There's food left \r\n");
    }

}

void time_thread_run(void *ptr)
{
    //one hour
    //int time_ctl=60*60*1;
    // one minute
    int time_ctl=60*1;
    while(1){
        sleep(time_ctl);
        hour++;
        printf("Time%d\r\n",hour);
    }
}


int main(){
    wei=new weight();
    dis=new distance();
    mot=new motor();

    int ret_thread1;
    ret_thread1 = pthread_create(&time_thread,NULL,(void* (*)(void*))&time_thread_run,NULL);
    if(ret_thread1 == 0)
        printf("create thread  true\n");
    else
        printf("create thread  false\n");
    static int distance_times=0;
    float diss=0;
    while(1){
        diss=100;
        diss=dis->disMeasure();
        printf("%f \r\n",diss);
        if(diss<DISTANCE){
            //Detection of proximity
            delay(200);
            diss=dis->disMeasure();
            if(diss<DISTANCE){
                if(hour>=4&&add_times<=3){
                    //Meet the conditions
                    add_food();
                }
                if(add_times>3){
                    printf("It has been fed three times\r\n");
                }
                if(hour<4){
                    printf("Not the time\r\n");
                }
            }
        }

        sleep(1);
    }

}