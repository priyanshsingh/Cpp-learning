#include <stdio.h>

int main()
{
    int m = 5, n = 10;
    printf("Input: %d and %d", m, n);
    swap(&m, &n);
    printf("Output: %d and %d", m, n);

    double x = 5.6, y = 10.8;

    return 0;
}