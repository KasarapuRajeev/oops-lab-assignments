#include <iostream>

class Array {
    int values[5];

public:
    Array() {
        for (int i = 0; i < 5; i++) {
            values[i] = (i + 1) * 10;
        }
    }

    int operator[](int index) {
        if (index < 0 || index >= 5) {
            std::cout << "Array index out of bounds" << std::endl;
            return -1;
        }

        return values[index];
    }
};

int main() {
    Array a;

    std::cout << "a[2] = " << a[2] << std::endl;
    std::cout << "a[7] = " << a[7] << std::endl;

    return 0;
}
