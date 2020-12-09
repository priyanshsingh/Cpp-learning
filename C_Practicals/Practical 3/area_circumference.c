#include <stdio.h>

int main()
{

    int r;
    float circumference, area, PI = 3.14;

    printf("\nEnter radius of circle in integer: ");
    scanf("%d", &r);

    circumference = 2 * PI * r;
    printf("\nCircumference in inches is = %0.2f ", circumference);

    area = PI * r * r;
    printf("\nArea of circle in square inches is : %0.2f ", area);

    return (0);
}