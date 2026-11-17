#include <stdio.h>

int main() {
    // Declare and initialise variables
    int x = 10, y = 5;

    // Outer condition
    if (x > 0) {
        if (y > 0) {
            printf("Path A: Both positive\n");
        } else {
            printf("Path B: x positive, y non-positive\n");
        }
    } else {
        if (y > 0) {
            printf("Path C: x non-positive, y positive\n");
        } else {
            printf("Path D: Both non-positive\n");
        }
    }

    return 0;
}