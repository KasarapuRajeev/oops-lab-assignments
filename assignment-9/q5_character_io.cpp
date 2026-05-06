#include <iostream>
#include <fstream>
#include <cstring>

int main() {
    char text[100];
    char ch;
    int length;

    std::cout << "Enter a string: ";
    std::cin.getline(text, 100);

    length = std::strlen(text);

    std::ofstream RajeevFile("characters.txt");
    if (!RajeevFile) {
        std::cout << "Unable to create file" << std::endl;
        return 1;
    }

    for (int i = 0; i < length; i++) {
        RajeevFile.put(text[i]);
    }
    RajeevFile.close();

    std::ifstream inputFile("characters.txt");
    if (!inputFile) {
        std::cout << "Unable to read file" << std::endl;
        return 1;
    }

    std::cout << "Length of string: " << length << std::endl;
    std::cout << "Characters fetched from file: ";

    while (inputFile.get(ch)) {
        std::cout << ch;
    }

    inputFile.close();
    std::cout << std::endl;

    return 0;
}
