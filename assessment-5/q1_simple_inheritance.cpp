#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;

    void readStudent() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void showStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Marks : public Student {
public:
    int marks;

    void readMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void showMarks() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    Marks m1;

    cout << "Base class object details" << endl;
    s1.readStudent();

    cout << "\nDerived class object details" << endl;
    m1.readStudent();
    m1.readMarks();

    cout << "\nBase class object output" << endl;
    s1.showStudent();

    cout << "\nDerived class object output" << endl;
    m1.showStudent();
    m1.showMarks();

    return 0;
}
