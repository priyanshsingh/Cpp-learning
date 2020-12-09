#include <stdio.h>
int main()
{
    float x;
    printf("Enter a float value = ");
    scanf("%f", &x);
    int y = (int)x;
    printf("Float value is = %f\nInteger value of same float, after type casting is = %d", x, y);
    return 0;
}