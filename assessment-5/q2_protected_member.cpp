#include <iostream>
using namespace std;

class Employee {
protected:
    int employeeId;

public:
    void setEmployeeId(int id) {
        employeeId = id;
    }
};

class Salary : public Employee {
public:
    int basicSalary;

    void readDetails() {
        cout << "Enter employee id: ";
        cin >> employeeId;
        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    void showDetails() {
        cout << "Employee Id: " << employeeId << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }
};

int main() {
    Salary s1;

    s1.readDetails();

    cout << "\nEmployee details" << endl;
    s1.showDetails();

    return 0;
}
