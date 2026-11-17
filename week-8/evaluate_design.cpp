#include <iostream>
using namespace std;

class BadBankAccount {
public:
    double balance;

    BadBankAccount() {
        balance = 0.0;
    }
};

class GoodBankAccount {
private:
    double balance;

public:
    GoodBankAccount() {
        balance = 0.0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    cout << "--- Testing BAD Design ---" << endl;

    BadBankAccount badAccount;
    badAccount.balance = -5000;
    cout << "Bad Account Balance: " << badAccount.balance << endl;

    cout << "\n--- Testing GOOD Design ---" << endl;

    GoodBankAccount goodAccount;

    goodAccount.deposit(1000);
    cout << "Good Account Balance: " << goodAccount.getBalance() << endl;

    return 0;
}