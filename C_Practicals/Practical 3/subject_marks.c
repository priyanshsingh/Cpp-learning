#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter a marks in 5 subjects out of 100 each = ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int per;
    per = (a + b + c + d + e) * 100 / 500;
    printf("\nPercentage is = %d", per);

    per = per / 10;
    switch (per)
    {
    case 10:
    case 9:
        printf("\nA+");
        break;
    case 8:
    case 7:
        printf("\nB");
        break;
    case 6:
        printf("\nC");
        break;
    case 5:
        printf("\nD");
        break;
    case 4:
        printf("\nE");
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        printf("\nFAIL");
        break;
    default:
        printf("\nIncorrect input!!!");
        break;
    }
}