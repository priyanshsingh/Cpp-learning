#include <iostream>
usin namespace std;

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void swap_double(double *i, double *j)
{
    double temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{
    int m = 5, n = 10;
    printf("\nInput: %d and %d", m, n);
    swap(&m, &n);
    printf("\nOutput: %d and %d", m, n);

    double x = 5.6, y = 10.8;
    printf("\n\nDouble Input: %0.2lf and %0.2lf", x, y);
    swap_double(&x, &y);
    printf("\nDouble Output: %0.2lf and %0.2lf\n", x, y);
    return 0;
}