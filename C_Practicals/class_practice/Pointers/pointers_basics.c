#include <stdio.h>

int main()

{

    int a = 5;

    int *p = &a;

    int **q = &p;

    printf("%d\n", a);

    printf("%d\n", *p);

    printf("%d\n", **q);

    printf("%u\n", *q);

    printf("%u\n", &a);

    printf("%u\n", p);
}