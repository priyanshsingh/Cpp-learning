#include <stdio.h>

int main()
{
    char x;
    printf("Enter a char = ");
    scanf("%c", &x);

    switch (x)
    {
    case 'a':
        printf("A vowel");
        break;
    case 'o':
        printf("A vowel");
        break;
    case 'i':
        printf("A vowel");
        break;
    case 'e':
        printf("A vowel");
        break;
    case 'u':
        printf("A vowel");
        break;
    case 'A':
        printf("A vowel");
        break;
    case 'E':
        printf("A vowel");
        break;
    case 'I':
        printf("A vowel");
        break;
    case 'O':
        printf("A vowel");
        break;
    case 'U':
        printf("A vowel");
        break;
    default:
        printf("Consonant");
        break;
    }
}