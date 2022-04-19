#include "weight.h"

void weight::set_pin(weight::hx711_args *value) {
    value->EN = 1;
    value->coefficient = 415;
}

void weight::init_pin() {
    pinMode(SCK, OUTPUT);
    pinMode(SDA, INPUT);
    pullUpDnControl(SDA, PUD_UP);
}

void weight::start(weight::hx711_args *value) {
    int i;
    digitalWrite(SCK, LOW);
    while (digitalRead(SCK));
    value->value = 0;
    while (digitalRead(SDA));
    delay(100);

    for (i = 0; i < 24; i++) {
        digitalWrite(SCK, HIGH);
        while (0 == digitalRead(SCK))delay(1000);
        value->value = value->value * 2;
        digitalWrite(SCK, LOW);
        while (digitalRead(SCK));
        if (digitalRead(SDA))
            value->value = value->value + 1;
    }
    digitalWrite(SCK, HIGH);
    digitalWrite(SCK, LOW);
    if ((value->EN == 1) && (value->value < 25000)) {
        value->EN = 0;
        value->calibration = value->value;
    } else {
        i = (value->value - value->calibration + 50) / value->coefficient;
    }
    if (i < 5000)value->weight = i;
    printf("Weight: %d g\n", value->weight);
}


int weight::setup(weight::hx711_args *value) {
    if (wiringPiSetup() == -1)return 1;
    set_pin(value);
    init_pin();
    return 0;
}


void weight::loop(struct weight::hx711_args *value){
    while(1)
        weight::start(value);
}


