#include <iostream>

int main()
{
    std::cout << "The program finds the volume of the mixture\n";

    double
        firstWaterVolume, secondWaterVolume,
        firstWaterTemperature, secondWaterTemperature,
        mixtureVolume, mixtureTemperature;

    std::cout << "Enter the volume of the first liquid: ";
    std::cin >> firstWaterVolume;
    std::cout << "Enter the volume of the second liquid: ";
    std::cin >> secondWaterVolume;
    std::cout << "Enter the temperature of the first liquid: ";
    std::cin >> firstWaterTemperature;
    std::cout << "Enter the temperature of the second liquid: ";
    std::cin >> secondWaterTemperature;

    mixtureVolume = firstWaterVolume + secondWaterVolume;
    mixtureTemperature = (firstWaterVolume * firstWaterTemperature + secondWaterVolume * secondWaterTemperature) / mixtureVolume;

    std::cout << "Mixture volume: " << mixtureVolume << std::endl;
    std::cout << "Mixture temperature: " << mixtureTemperature << std::endl;

    return 0;
}