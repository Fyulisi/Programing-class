#include <stdio.h>
int main() {
int age;
int hasTicket; 
printf("Enter age: ");
scanf("%d", &age);


printf("Has ticket? (1 for yes, 0 for no): ");
scanf("%d", &hasTicket);
if (age >= 18) {
printf("Adult verified.\n");
if (hasTicket) {
printf("Welcome to the event!\n");
} else {
printf("Please purchase a ticket at the door.\n");
}
} else {
printf("Minor detected.\n");
if (age >= 12) {
printf("Teenager - needs guardian signature.\n");
} else {
printf("Child - must be accompanied by adult.\n");
}
}
return 0;
}