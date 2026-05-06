#include <iostream>
#include <fstream>

int main() {
    std::fstream RajeevFile("hello.txt", std::ios::in | std::ios::out | std::ios::trunc);
    const char text[] = "HelloWorld";

    if (!RajeevFile) {
        std::cout << "Unable to create hello.txt" << std::endl;
        return 1;
    }

    for (int i = 0; text[i] != '\0'; i++) {
        RajeevFile.put(text[i]);
        std::cout << "Put pointer after writing " << text[i]
                  << " is at: " << RajeevFile.tellp() << std::endl;
    }

    RajeevFile.seekp(5);
    RajeevFile << "C++  ";

    RajeevFile.seekg(0);

    std::cout << "Content after replacing World with C++: ";
    char ch;
    while (RajeevFile.get(ch)) {
        std::cout << ch;
    }

    RajeevFile.close();
    std::cout << std::endl;

    return 0;
}
