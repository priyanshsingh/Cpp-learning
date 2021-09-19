#include <stdio.h>

int main()

{

    int a[3] = {1, 2, 3};

    int *p = a;

    printf("%p\t%p", p, a);

    return 0;
}