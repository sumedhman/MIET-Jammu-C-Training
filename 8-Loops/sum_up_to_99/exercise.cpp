#include "exercise.h"

unsigned int sum_up_to_99(){
    unsigned int sum{};

    for(unsigned int i{}; i < 100; ++i){
        sum+= i;
    }

     return sum;
}

