#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int m1, m2;
    if (a > b)
        m1 = a;
    else
        m1 = b;
    if (c > d)
        m2 = c;
    else
        m2 = d;
    if (m1 > m2)
        return m1;
    else
        return m2;
}

int main()
{
    int a, b, c, d;
    printf("Enter 4 numbers = ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("Largest out of the 4 is = %d", max_of_four(a, b, c, d));

    return 0;
}