#include <stdio.h>

int main()
{
    int n, p, q, g, b, l, m, c, d;
    printf("Enter total students = ");
    scanf("%d", &n);

    printf("Enter ratio of girls/boys = ");
    scanf("%d%d", &p, &q);
    g = (p * n) / (p + q);
    printf("\nTotal girls = %d", g);
    b = (q * n) / (p + q);
    printf("\nTotal boys = %d", b);

    printf("\nEnter her position from top = ");
    scanf("%d", &l);

    printf("\nEnter number of boys ahead: ");
    scanf("%d", &m);
    c = l - m;

    printf("\nNumber of girls ahead: %d", c);
    d = g - c;
    printf("\nNumber of girls behind : %d", d);

    return 0;
}