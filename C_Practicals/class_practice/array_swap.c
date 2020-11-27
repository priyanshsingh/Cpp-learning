#include <stdio.h>
int main()
{
    int a[5];
    int i;
    int max, min, position, position1;
    printf("Enter array elemets:");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]); //1 2 3 4 5
    }
    max = a[0];
    min = a[0];

    for (i = 1; i <= 4; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            position = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            position1 = i;
        }
    }

    printf("Max element is %d at %d index", max, position);
    printf("\nMin element is %d at %d index", min, position1);

    a[position] = min;
    a[position1] = max;

    printf("\n\nFinal array after min max swapping:\n");
    for (i = 0; i <= 4; i++)
    {
        printf("%d\t", a[i]);
    }
}