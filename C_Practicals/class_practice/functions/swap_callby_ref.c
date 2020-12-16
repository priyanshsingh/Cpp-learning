#include <stdio.h>

void swap(int *p, int *q)
{
    int c = *p;
    *p = *q;
    *q = c;
    printf("\nAfter swapping: a = %d and b = %d", *p, *q);
}

int main()
{
    int a, b;
    printf("\nEnter a and b to swap = ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("\nInside main after swapping: a = %d and b = %d", a, b);

    return 0;
}