#include <iostream>

class Student {
protected:
    int rollNo;

public:
    Student(int rollNo) {
        this->rollNo = rollNo;
    }

    virtual void display() = 0;
};

class Engineering : public Student {
public:
    Engineering(int rollNo) : Student(rollNo) {
    }

    void display() {
        std::cout << "Engineering student roll number: " << rollNo << std::endl;
    }
};

class Medicine : public Student {
public:
    Medicine(int rollNo) : Student(rollNo) {
    }

    void display() {
        std::cout << "Medicine student roll number: " << rollNo << std::endl;
    }
};

class Science : public Student {
public:
    Science(int rollNo) : Student(rollNo) {
    }

    void display() {
        std::cout << "Science student roll number: " << rollNo << std::endl;
    }
};

int main() {
    Engineering engineering(101);
    Medicine medicine(102);
    Science science(103);

    Student *students[3];
    students[0] = &engineering;
    students[1] = &medicine;
    students[2] = &science;

    for (int i = 0; i < 3; i++) {
        students[i]->display();
    }

    return 0;
}
