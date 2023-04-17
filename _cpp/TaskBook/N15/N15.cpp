#include <iostream>
#include "math.h"

int main()
{
    std::cout << "This program finds the leg and the radius of the circumcircle through the hypotenuse and leg, for a right-angled triangle.\n";

    double knownLeg, unknownLeg, hippotenuse, radius;

    std::cout << "Enter the length of the known leg: ";
    std::cin >> knownLeg;
    std::cout << "Enter the length of the hippotenuse: ";
    std::cin >> hippotenuse;

    unknownLeg = sqrt(pow(hippotenuse, 2) - pow(knownLeg, 2));
    radius = (knownLeg + unknownLeg - hippotenuse) / 2;

    std::cout << "Length of an unknown leg: " << unknownLeg << std::endl;
    std::cout << "Inscribed circle radius: " << radius << std::endl;

    return 0;
}