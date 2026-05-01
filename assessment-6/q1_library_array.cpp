#include <iostream>
#include <string>

class Book {
public:
    std::string title;
    std::string author;
    std::string ISBN;

    void setBook(const std::string &title, const std::string &author,
                 const std::string &ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    void displayBook() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "ISBN: " << ISBN << std::endl;
    }
};

class Library {
    Book books[10];
    int count;

public:
    Library();
    bool addNewBook(const std::string &title, const std::string &author,
                    const std::string &ISBN);
    bool removeBooks(const std::string &ISBN);
    void displayDetails() const;
};

Library::Library() {
    count = 0;
}

bool Library::addNewBook(const std::string &title, const std::string &author,
                         const std::string &ISBN) {
    if (count >= 10) {
        return false;
    }

    books[count].setBook(title, author, ISBN);
    count++;
    return true;
}

bool Library::removeBooks(const std::string &ISBN) {
    for (int i = 0; i < count; i++) {
        if (books[i].ISBN == ISBN) {
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }

    return false;
}

void Library::displayDetails() const {
    if (count == 0) {
        std::cout << "No books in the library." << std::endl;
        return;
    }

    for (int i = 0; i < count; i++) {
        std::cout << "\nBook " << i + 1 << std::endl;
        books[i].displayBook();
    }
}

int main() {
    Library library;

    library.addNewBook("C++ Programming", "Balagurusamy", "ISBN101");
    library.addNewBook("Object Oriented Programming", "Robert Lafore", "ISBN102");
    library.addNewBook("Let Us C++", "Yashavant Kanetkar", "ISBN103");
    library.addNewBook("Data Structures", "Seymour Lipschutz", "ISBN104");
    library.addNewBook("Computer Networks", "Tanenbaum", "ISBN105");

    std::cout << "Books after adding:" << std::endl;
    library.displayDetails();

    if (library.removeBooks("ISBN103")) {
        std::cout << "\nBook removed successfully." << std::endl;
    } else {
        std::cout << "\nBook not found." << std::endl;
    }

    std::cout << "\nBooks after removing:" << std::endl;
    library.displayDetails();

    return 0;
}
