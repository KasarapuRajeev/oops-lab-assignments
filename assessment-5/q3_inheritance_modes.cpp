#include <iostream>
using namespace std;

class Base {
public:
    int publicValue;

protected:
    int protectedValue;

private:
    int privateValue;

public:
    Base() {
        publicValue = 10;
        protectedValue = 20;
        privateValue = 30;
    }

    int getPrivateValue() {
        return privateValue;
    }
};

class PublicDerived : public Base {
public:
    void show() {
        cout << "Public inheritance" << endl;
        cout << "Public value: " << publicValue << endl;
        cout << "Protected value: " << protectedValue << endl;
    }
};

class ProtectedDerived : protected Base {
public:
    void show() {
        cout << "\nProtected inheritance" << endl;
        cout << "Public member becomes protected: " << publicValue << endl;
        cout << "Protected member remains protected: " << protectedValue << endl;
    }
};

class PrivateDerived : private Base {
public:
    void show() {
        cout << "\nPrivate inheritance" << endl;
        cout << "Public member becomes private: " << publicValue << endl;
        cout << "Protected member becomes private: " << protectedValue << endl;
    }
};

int main() {
    PublicDerived d1;
    ProtectedDerived d2;
    PrivateDerived d3;

    d1.show();
    cout << "Public value accessed using object: " << d1.publicValue << endl;

    d2.show();
    d3.show();

    cout << "\nPrivate members of base class cannot be accessed directly." << endl;
    cout << "They can be accessed through a public member function: "
         << d1.getPrivateValue() << endl;

    return 0;
}
