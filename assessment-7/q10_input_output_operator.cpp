#include <iostream>

class Student {
    int rollNo;
    char name[30];

public:
    friend std::istream &operator>>(std::istream &, Student &);
    friend std::ostream &operator<<(std::ostream &, Student);
};

std::istream &operator>>(std::istream &input, Student &student) {
    std::cout << "Enter roll number: ";
    input >> student.rollNo;
    std::cout << "Enter name: ";
    input >> student.name;
    return input;
}

std::ostream &operator<<(std::ostream &output, Student student) {
    output << "Roll Number: " << student.rollNo << std::endl;
    output << "Name: " << student.name << std::endl;
    return output;
}

int main() {
    Student student;

    std::cin >> student;
    std::cout << "\nStudent details" << std::endl;
    std::cout << student;

    return 0;
}
