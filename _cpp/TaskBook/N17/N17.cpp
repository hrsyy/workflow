#include <iostream>
#include <cmath>

int main()
{
    std::cout << "This program finds the area of a ring whose inner radius is 20 and whose outer radius is a given number r (r>20).";
    
    double OuterRadius, Area, PI = 3.1415, innerRadius = 20;
    
    std::cout << "Enter an outer radius greater than 20: ";
    std::cin >> OuterRadius;

    Area = PI * (pow(OuterRadius, 2) - pow(innerRadius, 2));

    std::cout << "Area of a ring: " << Area;

    return 0;
}
