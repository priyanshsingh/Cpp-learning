#include <stdio.h>

int main()

{
    int m;
    printf("Enter number of persons = ");
    scanf("%d", &m);
    float amount[m], p, q, r;

    printf("Enter amount held by each person = \n");

    for (int i = 0; i < m; i++)
    {
        printf("%d : ", i + 1);
        scanf("%f", &amount[i]);
    }

    for (r = 1; r <= amount[0]; r++)
        for (q = 1; q <= amount[0]; q++)
            for (p = 1; p <= amount[0]; p++)
                if ((r * 1 + q * 0.50 + p * 0.25) == amount[0])
                    goto label;

label:
    printf("Person\tRs. 1\t50 Paise\t25 Paise\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d %11.0f %7.0f %11.0f \n", i + 1, r * (amount[i] / amount[0]), q * (amount[i] / amount[0]), p * (amount[i] / amount[0]));
    }

    return 0;
}