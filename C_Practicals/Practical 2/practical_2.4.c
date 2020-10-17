#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter month whose last day is friday = ");
    scanf("%d", &m);
    printf("\n");

    printf("Enter number of day which you want = ");
    scanf("%d", &n);
    printf("\n");

    int y = m - n;
    if (y == 1 || 8 || 15 || 22 || 29)
    {
        printf("\nDay is Thursday");
    }
    if (y == 2 || 9 || 16 || 23 || 30)
    {
        printf("\nDay is Wednesday");
    }
    if (y == 3 || 10 || 17 || 24)
    {
        printf("\nDay is Tuesday");
    }
    if (y == 4 || 11 || 18 || 25)
    {
        printf("\nDay is Monday");
    }
    if (y == 5 || 12 || 19 || 26)
    {
        printf("\nDay is Sunday");
    }
    if (y == 6 || 13 || 20 || 27)
    {
        printf("\nDay is Saturday");
    }
    else
    {
        printf("\nDay is Friday");
    }

    return 0;
}