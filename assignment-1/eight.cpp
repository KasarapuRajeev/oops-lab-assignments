#include <iostream>
using namespace std;

int main() {
    int d;
    cin >> d;

    if(d <= 5)
        cout << "Fine = 50 paise";
    else if(d <= 10)
        cout << "Fine = 1 rupee";
    else if(d <= 30)
        cout << "Fine = 5 rupees";
    else
        cout << "Membership Cancelled";

    return 0;
}
