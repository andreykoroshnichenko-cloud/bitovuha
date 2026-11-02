#include "washingmachine.h"
#include <iostream>

WashingMachine::WashingMachine(std::string name, int power, int capacity)
    : Appliance(name, power) {
    this->capacity = capacity;
}

void WashingMachine::showCapacity() {
    std::cout << "Capacity: " << capacity << " kg" << std::endl;
}