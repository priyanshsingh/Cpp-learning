#include <stdio.h>

int main()
{
    int arr[2][2] = {1, 2, 3, 4};
    int *ptr = &arr[0][0];

    for (int i = 0; i < 4; i++)
    {
        printf("%d", *(ptr + i));
    }

    return 0;
}