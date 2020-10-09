#include <stdio.h>

int main()
{
    int m, n, result;
    printf("Enter number of days taken by person 1 = ");
    scanf("%d", &m);

    printf("\n");

    printf("Enter number of days taken by person 2 = ");
    scanf("%d", &n);

    printf("\n");

    result = (m + n) / m * n;

    printf("Result is = %d", result);

    return 0;
}