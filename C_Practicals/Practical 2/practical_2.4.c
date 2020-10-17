#include <stdio.h>

int main()
{
    int month, day, x;
    printf("Enter month number whose last day is friday [1 - 12] = ");
    scanf("%d", &month);
    printf("\n");

    printf("Enter day whose week day is required [1 - 31] = ");
    scanf("%d", &day);
    printf("\n");

    int month_type = -1;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        month_type = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        month_type = 30;
    }
    else
    {
        month_type = 28;
    }
    int first_week_day = -1;
    if (month_type == 31)
    {
        first_week_day = 2;
    }
    else if (month_type == 30)
    {
        first_week_day = 3;
    }
    else
    {
        first_week_day = 5;
    }

    int ans = day % 7 + first_week_day;
    if (ans >= 7)
        ans = ans % 7;

    printf("\nIt's ");
    switch (ans)
    {
    case 0:
        printf("Sunday!");
        break;
    case 1:
        printf("Monday!");
        break;
    case 2:
        printf("Tuesday!");
        break;
    case 3:
        printf("Wednesday!");
        break;
    case 4:
        printf("Thursday!");
        break;
    case 5:
        printf("Friday!");
        break;
    case 6:
        printf("Saturday!");
        break;
    default:
        printf("ERROR!");
        break;
    }
    return 0;
}