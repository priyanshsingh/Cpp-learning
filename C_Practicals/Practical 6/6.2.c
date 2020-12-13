#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    char string1[20];
    printf("Enter a string: \n");
    scanf("%[^\n]%*c", string1);

    len = strlen(string1);

    for (int i = 1; i <= len; i++)
    {
        for (int j = 0, k = 0; k != len; j++)
        {
            for (k = j; k < (j + i); k++)
            {
                printf("%c", string1[k]);
            }
            printf("\t");
        }
    }

    return 0;
}