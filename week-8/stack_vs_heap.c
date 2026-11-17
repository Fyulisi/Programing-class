#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char model[20];
};

void initCar(struct Car *c, const char *modelName) {
    strcpy(c->model, modelName);
    printf("Car created: %s\n", c->model);
}

void destroyCar(struct Car *c) {
    printf("Car destroyed: %s\n", c->model);
}

int main() {
    printf("--- Creating Stack Object ---\n");

    struct Car stackCar;
    initCar(&stackCar, "Toyota");

    printf("\n--- Creating Heap Object ---\n");

    struct Car *heapCar = (struct Car*)malloc(sizeof(struct Car));

    if (heapCar != NULL) {
        initCar(heapCar, "Honda");
        printf("Heap car model: %s\n", heapCar->model);
    }

    printf("\n--- End of main function ---\n");

    if (heapCar != NULL) {
        destroyCar(heapCar);
        free(heapCar);
        heapCar = NULL;
    }

    return 0;
}