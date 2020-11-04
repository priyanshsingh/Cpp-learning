#include <stdio.h>
int main()
{
    int n, i, max_num = -9999;
    for (i = 1; i <= 8; i++)
    {
        printf("Enter a number %d: ", i);
        scanf("%d", &n);
        if (n > max_num)
            max_num = n;
        else
        {
        }
    }
    printf("Max of 8 numbers is %d\n", max_num);
}