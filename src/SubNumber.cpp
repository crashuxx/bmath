#include "SubNumber.h"

Number *SubNumber::execute(Number &a, Number &b) {
    size_t length = (a.getLength() > b.getLength() ? a.getLength() : b.getLength()) + 1;
    Number *number = new Number(length);

    size_t loan = 0;
    size_t bitLength = length * 8;

    for (size_t l = 0; l < bitLength; l++) {
        short localValue = (short) (a.isHigh(l) ? 1 : 0);

        if (loan > 0) {
            localValue--;
            loan--;
        }

        if (b.isHigh(l)) {
            localValue--;
        }

        if (localValue < 0) {
            loan++;
            localValue += 2;
        }

        number->setBit((char)localValue, l);
    }

    return number;
}

