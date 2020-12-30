#include <stdio.h>
int main()
{
    int *a, temp;
    int i, j, n;

    printf("Size of array = ");
    scanf("%d", &n);

    printf("Input %d number of elements to store in the array = \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Number: %d = ", i + 1);
        scanf("%d", a + i);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
            {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
    printf("\nThe elements in the array after sorting = \n");
    for (i = 0; i < n; i++)
    {
        printf("Number: %d = %d \n", i + 1, *(a + i));
    }
    printf("\n");

    return 0;
}
