#include <iostream>

int main()
{
    std::cout << "This program finds SUM, DIFFERENCE and PRODUCT of two numbers.\n";

    double firstNumber, secondNumber;

    std::cout << "Enter first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter second numer: ";
    std::cin >> secondNumber;

    std::cout << "Sum: " << firstNumber + secondNumber << std::endl;
    std::cout << "Difference: " << firstNumber - secondNumber << std::endl;
    std::cout << "Product: " << firstNumber * secondNumber << std::endl;

    return 0;
}