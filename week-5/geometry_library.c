#include <stdio.h>

#define PI 3.14159

double areaOfCircle(double radius) {
    if (radius < 0) {
        printf("Error: Radius cannot be negative.\n");
        return 0.0;
    }

    return PI * radius * radius;
}

double areaOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        printf("Error: Length and width cannot be negative.\n");
        return 0.0;
    }

    return length * width;
}

double areaOfTriangle(double base, double height) {
    if (base < 0 || height < 0) {
        printf("Error: Base and height cannot be negative.\n");
        return 0.0;
    }

    return 0.5 * base * height;
}

void displayMenu() {
    printf("\n===== GEOMETRY CALCULATOR =====\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double radius, length, width, base, height, area;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter radius: ");
                scanf("%lf", &radius);
                area = areaOfCircle(radius);
                printf("Area of circle: %.2f\n", area);
                break;

            case 2:
                printf("Enter length: ");
                scanf("%lf", &length);
                printf("Enter width: ");
                scanf("%lf", &width);
                area = areaOfRectangle(length, width);
                printf("Area of rectangle: %.2f\n", area);
                break;

            case 3:
                printf("Enter base: ");
                scanf("%lf", &base);
                printf("Enter height: ");
                scanf("%lf", &height);
                area = areaOfTriangle(base, height);
                printf("Area of triangle: %.2f\n", area);
                break;

            case 4:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}