#include <iostream>
#include "math.h"

int main()
{
    std::cout << "The program finds the hippotinose and the area of a triangle\n";

    double firstLeg, secondLeg, hypotenuse, area;

    std::cout << "Enter first leg: ";
    std::cin >> firstLeg;
    std::cout << "Ener second leg: ";
    std::cin >> secondLeg;

    hypotenuse = sqrt(pow(firstLeg, 2) + pow(secondLeg, 2));
    area = (firstLeg * secondLeg) / 2;

    std::cout << "Hyporenuse: " << hypotenuse << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}