#include <stdio.h>
int main()
{
    int a[2][3], i, j, sum;
    printf("Enter Values for 2 x 3 matrix = ");

    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is: \n");

    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }
    printf("Sum is = %d", sum);
    return 0;
}