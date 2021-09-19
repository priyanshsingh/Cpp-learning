#include <stdio.h>

int *getarray()
{
    static int r[10];
    int i;
    for (i = 0; i < 10; ++i)
    {
        scanf("%d", &r[i]);
    }
    return r;
}

int main()
{
    int *p;
    int i;
    p = getarray();

    for (i = 0; i < 10; i++)
    {
        printf("%d\t", *(p + i));
    }

    return 0;
}