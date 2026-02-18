#include <iostream>
using namespace std;

class Number {
public:
    int x;

    Number(int a) {
        x = a;
    }
};

Number increment(Number obj) {
    obj.x = obj.x + 1;
    return obj;
}

int main() {
    Number Rajeev(10);
    Number result = increment(Rajeev);

    cout << "Original = " << Rajeev.x << endl;
    cout << "Result = " << result.x << endl;

    return 0;
}
