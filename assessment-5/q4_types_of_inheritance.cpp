#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "Person class" << endl;
    }
};

class Student : public Person {
public:
    void showStudent() {
        cout << "Student class" << endl;
    }
};

class Sports {
public:
    void showSports() {
        cout << "Sports class" << endl;
    }
};

class Result : public Student, public Sports {
public:
    void showResult() {
        cout << "Result class" << endl;
    }
};

class Teacher : public Person {
public:
    void showTeacher() {
        cout << "Teacher class" << endl;
    }
};

class Principal : public Teacher {
public:
    void showPrincipal() {
        cout << "Principal class" << endl;
    }
};

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    cout << "Single inheritance" << endl;
    Student s1;
    s1.showPerson();
    s1.showStudent();

    cout << "\nMultiple inheritance" << endl;
    Result r1;
    r1.showStudent();
    r1.showSports();
    r1.showResult();

    cout << "\nHierarchical inheritance" << endl;
    Teacher t1;
    Student s2;
    t1.showPerson();
    t1.showTeacher();
    s2.showStudent();

    cout << "\nMultilevel inheritance" << endl;
    Principal p1;
    p1.showPerson();
    p1.showTeacher();
    p1.showPrincipal();

    cout << "\nHybrid inheritance" << endl;
    D d1;
    d1.showA();
    d1.showB();
    d1.showC();
    d1.showD();

    return 0;
}
