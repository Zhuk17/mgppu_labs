#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <stdexcept>
using namespace std;

class Rectangle {
private:
    double a, b;

public:
    Rectangle(double a, double b) : a(a), b(b) {
        if (a <= 0 || b <= 0) {
            throw invalid_argument("ина стороны прямоугольника должна быть положительным значением.");
        }
    }

    double calculateArea() const {
        return a * b;
    }
};

#endif // RECTANGLE_H
