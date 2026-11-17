#include <stdio.h>
int main() {
int age;
int hasParentalConsent; // 1 = yes, 0 = no
int isWeekend; // 1 = yes, 0 = no
printf("Enter age: ");
scanf("%d", &age);
printf("Has parental consent? (1 for yes, 0 for no): ");
scanf("%d", &hasParentalConsent);
printf("Is it weekend? (1 for yes, 0 for no): ");
scanf("%d", &isWeekend);


int canWatchMovie = (age >= 18) ||
(age >= 13 && hasParentalConsent) ||
(isWeekend && age >= 10);
if (canWatchMovie) {
printf("You can watch the movie!\n");
} else {
printf("Sorry, you cannot watch this movie.\n");
}
int eligibleForDiscount = (age >= 65) ||
(age <= 12) ||
(isWeekend && age <= 18);
if (eligibleForDiscount) {
printf("You qualify for a discount!\n");
}
return 0;
}