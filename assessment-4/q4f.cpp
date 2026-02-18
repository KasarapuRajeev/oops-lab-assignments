#include <iostream>
using namespace std;

class Rectangle {
    int l, b;

public:
    Rectangle(int x = 1, int y = 1) {
        l = x;
        b = y;
    }

    int area() {
        return l * b;
    }
};

int main() {
    Rectangle *Rajeev = new Rectangle[2] {
        Rectangle(4,5),
        Rectangle(3,6)
    };

    for (int i = 0; i < 2; i++)
        cout << Rajeev[i].area() << endl;

    delete[] Rajeev;
    return 0;
}
