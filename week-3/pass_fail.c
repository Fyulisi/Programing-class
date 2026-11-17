#include <stdio.h>
int main() {
int score;
printf("Enter score: ");
scanf("%d", &score);

if (score >= 60) {
printf("You passed!\n");
} else {
printf("You failed. Try again!\n");
}

return 0;
}