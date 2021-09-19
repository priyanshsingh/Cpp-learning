#include <stdio.h>

int answer(int n)
{
    int first, end;
    end = n % 10;
    first = n;

    while (n >= 10)
    {
        n = n / 10;
    }
    first = n;

    int sum;
    sum = first + end;
    return sum;
}

int main()
{
    int n;

    printf("Enter a number = ");
    scanf("%d", &n);

    printf("Sum of first and last digit = %d", answer(n));

    return 0;
}