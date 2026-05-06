#include <iostream>
#include <fstream>

int main() {
    std::ofstream sourceFile("source.txt");
    sourceFile << "This file is created by Rajeev.\n";
    sourceFile << "The content will be copied to another file.\n";
    sourceFile.close();

    std::ifstream input("source.txt");
    std::ofstream output("copy.txt");
    char ch;

    if (!input || !output) {
        std::cout << "File opening failed" << std::endl;
        return 1;
    }

    while (input.get(ch)) {
        output.put(ch);
    }

    input.close();
    output.close();

    std::cout << "Content copied from source.txt to copy.txt" << std::endl;

    return 0;
}
