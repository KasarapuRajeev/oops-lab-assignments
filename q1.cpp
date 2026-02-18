#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    void setMarks(int marks) {
        this->marks = marks;  
    }

    void showMarks() {
        cout << "Marks = " << marks << endl;
    }
};

int main() {
    Student Rajeev;        
    Student *ptr;          

    ptr = &Rajeev;

    Rajeev.setMarks(85);  
    Rajeev.showMarks();

    ptr->setMarks(90);    
    ptr->showMarks();

    return 0;
}
