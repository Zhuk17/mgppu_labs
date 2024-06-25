#include "Accounting.h"

class Accounting {
    vector<CommonView*> stationeries;

public:
    void AddCommonView(CommonView* commonView) {
        stationeries.push_back(commonView);
    }

    float CalculateTotalCost() {
        return accumulate(stationeries.begin(), stationeries.end(), 0.0f,
            [](float sum, CommonView* item) { return sum + item->Price; });
    }

    int CalculateTotalCount() {
        return stationeries.size();
    }
};
