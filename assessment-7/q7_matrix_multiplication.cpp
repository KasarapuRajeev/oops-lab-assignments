#include <iostream>

class Matrix {
    int a[2][2];

public:
    void read() {
        std::cout << "Enter 4 elements:" << std::endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                std::cin >> a[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                std::cout << a[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    friend Matrix operator*(Matrix, Matrix);
};

Matrix operator*(Matrix m1, Matrix m2) {
    Matrix result;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result.a[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result.a[i][j] += m1.a[i][k] * m2.a[k][j];
            }
        }
    }

    return result;
}

int main() {
    Matrix m1, m2, m3;

    std::cout << "Enter first matrix" << std::endl;
    m1.read();

    std::cout << "Enter second matrix" << std::endl;
    m2.read();

    m3 = m1 * m2;

    std::cout << "Multiplication result:" << std::endl;
    m3.display();

    return 0;
}
