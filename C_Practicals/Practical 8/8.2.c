#include <stdio.h>

int *maximum(int *x, int *y)
{
    if (*x > *y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int x, y;
    printf("\nEnter any two numbers = ");
    scanf("%d %d", &x, &y);

    int *ptr = NULL;
    ptr = maximum(&x, &y);

    printf("\nThe greater out of %d and %d is %d\n", x, y, *ptr);

    return 0;
}
