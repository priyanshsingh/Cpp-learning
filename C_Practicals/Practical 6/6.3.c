#include <stdio.h>
#include <string.h>

int main()
{
    int n, flag = 0;
    char name[30][20];
    char character;

    printf("How many names do you need to be entered = ");
    scanf("%d", &n);

    printf("Enter names of your friends: ");

    for (int i = 0; i <= n; i++)
    {
        gets(name[i]);
    }

    printf("Friends names are: ");

    for (int i = 0; i <= n; i++)
    {
        puts(name[i]);
    }

    printf("Enter a character to search the name with: ");
    scanf("%c", &character);

    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (name[i][0] == character)
        {
            flag = 1;
            break;
        }
    }

    if (flag != 0)
        printf("Name with first character %c is: %s", character, name[i]);
    else
        printf("Name not flag in array of given names");

    return 0;
}