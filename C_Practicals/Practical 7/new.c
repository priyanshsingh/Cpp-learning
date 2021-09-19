#include <stdio.h>
int main()
{
    int a[5] = {5, 1, 2, 20, 25};
    int i, j, k;
    i = ++a[2];
    j = a[2]++;
    k = a[i--];
    printf("%d, %d, %d", i, j, k);
    return 0;
}
