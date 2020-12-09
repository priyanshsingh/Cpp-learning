#include <stdio.h>

int main()
{
    int n, x, y, z, p, q, r;

    printf("Enter total money with Amba, Aambika and Ambalika = ");
    scanf("%d", &n);
    printf("\n");

    printf("Enter the ratio of initial money with Amba, Aambika and Ambalika = ");
    scanf("%d %d %d", &x, &y, &z);
    printf("\n");

    int a1 = (x * n) / (x + y + z);
    int a2 = (y * n) / (x + y + z);
    int a3 = (z * n) / (x + y + z);

    printf("Money with Amba = %d", a1);
    printf("\n");

    printf("Money with Ambika = %d", a2);
    printf("\n");

    printf("Money with Ambalika = %d", a3);
    printf("\n");

    printf("Enter the ratio of spent money by Amba, Aambika and Ambalika = ");
    scanf("%d %d %d", &p, &q, &r);
    printf("\n");

    int s1 = (p * n) / (p + q + r);
    int s2 = (q * n) / (p + q + r);
    int s3 = (r * n) / (p + q + r);

    printf("Ratio of money Amba spent = %d", s1);
    printf("\n");

    printf("Ratio of money Ambika spent = %d", s2);
    printf("\n");

    printf("Ratio of money Ambalika spent = %d", s3);
    printf("\n");

    printf("\n********************************************\n\n");

    int a = (a1 - s1);
    int b = (a2 - s2);
    int c = (a3 - s3);

    printf("Money left with Amba = %d", a);
    printf("\n");

    printf("Money left with Ambaika = %d", b);
    printf("\n");

    printf("Money left with Ambalika = %d", c);
    printf("\n");

    (a > b) ? (a > c) ? printf("Amba has the max amount left.") : printf("Ambalika has the max amount left.") : (b > c) ? printf("Ambaika has the max amount left.") : printf("Ambalika has the max amount left.");

    return 0;
}