#include <iostream>

int main()
{
    std::cout << "This program finds the resistance of the parallel connection.\n";

    double R1, R2, R3, R;

    std::cout << "Enter first resistance: ";
    std::cin >> R1;
    std::cout << "Enter second resistance: ";
    std::cin >> R2;
    std::cout << "Enter third resistance: ";
    std::cin >> R3;

    R = 1 / ((1 / R1) + (1 / R2) + (1 / R3));

    std::cout << "Resistance of the parallel connection: " << R << std::endl;

    return 0;
}