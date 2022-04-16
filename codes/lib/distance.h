#ifndef DISTANCE_H
#define DISTANCE_H

#define  Trig    21
#define  Echo    22
#include <wiringPi.h>
#include <stdio.h>
#include <sys/time.h>

class distance
{
private:
    /* data */
public:
    distance();
    ~distance();
    float disMeasure(void);
};

#endif