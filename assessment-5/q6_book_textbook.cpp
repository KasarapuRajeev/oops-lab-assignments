#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title;
    string author;
    float price;

public:
    void readBook() {
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter author name: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> price;
    }

    void showBook() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

class Textbook : public Book {
    string subject;

public:
    void readTextbook() {
        readBook();
        cout << "Enter subject: ";
        cin >> subject;
    }

    void showTextbook() {
        showBook();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Book b1;
    Textbook t1;

    cout << "Enter general book details" << endl;
    b1.readBook();

    cout << "\nEnter textbook details" << endl;
    t1.readTextbook();

    cout << "\nGeneral book details" << endl;
    b1.showBook();

    cout << "\nTextbook details" << endl;
    t1.showTextbook();

    return 0;
}
