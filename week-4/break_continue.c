#include <stdio.h>

int main() {
    printf("Number filter: Skip multiples of 3, stop at 15\n");

    for (int i = 1; i <= 20; i++) {
        if (i == 15) {
            printf("Breaking at %d!\n", i);
            break;
        }

        if (i % 3 == 0) {
            continue;
        }

        printf("%d ", i);
    }

    printf("\n");

    return 0;
}