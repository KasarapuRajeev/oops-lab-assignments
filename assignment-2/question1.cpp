#include <iostream>
using namespace std;

struct Student
{
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;

    void addDetails()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Hostel: ";
        cin >> hostel;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateDetails()
    {
        cout << "Update Degree: ";
        cin >> degree;
    }

    void updateCGPA()
    {
        cout << "Update CGPA: ";
        cin >> cgpa;
    }

    void updateHostel()
    {
        cout << "Update Hostel: ";
        cin >> hostel;
    }

    void displayDetails()
    {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s;
    s.addDetails();
    s.displayDetails();
    return 0;
}
