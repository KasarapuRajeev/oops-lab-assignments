#include <iostream>

class Test {
    float value;

public:
    Test(float value) {
        this->value = value;
    }

    operator float() {
        return value;
    }
};

int main() {
    Test test(72.5f);
    float number;

    number = test;

    std::cout << "Float value: " << number << std::endl;

    return 0;
}
