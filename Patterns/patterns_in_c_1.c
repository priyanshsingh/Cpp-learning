#include <stdio.h>

int main()
{
    int i, j, a = 97;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", a++);
        }
        printf("\n");
    }
}