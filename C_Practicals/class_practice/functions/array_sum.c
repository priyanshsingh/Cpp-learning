//passing array into function

#include <stdio.h>

int arraysum(int[], int);
int main()
{
    int a[5], i, s;
    printf("enter array elements:");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]); //10001 10005 10008 10012 10014
    s = arraysum(a, 5);     //&a[0] or a &a
    printf("sum= %d", s);
}
int arraysum(int p[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + p[i];
    }
    return sum;
}