#include <stdio.h>
int main()
{
    int a[10];
    int i, n, flag = 0;
    printf("Enter array elemets:");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to be checked =");
    scanf("%d", &n);

    for (i = 0; i <= 9; i++)
    {
        if (a[i] == n)
        {
            printf("The number %d found at %d index", n, i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The number %d was not found", n);
    }
    return 0;
}
