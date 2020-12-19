#include <stdio.h>

int n;
float x;

float average_ht(int age[], int n)
{
    int h[n], i;
    float avg, sum = 0.0;
    for (i = 0; i < n; i++)
    {
        if (age[i] == 16)
            h[i] = 168;

        else if (age[i] == 17)
            h[i] = 170;

        else if (age[i] == 18)
            h[i] = 172;

        else if (age[i] == 19)
            h[i] = 175;

        sum = sum + h[i];
        avg = sum / n;
    }
    return avg;
}

int main()
{
    printf("Enter number of students in class = ");
    scanf("%d", &n);

    int age[n];

    for (int i = 1; i <= n; i++)
    {
        printf("\nEnter age of Student no. %d = ", i);
        scanf("%d", &age[i - 1]);
    }

    printf("\n***************************************************\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nAge of Student no. %d is %d\n", i + 1, age[i]);
    }

    x = average_ht(age, n);
    printf("\n***************************************************\n");

    printf("\nAverage height of students of class is: %0.2f", x);

    return 0;
}