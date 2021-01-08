#include <stdio.h>

int main()

{

    int n;
    int *ptr;

    printf("Number of elements to be entered = ");
    scanf("%d", &n);

    int array1[10];

    ptr = &array1[0];
    printf("\nEnter %d elements for the array: \n", n);

    int i;

    for (i = 0; i < n; i++, ptr++)
    {
        printf("Element number %d = ", i + 1);
        scanf("%d", ptr);
    }

    ptr = &array1[n - 1];
    printf("\nReversed Array: \n");

    for (i = n; i > 0; i--)
    {
        printf("%d. %d\n", i, *ptr);
        ptr--;
    }

    return 0;
}