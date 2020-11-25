#include <stdio.h>
int main()
{
    int fact = 1;
    for (int x = 2; x <= 10; x++)
    {
        printf("Factorial of %d: ", x);
        for (int y = x; y >= 1; y--)
        {
            fact *= y;
        }
        printf("%d\n", fact);
        fact = 1;
    }
}