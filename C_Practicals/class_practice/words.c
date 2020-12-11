#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    printf("Enter the string = ");
    gets(s);
    int l = 0;
    for (int i = 0; s[i] == ' '; i++)
    {
        l++;
    }
    printf("Number of words in the string = %d", l + 2);
    return 0;
}
