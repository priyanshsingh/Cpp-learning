#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(10 * sizeof(int));
    printf("Pointer star = %u", *ptr);

    free(ptr);

    return 0;
}