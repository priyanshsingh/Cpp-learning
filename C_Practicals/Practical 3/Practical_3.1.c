#include <stdio.h>
#include <math.h>

int main()
{
    float a, p, q, per_girls, per_boys;
    int girls, boys;

    printf("Enter total students = ");
    scanf("%f", &a);

    printf("Enter ratio of girls/boys = ");
    scanf("%f%f", &p, &q);
    girls = (p * a) / (p + q);

    printf("\nNumber of girls = %d", girls);
    boys = (q * a) / (p + q);
    printf("\nNumber of boys = %d\n", boys);

    per_boys = (boys * 100) / (boys + girls);
    per_girls = (girls * 100) / (boys + girls);

    printf("\nPercentage of girls = %0.2f", per_girls);
    printf("\nPercentage of boys = %0.2f", per_boys);
    printf("\n\n");

    int diff = abs(boys - girls);

    if (per_boys >= 70)
    {
        printf("\nGender partiality in Education\n");
    }
    else if (per_girls >= 70)
    {
        printf("\nGirls dominating in Education\n");
    }
    else if (diff <= 5)
    {
        printf("\nEqual opportunities for both in Education\n");
    }
    else
    {
        printf("No conclusion can be drawn.");
    }

    return 0;
}
