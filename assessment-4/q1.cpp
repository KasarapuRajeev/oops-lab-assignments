#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    Rectangle(int x) {
        length = x;
        breadth = x;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle Rajeev1;
    Rectangle Rajeev2(5);
    Rectangle Rajeev3(6, 4);

    cout << Rajeev1.area() << endl;
    cout << Rajeev2.area() << endl;
    cout << Rajeev3.area() << endl;

    return 0;
}
