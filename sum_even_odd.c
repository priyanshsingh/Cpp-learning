#include <stdio.h>
int main()
{
    int n, i, odd = 0, even = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter a number %d: ", i);
        scanf("%d", &n);
        if (n % 2 == 0)
            even = even + n;
        else
            odd = odd + n;
    }
    printf("Sum of Odd numbers is = %d\n", odd);
    printf("Sum of Even numbers are = %d", even);
}