#include <stdio.h>
int main()
{
    int n, p, q, m, r, x, y, ratio, num_girls, num_boys;
    printf(" enter total number of student: ");
    scanf("%d", &n);
    printf("enter the ratio p:q: ");
    scanf("%d %d", &p, &q);
    num_girls = (p * n) / (p + q);
    printf("\ntotal number of girls are : %d", num_girls);
    num_boys = (q * n) / (p + q);
    printf("\n total number of boys are : %d", num_boys);
    printf("\n Enter savita's position from top : ");
    scanf("%d", &r);
    printf("\n enter number of boys ahead of her : ");
    scanf("%d", &m);
    y = r - m;
    printf("\n number of girls ahead of her: %d", y);
    x = num_girls - y;
    printf("\n number of girls behind her: %d", x);
    return 0;
}