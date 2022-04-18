
#ifndef REALTIMEEMBEDDED_WEIGHT_H
#define REALTIMEEMBEDDED_WEIGHT_H

# include <stdio.h>
# include <wiringPi.h>
#define SCK 4
#define SDA 5

class weight{
public:

    struct hx711_args{
        int EN;
        int calibration;
        int coefficient;
        int weight;
        unsigned long value;
    };
   static void set_pin(struct hx711_args *value);
   static void init_pin();
   static void start(struct hx711_args *value);
   static int setup(struct hx711_args *value);
   static void loop(struct weight::hx711_args *value);
};

#endif //REALTIMEEMBEDDED_WEIGHT_H
