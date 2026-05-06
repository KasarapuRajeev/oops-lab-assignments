#include <iostream>
#include <fstream>

int main() {
    std::ofstream RajeevFile("alphabets.txt");

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        RajeevFile.put(ch);
    }

    RajeevFile.close();

    std::ifstream inputFile("alphabets.txt");
    char ch;

    inputFile.seekg(9);
    inputFile.get(ch);

    std::cout << "10th character is: " << ch << std::endl;

    inputFile.close();

    return 0;
}
