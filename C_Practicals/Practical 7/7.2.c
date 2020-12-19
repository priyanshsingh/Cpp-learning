#include <stdio.h>

int fact(int a)
{
    if (a <= 1)
        return 1;
    return a * fact(a - 1);
}

int main()
{
    int x;
    printf("Enter a positive number to find its factorial = ");
    scanf("%d", &x);
    printf("\nFactorial of %d is %d", x, fact(x));
    return 0;
}