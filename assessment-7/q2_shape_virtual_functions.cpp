#include <iostream>

class Shape {
public:
    virtual void area() = 0;
    virtual void display() = 0;
};

class Circle : public Shape {
    float radius;

public:
    Circle(float radius) {
        this->radius = radius;
    }

    void area() {
        std::cout << "Area: " << 3.14f * radius * radius << std::endl;
    }

    void display() {
        std::cout << "Shape: Circle" << std::endl;
        std::cout << "Radius: " << radius << std::endl;
    }
};

class Rectangle : public Shape {
    float length;
    float breadth;

public:
    Rectangle(float length, float breadth) {
        this->length = length;
        this->breadth = breadth;
    }

    void area() {
        std::cout << "Area: " << length * breadth << std::endl;
    }

    void display() {
        std::cout << "Shape: Rectangle" << std::endl;
        std::cout << "Length: " << length << std::endl;
        std::cout << "Breadth: " << breadth << std::endl;
    }
};

class Triangle : public Shape {
    float base;
    float height;

public:
    Triangle(float base, float height) {
        this->base = base;
        this->height = height;
    }

    void area() {
        std::cout << "Area: " << 0.5f * base * height << std::endl;
    }

    void display() {
        std::cout << "Shape: Triangle" << std::endl;
        std::cout << "Base: " << base << std::endl;
        std::cout << "Height: " << height << std::endl;
    }
};

int main() {
    Shape *shape;
    Circle circle(4);
    Rectangle rectangle(6, 5);
    Triangle triangle(8, 3);

    shape = &circle;
    shape->display();
    shape->area();

    std::cout << std::endl;

    shape = &rectangle;
    shape->display();
    shape->area();

    std::cout << std::endl;

    shape = &triangle;
    shape->display();
    shape->area();

    return 0;
}
