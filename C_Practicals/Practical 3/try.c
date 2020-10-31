#include <stdio.h>

int main()

{

    int a;
    int x = 0;
    printf("Enter number till which you want the addition = ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        x = x + i;
    }
    printf("Addition is = %d", x);
    return 0;
}