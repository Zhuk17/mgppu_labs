#ifndef MARKER_H
#define MARKER_H

#include "CommonView.h"
#include "InterLineColor.h"
#include <iostream>
#include <string>
#include <vector>
#include <numeric>


class Marker : public CommonView, public InterLineColor {
private:
    string LineColor;
    float LineWidth;

public:
    Marker(float price, string producer, string lineColor, float lineWidth);
    string getLineColor() override;
    void SetLineColor(string color) override;
};

#endif // MARKER_H
