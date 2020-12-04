#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    printf("Enter first string: ");
    gets(a);
    printf("\nEnter second string: ");
    gets(b);

    if (strcmp(a, b) == 0)
        printf("Strings are equal");
    else
        printf("Not Equal");

    return 0;
}