#include "Marker.h"

class Marker : public CommonView, public InterLineColor {
    string LineColor;
    float LineWidth;

public:
    Marker(float price, string producer, string lineColor, float lineWidth)
        : CommonView(price, producer), LineColor(lineColor), LineWidth(lineWidth) {}

    string getLineColor() override { return LineColor; }
    void SetLineColor(string color) override { LineColor = color; }
};
