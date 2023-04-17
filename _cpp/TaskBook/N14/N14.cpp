#include <iostream>
#include <math.h>

double G = 6.61 * pow(10, -11);

int main()
{
    std::cout << "This program calculates the force of attraction between two bodies\n";

    double FirstBodyMass, SecondBodyMass, DistanceBetweenBodies, GravityBetweenBodies;

    std::cout << "Enter the mass of the first body: ";
    std::cin >> FirstBodyMass;
    std::cout << "enter the mass of the second body: ";
    std::cin >> SecondBodyMass;

    std::cout << "Enter the distance between bodies: ";
    std::cin >> DistanceBetweenBodies;

    GravityBetweenBodies = G * FirstBodyMass * SecondBodyMass / pow(DistanceBetweenBodies, 2);

    std::cout << "Gravity between bodies: " << GravityBetweenBodies << std::endl;

    return 0;
}