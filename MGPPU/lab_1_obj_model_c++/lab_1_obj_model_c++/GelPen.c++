#include "GelPen.h"

class GelPen : public CommonView, public InterLineColor {
    string LineColor;
    float GelMass;

public:
    GelPen(float price, string producer, string lineColor, float gelMass)
        : CommonView(price, producer), LineColor(lineColor), GelMass(gelMass) {}

    string getLineColor() override { return LineColor; }
    void SetLineColor(string color) override { LineColor = color; }
};