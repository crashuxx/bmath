#include "Number.h"
#include <memory.h>
#include <stdio.h>

Number::Number(size_t l) {
    length = l;
    value = new char[length];
    memset(value, 0, length);
}

Number::Number(char *v, size_t l) {
    value = new char[l];
    length = l;
    memcpy(value, v, l);
}

bool Number::isHigh(size_t pos) {
    size_t byte = pos / 8;

    if (byte >= length)
        return false;

    int bit = (int) (pos % 8);

    return ((value[byte] >> bit) & 1) == 1;
}

void Number::setBit(char bit, size_t pos) {
    size_t bytePos = pos / 8;
    int bitPos = (int) (pos % 8);

    if (bit == 1) {
        char i = ((char) 1 << bitPos);
        value[bytePos] = value[bytePos] | i;
    } else {
        unsigned char i = ((unsigned char) 1 << bitPos);
        unsigned char i1 = ~((unsigned char)value[bytePos]);
        unsigned char i2 = ~(i1 | i);
        value[bytePos] = i2;
    }
}

void Number::printBinary() {
    for (size_t l = length; l > 0; l--) {
        char byte = value[l - 1];
        for (int i = 7; i >= 0; i--) {
            printf("%d", (byte >> i & 1) == 1);
        }
    }
    printf("\n");
}

size_t Number::getLength() {
    return length;
}











