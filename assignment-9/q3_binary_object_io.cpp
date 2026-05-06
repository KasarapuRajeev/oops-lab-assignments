#include <iostream>
#include <fstream>
#include <cstdio>

class RajeevStudent {
    int rollNo;
    char name[30];
    float marks;

public:
    void setData() {
        rollNo = 101;
        marks = 88.5f;
        std::snprintf(name, sizeof(name), "Rajeev");
    }

    void display() {
        std::cout << "Roll Number: " << rollNo << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main() {
    RajeevStudent student, storedStudent;

    student.setData();

    std::ofstream outFile("student.dat", std::ios::binary);
    if (!outFile) {
        std::cout << "Unable to create binary file" << std::endl;
        return 1;
    }

    outFile.write(reinterpret_cast<char *>(&student), sizeof(student));
    outFile.close();

    std::ifstream inFile("student.dat", std::ios::binary);
    if (!inFile) {
        std::cout << "Unable to read binary file" << std::endl;
        return 1;
    }

    inFile.read(reinterpret_cast<char *>(&storedStudent), sizeof(storedStudent));
    inFile.close();

    std::cout << "Object read from binary file" << std::endl;
    storedStudent.display();

    return 0;
}
