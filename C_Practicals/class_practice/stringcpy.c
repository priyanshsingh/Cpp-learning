#include <stdio.h>

#include <string.h>

int main()

{

    char s[20], b[20];

    int i;

    puts("Enter your string s:");

    gets(s); //hello\0

    for (i = 0; s[i] != '\0'; i++)

    {

        b[i] = s[i];
    }

    b[i] = '\0';

    puts(b);
}