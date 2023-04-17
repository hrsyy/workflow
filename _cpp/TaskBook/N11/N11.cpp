#include <iostream>
#include "math.h"


const double PI = 3.14;


double factorial(double number)
{
    if (number == 0)
    {
        return 0;
    }
    else if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}


int main()
{
    std::cout << "The program calculates the equations a, b.\n";

    double x, y, z, a, b;

    std::cout << "Enter the X value: ";
    std::cin >> x;
    std::cout << "Enter the Y value: ";
    std::cin >> y;
    std::cout << "Enter the Z value: ";
    std::cin >> z;

    for (int i = 0; i < 7; i++)
    {
        switch (i)
        {
        case 0:
            std::cout << "N11a\n";

            a = (sqrt(abs(x - 1)) - (pow(abs(y), 1 / 3))) / (1 + (pow(x, 2) / 2) + (pow(y, 2) / 4));
            b = x * (atan(z) + exp(-x - 3));

            break;
        case 1:
            std::cout << "N11b\n";

            a = (3 + exp(y - 1)) / (1 + pow(x, 2) * abs(y - tan(z)));
            b = 1 + abs(y - x) + (pow((y - x), 2) / 2) + (pow(abs(y - x), 2) / 3);

            break;
        case 2:
            std::cout << "N11c\n";

            a = (1 + y) * (x + (y / (pow(x, 2) + 4))) / (exp(-x - 2) + (1 / pow(x, 2) + 4));
            b = (1 + cos(y - 2)) / ((pow(x, 4) / 2) + (2 * sin(z) * cos(z)));

            break;
        case 3:
            std::cout << "N11d\n";

            a = (3 + exp(y - 1)) / (1 + pow(x, 2) * abs(y - tan(z)));
            b = 1 + ((1 + cos(2 * z / 2)) / (1 - cos(2 * z / 2)));

            break;
        case 4:
            std::cout << "N11e\n";

            a = (2 * cos(x - PI / 6)) / (1 / 2 + (1 - cos(2 * y)) / 2);
            b = 1 + (pow(z, 2) / 3 + (pow(z, 2) / 5));

            break;
        case 5:
            std::cout << "N11f\n";

            a = 1 + ((1 - (cos(2 * (x + y)))) / 2) / (2 + abs(x - ((2 * x) / (1 + pow(2, x) * pow(2, y)))));
            b = (1 + (cos(2 * atan(1 / z)))) / 2;

            break;
        case 6:
            std::cout << "N11g\n";

            a = log10(abs((y - sqrt(abs(x)) * (x - (y / z + (pow(x, 2) / 4))))));
            b = x - (pow(x, 2) / factorial(3)) + (pow(x, 5) / factorial(5));

            break;
        default:
            break;
        }

        std::cout << "A: " << a << std::endl;
        std::cout << "B: " << b << std::endl;
    }

    return 0;
}