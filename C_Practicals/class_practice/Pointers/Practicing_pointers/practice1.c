#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a = ");
    scanf("%d", &a);

    int *ptr = &a;

    printf("Address of a = %d or %d is %d.\n", a, *ptr, ptr);
    printf("What happens:\nIncrementing a = %d", ++ptr);

    return 0;
}