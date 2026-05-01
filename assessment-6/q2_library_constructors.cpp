#include <iostream>
#include <string>

class Book {
    std::string title;
    std::string author;
    std::string ISBN;

public:
    Book() {
        this->title = "Not given";
        this->author = "Not given";
        this->ISBN = "Not given";
    }

    Book(const std::string &title, const std::string &author,
         const std::string &ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(const Book &book) {
        this->title = book.title;
        this->author = book.author;
        this->ISBN = book.ISBN;
    }

    std::string getISBN() const {
        return this->ISBN;
    }

    void displayBook() const {
        std::cout << "Title: " << this->title << std::endl;
        std::cout << "Author: " << this->author << std::endl;
        std::cout << "ISBN: " << this->ISBN << std::endl;
    }
};

class Library {
    Book books[10];
    int count;

public:
    Library() {
        this->count = 0;
    }

    bool addNewBook(const std::string &title, const std::string &author,
                    const std::string &ISBN) {
        if (this->count >= 10) {
            return false;
        }

        this->books[this->count] = Book(title, author, ISBN);
        this->count++;
        return true;
    }

    bool addNewBook(const Book &book) {
        if (this->count >= 10) {
            return false;
        }

        this->books[this->count] = Book(book);
        this->count++;
        return true;
    }

    bool removeBooks(const std::string &ISBN) {
        for (int i = 0; i < this->count; i++) {
            if (this->books[i].getISBN() == ISBN) {
                for (int j = i; j < this->count - 1; j++) {
                    this->books[j] = this->books[j + 1];
                }
                this->count--;
                return true;
            }
        }

        return false;
    }

    void displayDetails() const {
        for (int i = 0; i < this->count; i++) {
            std::cout << "\nBook " << i + 1 << std::endl;
            this->books[i].displayBook();
        }
    }
};

int main() {
    Library library;

    Book initializerBooks[3] = {
        Book("C++ Basics", "Balagurusamy", "ISBN201"),
        Book("OOP Concepts", "Robert Lafore", "ISBN202"),
        Book("Programming Practice", "Kanetkar", "ISBN203")
    };

    Book *dynamicBook = new Book("Database Systems", "Korth", "ISBN204");
    Book copiedBook(*dynamicBook);

    library.addNewBook("Computer Networks", "Tanenbaum", "ISBN205");
    library.addNewBook(initializerBooks[1]);
    library.addNewBook(initializerBooks[2]);
    library.addNewBook(initializerBooks[0]);
    library.addNewBook(copiedBook);

    std::cout << "Books in library:" << std::endl;
    library.displayDetails();

    library.removeBooks("ISBN202");

    std::cout << "\nBooks after removing ISBN202:" << std::endl;
    library.displayDetails();

    delete dynamicBook;

    return 0;
}
