//practical 3.4

#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter number of students in the train = ");
    scanf("%d", &n);
    printf("\n");

    printf("Enter number of students who pulled the chain = ");
    scanf("%d", &m);
    printf("\n");

    int per = (m * 100) / n;
    printf("%d %d %d", m, n, per);

    if (per >= 80)
    {
        printf("\nStrict action is required to restrict this event.");
    }

    else if (per >= 50 && per < 80)
    {
        printf("\nGuidelines should be issued");
    }

    else if (per >= 10 && per < 50)
    {
        printf("\nRequest to restrict this event.");
    }
    else
    {
        printf("\nNo action required.");
    }

    return 0;
}