#include <iostream>

class Test {
    float value;

public:
    Test(float value) {
        this->value = value;
    }

    void display() {
        std::cout << "Value in object: " << value << std::endl;
    }
};

int main() {
    float number = 45.75f;
    Test test = number;

    test.display();

    return 0;
}
