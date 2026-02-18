#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    ~Rectangle() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Rectangle Rajeev[3] = {
        Rectangle(),
        Rectangle(5),
        Rectangle(6, 4)
    };

    for (int i = 0; i < 3; i++) {
        cout << Rajeev[i].area() << endl;
    }

    return 0;
}
