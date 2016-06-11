#ifndef BMATH_SUBNUMBER_H
#define BMATH_SUBNUMBER_H

#include "NumberOperation.h"

class SubNumber: public NumberOperation {
public:
    Number *execute(Number &a, Number &b);
};


#endif //BMATH_SUBNUMBER_H
