#include <stdio.h>

void addOne(int *p, int *q)
{
    *p = *p + 1;
    *q = *q + 1;
}

int main()
{
    int a = 10, b = 20;
    printf("a = %d\tb = %d", a, b);
    addOne(&a, &b);
    printf("\na = %d\tb = %d", a, b);

    return 0;
}