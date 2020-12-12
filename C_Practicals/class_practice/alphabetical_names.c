#include <stdio.h>
#include <string.h>

int main()
{
    char name[5][20];
    char temp[20];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter name of student number %d: ", i + 1);
        gets(name[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[i]);
                strcpy(name[i], temp);
            }
        }
    }

    printf("\n********************Names of students in Alphabetical order are: ********************\n");

    for (int i = 0; i < 5; i++)
    {
        puts(name[i]);
    }

    return 0;
}