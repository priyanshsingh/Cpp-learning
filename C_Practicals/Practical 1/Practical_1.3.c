#include <stdio.h>

int main()
{
    float v, t, x;
    printf("Distance travelled, both by car and train = ");
    scanf("%f", &x);
    printf("\n");

    printf("Time for which the train stopped in minutes = ");
    scanf("%f", &t);
    printf("\n");

    v = (x * 24) / 15;

    printf("Speed of the car is = %0.2f", v);
    printf("\n");

    return 0;
}