#include "ParallelCircuit.h"
using namespace std;

void ParallelCircuit::addResistance(double resistance) {
    if (resistance != 0.0) {
        resistances.push_back(resistance);
    }
}

double ParallelCircuit::totalResistance() const {
    double inverseTotal = 0.0;
    for (double r : resistances) {
        inverseTotal += 1.0 / r;
    }
    return inverseTotal != 0.0 ? 1.0 / inverseTotal : 0.0;
}
