#include "CommonView.h"

class CommonView {
public:
    float Price;
    string Producer;

protected:
    CommonView(float price, string producer)
        : Price(price), Producer(producer) {}
};
