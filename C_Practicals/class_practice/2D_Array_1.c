#include <stdio.h>
int main()
{
    int a[3][3], i, j;
    printf("Enter Values for 5 x 10 matrix = ");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is: \n");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}