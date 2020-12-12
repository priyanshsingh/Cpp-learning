#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[15];

    printf("Enter a string: ");
    gets(str);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]) == 0)
        {
            count++;
        }
    }
    printf("Count is = %d", count);
    if (count == strlen(str))
    {
        printf("\nEnter numeric digits also!");
    }
    return 0;
}