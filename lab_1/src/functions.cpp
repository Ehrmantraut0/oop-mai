#include "../include/functions.h"
#include <limits>


int count_of_ones_total(int a, int b) {
    if(a < 0 || b < a) {
        return -1;
    }
    int res_count = 0;
    for(int i = a; i <= b; i++) {
        res_count += count_of_ones(i);
    }
    return res_count;
}

int count_of_ones(int number) {
    int base = 2;
    int count = 0;
    while(number) {
        if(number % 2 == 1) {
            count++;
        }
        number /= 2;
    }
    return count;
}