#include <iostream>
using namespace std;

class ClassA;
class ClassB;

class ClassA {
    int a;
public:
    ClassA(int x) {
        a = x;
    }
    friend void swapData(ClassA &, ClassB &);
};

class ClassB {
    int b;
public:
    ClassB(int y) {
        b = y;
    }
    friend void swapData(ClassA &, ClassB &);
};

void swapData(ClassA &obj1, ClassB &obj2) {
    int temp;
    temp = obj1.a;
    obj1.a = obj2.b;
    obj2.b = temp;
}

int main() {
    ClassA RajeevA(10);
    ClassB RajeevB(20);

    swapData(RajeevA, RajeevB);

    cout << "Swap Successful" << endl;
    return 0;
}
