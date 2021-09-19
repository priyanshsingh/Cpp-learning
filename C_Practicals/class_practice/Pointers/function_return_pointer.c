#include <stdio.h>

int *fun(void)
{
    static int a = 10;
    return &a;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = fun();
    printf("At %u = %d", ptr, *ptr);

    return 0;
}