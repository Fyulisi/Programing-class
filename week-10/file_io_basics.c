#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("numbers.txt", "r");

    if (inputFile == NULL) {
        printf("Error: Could not open numbers.txt for reading!\n");
        return 1;
    }

    int num;
    int sum = 0;

    printf("Reading numbers from file...\n");

    while (fscanf(inputFile, "%d", &num) != EOF) {
        printf("Read: %d\n", num);
        sum += num;
    }

    fclose(inputFile);

    printf("Total Sum: %d\n", sum);

    outputFile = fopen("sum.txt", "w");

    if (outputFile == NULL) {
        printf("Error: Could not create sum.txt for writing!\n");
        return 1;
    }

    fprintf(outputFile, "The total sum is: %d\n", sum);
    fprintf(outputFile, "Calculated automatically by the C program.\n");

    fclose(outputFile);

    printf("Result successfully saved to sum.txt!\n");

    return 0;
}