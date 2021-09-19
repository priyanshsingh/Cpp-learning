#include <stdio.h>

void min_max(int arr[], int n, int *min, int *max)
{
    *min = *max = arr[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int n;
    printf("Enter array size = ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter an array of %d elements: \n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element number %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n*************************************************\n");
    printf("\nPrinting the array of %d elements: ", n);

    for (int i = 0; i < n; i++)
    {
        printf("\nElement number %d = %d", i + 1, arr[i]);
    }

    int min, max;
    min_max(arr, n, &min, &max);

    printf("\n*************************************************\n");
    printf("\nLargest element of the entered array is %d\nSmallest element of the entered array is %d", max, min);
    printf("\n*************************************************\n");

    return 0;
}