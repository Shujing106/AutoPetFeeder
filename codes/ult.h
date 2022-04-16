#ifndef REALTIMEEMBEDDED_ULT_H
#define REALTIMEEMBEDDED_ULT_H

#include <wiringPi.h>
#include <stdio.h>
#include <sys/time.h>
#include <iostream>
#define  Trig    21
#define  Echo    22

class ult{
public:


    static void ultraInit();
    static float disMeasure();
};

#endif //REALTIMEEMBEDDED_ULT_H
