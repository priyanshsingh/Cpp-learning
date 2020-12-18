#include <stdio.h>

int solve(int a)
{
    if (a == 1)
    {
        return 1;
    }
    int m = a * solve(a - 1);
    return m;
}

int main()
{
    static int a;
    printf("\nInput Number = ");
    scanf("%d", &a);
    int s = solve(a);
    printf("Factorial is = ", s);

    return 0;
}