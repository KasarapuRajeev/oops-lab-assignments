#include <iostream>
#include <cstdarg>

class Sum {
public:
    int operator()(int count, ...) {
        int total = 0;
        va_list numbers;

        va_start(numbers, count);
        for (int i = 0; i < count; i++) {
            total += va_arg(numbers, int);
        }
        va_end(numbers);

        return total;
    }
};

int main() {
    Sum add;

    std::cout << "Sum of 3 numbers: " << add(3, 10, 20, 30) << std::endl;
    std::cout << "Sum of 5 numbers: " << add(5, 1, 2, 3, 4, 5) << std::endl;

    return 0;
}
