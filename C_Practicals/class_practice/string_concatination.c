#include <stdio.h>

#include <string.h>

int main()

{

    char s1[20], s2[20];

    puts("Enter your string s1:");

    gets(s1); //hello

    puts("Enter your string s2:");

    gets(s2); //all

    strcat(s2, s1);

    puts(s2); //allhello
}