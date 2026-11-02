#ifndef REFRIGERATOR_H
#define REFRIGERATOR_H

#include "appliance.h"

class Refrigerator : public Appliance {
private:
    int temperature;

public:
    Refrigerator(std::string name, int power, int temperature);

    void showTemperature();
};

#endif