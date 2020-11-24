#include <iostream>
#include <string.h>
#include <stdio.h>
#define string_size 6
int main()
{
    int a;
    float b;
    char c;
    char d[string_size];

    printf("Enter String:");
    scanf("%[^\n]%*c", d);
    d[string_size - 1] = '\0';
    
    printf("Enter Integer:");
    scanf("%d", &a);
    
    printf("Enter Float:");
    scanf("%f", &b);
    
    printf("Enter a character:");
    scanf(" %c", &c);
    
    printf("\n=============\n");
    printf("%s\n", d);
    printf("%d \n%f \n%c", a, b, c);

    return 0;
}