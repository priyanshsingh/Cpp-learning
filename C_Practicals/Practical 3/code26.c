#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int divisor_sum = 0;

    int temp = 1;

    while (temp < (n / 2) + 1)
    {
        if (n % temp == 0)
        {
            divisor_sum = divisor_sum + temp;
        }
        temp++;
    }
    if (divisor_sum == n)
    {
        printf("%d is a perfect number.", n);
    }
    else
    {
        printf("%d is not a perfect number.", n);
    }

    return 0;
}