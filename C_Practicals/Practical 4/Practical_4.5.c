#include <stdio.h>

int main()

{
    int m, n, d, i, temp, count = 0;

    printf("Enter Initial number = ");
    scanf("%d", &m);

    printf("Enter Ending number = ");
    scanf("%d", &n);

    printf("Enter digit you want to count : ");
    scanf("%d", &d);

    for (i = m; i <= n; i++)
    {
        temp = i;
        while (temp)
        {
            if (d == (temp % 10))
                count++;
            temp /= 10;
        }
    }

    printf("In the given series, repetition of %d is : %d times", d, count);
    return 0;
}