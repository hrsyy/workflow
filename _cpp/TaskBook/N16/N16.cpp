#include <iostream>
#include <cmath>

double PI = 3.1415;

int main()
{
    std::cout << "This program finds the area of a circle from the circumference of a circle.\n";

    double circumference, sqare;
    std::cout << "Enter the circumference: ";
    std::cin >> circumference;

    sqare = pow(circumference, 2) / (4 * PI);

    std::cout << "Area of a circle: " << sqare;
}