#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("\nNO MEMORY ALLOCATED\n");
        exit(0);
    }
    else
    {
        printf("\nMEMORY SUCCESSFULLY ALLOCATED USING CALLOC\n");
        printf("\nEnter %d elements for the array:\n", n);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }

        printf("\nElements in the array are:\n");

        for (int i = 0; i < n; i++)
        {
            printf("%d\t", *(ptr + i));
        }
    }
    free(ptr);
    return 0;
}