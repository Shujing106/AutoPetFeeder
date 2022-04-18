
#ifndef REALTIMEEMBEDDED_MOTOR_H
#define REALTIMEEMBEDDED_MOTOR_H

#include <wiringPi.h>
#include <cstdio>

class motor{

public:
#define IN1  0    // pin11
#define IN2  1    // pin12
#define IN3  2    // pin13
#define IN4  3    // pin15

    static void setStep(int a, int b, int c, int d);
    static void forward(int t, int steps);
    static void stop();
    static void backward(int t, int steps);
};

#endif //REALTIMEEMBEDDED_MOTOR_H