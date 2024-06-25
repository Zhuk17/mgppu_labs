#include "BallPen.h"

class BallPen : public CommonView, public InterLineColor {
    string LineColor;
    bool ReplaceableRods;

public:
    BallPen(float price, string producer, string lineColor, bool replaceableRods)
        : CommonView(price, producer), LineColor(lineColor), ReplaceableRods(replaceableRods) {}

    string getLineColor() override { return LineColor; }
    void SetLineColor(string color) override { LineColor = color; }
};