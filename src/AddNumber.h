#ifndef BMATH_ADDNUMBER_H
#define BMATH_ADDNUMBER_H


#include "Number.h"
#include "NumberOperation.h"

class AddNumber : public NumberOperation {
public:
    Number *execute(Number &a, Number &b);
};


#endif //BMATH_ADDNUMBER_H
