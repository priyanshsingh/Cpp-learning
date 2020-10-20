// Program 1:

#include <stdio.h>
#include <math.h>

int main()
{
    float p, q, girls, boys;

    printf("Enter ratio of girls/boys = ");
    scanf("%d%d", &p, &q);
    girls = (p * 100) / (p + q);

    printf("\nPercentage of girls = %0.2f", girls);
    boys = (q * 100) / (p + q);
    printf("\nPercentage of boys = %0.2f", boys);

    int n = girls + boys;

    printf("\n\nTotal Students in Class = %d", n);

    int no_of_girls = (p * n) / (p + q);
    int no_of_boys = (q * n) / (p + q);
    printf("\n\nNumber of boys = %d", no_of_boys);
    printf("\nNumber of girls = %d", no_of_girls);
    printf("\n");

    int diff = abs(no_of_boys - no_of_girls);

    if (boys >= 70)
    {
        printf("\nGender partiality in Education\n");
    }
    else if (girls >= 70)
    {
        printf("\nGirls dominating in Education\n");
    }
    else if (diff <= 5)
    {
        printf("\nEqual opportunities for both in Education\n");
    }
    else
    {
        printf("Hello %d", diff);
    }

    return 0;
}