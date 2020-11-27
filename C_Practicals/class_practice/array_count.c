#include <stdio.h>
int main()
{
    int a[10];
    int i;
    int countneg = 0, countpos = 0, zeros = 0;
    printf("Enter array elemets:");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i <= 9; i++)
    {
        if (a[i] < 0)
        {
            countneg = countneg + 1;
        }
        if (a[i] > 0)
        {
            countpos = countpos + 1;
        }
        if (a[i] == 0)
        {
            zeros = zeros + 1;
        }
    }

    printf("Positive elements = %d\nNegative elements = %d\nZeros are= %d", countpos, countneg, zeros);
}
