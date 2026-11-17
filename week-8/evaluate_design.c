#include <stdio.h>

struct BadBankAccount {
    double balance;
};

struct GoodBankAccount {
    double balance;
};

void goodDeposit(struct GoodBankAccount *acc, double amount) {
    if (amount > 0) {
        acc->balance += amount;
    }
}

int main() {
    printf("--- Testing BAD Design ---\n");

    struct BadBankAccount badAccount;
    badAccount.balance = 100.0;

    badAccount.balance = -5000.00;
    printf("Bad Account Balance: %.2f\n", badAccount.balance);

    printf("\n--- Testing GOOD Design ---\n");

    struct GoodBankAccount goodAccount;
    goodAccount.balance = 100.0;

    goodDeposit(&goodAccount, 500.00);
    printf("Good Account Balance: %.2f\n", goodAccount.balance);

    return 0;
}