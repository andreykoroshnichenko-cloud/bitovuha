#include "refrigerator.h"
#include <iostream>

Refrigerator::Refrigerator(std::string name, int power, int temperature)
    : Appliance(name, power) {
    this->temperature = temperature;
}

void Refrigerator::showTemperature() {
    std::cout << "Temperature: " << temperature << " C" << std::endl;
}