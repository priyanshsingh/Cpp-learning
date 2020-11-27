#include <stdio.h>
int main()
{
    int i, j, k = 1, r;
    printf("Enter row size:");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k++); //1 \n 2 3 \n
        }
        printf("\n");
    }
}