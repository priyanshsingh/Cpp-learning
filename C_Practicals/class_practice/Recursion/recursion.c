#include <stdio.h>

int rec(int n)
{
    if (n == 1)
        return 0;
    else
        return 1 + rec(n - 1);
}

int main()
{
    int n = 3;
    printf("%d", rec(n));

    return 0;
}