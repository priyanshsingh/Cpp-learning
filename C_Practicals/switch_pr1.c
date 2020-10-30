#include <stdio.h>

int main()
{
    int x;
    printf("Enter a Number = ");
    scanf("%d", &x);

    switch (x % 2)
    {
    case 0:
        printf("EVEN");
        break;
    case 1:
        printf("ODD");
        break;
    default:
        printf("Incorrect input");
        break;
    }
}