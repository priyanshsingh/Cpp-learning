#include <stdio.h>
#include <math.h>

int main()
{
    float a, p, q, girls, boys;

	printf("Enter total students = ");
    scanf("%f", &a);

    printf("Enter ratio of girls/boys = ");
    scanf("%f%f", &p, &q);
    girls = (p * a) / (p + q);

    printf("\nPercentage of girls = %0.2f", girls);
    boys = (q * a) / (p + q);
    printf("\nPercentage of boys = %0.2f", boys);

    int per_boys = (boys * 100) / (boys + girls);
	int per_girls = (girls * 100) / (boys + girls);    
    
	printf("\n\nPercentage of boys = %d", per_boys);
    printf("\nPercentage of girls = %d", per_girls);
    printf("\n");

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
