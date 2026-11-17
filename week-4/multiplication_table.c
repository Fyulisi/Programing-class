#include <stdio.h>

int main() {
    printf("========================================\n");
    printf(" MULTIPLICATION TABLE (1 to 10)\n");
    printf("========================================\n\n");

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%5d", i * j);
        }

        printf("\n");
    }

    printf("========================================\n");

    return 0;
}