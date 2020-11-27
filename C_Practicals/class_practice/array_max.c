#include <stdio.h>
int main()
{
    int a[5];
    int i, position;

    printf("Enter array elemets:");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]); //1 2 3 4 5
    }
    int max = a[0];

    for (i = 1; i <= 4; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            position = i;
        }
    }
    printf("Max element is %d and at %d position", max, position + 1);
}
