#include <stdio.h>

int main()
{

    int x;
    printf("Enter month number = ");
    scanf("%d", &x);
    printf("\n");

    if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
    {
        printf("%d has 31 days", x);
    }
    else if (x == 4 || x == 6 || x == 9 || x == 11)
    {
        printf("%d has 30 days", x);
    }
    else
    {
        printf("%d has 28 days", x);
    }
    return 0;
}