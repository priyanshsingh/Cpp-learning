#include <stdio.h>

void factorial(int num, int *fact)
{
    int i;
    *fact = 1;
    for (i = 1; i <= num; i++)

    {
        *fact = *fact * i;
    }
}

int main()
{
    int i, fact, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial(num, &fact);
    printf("Factorial of %d is: %d", num, fact);

    return 0;
}
