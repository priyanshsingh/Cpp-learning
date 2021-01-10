#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, m, i;

    printf("\nEnter number of students entered first in the class = ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("\nEnter Roll numbers for %d students: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Enter number of students who came 5 minutes late = ");
    scanf("%d", &m);

    ptr = (int *)realloc(ptr, (n + m) * sizeof(int));
    printf("Enter Roll numbers for the new %d students: \n", m);

    for (i = n; i < n + m; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Roll number of all the students are: ");

    for (i = 0; i < (n + m); i++)
    {
        printf("\n%d", ptr[i]);
    }

    free(ptr);
    return 0;
}