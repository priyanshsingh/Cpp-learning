#include <stdio.h>

void swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    printf("\nAfter swapping: a = %d and b = %d", a, b);
}

int main()
{
    int a, b;
    printf("\nEnter a and b to swap = ");
    scanf("%d %d", &a, &b);
    swap(a, b);
    printf("\nInside main after swapping: a = %d and b = %d", a, b);

    return 0;
}