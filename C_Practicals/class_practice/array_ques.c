#include <stdio.h>

int main()
{
    int array1[5];
    printf("Enter 5 numbers for array 1 = ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Array 1 as entered is = ");
    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("Address of array1[%d] = %p and value of array[%d] = %d\n", i, &array1[i], i, array1[i]);
    }

    printf("\nArray in reverse order: \n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\t", array1[i]);
    }

    return 0;
}