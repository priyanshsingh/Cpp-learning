#include <stdio.h>

int n = 1;

void rec(int n)
{
    printf("%d\t", n);
    n++;
    if (n <= 10)
        rec(n);
}

int main()
{
    rec(n);

    return 0;
}