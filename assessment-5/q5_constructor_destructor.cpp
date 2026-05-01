#include <iostream>
using namespace std;

class Parent {
public:
    Parent() {
        cout << "Parent class constructor called" << endl;
    }

    ~Parent() {
        cout << "Parent class destructor called" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child class constructor called" << endl;
    }

    ~Child() {
        cout << "Child class destructor called" << endl;
    }
};

int main() {
    cout << "Creating child object" << endl;
    Child obj;

    cout << "Program is ending" << endl;

    return 0;
}
