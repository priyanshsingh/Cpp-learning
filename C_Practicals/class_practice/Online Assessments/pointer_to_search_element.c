#include <stdio.h>

void check(int *x, int *y)
{
    int i, f = 0;

    for (i = 0; i < 5; i++)
    {
        if (*(x + i) == *y)
        {
            f = 1;
            break;
        }
        else
            continue;
    }

    if (f == 1)
        printf("Entered Number was Found.\n");

    else
        printf("Entered Number was Not found.\n");
}

int main()
{
    int a[5], n, i;
    int *pa, *pn;
    pa = &a[0], pn = &n;

    printf("Enter element to store in array : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", pa + i);
    }

    printf("Enter element to check: ");
    scanf("%d", pn);

    check(&a[0], pn);
    return 0;
}
