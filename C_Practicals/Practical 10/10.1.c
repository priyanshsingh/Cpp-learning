#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n;
    printf("\nEnter number of characters for your string = \n");
    scanf("%d", &n);
    char *p = (char *)malloc(n * sizeof(char));

    if (p == NULL)
    {
        printf("MEMORY NOT ALLOCATED BY MALLOC");
        exit(0);
    }

    int i;

    puts("Enter the string: ");
    for (i = 0; i < n; i++)
    {
        scanf("%c", p + i);
    }

    *(p + i) = '\0';
    printf("Entered String = %s", p);
    fflush(stdin);
    printf("\nEnter Size for to be increased in the string = \n");
    scanf("%d", &n);

    p = (char *)realloc(p, n * sizeof(char));
    puts("\nEnter the new string: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%c", p + i);
    }

    *(p + i) = '\0';
    printf("New string is: \n%s", p);
    free(p);

    return 0;
}