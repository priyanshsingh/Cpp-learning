#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    printf("Enter the string = ");
    gets(s);
    int l = 0;
    for (int i = 0; s[i] != 0; i++)
    {
        l++;
    }
    printf("Lenght of the string is = %d", l);
    return 0;
}
