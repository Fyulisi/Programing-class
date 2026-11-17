#include <stdio.h>

struct Shape {
    void (*draw)();
};

struct Circle {
    struct Shape base;
};

struct Rectangle {
    struct Shape base;
};

struct Triangle {
    struct Shape base;
};

void drawCircle() {
    printf("Drawing a Circle ◯\n");
}

void drawRectangle() {
    printf("Drawing a Rectangle ▭\n");
}

void drawTriangle() {
    printf("Drawing a Triangle △\n");
}

void renderCanvas(struct Shape* shapePtr) {
    shapePtr->draw();
}

int main() {
    struct Circle c1;
    c1.base.draw = drawCircle;

    struct Rectangle r1;
    r1.base.draw = drawRectangle;

    struct Triangle t1;
    t1.base.draw = drawTriangle;

    struct Circle c2;
    c2.base.draw = drawCircle;

    struct Shape* canvas[4];

    canvas[0] = (struct Shape*)&c1;
    canvas[1] = (struct Shape*)&r1;
    canvas[2] = (struct Shape*)&t1;
    canvas[3] = (struct Shape*)&c2;

    printf("--- Rendering Canvas ---\n");

    for (int i = 0; i < 4; i++) {
        renderCanvas(canvas[i]);
    }

    return 0;
}