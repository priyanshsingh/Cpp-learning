#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char num[1000];
    gets(num);
    int arr[10] = {0};
    for (int i = 0; i < strlen(num); i++)
    {
        if (isdigit(num[i]))
        {
            arr[(int)num[i] - 48]++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}