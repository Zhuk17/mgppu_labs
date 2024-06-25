#ifndef ACCOUNTING_H
#define ACCOUNTING_H

#include <vector>
#include "CommonView.h"
#include <iostream>
#include <string>
#include <vector>
#include <numeric>


using namespace std;

class Accounting {
private:
    vector<CommonView*> stationeries;

public:
    void AddCommonView(CommonView* commonView);
    float CalculateTotalCost();
    int CalculateTotalCount();
};

#endif // ACCOUNTING_H

