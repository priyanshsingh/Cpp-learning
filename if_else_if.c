// C program --- Greater number finder using if-else-if statements.

#include <stdio.h>

int main()
{
    int i = 13;
    if (i > 10)
    {
        printf("Greater than 10");
    }
    if (i > 10 && i < 20)
    {
        printf("\nBetween 10 and 20");
    }
    else
    {
        printf("\nGreater than 20");
    }

    return 0;
}