#include <iostream>

class Complex {
    int real;
    int imaginary;

public:
    Complex(int real = 0, int imaginary = 0) {
        this->real = real;
        this->imaginary = imaginary;
    }

    Complex(const Complex &complexNumber) {
        this->real = complexNumber.real;
        this->imaginary = complexNumber.imaginary;
    }

    void display() const {
        std::cout << this->real << " + " << this->imaginary << "i"
                  << std::endl;
    }

    friend void sum(Complex, Complex);
};

void sum(Complex first, Complex second) {
    Complex result;

    result.real = first.real + second.real;
    result.imaginary = first.imaginary + second.imaginary;

    std::cout << "Sum of complex numbers: ";
    result.display();
}

int main() {
    Complex first(4, 5);
    Complex second(6, 7);
    Complex copied(first);

    std::cout << "First complex number: ";
    first.display();

    std::cout << "Second complex number: ";
    second.display();

    std::cout << "Copied complex number: ";
    copied.display();

    sum(first, second);

    return 0;
}
