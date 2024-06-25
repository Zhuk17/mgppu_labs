#ifndef BATTERY_H
#define BATTERY_H

#include <string>

class Battery {
public:
    enum Type { AA, AAA };  

private:
    Type batteryType;
    double capacity;         
    std::string brand;      
    double cost;             

public:
    Battery(Type type, double cap, std::string bnd, double cst)
        : batteryType(type), capacity(cap), brand(bnd), cost(cst) {}

    Type getType() const { return batteryType; }
    double getCapacity() const { return capacity; }
    std::string getBrand() const { return brand; }
    double getCost() const { return cost; }
};

#endif