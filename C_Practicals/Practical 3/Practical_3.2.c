// Practical 3.2: Write a menu driven program that allow the user to perform any one of the following operations based on the input given by user
// i       Check number is even or odd
// ii      Check number is positive or negative
// iii     Printing square of the number
// iv      Printing square root of the number (use math.h)

#include <stdio.h>
#include <math.h>

void evenodd(int a)
{
    if (a % 2 == 0)
    {
        printf("The number is: EVEN");
    }
    else
    {
        printf("The number is: ODD");
    }
    return;
}

void posneg(int a)
{
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
    return;
}

void square(int a)
{
    int sq = a * a;
    printf("\nSquare of %d is = %d", a, sq);
    return;
}

void root(int a)
{
    a = abs(a);
    float rt = sqrt(a);
    printf("\nSquare Root of %d is = %f", a, rt);
    return;
}

int main()
{
    int x;

    printf("Enter a Number x = ");
    scanf("%d", &x);
    printf("\n");

    int choice = 1;

    printf("\n1. Check whether number is even or odd .\n2. Check whether number is positive or negative .\n3. Print square of a number\n4. Print square root of a number\n");
    printf("Enter your choice 1/2/3/4 = ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        evenodd(x);
    }

    else if (choice == 2)
    {
        posneg(x);
    }

    else if (choice == 3)
    {
        square(x);
    }
    else
    {
        root(x);
    }

    return 0;
}
