#include <stdio.h>

int factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorialRecursive(n - 1);
}

int factorialTailHelper(int n, int accumulator) {
    if (n <= 1) {
        return accumulator;
    }

    return factorialTailHelper(n - 1, n * accumulator);
}

int factorialTail(int n) {
    return factorialTailHelper(n, 1);
}

int main() {
    int num;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("\nUsing simple recursion:\n");
    printf(" %d! = %d\n", num, factorialRecursive(num));

    printf("\nUsing tail recursion:\n");
    printf(" %d! = %d\n", num, factorialTail(num));

    printf("\n--- Comparison ---\n");
    printf("Simple recursion: Clear, matches mathematical definition.\n");
    printf("Tail recursion: More efficient for large n (compiler optimization).\n");

    return 0;
}