#include <stdio.h>
int main()
{
    int dis;
    float m, f, i, c;

    printf("Enter distance in kms = ");
    scanf("%d", &dis);

    m = dis * 1000;
    f = m * 3.28084;
    i = m * 39.3701;

    printf("Distance in meters is %0.2f, in feet  is %0.2f and in inches is %0.2f.", m, f, i);

    return 0;
}