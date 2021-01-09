#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("\nNO MEMORY ALLOCATED\n");
        exit(0);
    }
    else
    {
        printf("\nMEMORY SUCCESSFULLY ALLOCATED USING MALLOC\n");
        printf("\nEnter %d Elements for the array:\n", n);

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

    return 0;
}