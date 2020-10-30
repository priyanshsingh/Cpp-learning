#include <stdio.h>
#include <math.h>

int main()
{
    int x, a;
    printf("\n1. Check whether number is even or odd .\n2. Check whether number is positive or negative .\n3. Print square of a number\n4. Print square root of a number\n");

    printf("Enter a choice between 1 - 4 = ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Enter a number = ");
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            printf("\nThe number is: EVEN");
        }
        else
        {
            printf("\nThe number is: ODD");
        }
        break;

    case 2:
        printf("Enter a number = ");
        scanf("%d", &a);

        if (a > 0)
        {
            printf("The number is: POSITIVE");
        }
        else if (a < 0)
        {
            printf("\nThe number is: NEGATIVE");
        }
        else
        {
            printf("\nThe number is: ZERO");
        }
        break;

    case 3:
        printf("Enter a number = ");
        scanf("%d", &a);

        printf("\nSquare of is = %d", a * a);
        break;

    case 4:
        printf("Enter a number = ");
        scanf("%d", &a);

        float m;
        m = sqrt(a);
        printf("\nSquare Root of %d is = %0.2f", a, m);
        break;

    default:
        printf("Input should be between 1 - 4");
        break;
    }
    return 0;
}