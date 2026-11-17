#include <stdio.h>

int main() {
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    while (number <= 0) {
        printf("Invalid! Please enter a positive number: ");
        scanf("%d", &number);
    }

    printf("You entered: %d\n", number);

    return 0;
}