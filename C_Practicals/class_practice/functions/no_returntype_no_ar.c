#include <stdio.h>

void sum()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("Addition is = %d", a + b);
}

int main()
{
    sum();

    return 0;
}