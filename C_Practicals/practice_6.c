#include <stdio.h>
int main()
{
    char x;
    printf("Enter character = ");
    scanf("%c", &x);

    if (x >= 'a' && x <= 'z')
    {
        printf("%c is an alphabet.", x);
    }

    else if (x >= 'A' && x <= 'Z')
    {
        printf("%c is an alphabet.", x);
    }
    else
    {
        printf("%c is not an alphabet", x);
    }

    return 0;
}