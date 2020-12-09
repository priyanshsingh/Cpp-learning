#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter a Positive number for a = ");
    scanf("%d", &a);
    printf("Enter a Positive number for b = ");
    scanf("%d", &b);

    int c = 0;

    c = a & b;
    printf("Using & operator : %d\n", c);

    c = a | b;
    printf("Using | operator : %d\n", c);

    c = a ^ b;
    printf("Using XOR operator : %d\n", c);

    c = ~a;
    printf("Using Compliment operator : %d\n", c);

    c = a << 1;
    printf("Using Left Shift operator : %d\n", c);

    c = a >> 1;
    printf("Using Right Shift operator : %d\n", c);

    return 0;
}