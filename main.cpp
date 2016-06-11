#include <stdio.h>
#include "src/Number.h"
#include "src/AddNumber.h"
#include "src/SubNumber.h"

int main() {
    char v1 = (char) 0b0;
    Number *number1 = new Number(&v1, 1);

    char v2 = (char) 0b1;
    Number *number2 = new Number(&v2, 1);

    number1->printBinary();
    number2->printBinary();

    AddNumber addNumber;
    SubNumber subNumber;

    Number *pNumberAdd = addNumber.execute(*number1, *number2);
    pNumberAdd->printBinary();
    delete pNumberAdd;

    Number *pNumberSub = subNumber.execute(*number1, *number2);
    pNumberSub->printBinary();
    delete pNumberSub;

    return 0;
}