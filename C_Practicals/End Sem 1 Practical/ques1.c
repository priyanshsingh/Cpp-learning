#include <stdio.h>

int answer(int n)
{
    int ones, end;
    end = n % 10;
    ones = n;

    while (n >= 10)
    {
        n = n / 10;
    }
    ones = n;

    int sum;
    sum = ones + end;
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