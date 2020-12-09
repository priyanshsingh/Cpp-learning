#include <stdio.h>
int main()
{
    char ch;
    printf("Input any character = ");
    scanf("%c", &ch);

    int y = (int)ch;
    printf("\nASCII value of the character %c is %d", ch, y);
    return 0;
}