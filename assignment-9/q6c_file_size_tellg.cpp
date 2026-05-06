#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("size.txt");
    outFile << "Rajeev file size example";
    outFile.close();

    std::ifstream inFile("size.txt", std::ios::binary);

    if (!inFile) {
        std::cout << "Unable to open size.txt" << std::endl;
        return 1;
    }

    inFile.seekg(0, std::ios::end);
    std::streampos size = inFile.tellg();

    std::cout << "File size is: " << size << " bytes" << std::endl;

    inFile.close();

    return 0;
}
