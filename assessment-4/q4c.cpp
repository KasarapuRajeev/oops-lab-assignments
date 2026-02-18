#include <iostream>
using namespace std;

int main() {
    int *Rajeev = new int[3];

    Rajeev[0] = 1;
    Rajeev[1] = 2;
    Rajeev[2] = 3;

    for (int i = 0; i < 3; i++)
        cout << Rajeev[i] << " ";

    delete[] Rajeev;
    return 0;
}
