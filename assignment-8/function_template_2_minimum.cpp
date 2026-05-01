#include <iostream>

template <class T>
T minimumElement(T array[], int size) {
    T minimum = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < minimum) {
            minimum = array[i];
        }
    }

    return minimum;
}

int main() {
    int numbers[] = {45, 12, 89, 6, 30};
    float marks[] = {78.5f, 64.2f, 91.0f, 55.5f};

    std::cout << "Minimum integer: " << minimumElement(numbers, 5) << std::endl;
    std::cout << "Minimum float: " << minimumElement(marks, 4) << std::endl;

    return 0;
}
