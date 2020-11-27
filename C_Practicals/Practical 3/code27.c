#include <stdio.h>

int main()
{
    char d;
    int c;
    printf("Enter Character: ");
    scanf("%c", &d);
    c = (int)d;
    if (c >= 65 && c <= 90)
    {
        printf("It is a capital letter.");
    }
    else if (c >= 97 && c < 122)
    {
        printf("It is a small case letter");
    }
    else if (c >= 48 && c <= 57)
    {
        printf("It is a digit.");
    }
    else if ((c >= 0 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 127))
    {
        printf("It is a special symbol.");
    }

    return 0;
}