#ifndef BMATH_NUMBER_H
#define BMATH_NUMBER_H


#include <cstddef>

class Number {
public:
    Number(char* v, size_t l);

    Number(size_t l);

    bool isHigh(size_t pos);
    void setBit(char bit, size_t pos);

    void printBinary();

    size_t getLength();
private:
    char* value;
    size_t length;
};


#endif //BMATH_NUMBER_H
