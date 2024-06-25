#include <iostream>
#include <vector>
#include <numeric>
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

int main() {
    vector<Triangle> triangles = {
        Triangle(3, 4, 5),
        Triangle(5, 5, 8),
        Triangle(6, 7, 10)
        
    };

    vector<Rectangle> rectangles = {
        Rectangle(5, 7),
        Rectangle(3, 6)
        
    };

    double totalTriangleArea = accumulate(triangles.begin(), triangles.end(), 0.0,
        [](double sum, const Triangle& t) { return sum + t.calculateArea(); });
    cout << "Cуммарная площадь треугольников: " << totalTriangleArea << endl;

    double totalRectangleArea = accumulate(rectangles.begin(), rectangles.end(), 0.0,
        [](double sum, const Rectangle& r) { return sum + r.calculateArea(); });
    cout << "Суммарная площадь прямоугольников: " << totalRectangleArea << endl;

    return 0;
}
