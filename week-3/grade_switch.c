#include <stdio.h>
int main() {
char grade;


printf("Enter your grade (A, B, C, D, F): ");
scanf(" %c", &grade); // Note the space before %c to skip whitespace
switch (grade) {
case 'A':
case 'a':
printf("Excellent! 90-100%%\n"); // %% prints a literal %
break;
case 'B':
case 'b':
printf("Good! 80-89%%\n");
break;
case 'C':
case 'c':
printf("Satisfactory! 70-79%%\n");
break;
case 'D':
case 'd':
printf("Passing! 60-69%%\n");
break;
case 'F':
case 'f':
printf("Failing. Please retake.\n");
break;
default:
printf("Invalid grade entered!\n");
break;
}
return 0;
}