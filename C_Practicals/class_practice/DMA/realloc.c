#include <stdio.h>

#include <stdlib.h>

int main()

{

    int *ptr;

    int n, m, i;

    // Get the number of elements for the array

    printf("Enter size:");

    scanf("%d", &n); //5

    //printf("Enter number of elements: %d\n", n);

    // Dynamically allocate memory using calloc()

    ptr = (int *)calloc(n, sizeof(int)); //20 bytes

    // Check if the memory has been successfully

    // allocated by malloc or not

    if (ptr == NULL)
    {

        printf("Memory not allocated.\n");

        exit(0);
    }

    else
    {

        // Memory has been successfully allocated

        printf("Memory successfully allocated using calloc.\n");

        // Get the elements of the array

        for (i = 0; i < n; ++i)
        {

            scanf("%d", (ptr + i));
        }

        // Print the elements of the array

        printf("The elements of the array are: ");

        for (i = 0; i < n; ++i)
        {

            printf("%d, ", *(ptr + i));
        }

        printf("Enter new size:");

        scanf("%d", &m); //7

        // Dynamically re-allocate memory using realloc()

        ptr = realloc(ptr, m * sizeof(int)); //28bytes

        // Memory has been successfully allocated

        printf("Memory successfully re-allocated using realloc.\n");

        // Get the new elements of the array

        for (i = n; i < m; ++i)
        {

            scanf("%d", (ptr + i));
        }

        // Print the elements of the array

        printf("The elements of the array are: ");

        for (i = 0; i < m; ++i)
        {

            printf("%d, ", *(ptr + i));
        }

        free(ptr);
    }

    return 0;
}