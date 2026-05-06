#include <iostream>
#include <fstream>

int main() {
    std::ofstream RajeevFile("NUM.TXT");

    if (!RajeevFile) {
        std::cout << "Unable to create NUM.TXT" << std::endl;
        return 1;
    }

    for (int i = 1; i <= 200; i++) {
        RajeevFile << i << std::endl;
    }

    RajeevFile.close();

    std::cout << "Numbers from 1 to 200 are written in NUM.TXT" << std::endl;

    return 0;
}
