#include <stdio.h>

int main()
{

    char x;

    printf("Enter alphabet = ");
    scanf("%c", &x);
    printf("\n");

    if (x == 'a' || x == 'o' || x == 'i' || x == 'e' || x == 'u')
        printf("%c is a vowel", x);
    else
        printf("%c is consonant", x);

    return 0;
}