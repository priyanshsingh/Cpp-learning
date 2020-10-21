#include <stdio.h>
#include <ctype.h>

int main()
{
    char x;
    printf("Enter alphabet = ");
    scanf("%s", &x);
    x = tolower(x);

    (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') ? printf("\nIts a vowel") : printf("\nIts a consonant");

    return 0;
}