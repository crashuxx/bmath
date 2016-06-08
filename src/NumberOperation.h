#ifndef BMATH_NUMBEROPERATION_H
#define BMATH_NUMBEROPERATION_H

#include "Number.h"

class NumberOperation {
public:
    NumberOperation() {}

    virtual Number *execute(Number &a, Number &b) = 0;
};


#endif //BMATH_NUMBEROPERATION_H
