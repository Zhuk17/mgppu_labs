#ifndef PENCIL_H
#define PENCIL_H

#include "CommonView.h"
#include "InterLineColor.h"
#include <iostream>
#include <string>
#include <vector>
#include <numeric>


class Pencil : public CommonView, public InterLineColor {
private:
    string LineColor;
    string Hardness;
    float PencilLength;

public:
    Pencil(float price, string producer, string lineColor, string hardness, float pencilLength);
    string getLineColor() override;
    void SetLineColor(string color) override;
};

#endif // PENCIL_H
