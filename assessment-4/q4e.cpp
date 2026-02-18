#include <iostream>
using namespace std;

class Sample {
public:
    void show() {
        cout << "Dynamic Object" << endl;
    }
};

int main() {
    Sample *Rajeev = new Sample;
    Rajeev->show();

    delete Rajeev;
    return 0;
}
