#include <iostream>

class FirstNumber;
class SecondNumber;

class FirstNumber {
    int value;

public:
    FirstNumber(int value) {
        this->value = value;
    }

    friend int addObjects(FirstNumber, SecondNumber);
};

class SecondNumber {
    int value;

public:
    SecondNumber(int value) {
        this->value = value;
    }

    friend int addObjects(FirstNumber, SecondNumber);
};

int addObjects(FirstNumber first, SecondNumber second) {
    return first.value + second.value;
}

int main() {
    FirstNumber first(25);
    SecondNumber second(35);

    std::cout << "Sum of two class objects: "
              << addObjects(first, second) << std::endl;

    return 0;
}
