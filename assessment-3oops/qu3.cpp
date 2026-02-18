#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    A(int a) {
        x = a;
    }
    friend int add(A, B);
};

class B {
    int y;
public:
    B(int b) {
        y = b;
    }
    friend int add(A, B);
};

int add(A obj1, B obj2) {
    return obj1.x + obj2.y;
}

int main() {
    A Rajeev1(15);
    B Rajeev2(25);

    cout << "Sum = " << add(Rajeev1, Rajeev2) << endl;

    return 0;
}
