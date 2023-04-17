#include <iostream>
#include "math.h"

int main()
{
    std::cout << "This program finds the area of a triangle.\n";

    double triangleSide, area;

    std::cout << "Enter the length of the side of the triangle: ";
    std::cin >> triangleSide;

    area = (sqrt(3) / 4) * pow(triangleSide, 2);

    std::cout << "Area: " << area << std::endl;

    return 0;
}