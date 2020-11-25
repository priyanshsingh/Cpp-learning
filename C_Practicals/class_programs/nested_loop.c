#include <stdio.h>
int main()
{

    int i, j;

    for (j = 2; j <= 10; j++)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", j, i, j * i);
        }
        printf("\n\n");
    }
}