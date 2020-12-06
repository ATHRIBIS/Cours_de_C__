//
// Created by Aymeric Schaeffer on 22/11/2020.
//

#include "convertSeconds.h"

int convertSeconds(int h, int m, int s) {
    int total = 0;
    total = h*60*60;
    total += m*60;
    total += s;
    return total;
}