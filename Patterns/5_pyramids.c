#include <stdio.h>
int main()
{
    int i, j, k;
    for (int i = 0; i <= 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    printf("\n");

    int a = 97;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", a++);
        }
        printf("\n");
    }

    printf("\n");

    int r;
    char ch;
    printf("Enter row size:");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        ch = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch++);
        }
        printf("\n");
    }

    printf("\n");

    k = 1;
    printf("Enter row size:");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }

    printf("\n");

    int n, x, y;
    printf("Enter the number of rowsfor the pattern = ");
    scanf("%d", &n);
    for (int x = n; x >= 0; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            printf("*");
        }
        printf("\n");
    }
}