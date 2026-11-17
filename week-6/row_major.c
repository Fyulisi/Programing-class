#include <stdio.h>

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("Row-major traversal (row by row):\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    printf("\nMemory addresses (each int takes 4 bytes):\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            printf("matrix[%d][%d] = %d at address %p\n",
                   row, col, matrix[row][col], (void*)&matrix[row][col]);
        }
    }

    printf("\nObservation: Addresses increase row by row.\n");
    printf("Row 0 is stored completely, then row 1, then row 2.\n");
    printf("This is called ROW-MAJOR ORDER.\n");

    return 0;
}