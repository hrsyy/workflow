#include <iostream>
#include "math.h"

int main()
{
    std::cout << "This program finds the result of the equation: |x| - |y| / 1 + |xy|.\n";

    double firstNumber, secondNumber, result;

    std::cout << "Enter first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter second numer: ";
    std::cin >> secondNumber;

    result = (fabs(firstNumber) - fabs(secondNumber)) / (1 + (firstNumber * secondNumber));

    std::cout << "Result: " << result << std::endl;

    return 0;
}