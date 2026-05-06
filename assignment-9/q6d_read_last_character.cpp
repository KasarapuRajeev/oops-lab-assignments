#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("last.txt");
    outFile << "File created by Rajeev";
    outFile.close();

    std::ifstream inFile("last.txt", std::ios::binary);
    char ch;

    if (!inFile) {
        std::cout << "Unable to open last.txt" << std::endl;
        return 1;
    }

    inFile.seekg(-1, std::ios::end);
    inFile.get(ch);

    std::cout << "Last character is: " << ch << std::endl;

    inFile.close();

    return 0;
}
