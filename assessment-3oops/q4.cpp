#include <iostream>
using namespace std;

class RajeevData {
    int secret;
public:
    RajeevData() {
        secret = 100;
    }
    friend class FriendClass;
};

class FriendClass {
public:
    void showSecret(RajeevData obj) {
        cout << "Secret Value = " << obj.secret << endl;
    }
};

int main() {
    RajeevData data;
    FriendClass fr;

    fr.showSecret(data);

    return 0;
}
