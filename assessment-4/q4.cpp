#include <iostream>
using namespace std;

int main() {
    int *Rajeev = new int;
    *Rajeev = 10;

    cout << *Rajeev << endl;

    delete Rajeev;
    return 0;
}
