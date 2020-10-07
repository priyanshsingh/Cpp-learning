#include <stdio.h>

int main()
{
    int initial_side, cut_into;
    float new_side;

    printf("Enter length of side of painted cube = ");
    scanf("%d", &initial_side);
    printf("\n");

    printf("Enter new side of cube to be cut into = ");
    scanf("%d", &cut_into);
    printf("\n");

    new_side = initial_side / cut_into;
    float total_cubes = new_side * new_side * new_side;

    printf("Number of Smaller cubes formed = %0.2f", total_cubes);

    return 0;
}