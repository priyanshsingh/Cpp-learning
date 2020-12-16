#include <stdio.h>

void vowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        printf("Vowel");
    else
        printf("Not vowel");
}

int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);

    vowel(x);

    return 0;
}