#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int a[n], x;
    printf("Enter %d numbers for the array = ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = n - 5; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            x = a[j];
            a[j] = a[j - 1];
            a[j - 1] = x;
        }
    }

    printf("Updated arrangement of the given series = ");

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}