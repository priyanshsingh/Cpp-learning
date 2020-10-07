#include <stdio.h>

int main()
{

    int x;
    char a;
    printf("Enter an ASCII character = ");
    scanf("%c", &a);

    x = a;

    if (x < 91)
    {
        a = a + 32;
        printf("ASCII Value is = %c", a);
    }
    else
    {
        a = a - 32;
        printf("ASCII Value is = %c", a);
    }

    return 0;
}