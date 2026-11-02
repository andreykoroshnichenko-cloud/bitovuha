#include "microwave.h"
#include <iostream>

Microwave::Microwave(std::string name, int power, int volume)
    : Appliance(name, power) {
    this->volume = volume;
}

void Microwave::showVolume() {
    std::cout << "Volume: " << volume << " L" << std::endl;
}