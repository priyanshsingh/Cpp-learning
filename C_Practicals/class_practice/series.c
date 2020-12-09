#include <stdio.h>

int main()
{
    int n;
    printf("Enter value of n = ");
    scanf("%d", &n);

    double add = 0;
    for (int i = 1; i <= n; i++)
    {
        int number = 1;
        for (int j = 2; j <= i; j++)
        {
            number *= j;
        }
        add = add + (1.0 / number);
    }
    printf("%lf", add);

    return 0;
}