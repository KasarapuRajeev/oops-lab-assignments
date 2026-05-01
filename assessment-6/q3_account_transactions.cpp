#include <iostream>
#include <string>

class Account {
    const long accountNumber;
    long transactionID;
    std::string transactionType;
    double balance;
    static long nextTransactionId;

public:
    Account(const long accountNumber, const double balance)
        : accountNumber(accountNumber) {
        this->balance = balance;
        this->transactionID = 0;
        this->transactionType = "No transaction";
    }

    long depositAmount(const long to, const long from, const double amount) {
        nextTransactionId++;
        this->transactionID = nextTransactionId;

        if (this->accountNumber == to) {
            this->balance += amount;
            this->transactionType = "Credited from " + std::to_string(from);
        } else if (this->accountNumber == from && this->balance >= amount) {
            this->balance -= amount;
            this->transactionType = "Debited to " + std::to_string(to);
        } else {
            this->transactionType = "Transaction failed";
        }

        return nextTransactionId;
    }

    long creditAmount(const long to, const long from, const double amount) {
        nextTransactionId++;
        this->transactionID = nextTransactionId;

        if (this->accountNumber == to) {
            this->balance += amount;
            this->transactionType = "Credited from " + std::to_string(from);
        } else if (this->accountNumber == from && this->balance >= amount) {
            this->balance -= amount;
            this->transactionType = "Debited to " + std::to_string(to);
        } else {
            this->transactionType = "Transaction failed";
        }

        return nextTransactionId;
    }

    void displayDetails() const {
        std::cout << "Account Number: " << this->accountNumber << std::endl;
        std::cout << "Balance: " << this->balance << std::endl;
        std::cout << "Transaction ID: " << this->transactionID << std::endl;
        std::cout << "Transaction Type: " << this->transactionType << std::endl;
    }
};

long Account::nextTransactionId = 1000;

int main() {
    Account accounts[5] = {
        Account(1001, 5000),
        Account(1002, 3000),
        Account(1003, 4500),
        Account(1004, 7000),
        Account(1005, 2500)
    };

    accounts[0].depositAmount(1002, 1001, 1000);
    accounts[1].depositAmount(1002, 1001, 1000);

    accounts[2].creditAmount(1004, 1003, 500);
    accounts[3].creditAmount(1004, 1003, 500);

    std::cout << "Account details after transactions" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "\nAccount " << i + 1 << std::endl;
        accounts[i].displayDetails();
    }

    return 0;
}
