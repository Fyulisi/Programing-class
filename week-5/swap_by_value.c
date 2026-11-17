#include <stdio.h>

void swapByValue(int a, int b) {
    printf("Inside function - Before swap: a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("Inside function - After swap: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10;
    int y = 20;

    printf("Before calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    swapByValue(x, y);

    printf("After calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    printf("\nExplanation: The function received COPIES of x and y.\n");
    printf("Changes made inside the function do not affect the originals.\n");

    return 0;
}