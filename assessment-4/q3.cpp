#include <iostream>
using namespace std;

class RajeevTest {
public:
    RajeevTest() {
        cout << "Constructor called" << endl;
    }

    ~RajeevTest() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    RajeevTest obj;
    return 0;
}
