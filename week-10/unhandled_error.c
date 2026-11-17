#include <stdio.h>

int main() {
    FILE *myFile = fopen("missing_file.txt", "r");

    char data[100];

    printf("Attempting to read from missing file...\n");

    fscanf(myFile, "%s", data);

    printf("Data read: %s\n", data);

    fclose(myFile);

    return 0;
}