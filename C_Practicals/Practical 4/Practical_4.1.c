#include <stdio.h>

int main()
{
    int p;
    printf("Enter number to check divisibility with = ");
    scanf("%d", &p);
    long i = 999999;
    while (i % p != 0)
    {
        i--;
    }
    printf("\nLargest 6 digit integer is %ld", i);

    long j = 1000000;
    while (j % p != 0)
    {
        j++;
    }
    printf("\nSmallest 7 digit integer divisible by %d is %ld", p, j);

    return 0;
}