#include <iostream>
#include "calc.h"

void inputData(double &a, double &b, char &c)
{
    std::cout << "\n\n ------- CALCULATOR -------\n\n";
    std::cout << "choose the action: \n";
    std::cout << "+\n";
    std::cout << "-\n";
    std::cout << "*\n";
    std::cout << "/\n";

    std::cout << "---> \n";
    std::cin >> c;

    std::cout << " \n enter x1 = ";
    std::cin >> a;
    std::cout << " \n enter x2 = ";
    std::cin >> b;
}

double calculate(double a, double b, char c)
{
    double y;
    switch(c)
    {
    case '+':
    {    y = a + b;    }break;

    case '-':
    {    y = a - b;    }break;

    case '*':
    {    y = a * b;    }break;

    case '/':
    {   if(b == 0)
        { std::cout << " \n error! impossible to divide by zero! ";
            return 1;
        }
        else
        {   y = a / b;    }
    }break;

    default :
    {
        std::cout << "error! we can do only +,-,*,/\n";
        return 1;
    }
    }

    return y;
}
