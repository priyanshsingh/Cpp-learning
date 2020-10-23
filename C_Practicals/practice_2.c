/*1. find maximum between three numbers.

2.check whether a character is alphabet or not.

3. check whether a year is leap year or not.

4. input any alphabet and check whether it is vowel or consonant.

5. check whether a character is uppercase or lowercase alphabet.

6. input month number and print number of days in that month.*/

#include <stdio.h>

int main()
{

    int x, y, z;

    printf("Enter num1, num2, num3 = ");
    scanf("%d %d %d", &x, &y, &z);
    printf("\n");

    if (x > y)
    {
        if (x > z)
            printf("%d is greatest", x);
        else
            printf("%d is greatest", z);
    }
    else
    {
        if (y > z)
            printf("%d is greatest", y);
        else
            printf("%d is greatest", z);
    }

    return 0;
}