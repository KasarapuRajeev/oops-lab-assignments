#include <iostream>
#include <fstream>
#include <cctype>

void countAlphabets() {
    std::ifstream RajeevFile("NOTES.TXT");
    char ch;
    int count = 0;

    if (!RajeevFile) {
        std::cout << "Unable to open NOTES.TXT" << std::endl;
        return;
    }

    while (RajeevFile.get(ch)) {
        if (std::isalpha(static_cast<unsigned char>(ch))) {
            count++;
        }
    }

    RajeevFile.close();

    std::cout << "Number of alphabets in NOTES.TXT: " << count << std::endl;
}

int main() {
    std::ofstream sampleFile("NOTES.TXT");
    sampleFile << "Rajeev is practicing file management in C++.";
    sampleFile.close();

    countAlphabets();

    return 0;
}
