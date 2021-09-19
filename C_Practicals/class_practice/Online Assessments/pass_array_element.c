#include <stdio.h>

int passFun(int arr[0])
{
    return arr[0];
}

int main()
{
    int n;
    printf("Enter number of elements for the array = ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Entered array elements are : ");
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d = %d", i + 1, arr[i]);
    }

    int check = passFun(arr[0], n);

    return 0;
}