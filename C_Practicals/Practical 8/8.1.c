//WAP to read an array of elements and print the same in the reverse order along with their addresses using pointer.

#include <stdio.h>

int main()
{
    int i;
    int arr1[10];
    printf("Enter 10 digits of your phone number = ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Phone number in same order is = ");

    for (i = 0; i < 10; i++)
    {
        printf("%d", arr1[i]);
    }

    int *ptr;
    for (int j = 9; j >= 0; j--)
    {
        ptr = &arr1[i];
        printf("%d", *ptr);
    }

    return 0;
}