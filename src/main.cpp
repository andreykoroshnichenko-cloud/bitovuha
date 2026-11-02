#include <iostream>
#include "refrigerator.h"
#include "washingmachine.h"
#include "microwave.h"

int main() {

    Refrigerator fridge("Samsung", 300, 4);
    WashingMachine washer("LG", 2000, 7);
    Microwave microwave("Bosch", 1200, 20);

    fridge.showInfo();
    fridge.showTemperature();

    std::cout << std::endl;

    washer.showInfo();
    washer.showCapacity();

    std::cout << std::endl;

    microwave.showInfo();
    microwave.showVolume();

    return 0;
}