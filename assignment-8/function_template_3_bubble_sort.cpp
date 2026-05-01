#include <iostream>

template <class T>
void bubbleSort(T array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

template <class T>
void displayArray(T array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numbers[] = {50, 20, 10, 40, 30};
    char letters[] = {'d', 'a', 'e', 'b', 'c'};

    bubbleSort(numbers, 5);
    bubbleSort(letters, 5);

    std::cout << "Sorted integer array: ";
    displayArray(numbers, 5);

    std::cout << "Sorted character array: ";
    displayArray(letters, 5);

    return 0;
}
