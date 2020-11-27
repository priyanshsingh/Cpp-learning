#include <string.h>
#include <stdio.h>

int main()
{
    int days;
    printf("Enter the number of days of late return of the book: ");
    scanf("%d", &days);

    float fine = 0;
    if (days <= 5)
    {
        fine = 0.5;
    }
    else if (days >= 6 && days <= 10)
    {
        fine = 1;
    }
    else if (days > 10)
    {
        fine = 50;
    }
    printf("Fine is: Rs. %0.2f", fine);
    if (days > 30)
        printf("\nAnd your membership has been cancelled.");
    return 0;
}