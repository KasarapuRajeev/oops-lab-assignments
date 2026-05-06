#include <iostream>
#include <fstream>

int main() {
    std::fstream RajeevFile("numbers.txt", std::ios::in | std::ios::out | std::ios::trunc);

    if (!RajeevFile) {
        std::cout << "Unable to create numbers.txt" << std::endl;
        return 1;
    }

    RajeevFile << "123456789";
    RajeevFile.seekp(4);
    RajeevFile << "0";

    RajeevFile.seekg(0);

    std::cout << "File content after overwriting 5th number: ";
    char ch;
    while (RajeevFile.get(ch)) {
        std::cout << ch;
    }

    RajeevFile.close();
    std::cout << std::endl;

    return 0;
}
