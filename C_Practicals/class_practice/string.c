#include <stdio.h>
#include <string.h>

int main()
{
    char s[20], s1[20];
    printf("Enter the string = ");
    gets(s);
    int l = 0;
    int i = 0;
    for (i = 0; s[i] != 0; i++)
    {
        l++;
    }
    printf("Lenght of the string is = %d\n", l);
    int j;
    for (i = l - 1, j = 0; i >= 0; i--, j++)
    {
        s1[j] = s[i];
    }
    s1[j] = '\0';

    puts(s1);

    return 0;
}
