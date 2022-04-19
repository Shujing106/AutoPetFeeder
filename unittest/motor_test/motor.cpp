#include "motor.h"

void motor::setStep(int a, int b, int c, int d)
{
    digitalWrite(IN1, a);
    digitalWrite(IN2, b);
    digitalWrite(IN3, c);
    digitalWrite(IN4, d);
}

void motor::forward(int t, int steps)
{
    int i;
    for(i = 0; i < steps; i++){
        setStep(1, 0, 0, 0);
        delay(t);
        setStep(0, 1, 0, 0);
        delay(t);
        setStep(0, 0, 1, 0);
        delay(t);
        setStep(0, 0, 0, 1);
        delay(t);
    }
}

void motor::stop()
{
    setStep(0, 0, 0, 0);
}

void motor::backward(int t, int steps)
{
    int i;

    for(i = 0; i < steps; i++){
        setStep(0, 0, 0, 1);
        delay(t);
        setStep(0, 0, 1, 0);
        delay(t);
        setStep(0, 1, 0, 0);
        delay(t);
        setStep(1, 0, 0, 0);
        delay(t);
    }
}
