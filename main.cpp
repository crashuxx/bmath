#include <stdio.h>
#include "src/Number.h"
#include "src/AddNumber.h"

int main() {
    char v1 = (char) 0xAF;
    Number *number1 = new Number(&v1, 1);

    char v2 = (char) 0xAA;
    Number *number2 = new Number(&v2, 1);

    number1->printBinary();
    number2->printBinary();

    AddNumber addNumber;

    Number *pNumber = addNumber.execute(*number1, *number2);

    pNumber->printBinary();

    return 0;
}