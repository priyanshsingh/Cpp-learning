#include <stdio.h>
int main()
{
    char string1[50];
    char *ptr;
    int vowels, consonant;
    printf("Input a string: ");
    fgets(string1, sizeof string1, stdin);

    ptr = string1;

    vowels = consonant = 0;
    while (*ptr != '\0')
    {
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            vowels++;
        else
            consonant++;
        ptr++;
    }

    printf("Number of vowels : %d\nNumber of consonants : %d\n", vowels, consonant - 1);
    return 0;
}
