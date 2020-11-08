#include <stdio.h>
int main()

{
    int a, month, b;
    printf("\nEnter month number = ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12)
    {
        printf("\nEnter date number of the same month = ");
        scanf("%d", &a);
        b = a % 7;
    }
    else
        printf("\nInvalid month number");

    if (a >= 1 && a <= 31)
    {

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            if (b == 3)
                printf("Friday");
            if (b == 2)
                printf("Thursday");
            if (b == 1)
                printf("Wednesday");
            if (b == 0)
                printf("Tuesday");
            if (b == 6)
                printf("Monday");
            if (b == 5)
                printf("Sunday");
            if (b == 4)
                printf("Saturday");
        }

        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (b == 2)
                printf("Friday");
            if (b == 1)
                printf("Thursday");
            if (b == 0)
                printf("Wednesday");
            if (b == 6)
                printf("Tuesday");
            if (b == 5)
                printf("Monday");
            if (b == 4)
                printf("Sunday");
            if (b == 3)
                printf("Saturday");
        }
        else if (month == 2)
        {
            printf("for non leap year :- \n");
            if (b == 0)
                printf("Friday");
            if (b == 6)
                printf("Thursday");
            if (b == 5)
                printf("Wednesday");
            if (b == 4)
                printf("Tuesday");
            if (b == 3)
                printf("Monday");
            if (b == 2)
                printf("Sunday");
            if (b == 1)
                printf("Saturday");
        }
    }
    else
        printf("Invalid input");
    return 0;
}