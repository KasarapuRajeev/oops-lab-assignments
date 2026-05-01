#include <iostream>

template <class T>
void process(T value) {
    std::cout << "Single parameter: " << value << std::endl;
}

template <class T>
void process(T first, T second) {
    std::cout << "Two parameters of same type: "
              << first << " " << second << std::endl;
}

template <class T1, class T2>
void process(T1 first, T2 second) {
    std::cout << "Two parameters of different types: "
              << first << " " << second << std::endl;
}

int main() {
    process(25);
    process(10, 20);
    process(12, 45.75f);

    return 0;
}
