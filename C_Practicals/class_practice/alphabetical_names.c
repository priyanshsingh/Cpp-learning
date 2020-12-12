#include <stdio.h>
#include <string.h>

int main()
{
    char name[5][20];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter name of student number %d: ", i + 1);
        gets(name[i]);
    }

    for (int i = 0, j = 0; i >= 0, j < 5; i++, j--)
    {
        if (strcmp(name[i], name[j]) > 0)
        {
            strcpy(name[i], name[j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nNames of students in Alphabetical order are: \n", i + 1);
        puts(name[i]);
    }

    return 0;
}