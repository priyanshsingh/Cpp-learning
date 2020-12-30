#include <stdio.h>

int main()

{

    int ***r, **q, *p, i = 8;

    p = &i;

    q = &p;

    r = &q;

    printf("%d, %d, %d\n", *p, **q, ***r);

    return 0;
}