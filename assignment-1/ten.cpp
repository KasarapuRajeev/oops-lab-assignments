#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n%2==0)
        cout << "Even";
    else
        cout << "Odd";

    // if i use conditional operater
    cout << endl << (n%2==0 ? "Even" : "Odd");
    return 0;
}

