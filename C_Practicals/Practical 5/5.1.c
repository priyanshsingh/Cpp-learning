#include <stdio.h>
#define n 5

int main()

{
    printf("Enter no of persons : ");
    int m;
    scanf("%d", &m);
    m = n;
    float amount[n], p, q, r;

    puts("Enter amount of each person...");

    for (int i = 0; i < n; i++)

    {

        printf("%d : ", i + 1);

        scanf("%f", &amount[i]);
    }

    for (r = 1; r <= amount[0]; r++)

        for (q = 1; q <= amount[0]; q++)

            for (p = 1; p <= amount[0]; p++)

                if ((r * 1 + q * 0.50 + p * 0.25) == amount[0])

                    goto A;

A:

    printf("Person 1 Rs 50 paise 25 paise\n");

    for (int i = 0; i < n; i++)

    {

        printf("%d %11.0f %7.0f %11.0f \n", i + 1, r * (amount[i] / amount[0]), q * (amount[i] / amount[0]), p * (amount[i] / amount[0]));
    }

    return 0;
}