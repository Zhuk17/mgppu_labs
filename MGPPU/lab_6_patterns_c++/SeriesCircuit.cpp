#include "SeriesCircuit.h"

void SeriesCircuit::addResistance(double resistance) {
    resistances.push_back(resistance);
}

double SeriesCircuit::totalResistance() const {
    double total = 0.0;
    for (double r : resistances) {
        total += r;
    }
    return total;
}
