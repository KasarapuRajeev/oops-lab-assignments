#include <iostream>
#include <cstring>

class STRING {
    char text[100];

public:
    STRING(const char text[] = "") {
        std::strcpy(this->text, text);
    }

    int operator==(STRING s) {
        return std::strcmp(text, s.text) == 0;
    }

    STRING operator+(STRING s) {
        STRING temp;
        std::strcpy(temp.text, text);
        std::strcat(temp.text, s.text);
        return temp;
    }

    void display() {
        std::cout << text << std::endl;
    }
};

int main() {
    STRING s1("Hello ");
    STRING s2("World");
    STRING s3("Hello ");
    STRING s4;

    s4 = s1 + s2;

    std::cout << "Concatenated string: ";
    s4.display();

    if (s1 == s3) {
        std::cout << "s1 and s3 are equal" << std::endl;
    } else {
        std::cout << "s1 and s3 are not equal" << std::endl;
    }

    return 0;
}
