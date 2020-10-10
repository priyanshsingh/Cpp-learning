#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    printf("Enter a number in integer format = ");
    scanf("%d", &x);
    printf("\nThe entered number is = %d", x);
    printf("\nThe entered number is = %2d", x);
    printf("\nThe entered number is = %3d", x);
    printf("\nThe entered number is = %4d", x);
    printf("\nThe entered number is = %5d", x); 
    return 0;
}