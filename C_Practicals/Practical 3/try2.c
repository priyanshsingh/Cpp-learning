#include <stdio.h>

int main()
{

    char output[20];

    char name[10] = "Priyansh";
    int age = 18;

    puts("\nHere is a program to show the use of puts, scanf/printf and sscanf/sprintf functions!!!\n");

    printf("The name is : %s", name);
    printf("\n");
    printf("The age is : %d", age);
    printf("\n");

    sprintf(output, "%s %d", name, age);

    printf("\n");
    printf("After using sprintf : %s ", output);

    return 0;
}