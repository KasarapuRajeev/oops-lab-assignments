#include <iostream>

class Polygon {
protected:
    int width;
    int height;

public:
    void set_value(int width, int height) {
        this->width = width;
        this->height = height;
    }

    virtual int calculate_area() {
        return 0;
    }
};

class Rectangle : public Polygon {
public:
    int calculate_area() {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    int calculate_area() {
        return (width * height) / 2;
    }
};

int main() {
    Rectangle rectangle;
    Triangle triangle;
    Polygon *polygon;

    polygon = &rectangle;
    polygon->set_value(10, 5);
    std::cout << "Area of rectangle: " << polygon->calculate_area() << std::endl;

    polygon = &triangle;
    polygon->set_value(10, 5);
    std::cout << "Area of triangle: " << polygon->calculate_area() << std::endl;

    return 0;
}
