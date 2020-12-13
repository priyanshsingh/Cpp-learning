#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char name[30][20];

    printf("How many names do you need to be entered = ");
    scanf("%d", &n);

    printf("Enter names of your friends: ");

    for (int i = 0; i < n; i++)
    {
        gets(name[i]);
    }

    printf("Friends names are: ");

    for (int i = 0; i < n; i++)
    {
        puts(name[i]);
    }

    return 0;
}