#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;

        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Warning: Initial balance cannot be negative. Set to 0." << endl;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited: $" << amount << endl;
        } else {
            cout << "Error: Deposit amount must be greater than 0." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Error: Withdrawal amount must be greater than 0." << endl;
            return;
        }

        if (amount > balance) {
            cout << "Error: Insufficient funds! Current balance is $" << balance << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrew: $" << amount << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    cout << "--- Opening Account ---" << endl;

    BankAccount aliceAccount("Alice Smith", 500.00);
    aliceAccount.displayBalance();

    cout << "\n--- Attempting Deposits ---" << endl;
    aliceAccount.deposit(200.00);
    aliceAccount.deposit(-50.00);

    cout << "\n--- Attempting Withdrawals ---" << endl;
    aliceAccount.withdraw(100.00);
    aliceAccount.withdraw(1000.00);
    aliceAccount.withdraw(-20.00);

    cout << "\n--- Final Account Status ---" << endl;
    aliceAccount.displayBalance();

    return 0;
}