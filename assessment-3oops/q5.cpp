#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    void setData(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle RajeevRect[3];

    RajeevRect[0].setData(10, 5);
    RajeevRect[1].setData(6, 4);
    RajeevRect[2].setData(8, 3);

    for (int i = 0; i < 3; i++) {
        cout << "Area of Rectangle " << i+1 << " = "
             << RajeevRect[i].area() << endl;
    }

    return 0;
}
