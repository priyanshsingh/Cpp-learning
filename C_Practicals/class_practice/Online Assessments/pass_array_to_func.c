#include <stdio.h>
int check(int arr[], int length)
{
    int minimum = arr[0];
    int i = 0;
    for (i = 1; i < length; i++)
    {
        if (minimum > arr[i])
        {
            minimum = arr[i];
        }
    }
    return minimum;
}

int main()
{
    int i = 0, minimum = 0;
    int numbers[] = {4, 5, 7, 3, 8, 9};

    minimum = check(numbers, 6);
    printf("\nMinimum number is = %d \n", minimum);
    return 0;
}