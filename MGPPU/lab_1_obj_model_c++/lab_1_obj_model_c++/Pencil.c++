#include "Pencil.h"

class Pencil : public CommonView, public InterLineColor {
    string LineColor;
    string Hardness;
    float PencilLength;

public:
    Pencil(float price, string producer, string lineColor, string hardness, float pencilLength)
        : CommonView(price, producer), LineColor(lineColor), Hardness(hardness), PencilLength(pencilLength) {}

    string getLineColor() override { return LineColor; }
    void SetLineColor(string color) override { LineColor = color; }
};

