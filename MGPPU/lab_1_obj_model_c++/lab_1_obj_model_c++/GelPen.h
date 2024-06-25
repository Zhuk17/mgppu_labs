#ifndef GELPEN_H
#define GELPEN_H

#include "CommonView.h"
#include "InterLineColor.h"
#include <iostream>
#include <string>
#include <vector>
#include <numeric>


class GelPen : public CommonView, public InterLineColor {
    string LineColor;
    float GelMass;

public:
    GelPen(float price, string producer, string lineColor, float gelMass);
    string getLineColor() override;
    void SetLineColor(string color) override;
};

#endif