#include <stdio.h>

void fun(int *p, int *q)
{
    *p = 11;
    *q = 22;
}

int main()
{
    int a = 10, b = 20;
    printf("a = %d\tb = %d", a, b);
    fun(&a, &b);
    printf("\na = %d\tb = %d", a, b);

    return 0;
}