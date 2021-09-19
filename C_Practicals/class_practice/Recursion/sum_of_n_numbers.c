#include <stdio.h>

int sum(int);

int main()

{

    int r, n;

    printf("enter n:");

    scanf("%d", &n);

    r = sum(n); //5

    printf("%d", r);
}

int sum(int n)

{

    if (n == 0)

        return 0;

    else

        return (n + sum(n - 1));
}