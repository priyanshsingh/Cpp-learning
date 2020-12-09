#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i;

    printf("Enter number of customers = ");
    scanf("%d", &n);

    float principal[n], time[n], r, intr = 0;

    printf("Annual Interest Rate = ");
    scanf("%f", &r);

    printf("\nData of Customers:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nCustomer number %d\n", i + 1);

        printf("Principal amount = ");
        scanf("%f", &principal[i]);

        printf("Time period = ");
        scanf("%f", &time[i]);
    }

    for (i = 0; i < n; i++)
    {
        intr += principal[i] * (pow((1 + (r / (100))), time[i]) - 1);
    }

    printf("\n\nEanrings of bank from the customers interests is = Rs.%0.2f", intr);
    return 0;
}