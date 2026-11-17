#include <stdio.h>
#include <string.h>

struct Shape {
    char color[20];
};

struct Circle {
    struct Shape base;
    double radius;
};

int main() {
    struct Circle myCircle;

    strcpy(myCircle.base.color, "Red");

    myCircle.radius = 5.0;

    printf("Circle Color (Inherited): %s\n", myCircle.base.color);
    printf("Circle Radius (Specific): %.2f\n", myCircle.radius);

    return 0;
}