#include <stdio.h>

int main()

{

    int n;
    printf("Enter no of goods = ");
    scanf("%d", &n);

    float price[n], x, y, p, sum = 0;

    printf("\nEnter price of %d goods : \n", n);

    for (int i = 0; i < n; i++)

    {
        printf("For item number %d = ", i + 1);
        scanf("%f", &price[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (price[j] < price[i])
            {
                price[j] += price[i];
                price[i] = price[j] - price[i];
                price[j] -= price[i];
            }
        }

        printf("\nLoss on the most expensive item = ");
        scanf("%f", &x);
        printf("\nGain on the cheapest item = ");
        scanf("%f", &y);
        if (n > 2)

        {
            printf("\nGain on rest of the goods items = ");
            scanf("%f", &p);
        }

        for (int i = 0; i < n; i++)
        {
            if (price[n - 1] == price[i])
                sum += (y * price[i]) / 100;
            else if (price[0] == price[i])
                sum -= (x * price[i]) / 100;
            else
                sum += (p * price[i]) / 100;
        }

        if (sum < 0)
            printf("\nRs. %.2f loss on goods", sum * -1);
        else if (sum > 0)
            printf("\nRs. %.2f gain on goods", sum);
        else
            printf("\nNeither gain nor loss on goods");

        return 0;
    }
}