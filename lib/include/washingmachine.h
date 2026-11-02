#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include "appliance.h"

class WashingMachine : public Appliance {
private:
    int capacity;

public:
    WashingMachine(std::string name, int power, int capacity);

    void showCapacity();
};

#endif