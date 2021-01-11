#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter space to be allocated = ");
    scanf("%d", &x);

    int *ptr;
    ptr = (int *)malloc(x * sizeof(int));

    printf("\nMemory Allocation was successful!!!\n");
    printf("\nEnter elements for the allocated space = ");

    int i;
    for (int i = 0; i < x; i++)
    {
        scanf("%d", (ptr + i));
    }

    printf("\nElements in the array are = ");

    for (int i = 0; i < x; i++)
    {
        printf("\n%d", *(ptr + i));
    }

    return 0;
}