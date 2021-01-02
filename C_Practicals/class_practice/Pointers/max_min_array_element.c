#include <stdio.h>

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

    
    return 0;
}