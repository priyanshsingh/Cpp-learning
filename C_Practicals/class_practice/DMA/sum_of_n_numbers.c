#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter positive number get sum upto = ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    int sum = 0;

    if (ptr == NULL)
    {
        printf("\nNO MEMORY ALLOCATED\n");
        exit(0);
    }
    else
    {
        printf("\nMEMORY SUCCESSFULLY ALLOCATED USING CALLOC\n");

        for (int i = 0; i < n; i++)
        {
            sum = sum + i;
        }
    }
    printf("Sum till %d = %d", n, sum);
    free(ptr);
    return 0;
}