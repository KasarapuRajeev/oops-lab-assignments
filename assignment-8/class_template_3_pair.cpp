#include <iostream>

template <class T1, class T2>
class Pair {
    T1 first;
    T2 second;

public:
    Pair(T1 first, T2 second) {
        this->first = first;
        this->second = second;
    }

    void display() {
        std::cout << "First value: " << first << std::endl;
        std::cout << "Second value: " << second << std::endl;
    }
};

int main() {
    Pair<int, float> pair1(10, 25.5f);
    Pair<char, int> pair2('A', 65);

    pair1.display();
    std::cout << std::endl;
    pair2.display();

    return 0;
}
