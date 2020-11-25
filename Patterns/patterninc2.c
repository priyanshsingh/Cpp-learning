#include <stdio.h>
int main()
{
    int i, j, r;
    char ch = 'A';
    printf("Enter row size:");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
}
