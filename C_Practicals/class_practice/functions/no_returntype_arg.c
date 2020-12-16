#include <stdio.h>

void sum(int a, int b) //formal arguments
{
    int s = a + b;
    printf("Addition is : %d", s);
}

int main()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    sum(a, b); //actual arguments
    return 0;
}