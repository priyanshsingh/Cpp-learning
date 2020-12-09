#include <stdio.h>
int main()
{
    int a[5], p, j, i, t;
    printf("Enter array elemets:");
    for (i = 0; i <= 4; i++)
        scanf("%d", &a[i]);

    for (p = 1; p <= 4; p++) //pass
    {
        for (j = 0; j < 5 - p; j++) //0 1 2 3 ... pass=2   0 1 2  pass=3 0 1 pass=4 0
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("\n Sorted array elemets:\n");
    for (i = 0; i <= 4; i++)
        printf("%d\t", a[i]);
}