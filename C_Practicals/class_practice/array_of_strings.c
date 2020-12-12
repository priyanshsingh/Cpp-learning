#include <stdio.h>
#include <string.h>

int main()
{
    char name[5][20];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of student number %d: ", i + 1);
        gets(name[i]);
    }
    printf("Names are: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("\n\nName of student number %d: ", i + 1);
        puts(name[i]);
    }
    return 0;
}