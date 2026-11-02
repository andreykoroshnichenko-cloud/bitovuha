#ifndef MICROWAVE_H
#define MICROWAVE_H

#include "appliance.h"

class Microwave : public Appliance {
private:
    int volume;

public:
    Microwave(std::string name, int power, int volume);

    void showVolume();
};

#endif