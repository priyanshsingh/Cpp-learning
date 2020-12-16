#include <stdio.h>

int sum()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

int main()
{
    int s = sum();
    printf("Addition is %d", s);
    return 0;
}