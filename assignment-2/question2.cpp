#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float cgpa;

    void secretFunction()
    {
        cout << "Private Function Called\n";
    }

public:
    void addDetails()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter CGPA: ";
        cin >> cgpa;
        secretFunction();  
    }

    void displayDetails()
    {
        cout << name << " " << rollNo << " " << cgpa << endl;
    }
};

int main()
{
    Student s;
    s.addDetails();
    s.displayDetails();
    return 0;
}
