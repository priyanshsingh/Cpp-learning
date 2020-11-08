/*Practical 2.2 - Inside the CPU, mathematical operations like addition, subtraction, multiplication and division are done in bit-level.
To perform bit-level operations in C programming, bitwise operators are used.
Apply the knowledge you gained while learning bitwise operators.*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("\nEnter values of a and b = ");
    scanf("%d %d", &a, &b);

    printf("\n****************************\n", a, b);

    printf("1. a = %d, b = %d\n", a, b);

    printf("2. a & b = %d\n", a & b);

    printf("3. a | b = %d\n", a | b);

    printf("4. a ^ b = %d\n", a ^ b);

    printf("5. b << 1 = %d\n", b << 1);

    printf("6. b >> 1 = %d\n", b >> 1);

    printf("\n****************************\n", a, b);

    return 0;
}