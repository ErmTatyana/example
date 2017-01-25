#include <iostream>

int main()
{

    double x1, x2, y;
    char a;

    std::cout << "\n ------- CALCULATOR -------\n";

    std::cout << "choose the action: \n";
    std::cout << "+\n";
    std::cout << "-\n";
    std::cout << "*\n";
    std::cout << "/\n";

    std::cout << "---> \n";
    std::cin >> a;

    std::cout << " \n enter x1 = ";
    std::cin >> x1;
    std::cout << " \n enter x2 = ";
    std::cin >> x2;

    switch(a)
    {
    case '+':
    {    y = x1 + x2;    }break;

    case '-':
    {    y = x1 - x2;    }break;

    case '*':
    {    y = x1 * x2;    }break;

    case '/':
    {   if(x2 == 0)
        { std::cout << " \n error! impossible to divide by zero! ";
            return 1;
        }
        else
        {   y = x1 / x2;    }
    }break;

    default :
    {
        std::cout << "error! we can do only +,-,*,/\n";
        return 1;
    }
    }

    std::cout << "\n rezult = " << y;

    return 0;
}
