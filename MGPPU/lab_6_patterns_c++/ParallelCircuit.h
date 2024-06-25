#ifndef PARALLELCIRCUIT_H
#define PARALLELCIRCUIT_H

#include <vector>

using namespace std;

class ParallelCircuit {
private:
    vector<double> resistances;

public:
    void addResistance(double resistance);
    double totalResistance() const;
};

#endif 
