#include <stdio.h>

int main()
{
    int a = 1;
    while (a != -1)
    {
        printf("Enter number to check it = ");
        scanf("%d", &a);
        if (a != -1)
        {
            int b, x;

            int *ptr1 = &a;

            b = *ptr1 / 2;

            for (int i = 1; i <= b; i++)
            {
                if (*ptr1 % i == 0)
                {
                    x = i;
                }
            }

            if (x == 1)
            {
                printf("\n%d is a prime number!\n\n", *ptr1);
            }
            else
            {
                printf("\n%d is a composite!\n\n", *ptr1);
            }
        }
        else
        {
            printf("\nYou have entered -1\nPROGRAM TERMINATED!!!");
            break;
        }
    }

    return 0;
}
