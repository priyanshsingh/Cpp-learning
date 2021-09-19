#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int x = n % 10;
    int y = n % 100;
    int z = n % 1000;
    int a = n % 10000;
    int b = n % 100000;

    printf("%d", x + ((y - x) / 10) + ((z - y) / 100) + ((a - z) / 1000) + ((b - a) / 10000));

    return 0;
}