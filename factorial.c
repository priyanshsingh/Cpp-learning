#include <stdio.h>

int main()
{
    int n;
    int x = 1;
    printf("Enter a number = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        x = x * i;
    }
    printf("Factorial of %d is %d", n, x);
    return 0;
}