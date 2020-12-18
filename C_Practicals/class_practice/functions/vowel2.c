#include <stdio.h>

int vowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        return 1;
    else
        return 0;
}

int main()
{
    char x;
    int s;
    printf("Enter a character: ");
    scanf("%c", &x);

    s = vowel(x);
    if (s == 1)
        printf("Vowel");
    else
        printf("Not a Vowel");

    return 0;
}