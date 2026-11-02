#include "appliance.h"
#include <iostream>

Appliance::Appliance(std::string name, int power) {
    this->name = name;
    this->power = power;
}

void Appliance::showInfo() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Power: " << power << " W" << std::endl;
}