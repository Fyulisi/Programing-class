#include <stdio.h>
int main() {
int choice;
printf("===== MAIN MENU =====\n");
printf("1. Start Game\n");
printf("2. Load Game\n");
printf("3. Settings\n");
printf("4. Credits\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Starting new game...\n");
break;
case 2:
printf("Loading game assets...\n");
printf("Game ready!\n");
break;
case 3:
printf("Opening settings...\n");
break;
case 4:
printf("Game developed by CS Students\n");
break;
case 5:
printf("Goodbye!\n");
break;
default:
printf("Invalid choice. Please try again.\n");
break;
}
return 0;
}