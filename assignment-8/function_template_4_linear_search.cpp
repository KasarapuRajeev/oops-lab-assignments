#include <iostream>

template <class T>
int linearSearch(T array[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            return i;
        }
    }

    return -1;
}

int main() {
    int numbers[] = {11, 22, 33, 44, 55};
    char letters[] = {'a', 'e', 'i', 'o', 'u'};

    int numberPosition = linearSearch(numbers, 5, 33);
    int letterPosition = linearSearch(letters, 5, 'o');

    std::cout << "33 found at index: " << numberPosition << std::endl;
    std::cout << "o found at index: " << letterPosition << std::endl;

    return 0;
}
