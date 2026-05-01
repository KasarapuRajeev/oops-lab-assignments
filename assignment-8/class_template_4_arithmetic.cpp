#include <iostream>

template <class T>
class Arithmetic {
    T first;
    T second;

public:
    Arithmetic(T first, T second) {
        this->first = first;
        this->second = second;
    }

    void displayOperations() {
        std::cout << "Addition: " << first + second << std::endl;
        std::cout << "Subtraction: " << first - second << std::endl;
        std::cout << "Multiplication: " << first * second << std::endl;

        if (second != 0) {
            std::cout << "Division: " << first / second << std::endl;
        } else {
            std::cout << "Division is not possible" << std::endl;
        }
    }
};

int main() {
    Arithmetic<int> intOperation(20, 5);
    Arithmetic<float> floatOperation(7.5f, 2.5f);

    std::cout << "Integer operations" << std::endl;
    intOperation.displayOperations();

    std::cout << "\nFloat operations" << std::endl;
    floatOperation.displayOperations();

    return 0;
}
