#include <stdio.h>

int add(int *a, int *b)
{
    int sum = *a + *b;
    return sum;
}

int main()
{
    int x, y;
    printf("Enter Values of x and y = ");
    scanf("%d %d", &x, &y);

    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;

    printf("Addition of %d and %d = %d", x, y, add(ptr1, ptr2));
    return 0;
}