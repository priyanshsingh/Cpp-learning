#include <stdio.h>

int main()
{
    int n, x;
    printf("Enter a number = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        x = x + i;
    }
    printf("Added natural numbers till %d is %d", n, x);
    return 0;
}