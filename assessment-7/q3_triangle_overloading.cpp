#include <iostream>
#include <cmath>

class TriangleArea {
public:
    float area(float base, float height) {
        return 0.5f * base * height;
    }

    float area(float side) {
        return (1.732f / 4) * side * side;
    }

    float area(float a, float b, float c) {
        float s = (a + b + c) / 2;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main() {
    TriangleArea triangle;

    std::cout << "Area of right angle triangle: "
              << triangle.area(6.0f, 4.0f) << std::endl;
    std::cout << "Area of equilateral triangle: "
              << triangle.area(5.0f) << std::endl;
    std::cout << "Area of isosceles triangle: "
              << triangle.area(5.0f, 5.0f, 6.0f) << std::endl;

    return 0;
}
