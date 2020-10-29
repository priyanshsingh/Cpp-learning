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
    printf("Largest 6 digit integer is %ld", i);

    return 0;
}