#include <stdio.h>

int evenodd(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int x, y, z;
    printf("Enter number: ");
    scanf("%d", &x);
    int f = evenodd(x);
    if (f == 1)
        printf("Number is even");
    else
        printf("Number is odd");

    return 0;
}