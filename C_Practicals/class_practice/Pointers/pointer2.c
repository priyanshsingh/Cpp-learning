#include <stdio.h>

int main()
{
    int x;

    printf("Enter value of x = ");
    scanf("%d", &x);

    int *ptr;
    ptr = &x;

    printf("Address if integer x = %d is %d", x, ptr);

    printf("\n\nChange the value of x using the pointer ptr: ");
    printf("\n**********************************************");

    printf("\nEnter new value of x = ");
    scanf("%d", &x);
    *ptr = x;

    printf("\nNew value of x = %d", *ptr);

    return 0;
}