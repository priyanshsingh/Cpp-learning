#include <stdio.h>

int main()
{
    int x;

    printf("Enter value of x = ");
    scanf("%d", &x);

    int *ptr;
    ptr = &x;

    printf("Address if integer x = %d is %d", x, ptr);

    return 0;
}