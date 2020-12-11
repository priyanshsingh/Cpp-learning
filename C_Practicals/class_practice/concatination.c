#include <stdio.h>
#include <string.h>

int main()
{
    char s[20], s1[20];
    printf("Enter the string 1 = ");
    gets(s);
    printf("Enter the string 2 = ");
    gets(s1);
    int l = 0, m = 0;
    for (int i = 0; s[i] != 0; i++)
    {
        l++;
    }
    for (int i = 0; s1[i] != 0; i++)
    {
        m++;
    }
    s[l] = ' ';
    printf("Lenght of the string 1 is = %d\n", l);
    printf("Lenght of the string 2 is = %d\n", m);

    int i, j;
    for (i = l + 1, j = 0; s1[j] != '\0'; i++, j++)
    {
        s[i] = s1[j];
    }
    s[i] = '\0';
    puts("\nAfter Concatination = ");
    puts(s);
    return 0;
}
