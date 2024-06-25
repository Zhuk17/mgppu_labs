#include <iostream>
#include "SeriesCircuit.h"
#include "ParallelCircuit.h"

using namespace std;

int main() {
    SeriesCircuit series;
    series.addResistance(100);
    series.addResistance(200);
    series.addResistance(300);
    
    cout << "Общее последовательное сопротивление: " << series.totalResistance() << " омм" << endl;

    ParallelCircuit parallel;
    parallel.addResistance(100);
    parallel.addResistance(200);
    parallel.addResistance(300);

    cout << "Общее параллельное сопротивление: " << parallel.totalResistance() << " омм" << endl;

    return 0;
}
