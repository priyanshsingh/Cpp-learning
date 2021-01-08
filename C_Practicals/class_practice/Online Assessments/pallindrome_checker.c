#include <stdio.h>
#include <string.h>

int main()

{

    char s[20], b[20];
    int i, l = 0, j, flag = 0;
    puts("Enter your string s:");
    gets(s); //aabbaa
    for (i = 0; s[i] != '\0'; i++)
    {
        l++;
    }

    for (i = l - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = s[i];
    }

    b[j] = '\0';
    puts("Reverse string is");
    puts(b);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != b[i])
        {
            flag = 1;
            printf("NOT PALINDROM");
            break;
        }
    }
    if (flag == 0)
        printf("PALINDROM");

    return 0;
}