#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <string>

class Appliance {
private:
    std::string name;
    int power;

public:
    Appliance(std::string name, int power);

    void showInfo();
};

#endif