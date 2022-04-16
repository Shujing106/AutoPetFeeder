//
// Created by Lenovo on 2022/4/16.
//

#include "weight.h"

int main(void){
    struct weight::hx711_args value;
    if(0 == weight::setup(&value))
        weight::loop(&value);
    return 0;
}
