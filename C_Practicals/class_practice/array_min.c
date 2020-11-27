#include <stdio.h>
int main()
{
    int a[5];
    int i;
    int min, position;
    printf("Enter array elemets:");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]); //1 2 3 4 5
    }
    min = a[0];

    for (i = 1; i <= 4; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            position = i;
        }
    }
    printf("Min element is %d at %d index", min, position);
}