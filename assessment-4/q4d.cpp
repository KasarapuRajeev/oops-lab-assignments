#include <iostream>
using namespace std;

int main() {
    float *Rajeev = new float[2];

    Rajeev[0] = 1.1;
    Rajeev[1] = 2.2;

    cout << Rajeev[0] << " " << Rajeev[1] << endl;

    delete[] Rajeev;
    return 0;
}
