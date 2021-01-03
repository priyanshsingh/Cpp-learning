#include <stdio.h>
#include <string.h>

struct
{
    char *engine;
    char *model;
    int seating;
    float mileage;
} car1, car2;

int main()
{
    car1.engine = "V8 16 Piston Engine";
    car2.engine = "V6 12 Piston Engine";

    car1.model = "Audi R8 Sports";
    car2.model = "BMW M1 2200d";

    car1.seating = 5;
    car2.seating = 7;

    car1.mileage = 12.54;
    car2.mileage = 10.12;

    printf("\nCar Model is: %s, with %s type. Seating Capacity is %d with %0.2f KMPL Mileage.\n", car1.model, car1.engine, car1.seating, car1.mileage);
    printf("\nCar Model is: %s, with %s type. Seating Capacity is %d with %0.2f KMPL Mileage.\n", car2.model, car2.engine, car2.seating, car2.mileage);

    return 0;
}