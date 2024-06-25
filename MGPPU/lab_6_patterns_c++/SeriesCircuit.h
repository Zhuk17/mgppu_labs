#ifndef SERIESCIRCUIT_H
#define SERIESCIRCUIT_H
#include <vector>
using namespace std;

class SeriesCircuit {
private:
    vector<double> resistances;

public:
    void addResistance(double resistance);
    double totalResistance() const;
};

#endif // SERIESCIRCUIT_H
