#include <iostream>

template <class T>
class Array {
    T data[5];
    int size;

public:
    Array(int size) {
        this->size = size;
    }

    void input() {
        std::cout << "Enter " << size << " elements:" << std::endl;
        for (int i = 0; i < size; i++) {
            std::cin >> data[i];
        }
    }

    void display() {
        std::cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Array<int> numbers(5);

    numbers.input();
    numbers.display();

    return 0;
}
