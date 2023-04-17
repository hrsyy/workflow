#include <iostream>
#include "math.h"

int main()
{
    std::cout << "This program finds the volume of a cube and the area of its lateral surface.\n";

    double length, area, volume;

    std::cout << "Enter the length of the edge of the cube: ";
    std::cin >> length;

    volume = pow(length, 3);
    area = 4 * pow(length, 2);

    std::cout << "Volume: " << volume << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}