#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("data.txt");
    outFile << "Rajeev line one\n";
    outFile << "Rajeev line two\n";
    outFile << "Rajeev line three\n";
    outFile.close();

    std::ifstream inFile("data.txt");
    char ch;

    if (!inFile) {
        std::cout << "Unable to open data.txt" << std::endl;
        return 1;
    }

    inFile.seekg(10);

    std::cout << "Current position: " << inFile.tellg() << std::endl;
    std::cout << "Remaining content:" << std::endl;

    while (inFile.get(ch)) {
        std::cout << ch;
    }

    inFile.close();

    return 0;
}
