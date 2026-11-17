#include <stdio.h>

struct Shape {
    double (*calculateArea)(void* derivedShape);
};

struct Square {
    struct Shape base;
    double side;
};

struct Circle {
    struct Shape base;
    double radius;
};

double squareArea(void* shapePtr) {
    struct Square* s = (struct Square*)shapePtr;
    return s->side * s->side;
}

double circleArea(void* shapePtr) {
    struct Circle* c = (struct Circle*)shapePtr;
    return 3.14159 * c->radius * c->radius;
}

int main() {
    struct Square sq;
    sq.side = 5.0;
    sq.base.calculateArea = squareArea;

    struct Circle circ;
    circ.radius = 3.0;
    circ.base.calculateArea = circleArea;

    printf("Area of Square: %.2f\n", sq.base.calculateArea(&sq));
    printf("Area of Circle: %.2f\n", circ.base.calculateArea(&circ));

    return 0;
}