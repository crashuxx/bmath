#include "AddNumber.h"
#include <memory.h>

Number *AddNumber::execute(Number &a, Number &b) {
    size_t length = (a.getLength() > b.getLength() ? a.getLength() : b.getLength()) + 1;
    Number *number = new Number(length);

    size_t overflow = 0;
    size_t bitLength = length * 8;
    for (size_t l = 0; l < bitLength; l++) {
        char localValue = 0;

        if (a.isHigh(l)) localValue++;
        if (b.isHigh(l)) localValue++;

        if (overflow > 0) {
            overflow--;
            localValue++;
        }

        if (localValue == 3) {
            overflow++;
            localValue = 1;
        }
        if (localValue == 2) {
            overflow++;
            localValue = 0;
        }

        number->setBit(localValue, l);
    }

    return number;
}

