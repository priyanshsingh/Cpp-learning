#include <stdio.h>

int main()

{

    float m;
    int n;
    int temp = 0;

    printf("Enter speed limit issued by the University = ");
    scanf("%f", &m);

    printf("Enter strength of class = ");
    scanf("%d", &n);

    float diatance[n], time[n];

    printf("Enter details of %d students", n);
    for (int i = 0; i < n; i++)
    {
        printf("\nDistance in kilometers for student number %d = ", i + 1);
        scanf("%f", &diatance[i]);

        printf("Time in hours = ");
        scanf("%f", &time[i]);
    }

    for (int i = 0; i < n; i++)
        if (m >= (diatance[i] / time[i]))
            temp++;
        else
            temp--;

    if (temp == n)
        printf("All students are following the guidelines issued.");
    else if (-1 * temp == m)
        printf("None of them is following the guidelines.");
    else
        printf("Some students are following the guideline.");

    return 0;
}