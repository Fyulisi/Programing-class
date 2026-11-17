#include <stdio.h>

int main() {
    // Declare variables
    int height;
    int age;
    int hasAdult;
    int medicalClearance;
    int hasVipPass;

    // Prompt for each value
    printf("Enter height (in inches): ");
    scanf("%d", &height);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Has adult? (1/0): ");
    scanf("%d", &hasAdult);

    printf("Has medical clearance? (1/0): ");
    scanf("%d", &medicalClearance);

    printf("Has VIP pass? (1/0): ");
    scanf("%d", &hasVipPass);

    // Compute eligibility
    int canRide = (height >= 48) &&
                  (age >= 12 || hasAdult) &&
                  (age <= 65 || medicalClearance) ||
                  hasVipPass;

    // Check eligibility
    if (canRide) {
        printf("You can ride!\n");
    } else {
        printf("Sorry, you cannot ride.\n");
    }

    return 0;
}