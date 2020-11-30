#include <stdio.h>

int main()

{

    int n, p, i;

    printf("Enter total amount of things that are to be sold = ");
    scanf("%d", &n);
    printf("\n");

    float item[n];

    printf("Enter the cost of each product: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter amount of item number %d = ", i + 1);
        scanf("%f", &item[i - 1]);
    }

    float m, x, profit = 0, loss = 0, total;

    printf("\nEnter number of profiable items = ");
    scanf("%d", &p);

    printf("Enter the percentage of profit = ");
    scanf("%f", &m);

    printf("Items for loss are = %d", n - p);

    printf("\nEnter the percentage of loss in remaining item : ");
    scanf("%f", &x);

    for (i = 0; i < p; i++)
    {
        profit += (m * item[i]) / 100;
    }

    for (i = p; i < n; i++)
    {
        loss += (x * item[i]) / 100;
    }

    total = profit - loss;

    printf("\n------------------------------------------\n");

    if (total > 0)
        printf("Salesman gets Rs. %.2f profit", total);

    else if (total < 0)
        printf("Salesman gets Rs. %.2f loss", total * -1);

    else

        printf("Salesman got neither profit nor loss");

    return 0;
}