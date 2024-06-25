#ifndef INTERLINECOLOR_H
#define INTERLINECOLOR_H

#include <string>

using namespace std;

class InterLineColor {
public:
    virtual ~InterLineColor() {}
    virtual string getLineColor() = 0;
    virtual void SetLineColor(string lineColor) = 0;
};

#endif // INTERLINECOLOR_H
