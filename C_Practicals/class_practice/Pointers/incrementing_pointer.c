#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;
    printf("\n%d", p);
    printf("\n%d", p++);
    printf("\n%d", *p);
    printf("\n%d", a);
    printf("\n%d", &a);

    return 0;
}