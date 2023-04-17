#include <iostream>
#include "math.h"

const double G = 9.8, PI = 3.1415;

int main()
{
    std::cout << "This program will calculate the period of oscillation of a pendulum of length L.\n";

    double l, T;

    std::cout << "Enter the length of the pendulum: ";
    std::cin >> l;

    T = 2 * PI * sqrt(l / G);

    std::cout << "Pendulum swing period: " << T << std::endl;

    return 0;
}