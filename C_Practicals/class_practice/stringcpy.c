#include <stdio.h>
#include <string.h>

int main()
{
    char s[20], t[20];
    printf("Enter the string = ");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = t[i];
    }
    puts(t);
    return 0;
}
