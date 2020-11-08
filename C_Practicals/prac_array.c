#include <stdio.h>

int main()
{
    char a;

    printf("Will you enter mobile number (10 digits) or PNT (6 digits) ? {M / P} = ");
    scanf("%c", &a);

    if (a == 'M' || a == 'm')
    {
        int array1[10];
        printf("\nEnter Mobile Number = ");
        for (int i = 0; i < 10; i++)
        {
            scanf("%d", &array1[i]);
        }
    }
    else if (a == 'P' || a == 'p')
    {
        int array1[6];
        printf("\nEnter PNT Number = ");
    }
    else
    {
        printf("\nWrong Input !!!");
    }

    printf("\nEntered Mobile Number was = ");

    return 0;
}