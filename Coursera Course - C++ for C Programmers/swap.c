#include <stdio.h>

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void swap_double(int *i, int *j)
{
    double temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{
    int m = 5, n = 10;
    printf("Input: %d and %d", m, n);
    swap(&m, &n);
    printf("Output: %d and %d", m, n);

    double x = 5.6, y = 10.8;
    printf("Double Input: %lf and %lf", x, y);
    swap_double(&x, &y);
    printf("Double Output: %lf and %lf", m, n);
    return 0;
}