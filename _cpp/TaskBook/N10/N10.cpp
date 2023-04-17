#include <iostream>
#include "math.h"

const double G = 9.8;

int main()
{
    std::cout << "This program determines the time a stone falls on the ground from a height h.\n";

    double fallTime, height;

    std::cout << "Enter height: ";
    std::cin >> height;

    fallTime = sqrt((2 * height) / G);

    std::cout << "Fall time: " << fallTime << std::endl;

    return 0;
}