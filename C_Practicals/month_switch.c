#include <stdio.h>

int main()
{
    int x;
    printf("Enter a month number = ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:

    case 3:

    case 5:

    case 7:

    case 9:

    case 10:

    case 12:
        printf("31 DAYS");
        break;

    case 4:

    case 6:

    case 8:

    case 11:
        printf("30 DAYS");
        break;
    case 2:
        printf("28/29 DAYS");
        break;
    default:
        printf("Wrong input");
        break;
    }
    return 0;
}