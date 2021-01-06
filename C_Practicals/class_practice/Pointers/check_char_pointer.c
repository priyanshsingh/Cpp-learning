#include <stdio.h>

int main()
{
    char a;
    char *p = &a;
    printf("Enter a character = ");
    scanf("%c", p);

    if (*p == 'a' || *p == 'e' || *p == 'o' || *p == 'i' || *p == 'u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Not a Vowel");
    }

    return 0;
}