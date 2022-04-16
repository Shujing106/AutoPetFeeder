#include "motor.h"

int main()
{
    if (wiringPiSetup() < 0) {
        printf("Setup wiringPi failed!\n");
        return -1;
    }

    /* set pins mode as output */
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    while (1) {
        printf("forward...\n");
        motor::forward(2, 100);

        printf("stop...\n");
        motor::stop();

        printf("backward...\n");
        motor::backward(2, 100);

        printf("stop...\n");
        motor::stop();
        delay(2000);
    }
}
