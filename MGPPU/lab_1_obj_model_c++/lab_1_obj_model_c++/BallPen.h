#ifndef BALLPEN_H
#define BALLPEN_H

#include "CommonView.h"
#include "InterLineColor.h"
#include <iostream>
#include <string>
#include <vector>
#include <numeric>


class BallPen : public CommonView, public InterLineColor {
private:
    string LineColor;
    bool ReplaceableRods;

public:
    BallPen(float price, string producer, string lineColor, bool replaceableRods);
    string getLineColor() override;
    void SetLineColor(string color) override;
};

#endif // BALLPEN_H
