#include <stdio.h>

int main()

{

    int a, b;

    int *p, *q;

    p = &a;

    q = &b;

    printf("Enter a:");

    scanf("%d", p);

    printf("Enter b:");

    scanf("%d", q);

    if (*p > *q)

        printf("%d is max", *p);

    else

        printf("%d is max", *q);
}