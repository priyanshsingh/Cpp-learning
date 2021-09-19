#include <stdio.h>

int main()
{
    int var[3] = {10, 200, 100};
    int *ptr[3];

    for (int i = 0; i < 3; i++)
    {
        ptr[i] = &var[i];
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d is at %u\n", *ptr[i], ptr[i]);
    }
    return 0;
}