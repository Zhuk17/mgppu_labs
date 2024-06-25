#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <stdexcept>
#include <cmath>

using namespace std;

class Triangle {
private:
    double a, b, c;

public:
    Triangle(double a, double b, double c) : a(a), b(b), c(c) {
        if (a <= 0 || b <= 0 || c <= 0) {
            throw invalid_argument("лина стороны прямоугольника должна быть положительным значением.");
        }
        if (a + b <= c || a + c <= b || b + c <= a) {
            throw invalid_argument("Сумма длин любых двух сторон должна быть больше длины третьей стороны.");
        }
    }

    double calculateArea() const {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

#endif // TRIANGLE_H
