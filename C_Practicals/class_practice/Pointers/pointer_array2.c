#include <stdio.h>

int main()
{
    int i;
    int a[5] = {1, 2, 3, 4, 5};
    int *p = &a[0];
    for (i = 0; i < 5; i++, p++)
    {
        printf("%d at %u\n ", *p, p);
    }
    return 0;
}