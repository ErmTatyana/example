#include <iostream>
#include "calc.h"


int main()
{

    double arg_1, arg_2, rezult;
    char yourChoose;

    inputData(arg_1, arg_2, yourChoose);
    std::cout << "\n rezult = " << calculate(arg_1, arg_2, yourChoose);

    return 0;
}
