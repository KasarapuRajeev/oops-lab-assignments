#include <iostream>

template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;
    float x = 5.5f, y = 9.8f;

    std::cout << "Before swapping integers: " << a << " " << b << std::endl;
    swapValues(a, b);
    std::cout << "After swapping integers: " << a << " " << b << std::endl;

    std::cout << "\nBefore swapping floats: " << x << " " << y << std::endl;
    swapValues(x, y);
    std::cout << "After swapping floats: " << x << " " << y << std::endl;

    return 0;
}
