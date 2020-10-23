#include <stdio.h>
int main()
{
    char x;
    printf("Enter character = ");
    scanf("%c", &x);

    if (x >= 'a' && x <= 'z')
    {
        printf("%c is lowercase.", x);
    }

    else if (x >= 'A' && x <= 'Z')
    {
        printf("%c is uppercase.", x);
    }
    else
    {
        printf("%c is not an alphabet", x);
    }

    return 0;
}