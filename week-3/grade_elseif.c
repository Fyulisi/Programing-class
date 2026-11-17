#include <stdio.h>
int main() {
int score;
char grade;
printf("Enter score (0-100): ");
scanf("%d", &score);
if (score >= 90) {
grade = 'A';
} else if (score >= 80) {
grade = 'B';
} else if (score >= 70) {
grade = 'C';
} else if (score >= 60) {
grade = 'D';
} else {
grade = 'F';
}

printf("Grade: %c\n", grade);
return 0;
}