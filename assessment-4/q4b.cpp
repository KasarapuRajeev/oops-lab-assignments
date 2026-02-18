#include <iostream>
using namespace std;

int main() {
    float *Rajeev = new float(5.5);

    cout << *Rajeev << endl;

    delete Rajeev;
    return 0;
}
