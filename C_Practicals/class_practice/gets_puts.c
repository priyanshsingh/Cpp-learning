#include <stdio.h>
int main()
{
    char name[20];

    printf("Enter your name through scanf = ");
    scanf("%s", name);
    printf("\nName is ");
    printf("%s", name);

    char name1[20];
    printf("\n\nEnter your name through gets = ");
    gets(name1);
    printf("\nName is ");
    puts(name1);

    return 0;
}