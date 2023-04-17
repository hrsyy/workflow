#include <iostream>
#include "math.h"

double const PI = 3.141592653;

int main()
{
    std::cout << "This program determines the perimeter of a regular n - gon, circumscribed about a circle of radius r\n";

    double numberOfCorners, radiusOfTheCircumscribedCircle, perimeter;

    std::cout << "Enter the number of corners: ";
    std::cin >> numberOfCorners;
    std::cout << "Enter the radius of the circumscribed circle: ";
    std::cin >> radiusOfTheCircumscribedCircle;

    perimeter = numberOfCorners * (2 * radiusOfTheCircumscribedCircle * sin(180 / PI));

    std::cout << "Perimeter of a regular n - gon: " << perimeter << std::endl;

    return 0;
}