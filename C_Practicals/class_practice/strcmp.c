#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    printf("Enter first string: ");
    gets(a);
    printf("\nEnter second string: ");
    gets(b);
    printf("\n%d\n", strcmp(a, b));

    if (strcmp(a, b) == 0)
        printf("\nStrings are equal\n");
    else
        printf("\nNot Equal\n");

    return 0;
}