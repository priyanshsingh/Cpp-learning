#include <stdio.h>

int sum(int x, int y, int z)
{
    int sum = x + y + z;
    return sum;
}

int main()
{
    int x, y, z;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Sum of three numbers is: %d", sum(x, y, z));

    return 0;
}