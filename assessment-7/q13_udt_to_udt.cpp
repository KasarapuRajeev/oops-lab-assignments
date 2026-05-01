#include <iostream>
#include <cmath>

class Cartesian;

class Polar {
    float radius;
    float angle;

public:
    Polar(float radius = 0, float angle = 0) {
        this->radius = radius;
        this->angle = angle;
    }

    float getRadius() {
        return radius;
    }

    float getAngle() {
        return angle;
    }
};

class Cartesian {
    float x;
    float y;

public:
    Cartesian() {
        x = 0;
        y = 0;
    }

    Cartesian(Polar p) {
        float radian = p.getAngle() * 3.14159f / 180;
        x = p.getRadius() * std::cos(radian);
        y = p.getRadius() * std::sin(radian);
    }

    void show() {
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    }
};

int main() {
    Polar p(10, 5);
    Cartesian c;

    c = p;
    c.show();

    return 0;
}
