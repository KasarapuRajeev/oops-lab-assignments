#include <iostream>
using namespace std;

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int RajeevNum = 5;

    cout << "Cube = " << cube(RajeevNum) << endl;

    return 0;
}
