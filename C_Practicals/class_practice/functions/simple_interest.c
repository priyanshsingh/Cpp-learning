#include <stdio.h>

float SimInt()
{
    int p, r, t;
    printf("Enter Principal, Rate and Time: ");
    scanf("%d %d %d", &p, &r, &t);
    return (p * r * t) / 100;
}

int main()
{
    float si = SimInt();
    printf("Interest is %0.2f", si);
    return 0;
}