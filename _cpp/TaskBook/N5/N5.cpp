#include <iostream>
#include "math.h"

int main()
{
    std::cout << "This program finds the arithmetic mean and geometric mean of two numbers.\n";

    double firstValue, secondValue, geometricMean, arithmeticMean;

    std::cout << "Enter real, positive number: ";
    std::cin >> firstValue;
    std::cout << "Enter real, positive number: ";
    std::cin >> secondValue;

    arithmeticMean = (firstValue + secondValue) / 2;
    geometricMean = sqrt(abs(firstValue) * abs(secondValue));

    std::cout << "Arithmetic mean: " << arithmeticMean << std::endl;
    std::cout << "Geometric mean: " << geometricMean << std::endl;

    return 0;
}