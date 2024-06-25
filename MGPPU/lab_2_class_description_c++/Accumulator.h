#ifndef ACCUMULATOR_H
#define ACCUMULATOR_H

#include <string>

class Accumulator {
public:
    enum Type { AA, AAA };  

private:
    Type accumulatorType;
    double capacity;         
    double chargeTime;       
    double cost;             

public:
    Accumulator(Type type, double cap, double charge, double cst)
        : accumulatorType(type), capacity(cap), chargeTime(charge), cost(cst) {}

    Type getType() const { return accumulatorType; }
    double getCapacity() const { return capacity; }
    double getChargeTime() const { return chargeTime; }
    double getCost() const { return cost; }
};

#endif