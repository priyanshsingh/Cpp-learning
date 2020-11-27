#include <stdio.h>
int main()
{
    int a[5];
    int i;
    int sum = 0;
    float avg;
    printf("Enter array elemets:");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]); //1 2 3 4 5
    }

    for (i = 0; i <= 4; i++)
    {
        sum = sum + a[i]; //15
    }
    avg = sum / 5.0;
    printf("avg is %0.2f", avg);
}
